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

VEnv * _V60_V0vanity_V0compiler_V0getopt;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D596 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D595 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static VPair _V10_Dpair_D594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D593 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D592 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D587 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "-" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D586 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "--" };
static VPair _V10_Dpair_D585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D580 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D579 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D573 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D571 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D570 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static VPair _V10_Dpair_D569 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D568 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V10_Diter_D38;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Diter_D38 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.iter.38" };
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
static VPair _V10_Dpair_D529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ass;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ass = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ass" };
static VPair _V10_Dpair_D501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0val;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "val" };
static VPair _V10_Dpair_D492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static VPair _V10_Dpair_D484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D50;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D50 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.50" };
static VPair _V10_Dpair_D468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V10_Dgetopt__long_D37;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10_Dgetopt__long_D37 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##.getopt-long.37" };
static VPair _V10_Dpair_D455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0mem;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0mem = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "mem" };
static VPair _V10_Dpair_D406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0len;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0len = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "len" };
VWEAK VWORD _V0arg;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0arg = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "arg" };
static VPair _V10_Dpair_D399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D398 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D395 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D44;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D44 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.44" };
static VPair _V10_Dpair_D388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dgetopt__short_D36;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10_Dgetopt__short_D36 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##.getopt-short.36" };
static VPair _V10_Dpair_D377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0iter;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iter" };
VWEAK VWORD _V0getopt__long;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0getopt__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "getopt-long" };
VWEAK VWORD _V0getopt__short;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0getopt__short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "getopt-short" };
VWEAK VWORD _V0opts;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0opts = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "opts" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0decode__longopt;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0decode__longopt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "decode-longopt" };
static VPair _V10_Dpair_D340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0longopt;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0longopt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "longopt" };
static VPair _V10_Dpair_D336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Ddecode__longopt_D33;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10_Ddecode__longopt_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##.decode-longopt.33" };
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
static VPair _V10_Dpair_D320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0longopts;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0longopts = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "longopts" };
VWEAK VWORD _V0args;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0args = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "args" };
VWEAK VWORD _V0optstring;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0optstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "optstring" };
static VPair _V10_Dpair_D318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0getopt;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0getopt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "getopt" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
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
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt, _var0, _var1, _var2, _var3);
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.33) #f (bruijn ##.decode-longopt.33 3 0) (bruijn ##.%k.60 2 0) (bruijn ##.%x.62 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.196 ##.%x.197) ((##vcore.cdr (bruijn ##.longopt.39 5 1)) (##vcore.cons (bruijn ##.%x.65 1 0) (bruijn ##.%x.196 0 0))) (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.33) #f (bruijn ##.decode-longopt.33 6 0) (bruijn ##.%k.60 5 0) (bruijn ##.%x.197 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.8 11 7) (bruijn ##.%k.60 6 0) (bruijn ##.%x.201 1 0) #f (bruijn ##.%x.71 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 4,
      VGetArg(statics, 6-1, 0),
      statics->vars[0],
      VEncodeBool(false),
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.8 15 7) (bruijn ##.%k.60 10 0) (bruijn ##.%x.204 3 0) (bruijn ##.%x.75 2 0) (bruijn ##.%x.76 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 4,
      VGetArg(statics, 10-1, 0),
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.205) ((##vcore.car (bruijn ##.longopt.39 9 1))) (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9) (bruijn ##.%x.205 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.203) ((##vcore.null? (bruijn ##.%x.78 1 0))) (if (bruijn ##.%p.203 0 0) (basic-block 1 1 (##.%x.204) ((##vcore.car (bruijn ##.longopt.39 7 1))) ((bruijn ##.cadr.9 12 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8) (bruijn ##.longopt.39 7 1))) ((bruijn ##.%k.60 6 0) (bruijn ##.longopt.39 6 1))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 6-1, 1));
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.192) ((##vcore.symbol? (bruijn ##.longopt.39 1 1))) (if (bruijn ##.%p.192 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4) (bruijn ##.longopt.39 1 1)) (basic-block 2 2 (##.%x.193 ##.%p.194) ((##vcore.car (bruijn ##.longopt.39 2 1)) (##vcore.symbol? (bruijn ##.%x.193 0 0))) (if (bruijn ##.%p.194 0 1) (basic-block 1 1 (##.%x.195) ((##vcore.car (bruijn ##.longopt.39 3 1))) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5) (bruijn ##.%x.195 0 0))) (basic-block 1 1 (##.%p.198) ((##vcore.string? (bruijn ##.longopt.39 3 1))) (if (bruijn ##.%p.198 0 0) ((bruijn ##.list.8 8 7) (bruijn ##.%k.60 3 0) (bruijn ##.longopt.39 3 1) #f (bruijn ##.longopt.39 3 1)) (basic-block 2 2 (##.%x.199 ##.%p.200) ((##vcore.cdr (bruijn ##.longopt.39 4 1)) (##vcore.null? (bruijn ##.%x.199 0 0))) (if (bruijn ##.%p.200 0 1) (basic-block 2 2 (##.%x.201 ##.%x.202) ((##vcore.car (bruijn ##.longopt.39 5 1)) (##vcore.car (bruijn ##.longopt.39 5 1))) (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6) (bruijn ##.%x.202 0 1))) ((bruijn ##.cddr.10 9 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7) (bruijn ##.longopt.39 4 1))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4, self)))),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5, self)))),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 7)), 4,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VEncodeBool(false),
      statics->up->up->vars[1]);
} else {
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6, self)))),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7, self)))),
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.213) ((##vcore.cons (bruijn ##.%x.211 2 0) (bruijn ##.%x.87 1 0))) ((bruijn ##.%k.83 8 0) (bruijn ##.%r.213 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.211 ##.%x.212) ((##vcore.cons #\? (bruijn ##.%x.89 1 0)) (##vcore.cdr (bruijn ##.args.40 9 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 10 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12) (bruijn ##.%x.212 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar('?'),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.237) ((##vcore.eq? (bruijn ##.%x.117 1 0) #\:)) ((bruijn ##.%k.116 2 0) (bruijn ##.%r.237 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VEncodeChar(':'));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.215 1 1) ((bruijn ##.cadr.9 14 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14) (bruijn ##.mem.46 3 0)) ((bruijn ##.%k.116 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14, self)))),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.220) ((##vcore.cons (bruijn ##.%x.218 2 1) (bruijn ##.%x.92 1 0))) ((bruijn ##.%k.83 10 0) (bruijn ##.%r.220 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.228) ((##vcore.cons (bruijn ##.%x.226 2 0) (bruijn ##.%x.97 1 0))) ((bruijn ##.%k.83 13 0) (bruijn ##.%r.228 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.226 ##.%x.227) ((##vcore.cons (bruijn ##.%x.224 2 0) (bruijn ##.%x.100 1 0)) (##vcore.cdr (bruijn ##.args.40 14 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 15 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18) (bruijn ##.%x.227 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.236) ((##vcore.cons (bruijn ##.%x.235 3 0) (bruijn ##.%x.106 1 0))) ((bruijn ##.%k.83 15 0) (bruijn ##.%r.236 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 17 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21) (bruijn ##.%x.107 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.235) ((##vcore.cons (bruijn ##.%x.234 2 0) (bruijn ##.%x.109 1 0))) ((bruijn ##.cddr.10 20 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20) (bruijn ##.args.40 15 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20, self)))),
      VGetArg(statics, 15-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.216) ((##vcore.not (bruijn ##.%x.114 1 0))) (if (bruijn ##.%p.216 0 0) (basic-block 3 3 (##.%x.217 ##.%x.218 ##.%x.219) ((##vcore.car (bruijn ##.mem.46 5 0)) (##vcore.cons (bruijn ##.%x.217 0 0) #f) (##vcore.+ (bruijn ##.i.45 8 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36 ##.loop.44) #f (bruijn ##.loop.44 9 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16) (bruijn ##.%x.219 0 2))) (basic-block 3 3 (##.%x.221 ##.%x.222 ##.%p.223) ((##vcore.+ (bruijn ##.i.45 8 1) 1) (##vcore.= (bruijn ##.len.207 10 1) (bruijn ##.%x.221 0 0)) (##vcore.not (bruijn ##.%x.222 0 1))) (if (bruijn ##.%p.223 0 2) (basic-block 2 2 (##.%x.224 ##.%x.225) ((##vcore.car (bruijn ##.mem.46 6 0)) (##vcore.+ (bruijn ##.i.45 9 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17) (bruijn ##.arg.206 11 0) (bruijn ##.%x.225 0 1))) (basic-block 3 3 (##.%x.229 ##.%x.230 ##.%p.231) ((##vcore.cdr (bruijn ##.args.40 12 1)) (##vcore.pair? (bruijn ##.%x.229 0 0)) (##vcore.not (bruijn ##.%x.230 0 1))) (if (bruijn ##.%p.231 0 2) (basic-block 2 2 (##.%x.232 ##.%x.233) ((##vcore.car (bruijn ##.mem.46 7 0)) (##vcore.cons #\: (bruijn ##.%x.232 0 0))) ((bruijn ##.list.8 18 7) (bruijn ##.%k.83 10 0) (bruijn ##.%x.233 0 1))) (basic-block 1 1 (##.%x.234) ((##vcore.car (bruijn ##.mem.46 7 0))) ((bruijn ##.cadr.9 18 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19) (bruijn ##.args.40 13 1)))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VEncodeBool(false));
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      self->vars[0]);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17, self)))),
      VGetArg(statics, 11-1, 0),
      self->vars[1]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar(':'),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 7)), 2,
      VGetArg(statics, 10-1, 0),
      self->vars[1]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19, self)))),
      VGetArg(statics, 13-1, 1));
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.210) ((##vcore.not (bruijn ##.mem.46 1 0))) (if (bruijn ##.%p.210 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11) (bruijn ##.arg.206 6 0) (bruijn ##.i.45 4 1)) (basic-block 2 2 (##.%x.214 ##.%p.215) ((##vcore.cdr (bruijn ##.mem.46 2 0)) (##vcore.pair? (bruijn ##.%x.214 0 0))) ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11, self)))),
      VGetArg(statics, 6-1, 0),
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.208) ((##vcore.< (bruijn ##.i.45 1 1) (bruijn ##.len.207 3 1))) (if (bruijn ##.%p.208 0 0) (basic-block 1 1 (##.%x.209) ((##vcore.string-ref (bruijn ##.arg.206 4 0) (bruijn ##.i.45 2 1))) ((bruijn ##.memq.6 10 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10) (bruijn ##.%x.209 0 0) (bruijn ##.opts.41 5 2))) (basic-block 1 1 (##.%x.238) ((##vcore.cdr (bruijn ##.args.40 5 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 6 5) (bruijn ##.%k.83 2 0) (bruijn ##.%x.238 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10, self)))),
      self->vars[0],
      VGetArg(statics, 5-1, 2));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.arg.206 ##.len.207) ((##vcore.car (bruijn ##.args.40 1 1)) (##vcore.string-length (bruijn ##.arg.206 0 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44")) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36 ##.loop.44) #f (bruijn ##.loop.44 0 0) (bruijn ##.%k.82 2 0) 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 11 4) (bruijn ##.%k.123 2 0) (bruijn ##.%x.125 0 0) (##string ##.string.485))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D485.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 14 4) (bruijn ##.%k.123 5 0) (bruijn ##.%x.127 2 0) (bruijn ##.%x.128 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.244) ((##vcore.+ (bruijn ##.i.51 4 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24) (bruijn ##.arg.239 6 0) (bruijn ##.%x.244 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24, self)))),
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.241) ((##vcore.= (bruijn ##.i.51 1 1) (bruijn ##.len.240 3 1))) (if (bruijn ##.%p.241 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22) (bruijn ##.arg.239 3 0) 0 (bruijn ##.i.51 1 1)) (basic-block 2 2 (##.%x.242 ##.%p.243) ((##vcore.string-ref (bruijn ##.arg.239 4 0) (bruijn ##.i.51 2 1)) (##vcore.eq? (bruijn ##.%x.242 0 0) #\=)) (if (bruijn ##.%p.243 0 1) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23) (bruijn ##.arg.239 4 0) 0 (bruijn ##.i.51 2 1)) (basic-block 1 1 (##.%x.245) ((##vcore.+ (bruijn ##.i.51 3 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37 ##.loop.50) #f (bruijn ##.loop.50 4 0) (bruijn ##.%k.123 3 0) (bruijn ##.%x.245 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22, self)))),
      statics->up->up->vars[0],
      VEncodeInt(0l),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VEncodeChar('='));
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23, self)))),
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
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
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.arg.239 ##.len.240) ((##vcore.car (bruijn ##.args.47 2 1)) (##vcore.string-length (bruijn ##.arg.239 0 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50")) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37 ##.loop.50) #f (bruijn ##.loop.50 0 0) (bruijn ##.%k.122 2 0) 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(2l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.249) ((##vcore.cons (bruijn ##.%x.247 2 0) (bruijn ##.%x.135 1 0))) ((bruijn ##.%k.132 7 0) (bruijn ##.%r.249 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.247 ##.%x.248) ((##vcore.cons #\? (bruijn ##.%x.137 1 0)) (##vcore.cdr (bruijn ##.args.47 6 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 7 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28) (bruijn ##.%x.248 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar('?'),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.253) ((##vcore.cons (bruijn ##.%x.251 2 0) (bruijn ##.%x.140 1 0))) ((bruijn ##.%k.132 9 0) (bruijn ##.%r.253 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.251 ##.%x.252) ((##vcore.cons (bruijn ##.%x.142 1 0) #f) (##vcore.cdr (bruijn ##.args.47 8 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 9 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31) (bruijn ##.%x.252 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VEncodeBool(false));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.257) ((##vcore.cons (bruijn ##.%x.255 2 0) (bruijn ##.%x.145 1 0))) ((bruijn ##.%k.132 11 0) (bruijn ##.%r.257 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.255 ##.%x.256) ((##vcore.cons (bruijn ##.%x.147 1 0) (bruijn ##.val.53 9 2)) (##vcore.cdr (bruijn ##.args.47 10 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 11 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34) (bruijn ##.%x.256 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.261) ((##vcore.cons (bruijn ##.%x.260 3 0) (bruijn ##.%x.150 1 0))) ((bruijn ##.%k.132 14 0) (bruijn ##.%r.261 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 14 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38) (bruijn ##.%x.151 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.260) ((##vcore.cons (bruijn ##.%x.152 2 0) (bruijn ##.%x.153 1 0))) ((bruijn ##.cddr.10 17 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37) (bruijn ##.args.47 12 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37, self)))),
      VGetArg(statics, 12-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.9 15 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36) (bruijn ##.args.47 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.262) ((##vcore.cons #\: (bruijn ##.%x.155 1 0))) ((bruijn ##.list.8 16 7) (bruijn ##.%k.132 10 0) (bruijn ##.%x.262 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar(':'),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.254) ((##vcore.not (bruijn ##.%x.157 1 0))) (if (bruijn ##.%p.254 0 0) ((bruijn ##.caddr.4 13 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33) (bruijn ##.ass.54 5 0)) (basic-block 2 2 (##.%x.258 ##.%p.259) ((##vcore.cdr (bruijn ##.args.47 9 1)) (##vcore.pair? (bruijn ##.%x.258 0 0))) (if (bruijn ##.%p.259 0 1) ((bruijn ##.caddr.4 14 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35) (bruijn ##.ass.54 6 0)) ((bruijn ##.caddr.4 14 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39) (bruijn ##.ass.54 6 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33, self)))),
      VGetArg(statics, 5-1, 0));
} else {
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35, self)))),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39, self)))),
      VGetArg(statics, 6-1, 0));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.250) ((##vcore.not (bruijn ##.%x.158 1 0))) (if (bruijn ##.%p.250 0 0) ((bruijn ##.caddr.4 11 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30) (bruijn ##.ass.54 3 0)) ((bruijn ##.equal?.3 11 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32) (bruijn ##.val.53 5 2) (##string ##.string.485))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30, self)))),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32, self)))),
      VGetArg(statics, 5-1, 2),
      VEncodePointer(&_V10_Dstring_D485.sym, VPOINTER_OTHER));
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.246) ((##vcore.not (bruijn ##.ass.54 1 0))) (if (bruijn ##.%p.246 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27) (bruijn ##.arg.52 3 1) 2) ((bruijn ##.cadr.9 9 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29) (bruijn ##.ass.54 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27, self)))),
      statics->up->up->vars[1],
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29, self)))),
      statics->vars[0]);
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.2 7 1) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26) (bruijn ##.%x.159 0 0) (bruijn ##.longs.34 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25) (bruijn ##.arg.52 0 1) 2)
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25, self)))),
      _var1,
      VEncodeInt(2l));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.%k.121 0 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.182 1 0) ((bruijn ##.%k.183 0 0) (bruijn ##.%p.182 1 0)) (basic-block 3 3 (##.%x.281 ##.%x.282 ##.%r.283) ((##vcore.car (bruijn ##.args.55 5 1)) (##vcore.string-length (bruijn ##.%x.281 0 0)) (##vcore.< (bruijn ##.%x.282 0 1) 2)) ((bruijn ##.%k.183 1 0) (bruijn ##.%r.283 0 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCmpLt(runtime, NULL,
      self->vars[1],
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.268) ((##vcore.cons (bruijn ##.%x.266 2 1) (bruijn ##.%x.164 1 0))) ((bruijn ##.%k.160 7 0) (bruijn ##.%r.268 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%r.274) ((##vcore.cons #f (bruijn ##.e.56 1 1))) ((bruijn ##.%k.169 1 0) (bruijn ##.%r.274 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.280) ((##vcore.cons (bruijn ##.%x.278 2 1) (bruijn ##.%x.175 1 0))) ((bruijn ##.%k.160 12 0) (bruijn ##.%r.280 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.173 0 0) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36) #f (bruijn ##.getopt-short.36 10 3) (bruijn ##.%k.160 9 0) (bruijn ##.args.55 9 1) (bruijn ##.opts.35 10 2)) (basic-block 3 3 (##.%x.277 ##.%x.278 ##.%x.279) ((##vcore.car (bruijn ##.args.55 10 1)) (##vcore.cons #t (bruijn ##.%x.277 0 0)) (##vcore.cdr (bruijn ##.args.55 10 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 11 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47) (bruijn ##.%x.279 0 2))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.167 0 0) (basic-block 3 3 (##.%x.270 ##.%x.271 ##.%p.272) ((##vcore.car (bruijn ##.args.55 8 1)) (##vcore.string-length (bruijn ##.%x.270 0 0)) (##vcore.= (bruijn ##.%x.271 0 1) 2)) (if (bruijn ##.%p.272 0 2) (basic-block 1 1 (##.%x.273) ((##vcore.cdr (bruijn ##.args.55 9 1))) ((bruijn ##.map.1 14 0) (bruijn ##.%k.160 9 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5) (bruijn ##.%x.273 0 0))) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37) #f (bruijn ##.getopt-long.37 9 4) (bruijn ##.%k.160 8 0) (bruijn ##.args.55 8 1)))) (basic-block 2 2 (##.%x.275 ##.%x.276) ((##vcore.car (bruijn ##.args.55 8 1)) (##vcore.string-ref (bruijn ##.%x.275 0 0) 0)) ((bruijn ##.equal?.3 13 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46) (bruijn ##.%x.276 0 1) #\-)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[1],
      VEncodeInt(2l));
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5, self)))),
      self->vars[0]);
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VStringRef2(runtime, NULL,
      self->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46, self)))),
      self->vars[1],
      VEncodeChar('-'));
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.3 11 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45) (bruijn ##.%x.180 0 0) (##string ##.string.586))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D586.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.162 0 0) (basic-block 3 3 (##.%x.265 ##.%x.266 ##.%x.267) ((##vcore.car (bruijn ##.args.55 5 1)) (##vcore.cons #t (bruijn ##.%x.265 0 0)) (##vcore.cdr (bruijn ##.args.55 5 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 6 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43) (bruijn ##.%x.267 0 2))) (basic-block 1 1 (##.%x.269) ((##vcore.car (bruijn ##.args.55 5 1))) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44) (bruijn ##.%x.269 0 0) 0 2)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44, self)))),
      self->vars[0],
      VEncodeInt(0l),
      VEncodeInt(2l));
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42, self)))));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.263) ((##vcore.null? (bruijn ##.args.55 1 1))) (if (bruijn ##.%p.263 0 0) ((bruijn ##.%k.160 1 0) '()) (basic-block 1 1 (##.%x.264) ((##vcore.car (bruijn ##.args.55 2 1))) ((bruijn ##.equal?.3 7 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40) (bruijn ##.%x.264 0 0) (##string ##.string.587)))))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D587.sym, VPOINTER_OTHER));
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.284) ((##vcore.cdr (bruijn ##.args.31 4 2))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 2 5) (bruijn ##.%k.59 4 0) (bruijn ##.%x.284 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[5]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k49) (bruijn ##.longs.34 1 1) (bruijn ##.%x.188 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k49, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33") #f (bruijn ##.%x.81 1 0) (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38")) ((bruijn ##.map.1 4 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48) (bruijn ##.decode-longopt.33 0 0) (bruijn ##.longopts.32 2 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, self))));
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = statics->vars[0];
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48, self)))),
      self->vars[0],
      statics->up->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt, got ~D~N"
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
  // ((bruijn ##.string->list.7 2 6) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3) (bruijn ##.optstring.30 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 10) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0lambda2, got ~D~N"
  "-- expected 10~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[10]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 10, 10, statics);
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
  // (##letrec (vanity compiler getopt) 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt" (vanity compiler getopt))) (basic-block 2 2 (##.%x.285 ##.%r.286) ((##vcore.cons 'getopt (bruijn ##.getopt.29 1 0)) (##vcore.cons (bruijn ##.%x.285 0 0) '())) ((bruijn ##.%k.58 5 0) (bruijn ##.%r.286 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0getopt = self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt, _V60_V0vanity_V0compiler_V0getopt))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0getopt_V20", &_V60_V0vanity_V0compiler_V0getopt);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0getopt,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0getopt_V20_V0lambda2) (##string ##.string.595) (bruijn ##.%x.190 0 0) 'map 'assoc 'equal? 'caddr 'values 'memq 'string->list 'list 'cadr 'cddr)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 13,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D595.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0assoc,
      _V0equal_Q,
      _V0caddr,
      _V0values,
      _V0memq,
      _V0string___Glist,
      _V0list,
      _V0cadr,
      _V0cddr);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0getopt_V20_V0k2) (bruijn ##.%x.191 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0getopt_V20_V0k1) (##string ##.string.596))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D596.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0getopt_V20 = (VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V10_Diter_D38 = VEncodePointer(VInternSymbol(1748506586, &_VW_V10_Diter_D38.sym), VPOINTER_OTHER);
  _V0ass = VEncodePointer(VInternSymbol(-812976843, &_VW_V0ass.sym), VPOINTER_OTHER);
  _V0val = VEncodePointer(VInternSymbol(-1280639451, &_VW_V0val.sym), VPOINTER_OTHER);
  _V10_Dloop_D50 = VEncodePointer(VInternSymbol(-1152321234, &_VW_V10_Dloop_D50.sym), VPOINTER_OTHER);
  _V10_Dgetopt__long_D37 = VEncodePointer(VInternSymbol(1154119687, &_VW_V10_Dgetopt__long_D37.sym), VPOINTER_OTHER);
  _V0mem = VEncodePointer(VInternSymbol(-493886443, &_VW_V0mem.sym), VPOINTER_OTHER);
  _V0len = VEncodePointer(VInternSymbol(-191740809, &_VW_V0len.sym), VPOINTER_OTHER);
  _V0arg = VEncodePointer(VInternSymbol(167277433, &_VW_V0arg.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D44 = VEncodePointer(VInternSymbol(1911546403, &_VW_V10_Dloop_D44.sym), VPOINTER_OTHER);
  _V10_Dgetopt__short_D36 = VEncodePointer(VInternSymbol(-783413962, &_VW_V10_Dgetopt__short_D36.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0iter = VEncodePointer(VInternSymbol(1664138977, &_VW_V0iter.sym), VPOINTER_OTHER);
  _V0getopt__long = VEncodePointer(VInternSymbol(702087837, &_VW_V0getopt__long.sym), VPOINTER_OTHER);
  _V0getopt__short = VEncodePointer(VInternSymbol(1857624399, &_VW_V0getopt__short.sym), VPOINTER_OTHER);
  _V0opts = VEncodePointer(VInternSymbol(-2014999890, &_VW_V0opts.sym), VPOINTER_OTHER);
  _V0longs = VEncodePointer(VInternSymbol(163504664, &_VW_V0longs.sym), VPOINTER_OTHER);
  _V0decode__longopt = VEncodePointer(VInternSymbol(1268140757, &_VW_V0decode__longopt.sym), VPOINTER_OTHER);
  _V0longopt = VEncodePointer(VInternSymbol(-1799494302, &_VW_V0longopt.sym), VPOINTER_OTHER);
  _V10_Ddecode__longopt_D33 = VEncodePointer(VInternSymbol(175136026, &_VW_V10_Ddecode__longopt_D33.sym), VPOINTER_OTHER);
  _V0longopts = VEncodePointer(VInternSymbol(141862643, &_VW_V0longopts.sym), VPOINTER_OTHER);
  _V0args = VEncodePointer(VInternSymbol(-1952811398, &_VW_V0args.sym), VPOINTER_OTHER);
  _V0optstring = VEncodePointer(VInternSymbol(-1381411553, &_VW_V0optstring.sym), VPOINTER_OTHER);
  _V0getopt = VEncodePointer(VInternSymbol(1697444785, &_VW_V0getopt.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VInternSymbol(-2018065631, &_VW_V0string___Glist.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D594.first = VEncodePointer(&_V10_Dpair_D590, VPOINTER_PAIR);
  _V10_Dpair_D594.rest = VEncodePointer(&_V10_Dpair_D593, VPOINTER_PAIR);
  _V10_Dpair_D593.first = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D593.rest = VNULL;
  _V10_Dpair_D592.first = _V0unquote;
  _V10_Dpair_D592.rest = VEncodePointer(&_V10_Dpair_D591, VPOINTER_PAIR);
  _V10_Dpair_D591.first = _V0unmangled__env;
  _V10_Dpair_D591.rest = VNULL;
  _V10_Dpair_D590.first = VEncodeBool(false);
  _V10_Dpair_D590.rest = VEncodePointer(&_V10_Dpair_D589, VPOINTER_PAIR);
  _V10_Dpair_D589.first = _V0_U;
  _V10_Dpair_D589.rest = VNULL;
  _V10_Dpair_D588.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D588.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D585.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D585.rest = VEncodePointer(&_V10_Dpair_D584, VPOINTER_PAIR);
  _V10_Dpair_D584.first = VEncodePointer(&_V10_Dpair_D583, VPOINTER_PAIR);
  _V10_Dpair_D584.rest = VNULL;
  _V10_Dpair_D583.first = VEncodePointer(&_V10_Dpair_D430, VPOINTER_PAIR);
  _V10_Dpair_D583.rest = VEncodePointer(&_V10_Dpair_D582, VPOINTER_PAIR);
  _V10_Dpair_D582.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D582.rest = VEncodePointer(&_V10_Dpair_D579, VPOINTER_PAIR);
  _V10_Dpair_D581.first = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D581.rest = VEncodePointer(&_V10_Dpair_D580, VPOINTER_PAIR);
  _V10_Dpair_D580.first = VEncodePointer(&_V10_Dpair_D579, VPOINTER_PAIR);
  _V10_Dpair_D580.rest = VNULL;
  _V10_Dpair_D579.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D579.rest = VEncodePointer(&_V10_Dpair_D574, VPOINTER_PAIR);
  _V10_Dpair_D578.first = VEncodePointer(&_V10_Dpair_D573, VPOINTER_PAIR);
  _V10_Dpair_D578.rest = VEncodePointer(&_V10_Dpair_D577, VPOINTER_PAIR);
  _V10_Dpair_D577.first = VEncodePointer(&_V10_Dpair_D576, VPOINTER_PAIR);
  _V10_Dpair_D577.rest = VNULL;
  _V10_Dpair_D576.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D576.rest = VEncodePointer(&_V10_Dpair_D575, VPOINTER_PAIR);
  _V10_Dpair_D575.first = VEncodePointer(&_V10_Dpair_D436, VPOINTER_PAIR);
  _V10_Dpair_D575.rest = VEncodePointer(&_V10_Dpair_D574, VPOINTER_PAIR);
  _V10_Dpair_D574.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D574.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D573.first = VEncodeBool(false);
  _V10_Dpair_D573.rest = VEncodePointer(&_V10_Dpair_D572, VPOINTER_PAIR);
  _V10_Dpair_D572.first = VEncodePointer(&_V10_Dpair_D571, VPOINTER_PAIR);
  _V10_Dpair_D572.rest = VNULL;
  _V10_Dpair_D571.first = _V0_Mk;
  _V10_Dpair_D571.rest = VEncodePointer(&_V10_Dpair_D570, VPOINTER_PAIR);
  _V10_Dpair_D570.first = _V0e;
  _V10_Dpair_D570.rest = VNULL;
  _V10_Dpair_D569.first = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D569.rest = VEncodePointer(&_V10_Dpair_D568, VPOINTER_PAIR);
  _V10_Dpair_D568.first = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D568.rest = VNULL;
  _V10_Dpair_D567.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D567.rest = VEncodePointer(&_V10_Dpair_D564, VPOINTER_PAIR);
  _V10_Dpair_D566.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D566.rest = VEncodePointer(&_V10_Dpair_D565, VPOINTER_PAIR);
  _V10_Dpair_D565.first = VEncodePointer(&_V10_Dpair_D564, VPOINTER_PAIR);
  _V10_Dpair_D565.rest = VNULL;
  _V10_Dpair_D564.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D564.rest = VEncodePointer(&_V10_Dpair_D560, VPOINTER_PAIR);
  _V10_Dpair_D563.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D563.rest = VEncodePointer(&_V10_Dpair_D562, VPOINTER_PAIR);
  _V10_Dpair_D562.first = VEncodePointer(&_V10_Dpair_D561, VPOINTER_PAIR);
  _V10_Dpair_D562.rest = VNULL;
  _V10_Dpair_D561.first = VEncodePointer(&_V10_Dpair_D430, VPOINTER_PAIR);
  _V10_Dpair_D561.rest = VEncodePointer(&_V10_Dpair_D560, VPOINTER_PAIR);
  _V10_Dpair_D560.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D560.rest = VEncodePointer(&_V10_Dpair_D556, VPOINTER_PAIR);
  _V10_Dpair_D559.first = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D559.rest = VEncodePointer(&_V10_Dpair_D557, VPOINTER_PAIR);
  _V10_Dpair_D558.first = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D558.rest = VEncodePointer(&_V10_Dpair_D557, VPOINTER_PAIR);
  _V10_Dpair_D557.first = VEncodePointer(&_V10_Dpair_D556, VPOINTER_PAIR);
  _V10_Dpair_D557.rest = VNULL;
  _V10_Dpair_D556.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D556.rest = VEncodePointer(&_V10_Dpair_D553, VPOINTER_PAIR);
  _V10_Dpair_D555.first = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D555.rest = VEncodePointer(&_V10_Dpair_D554, VPOINTER_PAIR);
  _V10_Dpair_D554.first = VEncodePointer(&_V10_Dpair_D553, VPOINTER_PAIR);
  _V10_Dpair_D554.rest = VNULL;
  _V10_Dpair_D553.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D553.rest = VEncodePointer(&_V10_Dpair_D552, VPOINTER_PAIR);
  _V10_Dpair_D552.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D552.rest = VEncodePointer(&_V10_Dpair_D466, VPOINTER_PAIR);
  _V10_Dpair_D551.first = VEncodeBool(false);
  _V10_Dpair_D551.rest = VEncodePointer(&_V10_Dpair_D550, VPOINTER_PAIR);
  _V10_Dpair_D550.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D550.rest = VNULL;
  _V10_Dpair_D549.first = VEncodePointer(&_V10_Dpair_D548, VPOINTER_PAIR);
  _V10_Dpair_D549.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D548.first = VEncodePointer(&_V10_Dpair_D547, VPOINTER_PAIR);
  _V10_Dpair_D548.rest = VEncodePointer(&_V10_Dpair_D463, VPOINTER_PAIR);
  _V10_Dpair_D547.first = _V0vanity;
  _V10_Dpair_D547.rest = VEncodePointer(&_V10_Dpair_D546, VPOINTER_PAIR);
  _V10_Dpair_D546.first = _V0compiler;
  _V10_Dpair_D546.rest = VEncodePointer(&_V10_Dpair_D545, VPOINTER_PAIR);
  _V10_Dpair_D545.first = _V0getopt;
  _V10_Dpair_D545.rest = VEncodePointer(&_V10_Dpair_D544, VPOINTER_PAIR);
  _V10_Dpair_D544.first = _V0getopt;
  _V10_Dpair_D544.rest = VEncodePointer(&_V10_Dpair_D543, VPOINTER_PAIR);
  _V10_Dpair_D543.first = _V10_Diter_D38;
  _V10_Dpair_D543.rest = VNULL;
  _V10_Dpair_D542.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D542.rest = VEncodePointer(&_V10_Dpair_D541, VPOINTER_PAIR);
  _V10_Dpair_D541.first = VEncodePointer(&_V10_Dpair_D540, VPOINTER_PAIR);
  _V10_Dpair_D541.rest = VNULL;
  _V10_Dpair_D540.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D540.rest = VEncodePointer(&_V10_Dpair_D537, VPOINTER_PAIR);
  _V10_Dpair_D539.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D539.rest = VEncodePointer(&_V10_Dpair_D538, VPOINTER_PAIR);
  _V10_Dpair_D538.first = VEncodePointer(&_V10_Dpair_D537, VPOINTER_PAIR);
  _V10_Dpair_D538.rest = VNULL;
  _V10_Dpair_D537.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D537.rest = VEncodePointer(&_V10_Dpair_D536, VPOINTER_PAIR);
  _V10_Dpair_D536.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D536.rest = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D535.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D535.rest = VEncodePointer(&_V10_Dpair_D534, VPOINTER_PAIR);
  _V10_Dpair_D534.first = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D534.rest = VNULL;
  _V10_Dpair_D533.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D533.rest = VEncodePointer(&_V10_Dpair_D530, VPOINTER_PAIR);
  _V10_Dpair_D532.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D532.rest = VEncodePointer(&_V10_Dpair_D531, VPOINTER_PAIR);
  _V10_Dpair_D531.first = VEncodePointer(&_V10_Dpair_D530, VPOINTER_PAIR);
  _V10_Dpair_D531.rest = VNULL;
  _V10_Dpair_D530.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D530.rest = VEncodePointer(&_V10_Dpair_D523, VPOINTER_PAIR);
  _V10_Dpair_D529.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D529.rest = VEncodePointer(&_V10_Dpair_D528, VPOINTER_PAIR);
  _V10_Dpair_D528.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D528.rest = VNULL;
  _V10_Dpair_D527.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D527.rest = VEncodePointer(&_V10_Dpair_D526, VPOINTER_PAIR);
  _V10_Dpair_D526.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D526.rest = VEncodePointer(&_V10_Dpair_D523, VPOINTER_PAIR);
  _V10_Dpair_D525.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D525.rest = VEncodePointer(&_V10_Dpair_D524, VPOINTER_PAIR);
  _V10_Dpair_D524.first = VEncodePointer(&_V10_Dpair_D523, VPOINTER_PAIR);
  _V10_Dpair_D524.rest = VNULL;
  _V10_Dpair_D523.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D523.rest = VEncodePointer(&_V10_Dpair_D519, VPOINTER_PAIR);
  _V10_Dpair_D522.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D522.rest = VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR);
  _V10_Dpair_D521.first = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D521.rest = VNULL;
  _V10_Dpair_D520.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D520.rest = VEncodePointer(&_V10_Dpair_D519, VPOINTER_PAIR);
  _V10_Dpair_D519.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D519.rest = VEncodePointer(&_V10_Dpair_D516, VPOINTER_PAIR);
  _V10_Dpair_D518.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D518.rest = VEncodePointer(&_V10_Dpair_D517, VPOINTER_PAIR);
  _V10_Dpair_D517.first = VEncodePointer(&_V10_Dpair_D516, VPOINTER_PAIR);
  _V10_Dpair_D517.rest = VNULL;
  _V10_Dpair_D516.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D516.rest = VEncodePointer(&_V10_Dpair_D512, VPOINTER_PAIR);
  _V10_Dpair_D515.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D515.rest = VEncodePointer(&_V10_Dpair_D514, VPOINTER_PAIR);
  _V10_Dpair_D514.first = VEncodePointer(&_V10_Dpair_D513, VPOINTER_PAIR);
  _V10_Dpair_D514.rest = VNULL;
  _V10_Dpair_D513.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D513.rest = VEncodePointer(&_V10_Dpair_D512, VPOINTER_PAIR);
  _V10_Dpair_D512.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D512.rest = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D511.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D511.rest = VEncodePointer(&_V10_Dpair_D510, VPOINTER_PAIR);
  _V10_Dpair_D510.first = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D510.rest = VNULL;
  _V10_Dpair_D509.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D509.rest = VEncodePointer(&_V10_Dpair_D508, VPOINTER_PAIR);
  _V10_Dpair_D508.first = VEncodePointer(&_V10_Dpair_D502, VPOINTER_PAIR);
  _V10_Dpair_D508.rest = VEncodePointer(&_V10_Dpair_D505, VPOINTER_PAIR);
  _V10_Dpair_D507.first = VEncodePointer(&_V10_Dpair_D504, VPOINTER_PAIR);
  _V10_Dpair_D507.rest = VEncodePointer(&_V10_Dpair_D506, VPOINTER_PAIR);
  _V10_Dpair_D506.first = VEncodePointer(&_V10_Dpair_D505, VPOINTER_PAIR);
  _V10_Dpair_D506.rest = VNULL;
  _V10_Dpair_D505.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D505.rest = VEncodePointer(&_V10_Dpair_D499, VPOINTER_PAIR);
  _V10_Dpair_D504.first = VEncodeBool(false);
  _V10_Dpair_D504.rest = VEncodePointer(&_V10_Dpair_D503, VPOINTER_PAIR);
  _V10_Dpair_D503.first = VEncodePointer(&_V10_Dpair_D502, VPOINTER_PAIR);
  _V10_Dpair_D503.rest = VNULL;
  _V10_Dpair_D502.first = _V0ass;
  _V10_Dpair_D502.rest = VNULL;
  _V10_Dpair_D501.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D501.rest = VEncodePointer(&_V10_Dpair_D500, VPOINTER_PAIR);
  _V10_Dpair_D500.first = VEncodePointer(&_V10_Dpair_D499, VPOINTER_PAIR);
  _V10_Dpair_D500.rest = VNULL;
  _V10_Dpair_D499.first = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D499.rest = VEncodePointer(&_V10_Dpair_D466, VPOINTER_PAIR);
  _V10_Dpair_D498.first = VEncodePointer(&_V10_Dpair_D497, VPOINTER_PAIR);
  _V10_Dpair_D498.rest = VEncodePointer(&_V10_Dpair_D467, VPOINTER_PAIR);
  _V10_Dpair_D497.first = VEncodeBool(false);
  _V10_Dpair_D497.rest = VEncodePointer(&_V10_Dpair_D496, VPOINTER_PAIR);
  _V10_Dpair_D496.first = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D496.rest = VNULL;
  _V10_Dpair_D495.first = _V0_Mk;
  _V10_Dpair_D495.rest = VEncodePointer(&_V10_Dpair_D494, VPOINTER_PAIR);
  _V10_Dpair_D494.first = _V0arg;
  _V10_Dpair_D494.rest = VEncodePointer(&_V10_Dpair_D493, VPOINTER_PAIR);
  _V10_Dpair_D493.first = _V0val;
  _V10_Dpair_D493.rest = VNULL;
  _V10_Dpair_D492.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D492.rest = VEncodePointer(&_V10_Dpair_D491, VPOINTER_PAIR);
  _V10_Dpair_D491.first = VEncodePointer(&_V10_Dpair_D490, VPOINTER_PAIR);
  _V10_Dpair_D491.rest = VNULL;
  _V10_Dpair_D490.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D490.rest = VEncodePointer(&_V10_Dpair_D489, VPOINTER_PAIR);
  _V10_Dpair_D489.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D489.rest = VEncodePointer(&_V10_Dpair_D486, VPOINTER_PAIR);
  _V10_Dpair_D488.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D488.rest = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D487.first = VEncodePointer(&_V10_Dpair_D486, VPOINTER_PAIR);
  _V10_Dpair_D487.rest = VNULL;
  _V10_Dpair_D486.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D486.rest = VEncodePointer(&_V10_Dpair_D482, VPOINTER_PAIR);
  _V10_Dpair_D484.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D484.rest = VEncodePointer(&_V10_Dpair_D483, VPOINTER_PAIR);
  _V10_Dpair_D483.first = VEncodePointer(&_V10_Dpair_D482, VPOINTER_PAIR);
  _V10_Dpair_D483.rest = VNULL;
  _V10_Dpair_D482.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D482.rest = VEncodePointer(&_V10_Dpair_D481, VPOINTER_PAIR);
  _V10_Dpair_D481.first = VEncodePointer(&_V10_Dpair_D396, VPOINTER_PAIR);
  _V10_Dpair_D481.rest = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D480.first = VEncodePointer(&_V10_Dpair_D475, VPOINTER_PAIR);
  _V10_Dpair_D480.rest = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D479.first = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D479.rest = VNULL;
  _V10_Dpair_D478.first = VEncodePointer(&_V10_Dpair_D399, VPOINTER_PAIR);
  _V10_Dpair_D478.rest = VEncodePointer(&_V10_Dpair_D477, VPOINTER_PAIR);
  _V10_Dpair_D477.first = VEncodePointer(&_V10_Dpair_D401, VPOINTER_PAIR);
  _V10_Dpair_D477.rest = VEncodePointer(&_V10_Dpair_D476, VPOINTER_PAIR);
  _V10_Dpair_D476.first = VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR);
  _V10_Dpair_D476.rest = VEncodePointer(&_V10_Dpair_D466, VPOINTER_PAIR);
  _V10_Dpair_D475.first = VEncodePointer(&_V10_Dpair_D474, VPOINTER_PAIR);
  _V10_Dpair_D475.rest = VEncodePointer(&_V10_Dpair_D397, VPOINTER_PAIR);
  _V10_Dpair_D474.first = _V0vanity;
  _V10_Dpair_D474.rest = VEncodePointer(&_V10_Dpair_D473, VPOINTER_PAIR);
  _V10_Dpair_D473.first = _V0compiler;
  _V10_Dpair_D473.rest = VEncodePointer(&_V10_Dpair_D472, VPOINTER_PAIR);
  _V10_Dpair_D472.first = _V0getopt;
  _V10_Dpair_D472.rest = VEncodePointer(&_V10_Dpair_D471, VPOINTER_PAIR);
  _V10_Dpair_D471.first = _V0getopt;
  _V10_Dpair_D471.rest = VEncodePointer(&_V10_Dpair_D470, VPOINTER_PAIR);
  _V10_Dpair_D470.first = _V10_Dgetopt__long_D37;
  _V10_Dpair_D470.rest = VEncodePointer(&_V10_Dpair_D469, VPOINTER_PAIR);
  _V10_Dpair_D469.first = _V10_Dloop_D50;
  _V10_Dpair_D469.rest = VNULL;
  _V10_Dpair_D468.first = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D468.rest = VEncodePointer(&_V10_Dpair_D467, VPOINTER_PAIR);
  _V10_Dpair_D467.first = VEncodePointer(&_V10_Dpair_D466, VPOINTER_PAIR);
  _V10_Dpair_D467.rest = VNULL;
  _V10_Dpair_D466.first = VEncodePointer(&_V10_Dpair_D462, VPOINTER_PAIR);
  _V10_Dpair_D466.rest = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D465.first = VEncodePointer(&_V10_Dpair_D464, VPOINTER_PAIR);
  _V10_Dpair_D465.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D464.first = VEncodePointer(&_V10_Dpair_D460, VPOINTER_PAIR);
  _V10_Dpair_D464.rest = VEncodePointer(&_V10_Dpair_D463, VPOINTER_PAIR);
  _V10_Dpair_D463.first = VEncodePointer(&_V10_Dpair_D462, VPOINTER_PAIR);
  _V10_Dpair_D463.rest = VNULL;
  _V10_Dpair_D462.first = _V0_Mk;
  _V10_Dpair_D462.rest = VEncodePointer(&_V10_Dpair_D461, VPOINTER_PAIR);
  _V10_Dpair_D461.first = _V0args;
  _V10_Dpair_D461.rest = VNULL;
  _V10_Dpair_D460.first = _V0vanity;
  _V10_Dpair_D460.rest = VEncodePointer(&_V10_Dpair_D459, VPOINTER_PAIR);
  _V10_Dpair_D459.first = _V0compiler;
  _V10_Dpair_D459.rest = VEncodePointer(&_V10_Dpair_D458, VPOINTER_PAIR);
  _V10_Dpair_D458.first = _V0getopt;
  _V10_Dpair_D458.rest = VEncodePointer(&_V10_Dpair_D457, VPOINTER_PAIR);
  _V10_Dpair_D457.first = _V0getopt;
  _V10_Dpair_D457.rest = VEncodePointer(&_V10_Dpair_D456, VPOINTER_PAIR);
  _V10_Dpair_D456.first = _V10_Dgetopt__long_D37;
  _V10_Dpair_D456.rest = VNULL;
  _V10_Dpair_D455.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D455.rest = VEncodePointer(&_V10_Dpair_D454, VPOINTER_PAIR);
  _V10_Dpair_D454.first = VEncodePointer(&_V10_Dpair_D453, VPOINTER_PAIR);
  _V10_Dpair_D454.rest = VNULL;
  _V10_Dpair_D453.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D453.rest = VEncodePointer(&_V10_Dpair_D450, VPOINTER_PAIR);
  _V10_Dpair_D452.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D452.rest = VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR);
  _V10_Dpair_D451.first = VEncodePointer(&_V10_Dpair_D450, VPOINTER_PAIR);
  _V10_Dpair_D451.rest = VNULL;
  _V10_Dpair_D450.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D450.rest = VEncodePointer(&_V10_Dpair_D449, VPOINTER_PAIR);
  _V10_Dpair_D449.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D449.rest = VEncodePointer(&_V10_Dpair_D446, VPOINTER_PAIR);
  _V10_Dpair_D448.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D448.rest = VEncodePointer(&_V10_Dpair_D447, VPOINTER_PAIR);
  _V10_Dpair_D447.first = VEncodePointer(&_V10_Dpair_D446, VPOINTER_PAIR);
  _V10_Dpair_D447.rest = VNULL;
  _V10_Dpair_D446.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D446.rest = VEncodePointer(&_V10_Dpair_D445, VPOINTER_PAIR);
  _V10_Dpair_D445.first = VEncodePointer(&_V10_Dpair_D436, VPOINTER_PAIR);
  _V10_Dpair_D445.rest = VEncodePointer(&_V10_Dpair_D437, VPOINTER_PAIR);
  _V10_Dpair_D444.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D444.rest = VEncodePointer(&_V10_Dpair_D443, VPOINTER_PAIR);
  _V10_Dpair_D443.first = VEncodePointer(&_V10_Dpair_D442, VPOINTER_PAIR);
  _V10_Dpair_D443.rest = VNULL;
  _V10_Dpair_D442.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D442.rest = VEncodePointer(&_V10_Dpair_D441, VPOINTER_PAIR);
  _V10_Dpair_D441.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D441.rest = VEncodePointer(&_V10_Dpair_D438, VPOINTER_PAIR);
  _V10_Dpair_D440.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D440.rest = VEncodePointer(&_V10_Dpair_D439, VPOINTER_PAIR);
  _V10_Dpair_D439.first = VEncodePointer(&_V10_Dpair_D438, VPOINTER_PAIR);
  _V10_Dpair_D439.rest = VNULL;
  _V10_Dpair_D438.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D438.rest = VEncodePointer(&_V10_Dpair_D437, VPOINTER_PAIR);
  _V10_Dpair_D437.first = VEncodePointer(&_V10_Dpair_D436, VPOINTER_PAIR);
  _V10_Dpair_D437.rest = VEncodePointer(&_V10_Dpair_D432, VPOINTER_PAIR);
  _V10_Dpair_D436.first = _V0_Mx;
  _V10_Dpair_D436.rest = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D435.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D435.rest = VEncodePointer(&_V10_Dpair_D434, VPOINTER_PAIR);
  _V10_Dpair_D434.first = VEncodePointer(&_V10_Dpair_D433, VPOINTER_PAIR);
  _V10_Dpair_D434.rest = VNULL;
  _V10_Dpair_D433.first = VEncodePointer(&_V10_Dpair_D430, VPOINTER_PAIR);
  _V10_Dpair_D433.rest = VEncodePointer(&_V10_Dpair_D432, VPOINTER_PAIR);
  _V10_Dpair_D432.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D432.rest = VEncodePointer(&_V10_Dpair_D431, VPOINTER_PAIR);
  _V10_Dpair_D431.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D431.rest = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D430.first = _V0_Mx;
  _V10_Dpair_D430.rest = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D429.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D429.rest = VEncodePointer(&_V10_Dpair_D424, VPOINTER_PAIR);
  _V10_Dpair_D428.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D428.rest = VEncodePointer(&_V10_Dpair_D427, VPOINTER_PAIR);
  _V10_Dpair_D427.first = VEncodePointer(&_V10_Dpair_D426, VPOINTER_PAIR);
  _V10_Dpair_D427.rest = VNULL;
  _V10_Dpair_D426.first = VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR);
  _V10_Dpair_D426.rest = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D425.first = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D425.rest = VEncodePointer(&_V10_Dpair_D424, VPOINTER_PAIR);
  _V10_Dpair_D424.first = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D424.rest = VNULL;
  _V10_Dpair_D423.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D423.rest = VEncodePointer(&_V10_Dpair_D416, VPOINTER_PAIR);
  _V10_Dpair_D422.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D422.rest = VEncodePointer(&_V10_Dpair_D421, VPOINTER_PAIR);
  _V10_Dpair_D421.first = VEncodePointer(&_V10_Dpair_D420, VPOINTER_PAIR);
  _V10_Dpair_D421.rest = VNULL;
  _V10_Dpair_D420.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D420.rest = VEncodePointer(&_V10_Dpair_D419, VPOINTER_PAIR);
  _V10_Dpair_D419.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D419.rest = VEncodePointer(&_V10_Dpair_D416, VPOINTER_PAIR);
  _V10_Dpair_D418.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D418.rest = VEncodePointer(&_V10_Dpair_D417, VPOINTER_PAIR);
  _V10_Dpair_D417.first = VEncodePointer(&_V10_Dpair_D416, VPOINTER_PAIR);
  _V10_Dpair_D417.rest = VNULL;
  _V10_Dpair_D416.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D416.rest = VEncodePointer(&_V10_Dpair_D415, VPOINTER_PAIR);
  _V10_Dpair_D415.first = VEncodePointer(&_V10_Dpair_D407, VPOINTER_PAIR);
  _V10_Dpair_D415.rest = VEncodePointer(&_V10_Dpair_D412, VPOINTER_PAIR);
  _V10_Dpair_D414.first = VEncodePointer(&_V10_Dpair_D409, VPOINTER_PAIR);
  _V10_Dpair_D414.rest = VEncodePointer(&_V10_Dpair_D413, VPOINTER_PAIR);
  _V10_Dpair_D413.first = VEncodePointer(&_V10_Dpair_D412, VPOINTER_PAIR);
  _V10_Dpair_D413.rest = VNULL;
  _V10_Dpair_D412.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D412.rest = VEncodePointer(&_V10_Dpair_D411, VPOINTER_PAIR);
  _V10_Dpair_D411.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D411.rest = VEncodePointer(&_V10_Dpair_D410, VPOINTER_PAIR);
  _V10_Dpair_D410.first = VEncodePointer(&_V10_Dpair_D396, VPOINTER_PAIR);
  _V10_Dpair_D410.rest = VEncodePointer(&_V10_Dpair_D404, VPOINTER_PAIR);
  _V10_Dpair_D409.first = VEncodeBool(false);
  _V10_Dpair_D409.rest = VEncodePointer(&_V10_Dpair_D408, VPOINTER_PAIR);
  _V10_Dpair_D408.first = VEncodePointer(&_V10_Dpair_D407, VPOINTER_PAIR);
  _V10_Dpair_D408.rest = VNULL;
  _V10_Dpair_D407.first = _V0mem;
  _V10_Dpair_D407.rest = VNULL;
  _V10_Dpair_D406.first = VEncodePointer(&_V10_Dpair_D398, VPOINTER_PAIR);
  _V10_Dpair_D406.rest = VEncodePointer(&_V10_Dpair_D405, VPOINTER_PAIR);
  _V10_Dpair_D405.first = VEncodePointer(&_V10_Dpair_D404, VPOINTER_PAIR);
  _V10_Dpair_D405.rest = VNULL;
  _V10_Dpair_D404.first = VEncodePointer(&_V10_Dpair_D399, VPOINTER_PAIR);
  _V10_Dpair_D404.rest = VEncodePointer(&_V10_Dpair_D403, VPOINTER_PAIR);
  _V10_Dpair_D403.first = VEncodePointer(&_V10_Dpair_D401, VPOINTER_PAIR);
  _V10_Dpair_D403.rest = VEncodePointer(&_V10_Dpair_D402, VPOINTER_PAIR);
  _V10_Dpair_D402.first = VEncodePointer(&_V10_Dpair_D385, VPOINTER_PAIR);
  _V10_Dpair_D402.rest = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D401.first = _V0arg;
  _V10_Dpair_D401.rest = VEncodePointer(&_V10_Dpair_D400, VPOINTER_PAIR);
  _V10_Dpair_D400.first = _V0len;
  _V10_Dpair_D400.rest = VNULL;
  _V10_Dpair_D399.first = _V0loop;
  _V10_Dpair_D399.rest = VNULL;
  _V10_Dpair_D398.first = VEncodePointer(&_V10_Dpair_D394, VPOINTER_PAIR);
  _V10_Dpair_D398.rest = VEncodePointer(&_V10_Dpair_D397, VPOINTER_PAIR);
  _V10_Dpair_D397.first = VEncodePointer(&_V10_Dpair_D396, VPOINTER_PAIR);
  _V10_Dpair_D397.rest = VNULL;
  _V10_Dpair_D396.first = _V0_Mk;
  _V10_Dpair_D396.rest = VEncodePointer(&_V10_Dpair_D395, VPOINTER_PAIR);
  _V10_Dpair_D395.first = _V0i;
  _V10_Dpair_D395.rest = VNULL;
  _V10_Dpair_D394.first = _V0vanity;
  _V10_Dpair_D394.rest = VEncodePointer(&_V10_Dpair_D393, VPOINTER_PAIR);
  _V10_Dpair_D393.first = _V0compiler;
  _V10_Dpair_D393.rest = VEncodePointer(&_V10_Dpair_D392, VPOINTER_PAIR);
  _V10_Dpair_D392.first = _V0getopt;
  _V10_Dpair_D392.rest = VEncodePointer(&_V10_Dpair_D391, VPOINTER_PAIR);
  _V10_Dpair_D391.first = _V0getopt;
  _V10_Dpair_D391.rest = VEncodePointer(&_V10_Dpair_D390, VPOINTER_PAIR);
  _V10_Dpair_D390.first = _V10_Dgetopt__short_D36;
  _V10_Dpair_D390.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D389.first = _V10_Dloop_D44;
  _V10_Dpair_D389.rest = VNULL;
  _V10_Dpair_D388.first = VEncodePointer(&_V10_Dpair_D387, VPOINTER_PAIR);
  _V10_Dpair_D388.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D387.first = VEncodePointer(&_V10_Dpair_D382, VPOINTER_PAIR);
  _V10_Dpair_D387.rest = VEncodePointer(&_V10_Dpair_D386, VPOINTER_PAIR);
  _V10_Dpair_D386.first = VEncodePointer(&_V10_Dpair_D385, VPOINTER_PAIR);
  _V10_Dpair_D386.rest = VNULL;
  _V10_Dpair_D385.first = _V0_Mk;
  _V10_Dpair_D385.rest = VEncodePointer(&_V10_Dpair_D384, VPOINTER_PAIR);
  _V10_Dpair_D384.first = _V0args;
  _V10_Dpair_D384.rest = VEncodePointer(&_V10_Dpair_D383, VPOINTER_PAIR);
  _V10_Dpair_D383.first = _V0opts;
  _V10_Dpair_D383.rest = VNULL;
  _V10_Dpair_D382.first = _V0vanity;
  _V10_Dpair_D382.rest = VEncodePointer(&_V10_Dpair_D381, VPOINTER_PAIR);
  _V10_Dpair_D381.first = _V0compiler;
  _V10_Dpair_D381.rest = VEncodePointer(&_V10_Dpair_D380, VPOINTER_PAIR);
  _V10_Dpair_D380.first = _V0getopt;
  _V10_Dpair_D380.rest = VEncodePointer(&_V10_Dpair_D379, VPOINTER_PAIR);
  _V10_Dpair_D379.first = _V0getopt;
  _V10_Dpair_D379.rest = VEncodePointer(&_V10_Dpair_D378, VPOINTER_PAIR);
  _V10_Dpair_D378.first = _V10_Dgetopt__short_D36;
  _V10_Dpair_D378.rest = VNULL;
  _V10_Dpair_D377.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D377.rest = VEncodePointer(&_V10_Dpair_D376, VPOINTER_PAIR);
  _V10_Dpair_D376.first = VEncodePointer(&_V10_Dpair_D375, VPOINTER_PAIR);
  _V10_Dpair_D376.rest = VNULL;
  _V10_Dpair_D375.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D375.rest = VEncodePointer(&_V10_Dpair_D374, VPOINTER_PAIR);
  _V10_Dpair_D374.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D374.rest = VEncodePointer(&_V10_Dpair_D371, VPOINTER_PAIR);
  _V10_Dpair_D373.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D373.rest = VEncodePointer(&_V10_Dpair_D372, VPOINTER_PAIR);
  _V10_Dpair_D372.first = VEncodePointer(&_V10_Dpair_D371, VPOINTER_PAIR);
  _V10_Dpair_D372.rest = VNULL;
  _V10_Dpair_D371.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D371.rest = VEncodePointer(&_V10_Dpair_D370, VPOINTER_PAIR);
  _V10_Dpair_D370.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D370.rest = VEncodePointer(&_V10_Dpair_D369, VPOINTER_PAIR);
  _V10_Dpair_D369.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D369.rest = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D368.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D368.rest = VEncodePointer(&_V10_Dpair_D367, VPOINTER_PAIR);
  _V10_Dpair_D367.first = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D367.rest = VNULL;
  _V10_Dpair_D366.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D366.rest = VEncodePointer(&_V10_Dpair_D365, VPOINTER_PAIR);
  _V10_Dpair_D365.first = VEncodePointer(&_V10_Dpair_D364, VPOINTER_PAIR);
  _V10_Dpair_D365.rest = VNULL;
  _V10_Dpair_D364.first = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D364.rest = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D363.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D363.rest = VEncodePointer(&_V10_Dpair_D362, VPOINTER_PAIR);
  _V10_Dpair_D362.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D362.rest = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D361.first = _V0_Mx;
  _V10_Dpair_D361.rest = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D360.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D360.rest = VEncodePointer(&_V10_Dpair_D359, VPOINTER_PAIR);
  _V10_Dpair_D359.first = VEncodePointer(&_V10_Dpair_D358, VPOINTER_PAIR);
  _V10_Dpair_D359.rest = VNULL;
  _V10_Dpair_D358.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D358.rest = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D357.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D357.rest = VEncodePointer(&_V10_Dpair_D353, VPOINTER_PAIR);
  _V10_Dpair_D356.first = _V0_Mx;
  _V10_Dpair_D356.rest = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D355.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D355.rest = VEncodePointer(&_V10_Dpair_D354, VPOINTER_PAIR);
  _V10_Dpair_D354.first = VEncodePointer(&_V10_Dpair_D353, VPOINTER_PAIR);
  _V10_Dpair_D354.rest = VNULL;
  _V10_Dpair_D353.first = VEncodePointer(&_V10_Dpair_D351, VPOINTER_PAIR);
  _V10_Dpair_D353.rest = VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR);
  _V10_Dpair_D352.first = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D352.rest = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D351.first = _V0_Mp;
  _V10_Dpair_D351.rest = VNULL;
  _V10_Dpair_D350.first = VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR);
  _V10_Dpair_D350.rest = VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR);
  _V10_Dpair_D349.first = VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR);
  _V10_Dpair_D349.rest = VNULL;
  _V10_Dpair_D348.first = VEncodePointer(&_V10_Dpair_D346, VPOINTER_PAIR);
  _V10_Dpair_D348.rest = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D347.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D347.rest = VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR);
  _V10_Dpair_D346.first = _V0decode__longopt;
  _V10_Dpair_D346.rest = VEncodePointer(&_V10_Dpair_D345, VPOINTER_PAIR);
  _V10_Dpair_D345.first = _V0longs;
  _V10_Dpair_D345.rest = VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR);
  _V10_Dpair_D344.first = _V0opts;
  _V10_Dpair_D344.rest = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D343.first = _V0getopt__short;
  _V10_Dpair_D343.rest = VEncodePointer(&_V10_Dpair_D342, VPOINTER_PAIR);
  _V10_Dpair_D342.first = _V0getopt__long;
  _V10_Dpair_D342.rest = VEncodePointer(&_V10_Dpair_D341, VPOINTER_PAIR);
  _V10_Dpair_D341.first = _V0iter;
  _V10_Dpair_D341.rest = VNULL;
  _V10_Dpair_D340.first = VEncodePointer(&_V10_Dpair_D336, VPOINTER_PAIR);
  _V10_Dpair_D340.rest = VEncodePointer(&_V10_Dpair_D339, VPOINTER_PAIR);
  _V10_Dpair_D339.first = VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR);
  _V10_Dpair_D339.rest = VNULL;
  _V10_Dpair_D338.first = _V0_Mk;
  _V10_Dpair_D338.rest = VEncodePointer(&_V10_Dpair_D337, VPOINTER_PAIR);
  _V10_Dpair_D337.first = _V0longopt;
  _V10_Dpair_D337.rest = VNULL;
  _V10_Dpair_D336.first = _V0vanity;
  _V10_Dpair_D336.rest = VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR);
  _V10_Dpair_D335.first = _V0compiler;
  _V10_Dpair_D335.rest = VEncodePointer(&_V10_Dpair_D334, VPOINTER_PAIR);
  _V10_Dpair_D334.first = _V0getopt;
  _V10_Dpair_D334.rest = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D333.first = _V0getopt;
  _V10_Dpair_D333.rest = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D332.first = _V10_Ddecode__longopt_D33;
  _V10_Dpair_D332.rest = VNULL;
  _V10_Dpair_D331.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D331.rest = VEncodePointer(&_V10_Dpair_D330, VPOINTER_PAIR);
  _V10_Dpair_D330.first = VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR);
  _V10_Dpair_D330.rest = VNULL;
  _V10_Dpair_D329.first = VEncodePointer(&_V10_Dpair_D322, VPOINTER_PAIR);
  _V10_Dpair_D329.rest = VEncodePointer(&_V10_Dpair_D326, VPOINTER_PAIR);
  _V10_Dpair_D328.first = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D328.rest = VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR);
  _V10_Dpair_D327.first = VEncodePointer(&_V10_Dpair_D326, VPOINTER_PAIR);
  _V10_Dpair_D327.rest = VNULL;
  _V10_Dpair_D326.first = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D326.rest = VEncodePointer(&_V10_Dpair_D325, VPOINTER_PAIR);
  _V10_Dpair_D325.first = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D325.rest = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D324.first = VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR);
  _V10_Dpair_D324.rest = VEncodePointer(&_V10_Dpair_D323, VPOINTER_PAIR);
  _V10_Dpair_D323.first = VEncodePointer(&_V10_Dpair_D322, VPOINTER_PAIR);
  _V10_Dpair_D323.rest = VNULL;
  _V10_Dpair_D322.first = _V0_Mk;
  _V10_Dpair_D322.rest = VEncodePointer(&_V10_Dpair_D321, VPOINTER_PAIR);
  _V10_Dpair_D321.first = _V0optstring;
  _V10_Dpair_D321.rest = VEncodePointer(&_V10_Dpair_D320, VPOINTER_PAIR);
  _V10_Dpair_D320.first = _V0args;
  _V10_Dpair_D320.rest = VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR);
  _V10_Dpair_D319.first = _V0longopts;
  _V10_Dpair_D319.rest = VNULL;
  _V10_Dpair_D318.first = _V0vanity;
  _V10_Dpair_D318.rest = VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR);
  _V10_Dpair_D317.first = _V0compiler;
  _V10_Dpair_D317.rest = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D316.first = _V0getopt;
  _V10_Dpair_D316.rest = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D315.first = _V0getopt;
  _V10_Dpair_D315.rest = VNULL;
  _V10_Dpair_D314.first = VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR);
  _V10_Dpair_D314.rest = VEncodePointer(&_V10_Dpair_D313, VPOINTER_PAIR);
  _V10_Dpair_D313.first = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D313.rest = VNULL;
  _V10_Dpair_D312.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D312.rest = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D311.first = VEncodeBool(false);
  _V10_Dpair_D311.rest = VEncodePointer(&_V10_Dpair_D310, VPOINTER_PAIR);
  _V10_Dpair_D310.first = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D310.rest = VNULL;
  _V10_Dpair_D309.first = _V0map;
  _V10_Dpair_D309.rest = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D308.first = _V0assoc;
  _V10_Dpair_D308.rest = VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR);
  _V10_Dpair_D307.first = _V0equal_Q;
  _V10_Dpair_D307.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D306.first = _V0caddr;
  _V10_Dpair_D306.rest = VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR);
  _V10_Dpair_D305.first = _V0values;
  _V10_Dpair_D305.rest = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D304.first = _V0memq;
  _V10_Dpair_D304.rest = VEncodePointer(&_V10_Dpair_D303, VPOINTER_PAIR);
  _V10_Dpair_D303.first = _V0string___Glist;
  _V10_Dpair_D303.rest = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D302.first = _V0list;
  _V10_Dpair_D302.rest = VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR);
  _V10_Dpair_D301.first = _V0cadr;
  _V10_Dpair_D301.rest = VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR);
  _V10_Dpair_D300.first = _V0cddr;
  _V10_Dpair_D300.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D299.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D299.rest = VEncodePointer(&_V10_Dpair_D298, VPOINTER_PAIR);
  _V10_Dpair_D298.first = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D298.rest = VNULL;
  _V10_Dpair_D297.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D297.rest = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D296.first = VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR);
  _V10_Dpair_D296.rest = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D295.first = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D295.rest = VNULL;
  _V10_Dpair_D294.first = VEncodeBool(false);
  _V10_Dpair_D294.rest = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D293.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D293.rest = VNULL;
  _V10_Dpair_D292.first = _V0_Mx;
  _V10_Dpair_D292.rest = VNULL;
  _V10_Dpair_D291.first = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D291.rest = VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR);
  _V10_Dpair_D290.first = VNULL;
  _V10_Dpair_D290.rest = VNULL;
  _V10_Dpair_D289.first = VEncodeBool(false);
  _V10_Dpair_D289.rest = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D288.first = VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR);
  _V10_Dpair_D288.rest = VNULL;
  _V10_Dpair_D287.first = _V0_Mk;
  _V10_Dpair_D287.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4, VEncodePointer(&_V10_Dpair_D355, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5, VEncodePointer(&_V10_Dpair_D360, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6, VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9, VEncodePointer(&_V10_Dpair_D377, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8, VEncodePointer(&_V10_Dpair_D373, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7, VEncodePointer(&_V10_Dpair_D368, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, VEncodePointer(&_V10_Dpair_D350, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12, VEncodePointer(&_V10_Dpair_D422, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11, VEncodePointer(&_V10_Dpair_D418, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14, VEncodePointer(&_V10_Dpair_D428, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13, VEncodePointer(&_V10_Dpair_D425, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16, VEncodePointer(&_V10_Dpair_D435, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18, VEncodePointer(&_V10_Dpair_D444, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17, VEncodePointer(&_V10_Dpair_D440, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21, VEncodePointer(&_V10_Dpair_D455, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20, VEncodePointer(&_V10_Dpair_D452, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19, VEncodePointer(&_V10_Dpair_D448, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15, VEncodePointer(&_V10_Dpair_D429, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10, VEncodePointer(&_V10_Dpair_D414, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, VEncodePointer(&_V10_Dpair_D406, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, VEncodePointer(&_V10_Dpair_D388, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22, VEncodePointer(&_V10_Dpair_D484, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24, VEncodePointer(&_V10_Dpair_D492, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23, VEncodePointer(&_V10_Dpair_D488, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3, VEncodePointer(&_V10_Dpair_D468, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28, VEncodePointer(&_V10_Dpair_D515, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27, VEncodePointer(&_V10_Dpair_D511, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31, VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30, VEncodePointer(&_V10_Dpair_D518, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34, VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33, VEncodePointer(&_V10_Dpair_D525, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38, VEncodePointer(&_V10_Dpair_D542, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37, VEncodePointer(&_V10_Dpair_D539, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36, VEncodePointer(&_V10_Dpair_D535, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35, VEncodePointer(&_V10_Dpair_D532, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39, VEncodePointer(&_V10_Dpair_D532, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32, VEncodePointer(&_V10_Dpair_D518, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29, VEncodePointer(&_V10_Dpair_D511, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26, VEncodePointer(&_V10_Dpair_D507, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25, VEncodePointer(&_V10_Dpair_D501, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4, VEncodePointer(&_V10_Dpair_D498, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, VEncodePointer(&_V10_Dpair_D465, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41, VEncodePointer(&_V10_Dpair_D558, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43, VEncodePointer(&_V10_Dpair_D563, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5, VEncodePointer(&_V10_Dpair_D578, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47, VEncodePointer(&_V10_Dpair_D585, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46, VEncodePointer(&_V10_Dpair_D581, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45, VEncodePointer(&_V10_Dpair_D569, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44, VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42, VEncodePointer(&_V10_Dpair_D559, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40, VEncodePointer(&_V10_Dpair_D555, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, VEncodePointer(&_V10_Dpair_D549, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k49, VEncodePointer(&_V10_Dpair_D594, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48, VEncodePointer(&_V10_Dpair_D588, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3, VEncodePointer(&_V10_Dpair_D331, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt, VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D314, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k2, VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k1, VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D291, VPOINTER_PAIR));
}
