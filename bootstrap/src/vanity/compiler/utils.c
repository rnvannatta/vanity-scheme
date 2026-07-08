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

VEnv * _V60_V0vanity_V0compiler_V0utils;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D567 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D566 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D565 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static VPair _V10_Dpair_D564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vanity__scheme__0_D0;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0vanity__scheme__0_D0 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "vanity-scheme-0.0" };
VWEAK VWORD _V0vanity__scheme;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vanity__scheme = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vanity-scheme" };
VWEAK VWORD _V0ieee__float;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0ieee__float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "ieee-float" };
VWEAK VWORD _V0r7rs;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0r7rs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "r7rs" };
static VPair _V10_Dpair_D560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D559 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D558 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "mingw64/bin/gcc.exe" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A/../~A" };
static VPair _V10_Dpair_D555 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D554 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D553 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D552 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D551 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D550 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D549 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D548 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D547 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static VPair _V10_Dpair_D546 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D545 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D539 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0port;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "port" };
static VPair _V10_Dpair_D531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0path;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "path" };
static VPair _V10_Dpair_D521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D99;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D99 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.99" };
static VPair _V10_Dpair_D514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "/" };
static VPair _V10_Dpair_D507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0fd;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0fd = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "fd" };
static VPair _V10_Dpair_D501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D94;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D94 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.94" };
static VPair _V10_Dpair_D483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0file;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "file" };
static VPair _V10_Dpair_D477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vsc: compiler-warning: ~A:" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static VPair _V10_Dpair_D465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0irr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0irr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "irr" };
static VPair _V10_Dpair_D454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0irritants;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0irritants = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "irritants" };
VWEAK VWORD _V0msg;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0msg = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "msg" };
static VPair _V10_Dpair_D434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D429 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0p;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0p = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "p" };
static VPair _V10_Dpair_D415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40_V10vcore_Dgensym;
VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
static VPair _V10_Dpair_D411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lst;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0lst = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "lst" };
static VPair _V10_Dpair_D406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D2_D80;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10_Dfinalize_D2_D80 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##.finalize.2.80" };
static VPair _V10_Dpair_D389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D1;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0loop_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "loop.1" };
static VPair _V10_Dpair_D384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D1_D81;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10_Dloop_D1_D81 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##.loop.1.81" };
static VPair _V10_Dpair_D378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0y_D10;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0y_D10 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "y.10" };
static VPair _V10_Dpair_D374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D2;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0finalize_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "finalize.2" };
static VPair _V10_Dpair_D371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D13_D73;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10_Dfinalize_D13_D73 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##.finalize.13.73" };
static VPair _V10_Dpair_D358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D12;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0loop_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "loop.12" };
static VPair _V10_Dpair_D353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D12_D74;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10_Dloop_D12_D74 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##.loop.12.74" };
static VPair _V10_Dpair_D345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D13;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0finalize_D13 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "finalize.13" };
static VPair _V10_Dpair_D339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0chr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0chr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "chr" };
static VPair _V10_Dpair_D333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D314 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "##." };
static VPair _V10_Dpair_D313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0str;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0str = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "str" };
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
static VPair _V10_Dpair_D281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V0resolve__file__path;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0resolve__file__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "resolve-file-path" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0feature__list;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "feature-list" };
VWEAK VWORD _V0set__feature__list_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0set__feature__list_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "set-feature-list!" };
VWEAK VWORD _V0get__feature__list;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0get__feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "get-feature-list" };
VWEAK VWORD _V0strchr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0strchr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "strchr" };
VWEAK VWORD _V0strrchr;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0strrchr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "strrchr" };
static VPair _V10_Dpair_D280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0sym;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0sym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "sym" };
static VPair _V10_Dpair_D276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ungensym;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0ungensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "ungensym" };
VWEAK VWORD _V0utils;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0utils = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "utils" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
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
static VPair _V10_Dpair_D261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
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
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D241 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0read__all, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0filter, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0get__feature__list, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strchr, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strrchr, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0ungensym, _var0, _var1);
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.191) ((##vcore.blob=? (bruijn ##.%x.111 1 0) (##string ##.string.314))) ((bruijn ##.%k.110 2 0) (bruijn ##.%r.191 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VBlobEqv2(runtime, NULL,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D314.sym, VPOINTER_OTHER));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.190 1 1) (##vcore.substring (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6) (bruijn ##.str.68 2 0) 0 3) ((bruijn ##.%k.110 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6, self)))),
      statics->up->vars[0],
      VEncodeInt(0l),
      VEncodeInt(3l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.%k.106 6 0) (bruijn ##.%x.108 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      VGetArg(statics, 6-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.i.70 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10) (bruijn ##.str.69 1 0) 0 (bruijn ##.i.70 0 0)) ((bruijn ##.%k.106 5 0) (bruijn ##.sym.67 5 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler utils strrchr) #t (bruijn ##.strrchr.54 5 1) (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9) (bruijn ##.str.69 0 0) #\.)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeChar('.');
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0strrchr(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.107 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8) (bruijn ##.str.68 2 0) 3) ((bruijn ##.%k.106 3 0) (bruijn ##.sym.67 3 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8, self)))),
      statics->up->vars[0],
      VEncodeInt(3l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.189 ##.%p.190) ((##vcore.string-length (bruijn ##.str.68 1 0)) (##vcore.> (bruijn ##.%x.189 0 0) 3)) ((close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5) (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpGt(runtime, NULL,
      self->vars[0],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0ungensym" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4) (bruijn ##.sym.67 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.192) ((##vcore.>= (bruijn ##.i.75 1 1) 0)) (if (bruijn ##.%p.192 0 0) (basic-block 2 2 (##.%x.193 ##.p.21.194) ((##vcore.string-ref (bruijn ##.str.71 5 1) (bruijn ##.i.75 2 1)) (##vcore.eq? (bruijn ##.%x.193 0 0) (bruijn ##.chr.72 5 2))) (if (bruijn ##.p.21.194 0 1) ((bruijn ##.%k.115 2 0) (bruijn ##.i.75 2 1)) (basic-block 1 1 (##.%x.195) ((##vcore.- (bruijn ##.i.75 3 1) 1)) (##qualified-call (vanity compiler utils strrchr ##.loop.12.74) #f (bruijn ##.loop.12.74 4 0) (bruijn ##.%k.115 3 0) (bruijn ##.%x.195 0 0))))) (##qualified-call (vanity compiler utils strrchr ##.finalize.13.73) #f (bruijn ##.finalize.13.73 3 0) (bruijn ##.%k.115 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 5-1, 2));
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
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
       _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
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
       _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74")) (basic-block 2 2 (##.%x.196 ##.%x.197) ((##vcore.string-length (bruijn ##.str.71 3 1)) (##vcore.- (bruijn ##.%x.196 0 0) 1)) (##qualified-call (vanity compiler utils strrchr ##.loop.12.74) #f (bruijn ##.loop.12.74 1 0) (bruijn ##.%k.113 3 0) (bruijn ##.%x.197 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.114 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strrchr" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strrchr, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3) (close "_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.199) ((##vcore.< (bruijn ##.i.82 1 1) (bruijn ##.y.10.198 4 0))) (if (bruijn ##.%p.199 0 0) (basic-block 2 2 (##.%x.200 ##.p.11.201) ((##vcore.string-ref (bruijn ##.str.77 6 1) (bruijn ##.i.82 2 1)) (##vcore.eq? (bruijn ##.%x.200 0 0) (bruijn ##.chr.78 6 2))) (if (bruijn ##.p.11.201 0 1) ((bruijn ##.%k.123 2 0) (bruijn ##.i.82 2 1)) (basic-block 1 1 (##.%x.202) ((##vcore.+ (bruijn ##.i.82 3 1) 1)) (##qualified-call (vanity compiler utils strchr ##.loop.1.81) #f (bruijn ##.loop.1.81 4 0) (bruijn ##.%k.123 3 0) (bruijn ##.%x.202 0 0))))) (##qualified-call (vanity compiler utils strchr ##.finalize.2.80) #f (bruijn ##.finalize.2.80 3 0) (bruijn ##.%k.123 1 0))))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 6-1, 2));
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
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
       _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
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
       _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81")) (##qualified-call (vanity compiler utils strchr ##.loop.1.81) #f (bruijn ##.loop.1.81 0 0) (bruijn ##.%k.121 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.122 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0strchr" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strchr, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.y.10.198) ((##vcore.string-length (bruijn ##.str.77 1 1))) ((close _V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4) (close "_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0get__feature__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0get__feature__list" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0get__feature__list, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.127 0 0) (bruijn ##.feature-list.58 1 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[5]);
}
void _V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (set! (bruijn ##.%k.128 0 0) (bruijn ##.feature-list.58 1 5) (bruijn ##.lst.84 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(1l), VEncodeInt(5l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0utils_V0filter_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0filter_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.207) ((##vcore.cons (bruijn ##.%x.205 2 0) (bruijn ##.%x.133 1 0))) ((bruijn ##.%k.129 6 0) (bruijn ##.%r.207 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0filter_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0filter_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.131 0 0) (basic-block 2 2 (##.%x.205 ##.%x.206) ((##vcore.car (bruijn ##.lst.86 4 2)) (##vcore.cdr (bruijn ##.lst.86 4 2))) (##qualified-call (vanity compiler utils filter) #t (bruijn ##.filter.61 5 8) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k12) (bruijn ##.p.85 4 1) (bruijn ##.%x.206 0 1))) (basic-block 1 1 (##.%x.208) ((##vcore.cdr (bruijn ##.lst.86 4 2))) (##qualified-call (vanity compiler utils filter) #t (bruijn ##.filter.61 5 8) (bruijn ##.%k.129 4 0) (bruijn ##.p.85 4 1) (bruijn ##.%x.208 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k12, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0utils_V0filter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0filter" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.203) ((##vcore.null? (bruijn ##.lst.86 1 2))) (if (bruijn ##.%p.203 0 0) ((bruijn ##.%k.129 1 0) '()) (basic-block 1 1 (##.%x.204) ((##vcore.car (bruijn ##.lst.86 2 2))) ((bruijn ##.p.85 2 1) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k11) (bruijn ##.%x.204 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k11, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.22 4 0) (bruijn ##.%k.137 2 0) (bruijn ##.%x.138 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.23 3 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.write.25 6 3) (bruijn ##.%k.139 2 0) (bruijn ##.irr.89 2 1) (bruijn ##.%x.140 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.23 5 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.24 5 2) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k18) (##string ##.string.466) (bruijn ##.%x.141 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k18, self)))),
      VEncodePointer(&_V10_Dstring_D466.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-error-port.23 4 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17, self)))));
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k14(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.26 3 4) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k15) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5) (bruijn ##.irritants.88 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.27 3 5) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k14) (bruijn ##.%x.142 0 0) (##string ##.string.467) (bruijn ##.msg.87 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k14, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D467.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.current-error-port.23 2 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.143 1 0) (bruijn ##.%x.144 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__error(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__error" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__error, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (##vcore.record (close _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20) #f 'compiler-error (bruijn ##.msg.90 0 1) (bruijn ##.irritants.91 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20, self)))),
      VEncodeBool(false),
      _V0compiler__error,
      _var1,
      _varargs);
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.fd.96 0 0) ((bruijn ##.%k.146 4 0) (bruijn ##.fd.96 0 0)) (basic-block 1 1 (##.%x.211) ((##vcore.cdr (bruijn ##.paths.95 5 1))) (##qualified-call (vanity compiler utils search-open-input-file ##.loop.94) #f (bruijn ##.loop.94 6 0) (bruijn ##.%k.146 5 0) (bruijn ##.%x.211 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.open-input-file.28 7 6) (close _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22) (bruijn ##.%x.149 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.209) ((##vcore.null? (bruijn ##.paths.95 1 1))) (if (bruijn ##.%p.209 0 0) ((bruijn ##.%k.146 1 0) #f) (basic-block 1 1 (##.%x.210) ((##vcore.car (bruijn ##.paths.95 2 1))) ((bruijn ##.string-append.29 6 7) (close _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21) (bruijn ##.%x.210 0 0) (##string ##.string.508) (bruijn ##.file.92 4 1)))))
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
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D508.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94")) (##qualified-call (vanity compiler utils search-open-input-file ##.loop.94) #f (bruijn ##.loop.94 0 0) (bruijn ##.%k.145 1 0) (bruijn ##.paths.93 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.154 0 0) ((bruijn ##.%k.152 4 0) (bruijn ##.path.101 1 0)) (basic-block 1 1 (##.%x.214) ((##vcore.cdr (bruijn ##.paths.100 5 1))) (##qualified-call (vanity compiler utils resolve-file-path ##.loop.99) #f (bruijn ##.loop.99 6 0) (bruijn ##.%k.152 5 0) (bruijn ##.%x.214 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.file-exists?.30 7 8) (close _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24) (bruijn ##.path.101 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.212) ((##vcore.null? (bruijn ##.paths.100 1 1))) (if (bruijn ##.%p.212 0 0) ((bruijn ##.%k.152 1 0) #f) (basic-block 1 1 (##.%x.213) ((##vcore.car (bruijn ##.paths.100 2 1))) ((bruijn ##.string-append.29 6 7) (close _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23) (bruijn ##.%x.213 0 0) (##string ##.string.508) (bruijn ##.file.97 4 1)))))
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
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D508.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99")) (##qualified-call (vanity compiler utils resolve-file-path ##.loop.99) #f (bruijn ##.loop.99 0 0) (bruijn ##.%k.151 1 0) (bruijn ##.paths.98 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.216) ((##vcore.cons (bruijn ##.expr.103 3 0) (bruijn ##.%x.159 1 0))) ((bruijn ##.%k.157 4 0) (bruijn ##.%r.216 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.215) ((##vcore.eof-object? (bruijn ##.expr.103 1 0))) (if (bruijn ##.%p.215 0 0) ((bruijn ##.%k.157 2 0) '()) (##qualified-call (vanity compiler utils read-all) #t (bruijn ##.read-all.66 3 13) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26) (bruijn ##.port.102 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEofP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all, _V60_V0vanity_V0compiler_V0utils)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0read__all(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.read.31 2 9) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25) (bruijn ##.port.102 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.32 5 10) (bruijn ##.%k.183 2 0) (##string ##.string.556) (bruijn ##.%x.184 0 0) (##string ##.string.557))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D556.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D557.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.185 0 0) (close _V0vanity_V0compiler_V0utils_V20_V0k29))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k29, self)))));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.217 1 0) (##vcore.function (close _V0vanity_V0compiler_V0utils_V20_V0k28) (##string ##.string.558)) ((bruijn ##.%k.183 0 0) (##string ##.string.559)))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k28, self)))),
      VEncodePointer(&_V10_Dstring_D558.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D559.sym, VPOINTER_OTHER));
}
}
static void _V0vanity_V0compiler_V0utils_V20_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 22 22 (##.%x.218 ##.%x.219 ##.%x.220 ##.%x.221 ##.%x.222 ##.%x.223 ##.%x.224 ##.%x.225 ##.%x.226 ##.%x.227 ##.%x.228 ##.%x.229 ##.%x.230 ##.%x.231 ##.%x.232 ##.%x.233 ##.%x.234 ##.%x.235 ##.%x.236 ##.%x.237 ##.%x.238 ##.%r.239) ((##vcore.cons 'read-all (bruijn ##.read-all.66 3 13)) (##vcore.cons 'resolve-file-path (bruijn ##.resolve-file-path.65 3 12)) (##vcore.cons 'search-open-input-file (bruijn ##.search-open-input-file.64 3 11)) (##vcore.cons 'compiler-error (bruijn ##.compiler-error.63 3 10)) (##vcore.cons 'compiler-warning (bruijn ##.compiler-warning.62 3 9)) (##vcore.cons 'gensym (bruijn ##.gensym.59 3 6)) (##vcore.cons 'filter (bruijn ##.filter.61 3 8)) (##vcore.cons 'gcc-path (bruijn ##.gcc-path.60 3 7)) (##vcore.cons 'set-feature-list! (bruijn ##.set-feature-list!.57 3 4)) (##vcore.cons 'get-feature-list (bruijn ##.get-feature-list.56 3 3)) (##vcore.cons 'ungensym (bruijn ##.ungensym.53 3 0)) (##vcore.cons (bruijn ##.%x.228 0 10) '()) (##vcore.cons (bruijn ##.%x.227 0 9) (bruijn ##.%x.229 0 11)) (##vcore.cons (bruijn ##.%x.226 0 8) (bruijn ##.%x.230 0 12)) (##vcore.cons (bruijn ##.%x.225 0 7) (bruijn ##.%x.231 0 13)) (##vcore.cons (bruijn ##.%x.224 0 6) (bruijn ##.%x.232 0 14)) (##vcore.cons (bruijn ##.%x.223 0 5) (bruijn ##.%x.233 0 15)) (##vcore.cons (bruijn ##.%x.222 0 4) (bruijn ##.%x.234 0 16)) (##vcore.cons (bruijn ##.%x.221 0 3) (bruijn ##.%x.235 0 17)) (##vcore.cons (bruijn ##.%x.220 0 2) (bruijn ##.%x.236 0 18)) (##vcore.cons (bruijn ##.%x.219 0 1) (bruijn ##.%x.237 0 19)) (##vcore.cons (bruijn ##.%x.218 0 0) (bruijn ##.%x.238 0 20))) ((bruijn ##.%k.105 8 0) (bruijn ##.%r.239 0 21)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[22]; } container;
    self = &container.self;
    VInitEnv(self, 22, 22, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0read__all,
      statics->up->up->vars[13]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0resolve__file__path,
      statics->up->up->vars[12]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0search__open__input__file,
      statics->up->up->vars[11]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0compiler__error,
      statics->up->up->vars[10]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0compiler__warning,
      statics->up->up->vars[9]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0gensym,
      statics->up->up->vars[6]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0filter,
      statics->up->up->vars[8]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0gcc__path,
      statics->up->up->vars[7]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0set__feature__list_B,
      statics->up->up->vars[4]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0get__feature__list,
      statics->up->up->vars[3]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0ungensym,
      statics->up->up->vars[0]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[21]);
    }
}
static void _V0vanity_V0compiler_V0utils_V20_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0utils_V20_V0k32) (bruijn ##.feature-list.58 2 5) '(##pair ##.pair.564))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k32, self)))),
      VEncodeInt(2l), VEncodeInt(5l),
      VEncodePointer(&_V10_Dpair_D564, VPOINTER_PAIR)
    );
}
static void _V0vanity_V0compiler_V0utils_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0utils_V20_V0k31) (bruijn ##.gcc-path.60 2 7) (bruijn ##.%x.181 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k31, self)))),
      VEncodeInt(2l), VEncodeInt(7l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 12) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda2, got ~D~N"
  "-- expected 12~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[12]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 12, 12, statics);
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
  // (##letrec (vanity compiler utils) 14 ((close "_V50_V0vanity_V0compiler_V0utils_V0ungensym" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0strrchr" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0strchr" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0get__feature__list" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B" (vanity compiler utils)) #f (##intrinsic ##vcore.gensym) #f (close "_V50_V0vanity_V0compiler_V0utils_V0filter" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__error" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0read__all" (vanity compiler utils))) (basic-block 1 1 (##.%p.217) ((##vcore.eq? (bruijn ##.platform.33 2 11) 'windows)) ((close _V0vanity_V0compiler_V0utils_V20_V0k27) (close _V0vanity_V0compiler_V0utils_V20_V0k30))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[14]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0utils = self;
    VInitEnv(self, 14, 14, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0get__feature__list, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[5] = VEncodeBool(false);
    self->vars[6] = _V40_V10vcore_Dgensym;
    self->vars[7] = VEncodeBool(false);
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all, _V60_V0vanity_V0compiler_V0utils))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0utils_V20", &_V60_V0vanity_V0compiler_V0utils);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[11],
      _V0windows);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k30, self)))));
    }
    }
}
static void _V0vanity_V0compiler_V0utils_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0utils_V20_V0lambda2) (##string ##.string.565) (bruijn ##.%x.186 0 0) 'newline 'current-error-port 'display 'write 'for-each 'format 'open-input-file 'string-append 'file-exists? 'read 'sprintf 'platform)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 15,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D565.sym, VPOINTER_OTHER),
      _var0,
      _V0newline,
      _V0current__error__port,
      _V0display,
      _V0write,
      _V0for__each,
      _V0format,
      _V0open__input__file,
      _V0string__append,
      _V0file__exists_Q,
      _V0read,
      _V0sprintf,
      _V0platform);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0utils_V20_V0k3) (bruijn ##.%x.187 1 0) (bruijn ##.%x.188 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k2) (##string ##.string.566))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D566.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k1) (##string ##.string.567))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D567.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0utils_V20 = (VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0vanity__scheme__0_D0 = VEncodePointer(VInternSymbol(-1138579618, &_VW_V0vanity__scheme__0_D0.sym), VPOINTER_OTHER);
  _V0vanity__scheme = VEncodePointer(VInternSymbol(275192804, &_VW_V0vanity__scheme.sym), VPOINTER_OTHER);
  _V0ieee__float = VEncodePointer(VInternSymbol(-1891017625, &_VW_V0ieee__float.sym), VPOINTER_OTHER);
  _V0r7rs = VEncodePointer(VInternSymbol(982406193, &_VW_V0r7rs.sym), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VInternSymbol(689389284, &_VW_V0windows.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0port = VEncodePointer(VInternSymbol(-1893404613, &_VW_V0port.sym), VPOINTER_OTHER);
  _V0path = VEncodePointer(VInternSymbol(-1450499945, &_VW_V0path.sym), VPOINTER_OTHER);
  _V10_Dloop_D99 = VEncodePointer(VInternSymbol(1006332142, &_VW_V10_Dloop_D99.sym), VPOINTER_OTHER);
  _V0fd = VEncodePointer(VInternSymbol(1106557157, &_VW_V0fd.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V10_Dloop_D94 = VEncodePointer(VInternSymbol(-1946962129, &_VW_V10_Dloop_D94.sym), VPOINTER_OTHER);
  _V0paths = VEncodePointer(VInternSymbol(149126552, &_VW_V0paths.sym), VPOINTER_OTHER);
  _V0file = VEncodePointer(VInternSymbol(1964336744, &_VW_V0file.sym), VPOINTER_OTHER);
  _V0irr = VEncodePointer(VInternSymbol(1082715818, &_VW_V0irr.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0irritants = VEncodePointer(VInternSymbol(-1285439741, &_VW_V0irritants.sym), VPOINTER_OTHER);
  _V0msg = VEncodePointer(VInternSymbol(-1941923069, &_VW_V0msg.sym), VPOINTER_OTHER);
  _V0p = VEncodePointer(VInternSymbol(-1603972369, &_VW_V0p.sym), VPOINTER_OTHER);
  _V0lst = VEncodePointer(VInternSymbol(1724715609, &_VW_V0lst.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D2_D80 = VEncodePointer(VInternSymbol(309342836, &_VW_V10_Dfinalize_D2_D80.sym), VPOINTER_OTHER);
  _V0loop_D1 = VEncodePointer(VInternSymbol(163867650, &_VW_V0loop_D1.sym), VPOINTER_OTHER);
  _V10_Dloop_D1_D81 = VEncodePointer(VInternSymbol(-427103347, &_VW_V10_Dloop_D1_D81.sym), VPOINTER_OTHER);
  _V0y_D10 = VEncodePointer(VInternSymbol(2029752984, &_VW_V0y_D10.sym), VPOINTER_OTHER);
  _V0finalize_D2 = VEncodePointer(VInternSymbol(-624487110, &_VW_V0finalize_D2.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D13_D73 = VEncodePointer(VInternSymbol(848798801, &_VW_V10_Dfinalize_D13_D73.sym), VPOINTER_OTHER);
  _V0loop_D12 = VEncodePointer(VInternSymbol(1462522316, &_VW_V0loop_D12.sym), VPOINTER_OTHER);
  _V10_Dloop_D12_D74 = VEncodePointer(VInternSymbol(-728309017, &_VW_V10_Dloop_D12_D74.sym), VPOINTER_OTHER);
  _V0finalize_D13 = VEncodePointer(VInternSymbol(-1012834429, &_VW_V0finalize_D13.sym), VPOINTER_OTHER);
  _V0chr = VEncodePointer(VInternSymbol(-655425679, &_VW_V0chr.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0str = VEncodePointer(VInternSymbol(128699971, &_VW_V0str.sym), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VInternSymbol(644502567, &_VW_V0read__all.sym), VPOINTER_OTHER);
  _V0resolve__file__path = VEncodePointer(VInternSymbol(1687182104, &_VW_V0resolve__file__path.sym), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VInternSymbol(1642999496, &_VW_V0search__open__input__file.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VInternSymbol(245497745, &_VW_V0compiler__warning.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VInternSymbol(-1275049822, &_VW_V0gcc__path.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0feature__list = VEncodePointer(VInternSymbol(-1694353322, &_VW_V0feature__list.sym), VPOINTER_OTHER);
  _V0set__feature__list_B = VEncodePointer(VInternSymbol(-1477729665, &_VW_V0set__feature__list_B.sym), VPOINTER_OTHER);
  _V0get__feature__list = VEncodePointer(VInternSymbol(1558223347, &_VW_V0get__feature__list.sym), VPOINTER_OTHER);
  _V0strchr = VEncodePointer(VInternSymbol(1924485071, &_VW_V0strchr.sym), VPOINTER_OTHER);
  _V0strrchr = VEncodePointer(VInternSymbol(-1697813262, &_VW_V0strrchr.sym), VPOINTER_OTHER);
  _V0sym = VEncodePointer(VInternSymbol(2139759047, &_VW_V0sym.sym), VPOINTER_OTHER);
  _V0ungensym = VEncodePointer(VInternSymbol(798488995, &_VW_V0ungensym.sym), VPOINTER_OTHER);
  _V0utils = VEncodePointer(VInternSymbol(-1384093269, &_VW_V0utils.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0read = VEncodePointer(VInternSymbol(974172663, &_VW_V0read.sym), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VInternSymbol(-859422530, &_VW_V0file__exists_Q.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VInternSymbol(165226251, &_VW_V0open__input__file.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D564.first = _V0r7rs;
  _V10_Dpair_D564.rest = VEncodePointer(&_V10_Dpair_D563, VPOINTER_PAIR);
  _V10_Dpair_D563.first = _V0ieee__float;
  _V10_Dpair_D563.rest = VEncodePointer(&_V10_Dpair_D562, VPOINTER_PAIR);
  _V10_Dpair_D562.first = _V0vanity__scheme;
  _V10_Dpair_D562.rest = VEncodePointer(&_V10_Dpair_D561, VPOINTER_PAIR);
  _V10_Dpair_D561.first = _V0vanity__scheme__0_D0;
  _V10_Dpair_D561.rest = VNULL;
  _V10_Dpair_D560.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D560.rest = VEncodePointer(&_V10_Dpair_D548, VPOINTER_PAIR);
  _V10_Dpair_D555.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D555.rest = VEncodePointer(&_V10_Dpair_D554, VPOINTER_PAIR);
  _V10_Dpair_D554.first = VEncodePointer(&_V10_Dpair_D553, VPOINTER_PAIR);
  _V10_Dpair_D554.rest = VNULL;
  _V10_Dpair_D553.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D553.rest = VEncodePointer(&_V10_Dpair_D550, VPOINTER_PAIR);
  _V10_Dpair_D552.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D552.rest = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D551.first = VEncodePointer(&_V10_Dpair_D550, VPOINTER_PAIR);
  _V10_Dpair_D551.rest = VNULL;
  _V10_Dpair_D550.first = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D550.rest = VEncodePointer(&_V10_Dpair_D547, VPOINTER_PAIR);
  _V10_Dpair_D549.first = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D549.rest = VEncodePointer(&_V10_Dpair_D548, VPOINTER_PAIR);
  _V10_Dpair_D548.first = VEncodePointer(&_V10_Dpair_D547, VPOINTER_PAIR);
  _V10_Dpair_D548.rest = VNULL;
  _V10_Dpair_D547.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D547.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D546.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D546.rest = VEncodePointer(&_V10_Dpair_D545, VPOINTER_PAIR);
  _V10_Dpair_D545.first = VEncodePointer(&_V10_Dpair_D544, VPOINTER_PAIR);
  _V10_Dpair_D545.rest = VNULL;
  _V10_Dpair_D544.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D544.rest = VEncodePointer(&_V10_Dpair_D543, VPOINTER_PAIR);
  _V10_Dpair_D543.first = VEncodePointer(&_V10_Dpair_D537, VPOINTER_PAIR);
  _V10_Dpair_D543.rest = VEncodePointer(&_V10_Dpair_D540, VPOINTER_PAIR);
  _V10_Dpair_D542.first = VEncodePointer(&_V10_Dpair_D539, VPOINTER_PAIR);
  _V10_Dpair_D542.rest = VEncodePointer(&_V10_Dpair_D541, VPOINTER_PAIR);
  _V10_Dpair_D541.first = VEncodePointer(&_V10_Dpair_D540, VPOINTER_PAIR);
  _V10_Dpair_D541.rest = VNULL;
  _V10_Dpair_D540.first = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D540.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D539.first = VEncodeBool(false);
  _V10_Dpair_D539.rest = VEncodePointer(&_V10_Dpair_D538, VPOINTER_PAIR);
  _V10_Dpair_D538.first = VEncodePointer(&_V10_Dpair_D537, VPOINTER_PAIR);
  _V10_Dpair_D538.rest = VNULL;
  _V10_Dpair_D537.first = _V0expr;
  _V10_Dpair_D537.rest = VNULL;
  _V10_Dpair_D536.first = VEncodePointer(&_V10_Dpair_D535, VPOINTER_PAIR);
  _V10_Dpair_D536.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D535.first = VEncodePointer(&_V10_Dpair_D531, VPOINTER_PAIR);
  _V10_Dpair_D535.rest = VEncodePointer(&_V10_Dpair_D534, VPOINTER_PAIR);
  _V10_Dpair_D534.first = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D534.rest = VNULL;
  _V10_Dpair_D533.first = _V0_Mk;
  _V10_Dpair_D533.rest = VEncodePointer(&_V10_Dpair_D532, VPOINTER_PAIR);
  _V10_Dpair_D532.first = _V0port;
  _V10_Dpair_D532.rest = VNULL;
  _V10_Dpair_D531.first = _V0vanity;
  _V10_Dpair_D531.rest = VEncodePointer(&_V10_Dpair_D530, VPOINTER_PAIR);
  _V10_Dpair_D530.first = _V0compiler;
  _V10_Dpair_D530.rest = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D529.first = _V0utils;
  _V10_Dpair_D529.rest = VEncodePointer(&_V10_Dpair_D281, VPOINTER_PAIR);
  _V10_Dpair_D528.first = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D528.rest = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D527.first = VEncodePointer(&_V10_Dpair_D526, VPOINTER_PAIR);
  _V10_Dpair_D527.rest = VNULL;
  _V10_Dpair_D526.first = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D526.rest = VEncodePointer(&_V10_Dpair_D499, VPOINTER_PAIR);
  _V10_Dpair_D525.first = VEncodePointer(&_V10_Dpair_D524, VPOINTER_PAIR);
  _V10_Dpair_D525.rest = VEncodePointer(&_V10_Dpair_D500, VPOINTER_PAIR);
  _V10_Dpair_D524.first = VEncodeBool(false);
  _V10_Dpair_D524.rest = VEncodePointer(&_V10_Dpair_D523, VPOINTER_PAIR);
  _V10_Dpair_D523.first = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D523.rest = VNULL;
  _V10_Dpair_D522.first = _V0path;
  _V10_Dpair_D522.rest = VNULL;
  _V10_Dpair_D521.first = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D521.rest = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D520.first = VEncodePointer(&_V10_Dpair_D519, VPOINTER_PAIR);
  _V10_Dpair_D520.rest = VEncodePointer(&_V10_Dpair_D490, VPOINTER_PAIR);
  _V10_Dpair_D519.first = _V0vanity;
  _V10_Dpair_D519.rest = VEncodePointer(&_V10_Dpair_D518, VPOINTER_PAIR);
  _V10_Dpair_D518.first = _V0compiler;
  _V10_Dpair_D518.rest = VEncodePointer(&_V10_Dpair_D517, VPOINTER_PAIR);
  _V10_Dpair_D517.first = _V0utils;
  _V10_Dpair_D517.rest = VEncodePointer(&_V10_Dpair_D516, VPOINTER_PAIR);
  _V10_Dpair_D516.first = _V0resolve__file__path;
  _V10_Dpair_D516.rest = VEncodePointer(&_V10_Dpair_D515, VPOINTER_PAIR);
  _V10_Dpair_D515.first = _V10_Dloop_D99;
  _V10_Dpair_D515.rest = VNULL;
  _V10_Dpair_D514.first = VEncodePointer(&_V10_Dpair_D513, VPOINTER_PAIR);
  _V10_Dpair_D514.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D513.first = VEncodePointer(&_V10_Dpair_D512, VPOINTER_PAIR);
  _V10_Dpair_D513.rest = VEncodePointer(&_V10_Dpair_D481, VPOINTER_PAIR);
  _V10_Dpair_D512.first = _V0vanity;
  _V10_Dpair_D512.rest = VEncodePointer(&_V10_Dpair_D511, VPOINTER_PAIR);
  _V10_Dpair_D511.first = _V0compiler;
  _V10_Dpair_D511.rest = VEncodePointer(&_V10_Dpair_D510, VPOINTER_PAIR);
  _V10_Dpair_D510.first = _V0utils;
  _V10_Dpair_D510.rest = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D509.first = _V0resolve__file__path;
  _V10_Dpair_D509.rest = VNULL;
  _V10_Dpair_D507.first = VEncodePointer(&_V10_Dpair_D504, VPOINTER_PAIR);
  _V10_Dpair_D507.rest = VEncodePointer(&_V10_Dpair_D506, VPOINTER_PAIR);
  _V10_Dpair_D506.first = VEncodePointer(&_V10_Dpair_D505, VPOINTER_PAIR);
  _V10_Dpair_D506.rest = VNULL;
  _V10_Dpair_D505.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D505.rest = VEncodePointer(&_V10_Dpair_D499, VPOINTER_PAIR);
  _V10_Dpair_D504.first = VEncodeBool(false);
  _V10_Dpair_D504.rest = VEncodePointer(&_V10_Dpair_D503, VPOINTER_PAIR);
  _V10_Dpair_D503.first = VEncodePointer(&_V10_Dpair_D502, VPOINTER_PAIR);
  _V10_Dpair_D503.rest = VNULL;
  _V10_Dpair_D502.first = _V0fd;
  _V10_Dpair_D502.rest = VNULL;
  _V10_Dpair_D501.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D501.rest = VEncodePointer(&_V10_Dpair_D500, VPOINTER_PAIR);
  _V10_Dpair_D500.first = VEncodePointer(&_V10_Dpair_D499, VPOINTER_PAIR);
  _V10_Dpair_D500.rest = VNULL;
  _V10_Dpair_D499.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D499.rest = VEncodePointer(&_V10_Dpair_D498, VPOINTER_PAIR);
  _V10_Dpair_D498.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D498.rest = VEncodePointer(&_V10_Dpair_D497, VPOINTER_PAIR);
  _V10_Dpair_D497.first = VEncodePointer(&_V10_Dpair_D489, VPOINTER_PAIR);
  _V10_Dpair_D497.rest = VEncodePointer(&_V10_Dpair_D494, VPOINTER_PAIR);
  _V10_Dpair_D496.first = VEncodePointer(&_V10_Dpair_D491, VPOINTER_PAIR);
  _V10_Dpair_D496.rest = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D495.first = VEncodePointer(&_V10_Dpair_D494, VPOINTER_PAIR);
  _V10_Dpair_D495.rest = VNULL;
  _V10_Dpair_D494.first = VEncodePointer(&_V10_Dpair_D492, VPOINTER_PAIR);
  _V10_Dpair_D494.rest = VEncodePointer(&_V10_Dpair_D493, VPOINTER_PAIR);
  _V10_Dpair_D493.first = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D493.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D492.first = _V0loop;
  _V10_Dpair_D492.rest = VNULL;
  _V10_Dpair_D491.first = VEncodePointer(&_V10_Dpair_D488, VPOINTER_PAIR);
  _V10_Dpair_D491.rest = VEncodePointer(&_V10_Dpair_D490, VPOINTER_PAIR);
  _V10_Dpair_D490.first = VEncodePointer(&_V10_Dpair_D489, VPOINTER_PAIR);
  _V10_Dpair_D490.rest = VNULL;
  _V10_Dpair_D489.first = _V0_Mk;
  _V10_Dpair_D489.rest = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D488.first = _V0vanity;
  _V10_Dpair_D488.rest = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D487.first = _V0compiler;
  _V10_Dpair_D487.rest = VEncodePointer(&_V10_Dpair_D486, VPOINTER_PAIR);
  _V10_Dpair_D486.first = _V0utils;
  _V10_Dpair_D486.rest = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D485.first = _V0search__open__input__file;
  _V10_Dpair_D485.rest = VEncodePointer(&_V10_Dpair_D484, VPOINTER_PAIR);
  _V10_Dpair_D484.first = _V10_Dloop_D94;
  _V10_Dpair_D484.rest = VNULL;
  _V10_Dpair_D483.first = VEncodePointer(&_V10_Dpair_D482, VPOINTER_PAIR);
  _V10_Dpair_D483.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D482.first = VEncodePointer(&_V10_Dpair_D477, VPOINTER_PAIR);
  _V10_Dpair_D482.rest = VEncodePointer(&_V10_Dpair_D481, VPOINTER_PAIR);
  _V10_Dpair_D481.first = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D481.rest = VNULL;
  _V10_Dpair_D480.first = _V0_Mk;
  _V10_Dpair_D480.rest = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D479.first = _V0file;
  _V10_Dpair_D479.rest = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D478.first = _V0paths;
  _V10_Dpair_D478.rest = VNULL;
  _V10_Dpair_D477.first = _V0vanity;
  _V10_Dpair_D477.rest = VEncodePointer(&_V10_Dpair_D476, VPOINTER_PAIR);
  _V10_Dpair_D476.first = _V0compiler;
  _V10_Dpair_D476.rest = VEncodePointer(&_V10_Dpair_D475, VPOINTER_PAIR);
  _V10_Dpair_D475.first = _V0utils;
  _V10_Dpair_D475.rest = VEncodePointer(&_V10_Dpair_D474, VPOINTER_PAIR);
  _V10_Dpair_D474.first = _V0search__open__input__file;
  _V10_Dpair_D474.rest = VNULL;
  _V10_Dpair_D473.first = VEncodePointer(&_V10_Dpair_D472, VPOINTER_PAIR);
  _V10_Dpair_D473.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D472.first = VEncodePointer(&_V10_Dpair_D471, VPOINTER_PAIR);
  _V10_Dpair_D472.rest = VEncodePointer(&_V10_Dpair_D437, VPOINTER_PAIR);
  _V10_Dpair_D471.first = _V0vanity;
  _V10_Dpair_D471.rest = VEncodePointer(&_V10_Dpair_D470, VPOINTER_PAIR);
  _V10_Dpair_D470.first = _V0compiler;
  _V10_Dpair_D470.rest = VEncodePointer(&_V10_Dpair_D469, VPOINTER_PAIR);
  _V10_Dpair_D469.first = _V0utils;
  _V10_Dpair_D469.rest = VEncodePointer(&_V10_Dpair_D468, VPOINTER_PAIR);
  _V10_Dpair_D468.first = _V0compiler__error;
  _V10_Dpair_D468.rest = VNULL;
  _V10_Dpair_D465.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D465.rest = VEncodePointer(&_V10_Dpair_D464, VPOINTER_PAIR);
  _V10_Dpair_D464.first = VEncodePointer(&_V10_Dpair_D463, VPOINTER_PAIR);
  _V10_Dpair_D464.rest = VNULL;
  _V10_Dpair_D463.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D463.rest = VEncodePointer(&_V10_Dpair_D460, VPOINTER_PAIR);
  _V10_Dpair_D462.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D462.rest = VEncodePointer(&_V10_Dpair_D461, VPOINTER_PAIR);
  _V10_Dpair_D461.first = VEncodePointer(&_V10_Dpair_D460, VPOINTER_PAIR);
  _V10_Dpair_D461.rest = VNULL;
  _V10_Dpair_D460.first = VEncodePointer(&_V10_Dpair_D456, VPOINTER_PAIR);
  _V10_Dpair_D460.rest = VEncodePointer(&_V10_Dpair_D452, VPOINTER_PAIR);
  _V10_Dpair_D459.first = VEncodePointer(&_V10_Dpair_D458, VPOINTER_PAIR);
  _V10_Dpair_D459.rest = VEncodePointer(&_V10_Dpair_D453, VPOINTER_PAIR);
  _V10_Dpair_D458.first = VEncodeBool(false);
  _V10_Dpair_D458.rest = VEncodePointer(&_V10_Dpair_D457, VPOINTER_PAIR);
  _V10_Dpair_D457.first = VEncodePointer(&_V10_Dpair_D456, VPOINTER_PAIR);
  _V10_Dpair_D457.rest = VNULL;
  _V10_Dpair_D456.first = _V0_Mk;
  _V10_Dpair_D456.rest = VEncodePointer(&_V10_Dpair_D455, VPOINTER_PAIR);
  _V10_Dpair_D455.first = _V0irr;
  _V10_Dpair_D455.rest = VNULL;
  _V10_Dpair_D454.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D454.rest = VEncodePointer(&_V10_Dpair_D453, VPOINTER_PAIR);
  _V10_Dpair_D453.first = VEncodePointer(&_V10_Dpair_D452, VPOINTER_PAIR);
  _V10_Dpair_D453.rest = VNULL;
  _V10_Dpair_D452.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D452.rest = VEncodePointer(&_V10_Dpair_D443, VPOINTER_PAIR);
  _V10_Dpair_D451.first = VEncodePointer(&_V10_Dpair_D447, VPOINTER_PAIR);
  _V10_Dpair_D451.rest = VEncodePointer(&_V10_Dpair_D450, VPOINTER_PAIR);
  _V10_Dpair_D450.first = VEncodePointer(&_V10_Dpair_D449, VPOINTER_PAIR);
  _V10_Dpair_D450.rest = VNULL;
  _V10_Dpair_D449.first = _V0unquote;
  _V10_Dpair_D449.rest = VEncodePointer(&_V10_Dpair_D448, VPOINTER_PAIR);
  _V10_Dpair_D448.first = _V0unmangled__env;
  _V10_Dpair_D448.rest = VNULL;
  _V10_Dpair_D447.first = VEncodeBool(false);
  _V10_Dpair_D447.rest = VEncodePointer(&_V10_Dpair_D446, VPOINTER_PAIR);
  _V10_Dpair_D446.first = _V0_U;
  _V10_Dpair_D446.rest = VNULL;
  _V10_Dpair_D445.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D445.rest = VEncodePointer(&_V10_Dpair_D444, VPOINTER_PAIR);
  _V10_Dpair_D444.first = VEncodePointer(&_V10_Dpair_D443, VPOINTER_PAIR);
  _V10_Dpair_D444.rest = VNULL;
  _V10_Dpair_D443.first = VEncodePointer(&_V10_Dpair_D442, VPOINTER_PAIR);
  _V10_Dpair_D443.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D442.first = _V0_Mk;
  _V10_Dpair_D442.rest = VEncodePointer(&_V10_Dpair_D441, VPOINTER_PAIR);
  _V10_Dpair_D441.first = _V0msg;
  _V10_Dpair_D441.rest = VEncodePointer(&_V10_Dpair_D440, VPOINTER_PAIR);
  _V10_Dpair_D440.first = _V0irritants;
  _V10_Dpair_D440.rest = VNULL;
  _V10_Dpair_D439.first = VEncodePointer(&_V10_Dpair_D438, VPOINTER_PAIR);
  _V10_Dpair_D439.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D438.first = VEncodePointer(&_V10_Dpair_D434, VPOINTER_PAIR);
  _V10_Dpair_D438.rest = VEncodePointer(&_V10_Dpair_D437, VPOINTER_PAIR);
  _V10_Dpair_D437.first = VEncodePointer(&_V10_Dpair_D436, VPOINTER_PAIR);
  _V10_Dpair_D437.rest = VNULL;
  _V10_Dpair_D436.first = _V0_Mk;
  _V10_Dpair_D436.rest = VEncodePointer(&_V10_Dpair_D435, VPOINTER_PAIR);
  _V10_Dpair_D435.first = _V0msg;
  _V10_Dpair_D435.rest = _V0irritants;
  _V10_Dpair_D434.first = _V0vanity;
  _V10_Dpair_D434.rest = VEncodePointer(&_V10_Dpair_D433, VPOINTER_PAIR);
  _V10_Dpair_D433.first = _V0compiler;
  _V10_Dpair_D433.rest = VEncodePointer(&_V10_Dpair_D432, VPOINTER_PAIR);
  _V10_Dpair_D432.first = _V0utils;
  _V10_Dpair_D432.rest = VEncodePointer(&_V10_Dpair_D431, VPOINTER_PAIR);
  _V10_Dpair_D431.first = _V0compiler__warning;
  _V10_Dpair_D431.rest = VNULL;
  _V10_Dpair_D430.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D430.rest = VEncodePointer(&_V10_Dpair_D429, VPOINTER_PAIR);
  _V10_Dpair_D429.first = VEncodePointer(&_V10_Dpair_D428, VPOINTER_PAIR);
  _V10_Dpair_D429.rest = VNULL;
  _V10_Dpair_D428.first = VEncodePointer(&_V10_Dpair_D426, VPOINTER_PAIR);
  _V10_Dpair_D428.rest = VEncodePointer(&_V10_Dpair_D427, VPOINTER_PAIR);
  _V10_Dpair_D427.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D427.rest = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D426.first = _V0_Mx;
  _V10_Dpair_D426.rest = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D425.first = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D425.rest = VEncodePointer(&_V10_Dpair_D424, VPOINTER_PAIR);
  _V10_Dpair_D424.first = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D424.rest = VNULL;
  _V10_Dpair_D423.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D423.rest = VEncodePointer(&_V10_Dpair_D422, VPOINTER_PAIR);
  _V10_Dpair_D422.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D422.rest = VEncodePointer(&_V10_Dpair_D421, VPOINTER_PAIR);
  _V10_Dpair_D421.first = VEncodePointer(&_V10_Dpair_D417, VPOINTER_PAIR);
  _V10_Dpair_D421.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D420.first = VEncodePointer(&_V10_Dpair_D419, VPOINTER_PAIR);
  _V10_Dpair_D420.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D419.first = VEncodePointer(&_V10_Dpair_D415, VPOINTER_PAIR);
  _V10_Dpair_D419.rest = VEncodePointer(&_V10_Dpair_D418, VPOINTER_PAIR);
  _V10_Dpair_D418.first = VEncodePointer(&_V10_Dpair_D417, VPOINTER_PAIR);
  _V10_Dpair_D418.rest = VNULL;
  _V10_Dpair_D417.first = _V0_Mk;
  _V10_Dpair_D417.rest = VEncodePointer(&_V10_Dpair_D416, VPOINTER_PAIR);
  _V10_Dpair_D416.first = _V0p;
  _V10_Dpair_D416.rest = VEncodePointer(&_V10_Dpair_D407, VPOINTER_PAIR);
  _V10_Dpair_D415.first = _V0vanity;
  _V10_Dpair_D415.rest = VEncodePointer(&_V10_Dpair_D414, VPOINTER_PAIR);
  _V10_Dpair_D414.first = _V0compiler;
  _V10_Dpair_D414.rest = VEncodePointer(&_V10_Dpair_D413, VPOINTER_PAIR);
  _V10_Dpair_D413.first = _V0utils;
  _V10_Dpair_D413.rest = VEncodePointer(&_V10_Dpair_D412, VPOINTER_PAIR);
  _V10_Dpair_D412.first = _V0filter;
  _V10_Dpair_D412.rest = VNULL;
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V10_Dpair_D411.first = VEncodePointer(&_V10_Dpair_D410, VPOINTER_PAIR);
  _V10_Dpair_D411.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D410.first = VEncodePointer(&_V10_Dpair_D406, VPOINTER_PAIR);
  _V10_Dpair_D410.rest = VEncodePointer(&_V10_Dpair_D409, VPOINTER_PAIR);
  _V10_Dpair_D409.first = VEncodePointer(&_V10_Dpair_D408, VPOINTER_PAIR);
  _V10_Dpair_D409.rest = VNULL;
  _V10_Dpair_D408.first = _V0_Mk;
  _V10_Dpair_D408.rest = VEncodePointer(&_V10_Dpair_D407, VPOINTER_PAIR);
  _V10_Dpair_D407.first = _V0lst;
  _V10_Dpair_D407.rest = VNULL;
  _V10_Dpair_D406.first = _V0vanity;
  _V10_Dpair_D406.rest = VEncodePointer(&_V10_Dpair_D405, VPOINTER_PAIR);
  _V10_Dpair_D405.first = _V0compiler;
  _V10_Dpair_D405.rest = VEncodePointer(&_V10_Dpair_D404, VPOINTER_PAIR);
  _V10_Dpair_D404.first = _V0utils;
  _V10_Dpair_D404.rest = VEncodePointer(&_V10_Dpair_D403, VPOINTER_PAIR);
  _V10_Dpair_D403.first = _V0set__feature__list_B;
  _V10_Dpair_D403.rest = VNULL;
  _V10_Dpair_D402.first = VEncodePointer(&_V10_Dpair_D401, VPOINTER_PAIR);
  _V10_Dpair_D402.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D401.first = VEncodePointer(&_V10_Dpair_D400, VPOINTER_PAIR);
  _V10_Dpair_D401.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D400.first = _V0vanity;
  _V10_Dpair_D400.rest = VEncodePointer(&_V10_Dpair_D399, VPOINTER_PAIR);
  _V10_Dpair_D399.first = _V0compiler;
  _V10_Dpair_D399.rest = VEncodePointer(&_V10_Dpair_D398, VPOINTER_PAIR);
  _V10_Dpair_D398.first = _V0utils;
  _V10_Dpair_D398.rest = VEncodePointer(&_V10_Dpair_D397, VPOINTER_PAIR);
  _V10_Dpair_D397.first = _V0get__feature__list;
  _V10_Dpair_D397.rest = VNULL;
  _V10_Dpair_D396.first = VEncodePointer(&_V10_Dpair_D395, VPOINTER_PAIR);
  _V10_Dpair_D396.rest = VEncodePointer(&_V10_Dpair_D377, VPOINTER_PAIR);
  _V10_Dpair_D395.first = VEncodePointer(&_V10_Dpair_D394, VPOINTER_PAIR);
  _V10_Dpair_D395.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D394.first = _V0vanity;
  _V10_Dpair_D394.rest = VEncodePointer(&_V10_Dpair_D393, VPOINTER_PAIR);
  _V10_Dpair_D393.first = _V0compiler;
  _V10_Dpair_D393.rest = VEncodePointer(&_V10_Dpair_D392, VPOINTER_PAIR);
  _V10_Dpair_D392.first = _V0utils;
  _V10_Dpair_D392.rest = VEncodePointer(&_V10_Dpair_D391, VPOINTER_PAIR);
  _V10_Dpair_D391.first = _V0strchr;
  _V10_Dpair_D391.rest = VEncodePointer(&_V10_Dpair_D390, VPOINTER_PAIR);
  _V10_Dpair_D390.first = _V10_Dfinalize_D2_D80;
  _V10_Dpair_D390.rest = VNULL;
  _V10_Dpair_D389.first = VEncodePointer(&_V10_Dpair_D384, VPOINTER_PAIR);
  _V10_Dpair_D389.rest = VEncodePointer(&_V10_Dpair_D388, VPOINTER_PAIR);
  _V10_Dpair_D388.first = VEncodePointer(&_V10_Dpair_D387, VPOINTER_PAIR);
  _V10_Dpair_D388.rest = VNULL;
  _V10_Dpair_D387.first = VEncodePointer(&_V10_Dpair_D385, VPOINTER_PAIR);
  _V10_Dpair_D387.rest = VEncodePointer(&_V10_Dpair_D386, VPOINTER_PAIR);
  _V10_Dpair_D386.first = VEncodePointer(&_V10_Dpair_D372, VPOINTER_PAIR);
  _V10_Dpair_D386.rest = VEncodePointer(&_V10_Dpair_D376, VPOINTER_PAIR);
  _V10_Dpair_D385.first = _V0loop_D1;
  _V10_Dpair_D385.rest = VNULL;
  _V10_Dpair_D384.first = VEncodePointer(&_V10_Dpair_D383, VPOINTER_PAIR);
  _V10_Dpair_D384.rest = VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR);
  _V10_Dpair_D383.first = _V0vanity;
  _V10_Dpair_D383.rest = VEncodePointer(&_V10_Dpair_D382, VPOINTER_PAIR);
  _V10_Dpair_D382.first = _V0compiler;
  _V10_Dpair_D382.rest = VEncodePointer(&_V10_Dpair_D381, VPOINTER_PAIR);
  _V10_Dpair_D381.first = _V0utils;
  _V10_Dpair_D381.rest = VEncodePointer(&_V10_Dpair_D380, VPOINTER_PAIR);
  _V10_Dpair_D380.first = _V0strchr;
  _V10_Dpair_D380.rest = VEncodePointer(&_V10_Dpair_D379, VPOINTER_PAIR);
  _V10_Dpair_D379.first = _V10_Dloop_D1_D81;
  _V10_Dpair_D379.rest = VNULL;
  _V10_Dpair_D378.first = VEncodePointer(&_V10_Dpair_D374, VPOINTER_PAIR);
  _V10_Dpair_D378.rest = VEncodePointer(&_V10_Dpair_D377, VPOINTER_PAIR);
  _V10_Dpair_D377.first = VEncodePointer(&_V10_Dpair_D376, VPOINTER_PAIR);
  _V10_Dpair_D377.rest = VNULL;
  _V10_Dpair_D376.first = VEncodePointer(&_V10_Dpair_D375, VPOINTER_PAIR);
  _V10_Dpair_D376.rest = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D375.first = _V0y_D10;
  _V10_Dpair_D375.rest = VNULL;
  _V10_Dpair_D374.first = VEncodeBool(false);
  _V10_Dpair_D374.rest = VEncodePointer(&_V10_Dpair_D373, VPOINTER_PAIR);
  _V10_Dpair_D373.first = VEncodePointer(&_V10_Dpair_D372, VPOINTER_PAIR);
  _V10_Dpair_D373.rest = VNULL;
  _V10_Dpair_D372.first = _V0finalize_D2;
  _V10_Dpair_D372.rest = VNULL;
  _V10_Dpair_D371.first = VEncodePointer(&_V10_Dpair_D370, VPOINTER_PAIR);
  _V10_Dpair_D371.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D370.first = VEncodePointer(&_V10_Dpair_D369, VPOINTER_PAIR);
  _V10_Dpair_D370.rest = VEncodePointer(&_V10_Dpair_D337, VPOINTER_PAIR);
  _V10_Dpair_D369.first = _V0vanity;
  _V10_Dpair_D369.rest = VEncodePointer(&_V10_Dpair_D368, VPOINTER_PAIR);
  _V10_Dpair_D368.first = _V0compiler;
  _V10_Dpair_D368.rest = VEncodePointer(&_V10_Dpair_D367, VPOINTER_PAIR);
  _V10_Dpair_D367.first = _V0utils;
  _V10_Dpair_D367.rest = VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR);
  _V10_Dpair_D366.first = _V0strchr;
  _V10_Dpair_D366.rest = VNULL;
  _V10_Dpair_D365.first = VEncodePointer(&_V10_Dpair_D364, VPOINTER_PAIR);
  _V10_Dpair_D365.rest = VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR);
  _V10_Dpair_D364.first = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D364.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D363.first = _V0vanity;
  _V10_Dpair_D363.rest = VEncodePointer(&_V10_Dpair_D362, VPOINTER_PAIR);
  _V10_Dpair_D362.first = _V0compiler;
  _V10_Dpair_D362.rest = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D361.first = _V0utils;
  _V10_Dpair_D361.rest = VEncodePointer(&_V10_Dpair_D360, VPOINTER_PAIR);
  _V10_Dpair_D360.first = _V0strrchr;
  _V10_Dpair_D360.rest = VEncodePointer(&_V10_Dpair_D359, VPOINTER_PAIR);
  _V10_Dpair_D359.first = _V10_Dfinalize_D13_D73;
  _V10_Dpair_D359.rest = VNULL;
  _V10_Dpair_D358.first = VEncodePointer(&_V10_Dpair_D353, VPOINTER_PAIR);
  _V10_Dpair_D358.rest = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D357.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D357.rest = VNULL;
  _V10_Dpair_D356.first = VEncodePointer(&_V10_Dpair_D354, VPOINTER_PAIR);
  _V10_Dpair_D356.rest = VEncodePointer(&_V10_Dpair_D355, VPOINTER_PAIR);
  _V10_Dpair_D355.first = VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR);
  _V10_Dpair_D355.rest = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D354.first = _V0loop_D12;
  _V10_Dpair_D354.rest = VNULL;
  _V10_Dpair_D353.first = VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR);
  _V10_Dpair_D353.rest = VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR);
  _V10_Dpair_D352.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D352.rest = VNULL;
  _V10_Dpair_D351.first = _V0_Mk;
  _V10_Dpair_D351.rest = VEncodePointer(&_V10_Dpair_D321, VPOINTER_PAIR);
  _V10_Dpair_D350.first = _V0vanity;
  _V10_Dpair_D350.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D349.first = _V0compiler;
  _V10_Dpair_D349.rest = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D348.first = _V0utils;
  _V10_Dpair_D348.rest = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D347.first = _V0strrchr;
  _V10_Dpair_D347.rest = VEncodePointer(&_V10_Dpair_D346, VPOINTER_PAIR);
  _V10_Dpair_D346.first = _V10_Dloop_D12_D74;
  _V10_Dpair_D346.rest = VNULL;
  _V10_Dpair_D345.first = VEncodePointer(&_V10_Dpair_D342, VPOINTER_PAIR);
  _V10_Dpair_D345.rest = VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR);
  _V10_Dpair_D344.first = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D344.rest = VNULL;
  _V10_Dpair_D343.first = VEncodePointer(&_V10_Dpair_D336, VPOINTER_PAIR);
  _V10_Dpair_D343.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D342.first = VEncodeBool(false);
  _V10_Dpair_D342.rest = VEncodePointer(&_V10_Dpair_D341, VPOINTER_PAIR);
  _V10_Dpair_D341.first = VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR);
  _V10_Dpair_D341.rest = VNULL;
  _V10_Dpair_D340.first = _V0finalize_D13;
  _V10_Dpair_D340.rest = VNULL;
  _V10_Dpair_D339.first = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D339.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D338.first = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D338.rest = VEncodePointer(&_V10_Dpair_D337, VPOINTER_PAIR);
  _V10_Dpair_D337.first = VEncodePointer(&_V10_Dpair_D336, VPOINTER_PAIR);
  _V10_Dpair_D337.rest = VNULL;
  _V10_Dpair_D336.first = _V0_Mk;
  _V10_Dpair_D336.rest = VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR);
  _V10_Dpair_D335.first = _V0str;
  _V10_Dpair_D335.rest = VEncodePointer(&_V10_Dpair_D334, VPOINTER_PAIR);
  _V10_Dpair_D334.first = _V0chr;
  _V10_Dpair_D334.rest = VNULL;
  _V10_Dpair_D333.first = _V0vanity;
  _V10_Dpair_D333.rest = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D332.first = _V0compiler;
  _V10_Dpair_D332.rest = VEncodePointer(&_V10_Dpair_D331, VPOINTER_PAIR);
  _V10_Dpair_D331.first = _V0utils;
  _V10_Dpair_D331.rest = VEncodePointer(&_V10_Dpair_D330, VPOINTER_PAIR);
  _V10_Dpair_D330.first = _V0strrchr;
  _V10_Dpair_D330.rest = VNULL;
  _V10_Dpair_D329.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D329.rest = VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR);
  _V10_Dpair_D328.first = VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR);
  _V10_Dpair_D328.rest = VNULL;
  _V10_Dpair_D327.first = VEncodePointer(&_V10_Dpair_D321, VPOINTER_PAIR);
  _V10_Dpair_D327.rest = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D326.first = VEncodePointer(&_V10_Dpair_D323, VPOINTER_PAIR);
  _V10_Dpair_D326.rest = VEncodePointer(&_V10_Dpair_D325, VPOINTER_PAIR);
  _V10_Dpair_D325.first = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D325.rest = VNULL;
  _V10_Dpair_D324.first = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D324.rest = VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR);
  _V10_Dpair_D323.first = VEncodeBool(false);
  _V10_Dpair_D323.rest = VEncodePointer(&_V10_Dpair_D322, VPOINTER_PAIR);
  _V10_Dpair_D322.first = VEncodePointer(&_V10_Dpair_D321, VPOINTER_PAIR);
  _V10_Dpair_D322.rest = VNULL;
  _V10_Dpair_D321.first = _V0i;
  _V10_Dpair_D321.rest = VNULL;
  _V10_Dpair_D320.first = VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR);
  _V10_Dpair_D320.rest = VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR);
  _V10_Dpair_D319.first = VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR);
  _V10_Dpair_D319.rest = VNULL;
  _V10_Dpair_D318.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D318.rest = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D317.first = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D317.rest = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D316.first = VEncodeBool(false);
  _V10_Dpair_D316.rest = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D315.first = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D315.rest = VNULL;
  _V10_Dpair_D313.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D313.rest = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D312.first = VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR);
  _V10_Dpair_D312.rest = VNULL;
  _V10_Dpair_D311.first = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D311.rest = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D310.first = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D310.rest = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D309.first = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D309.rest = VNULL;
  _V10_Dpair_D308.first = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D308.rest = VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR);
  _V10_Dpair_D307.first = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D307.rest = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D306.first = _V0_Mx;
  _V10_Dpair_D306.rest = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D305.first = _V0_Mp;
  _V10_Dpair_D305.rest = VNULL;
  _V10_Dpair_D304.first = VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR);
  _V10_Dpair_D304.rest = VEncodePointer(&_V10_Dpair_D303, VPOINTER_PAIR);
  _V10_Dpair_D303.first = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D303.rest = VNULL;
  _V10_Dpair_D302.first = VEncodePointer(&_V10_Dpair_D278, VPOINTER_PAIR);
  _V10_Dpair_D302.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D301.first = VEncodeBool(false);
  _V10_Dpair_D301.rest = VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR);
  _V10_Dpair_D300.first = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D300.rest = VNULL;
  _V10_Dpair_D299.first = _V0str;
  _V10_Dpair_D299.rest = VNULL;
  _V10_Dpair_D298.first = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D298.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D297.first = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D297.rest = VNULL;
  _V10_Dpair_D296.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D296.rest = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D295.first = VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR);
  _V10_Dpair_D295.rest = VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR);
  _V10_Dpair_D294.first = _V0ungensym;
  _V10_Dpair_D294.rest = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D293.first = _V0strrchr;
  _V10_Dpair_D293.rest = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D292.first = _V0strchr;
  _V10_Dpair_D292.rest = VEncodePointer(&_V10_Dpair_D291, VPOINTER_PAIR);
  _V10_Dpair_D291.first = _V0get__feature__list;
  _V10_Dpair_D291.rest = VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR);
  _V10_Dpair_D290.first = _V0set__feature__list_B;
  _V10_Dpair_D290.rest = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D289.first = _V0feature__list;
  _V10_Dpair_D289.rest = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D288.first = _V0gensym;
  _V10_Dpair_D288.rest = VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR);
  _V10_Dpair_D287.first = _V0gcc__path;
  _V10_Dpair_D287.rest = VEncodePointer(&_V10_Dpair_D286, VPOINTER_PAIR);
  _V10_Dpair_D286.first = _V0filter;
  _V10_Dpair_D286.rest = VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR);
  _V10_Dpair_D285.first = _V0compiler__warning;
  _V10_Dpair_D285.rest = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D284.first = _V0compiler__error;
  _V10_Dpair_D284.rest = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D283.first = _V0search__open__input__file;
  _V10_Dpair_D283.rest = VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR);
  _V10_Dpair_D282.first = _V0resolve__file__path;
  _V10_Dpair_D282.rest = VEncodePointer(&_V10_Dpair_D281, VPOINTER_PAIR);
  _V10_Dpair_D281.first = _V0read__all;
  _V10_Dpair_D281.rest = VNULL;
  _V10_Dpair_D280.first = VEncodePointer(&_V10_Dpair_D276, VPOINTER_PAIR);
  _V10_Dpair_D280.rest = VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR);
  _V10_Dpair_D279.first = VEncodePointer(&_V10_Dpair_D278, VPOINTER_PAIR);
  _V10_Dpair_D279.rest = VNULL;
  _V10_Dpair_D278.first = _V0_Mk;
  _V10_Dpair_D278.rest = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D277.first = _V0sym;
  _V10_Dpair_D277.rest = VNULL;
  _V10_Dpair_D276.first = _V0vanity;
  _V10_Dpair_D276.rest = VEncodePointer(&_V10_Dpair_D275, VPOINTER_PAIR);
  _V10_Dpair_D275.first = _V0compiler;
  _V10_Dpair_D275.rest = VEncodePointer(&_V10_Dpair_D274, VPOINTER_PAIR);
  _V10_Dpair_D274.first = _V0utils;
  _V10_Dpair_D274.rest = VEncodePointer(&_V10_Dpair_D273, VPOINTER_PAIR);
  _V10_Dpair_D273.first = _V0ungensym;
  _V10_Dpair_D273.rest = VNULL;
  _V10_Dpair_D272.first = VEncodePointer(&_V10_Dpair_D269, VPOINTER_PAIR);
  _V10_Dpair_D272.rest = VEncodePointer(&_V10_Dpair_D271, VPOINTER_PAIR);
  _V10_Dpair_D271.first = VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR);
  _V10_Dpair_D271.rest = VNULL;
  _V10_Dpair_D270.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D270.rest = VEncodePointer(&_V10_Dpair_D253, VPOINTER_PAIR);
  _V10_Dpair_D269.first = VEncodeBool(false);
  _V10_Dpair_D269.rest = VEncodePointer(&_V10_Dpair_D268, VPOINTER_PAIR);
  _V10_Dpair_D268.first = VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR);
  _V10_Dpair_D268.rest = VNULL;
  _V10_Dpair_D267.first = _V0newline;
  _V10_Dpair_D267.rest = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D266.first = _V0current__error__port;
  _V10_Dpair_D266.rest = VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR);
  _V10_Dpair_D265.first = _V0display;
  _V10_Dpair_D265.rest = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D264.first = _V0write;
  _V10_Dpair_D264.rest = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D263.first = _V0for__each;
  _V10_Dpair_D263.rest = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D262.first = _V0format;
  _V10_Dpair_D262.rest = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D261.first = _V0open__input__file;
  _V10_Dpair_D261.rest = VEncodePointer(&_V10_Dpair_D260, VPOINTER_PAIR);
  _V10_Dpair_D260.first = _V0string__append;
  _V10_Dpair_D260.rest = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D259.first = _V0file__exists_Q;
  _V10_Dpair_D259.rest = VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR);
  _V10_Dpair_D258.first = _V0read;
  _V10_Dpair_D258.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D257.first = _V0sprintf;
  _V10_Dpair_D257.rest = VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR);
  _V10_Dpair_D256.first = _V0platform;
  _V10_Dpair_D256.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D255.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D255.rest = VEncodePointer(&_V10_Dpair_D254, VPOINTER_PAIR);
  _V10_Dpair_D254.first = VEncodePointer(&_V10_Dpair_D253, VPOINTER_PAIR);
  _V10_Dpair_D254.rest = VNULL;
  _V10_Dpair_D253.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D253.rest = VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR);
  _V10_Dpair_D252.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D252.rest = VEncodePointer(&_V10_Dpair_D251, VPOINTER_PAIR);
  _V10_Dpair_D251.first = VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR);
  _V10_Dpair_D251.rest = VNULL;
  _V10_Dpair_D250.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D250.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D249.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D249.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D248.first = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D248.rest = VNULL;
  _V10_Dpair_D247.first = VEncodeBool(false);
  _V10_Dpair_D247.rest = VEncodePointer(&_V10_Dpair_D246, VPOINTER_PAIR);
  _V10_Dpair_D246.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D246.rest = VNULL;
  _V10_Dpair_D245.first = _V0_Mx;
  _V10_Dpair_D245.rest = VNULL;
  _V10_Dpair_D244.first = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D244.rest = VEncodePointer(&_V10_Dpair_D243, VPOINTER_PAIR);
  _V10_Dpair_D243.first = VNULL;
  _V10_Dpair_D243.rest = VNULL;
  _V10_Dpair_D242.first = VEncodeBool(false);
  _V10_Dpair_D242.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D241.first = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D241.rest = VNULL;
  _V10_Dpair_D240.first = _V0_Mk;
  _V10_Dpair_D240.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6, VEncodePointer(&_V10_Dpair_D313, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5, VEncodePointer(&_V10_Dpair_D310, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10, VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9, VEncodePointer(&_V10_Dpair_D326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8, VEncodePointer(&_V10_Dpair_D320, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7, VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4, VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym, VEncodePointer(&_V10_Dpair_D298, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74, VEncodePointer(&_V10_Dpair_D358, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3, VEncodePointer(&_V10_Dpair_D345, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73, VEncodePointer(&_V10_Dpair_D365, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr, VEncodePointer(&_V10_Dpair_D339, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81, VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4, VEncodePointer(&_V10_Dpair_D378, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80, VEncodePointer(&_V10_Dpair_D396, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr, VEncodePointer(&_V10_Dpair_D371, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0get__feature__list, VEncodePointer(&_V10_Dpair_D402, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, VEncodePointer(&_V10_Dpair_D411, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k12, VEncodePointer(&_V10_Dpair_D430, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k11, VEncodePointer(&_V10_Dpair_D425, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, VEncodePointer(&_V10_Dpair_D420, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16, VEncodePointer(&_V10_Dpair_D454, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k15, VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19, VEncodePointer(&_V10_Dpair_D465, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k18, VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17, VEncodePointer(&_V10_Dpair_D462, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5, VEncodePointer(&_V10_Dpair_D459, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k14, VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13, VEncodePointer(&_V10_Dpair_D445, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, VEncodePointer(&_V10_Dpair_D439, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20, VEncodePointer(&_V10_Dpair_D445, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error, VEncodePointer(&_V10_Dpair_D473, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22, VEncodePointer(&_V10_Dpair_D507, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21, VEncodePointer(&_V10_Dpair_D501, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94, VEncodePointer(&_V10_Dpair_D496, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, VEncodePointer(&_V10_Dpair_D483, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24, VEncodePointer(&_V10_Dpair_D528, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23, VEncodePointer(&_V10_Dpair_D525, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99, VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, VEncodePointer(&_V10_Dpair_D514, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26, VEncodePointer(&_V10_Dpair_D546, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25, VEncodePointer(&_V10_Dpair_D542, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all, VEncodePointer(&_V10_Dpair_D536, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k29, VEncodePointer(&_V10_Dpair_D555, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k28, VEncodePointer(&_V10_Dpair_D552, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k27, VEncodePointer(&_V10_Dpair_D549, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k32, VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k31, VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k30, VEncodePointer(&_V10_Dpair_D560, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k3, VEncodePointer(&_V10_Dpair_D255, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k2, VEncodePointer(&_V10_Dpair_D252, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k1, VEncodePointer(&_V10_Dpair_D249, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D244, VPOINTER_PAIR));
}
