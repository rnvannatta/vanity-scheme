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

VEnv * _V60_V0vanity_V0pretty__print;

static VPair _V10_Dpair_D511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0port;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "port" };
static VPair _V10_Dpair_D491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0len;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0len = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "len" };
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
static VPair _V10_Dpair_D468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dlengthof_D54;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_Dlengthof_D54 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.lengthof.54" };
static VPair _V10_Dpair_D462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0n;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0n = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "n" };
static VPair _V10_Dpair_D444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D56;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D56 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.56" };
static VPair _V10_Dpair_D439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lengthof;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0lengthof = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "lengthof" };
VWEAK VWORD _V0lengthof__list;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0lengthof__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "lengthof-list" };
static VPair _V10_Dpair_D433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D429 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dlengthof__list_D53;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10_Dlengthof__list_D53 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##.lengthof-list.53" };
static VPair _V10_Dpair_D428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0return;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0return = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "return" };
static VPair _V10_Dpair_D421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0cutoff;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cutoff = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cutoff" };
static VPair _V10_Dpair_D415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D407 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static VPair _V10_Dpair_D406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D405 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
static VPair _V10_Dpair_D404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D403 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static VPair _V10_Dpair_D402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D401 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
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
static VPair _V10_Dpair_D389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
static VPair _V10_Dpair_D373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
static VPair _V10_Dpair_D372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
static VPair _V10_Dpair_D371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
static VPair _V10_Dpair_D370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static VPair _V10_Dpair_D369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static VPair _V10_Dpair_D366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ret;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ret" };
static VPair _V10_Dpair_D359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0form;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0form = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "form" };
static VPair _V10_Dpair_D354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D351 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D350 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ". " };
static VPair _V10_Dpair_D349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static VPair _V10_Dpair_D334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D330 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static VPair _V10_Dpair_D329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D320 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static VPair _V10_Dpair_D319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0first__elem;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0first__elem = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "first-elem" };
VWEAK VWORD _V0rest;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0rest = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "rest" };
static VPair _V10_Dpair_D309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D40;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D40 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.40" };
static VPair _V10_Dpair_D305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0new__indent;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0new__indent = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "new-indent" };
static VPair _V10_Dpair_D301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0first__indent;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0first__indent = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "first-indent" };
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
static VPair _V10_Dpair_D280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0join__line;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0join__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "join-line" };
static VPair _V10_Dpair_D279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static VPair _V10_Dpair_D274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D1;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0x_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "x.1" };
static VPair _V10_Dpair_D265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
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
VWEAK VWORD _V0print__indent;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0print__indent = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "print-indent" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0lengthof__atom;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0lengthof__atom = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "lengthof-atom" };
VWEAK VWORD _V0short_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0short_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "short\?" };
VWEAK VWORD _V0quotation_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quotation_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quotation\?" };
VWEAK VWORD _V0join__line_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0join__line_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "join-line\?" };
static VPair _V10_Dpair_D237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0short__threshold;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0short__threshold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "short-threshold" };
VWEAK VWORD _V0indent__this_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0indent__this_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "indent-this\?" };
VWEAK VWORD _V0indent;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0indent = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "indent" };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0pretty__print__impl;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0pretty__print__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "pretty-print-impl" };
VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D213 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D212 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0print__indent, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0atom_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0lengthof__atom, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0short_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0quotation_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0join__line_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _var0, _var1, _var2, _var3, _var4);
static void _V0vanity_V0pretty__print_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.68 2 0) (##string ##.string.212) (bruijn ##.%x.69 0 0) 'memv 'max 'newline 'display 'cadr 'write 'assv 'close-port 'get-output-string 'open-output-string)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 13,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D212.sym, VPOINTER_OTHER),
      _var0,
      _V0memv,
      _V0max,
      _V0newline,
      _V0display,
      _V0cadr,
      _V0write,
      _V0assv,
      _V0close__port,
      _V0get__output__string,
      _V0open__output__string);
}
static void _V0vanity_V0pretty__print_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0pretty__print_V20_V0k2) (bruijn ##.%x.70 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0pretty__print_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0pretty__print_V20_V0k1) (##string ##.string.213))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D213.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.indent-this?.33 1 3) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.30 2 7) (bruijn ##.%k.113 0 0) (bruijn ##.indent.32 1 2)) ((bruijn ##.%k.113 0 0) #f))
if(VDecodeBool(
statics->vars[3])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.153 1 1) ((bruijn ##.%k.79 0 0) 2) ((bruijn ##.%k.79 0 0) 1))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.154) ((##vcore.+ (bruijn ##.indent.32 7 2) (bruijn ##.%x.77 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 8 0) (bruijn ##.%k.72 7 0) (bruijn ##.%x.75 3 0) (bruijn ##.%x.154 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.152 ##.%p.153) ((##vcore.car (bruijn ##.expr.31 5 1)) (##vcore.eq? (bruijn ##.%x.152 0 0) 'unquote-splicing)) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10, self)))));
    }
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadr.6 5 5) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8) (bruijn ##.expr.31 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.171) ((##vcore.+ 2 (bruijn ##.%x.107 1 0))) ((bruijn ##.%k.106 3 0) (bruijn ##.%r.171 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(2l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.join-line.37 1 0) (basic-block 1 1 (##.%x.170) ((##vcore.car (bruijn ##.expr.31 8 1))) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.28 9 5) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15) (bruijn ##.%x.170 0 0))) ((bruijn ##.%k.106 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0lengthof__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.join-line.37 2 0) ((bruijn ##.%k.105 0 0) (bruijn ##.join-line.37 2 0)) ((bruijn ##.%k.105 0 0) 1))
if(VDecodeBool(
statics->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.42 3 2) ((bruijn ##.%k.101 0 0) (bruijn ##.join-line.37 7 0)) ((bruijn ##.%k.101 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.99 1 0) ((bruijn ##.display.5 16 4) (bruijn ##.%k.100 0 0) (##string ##.string.330)) ((bruijn ##.newline.4 16 3) (bruijn ##.%k.100 0 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D330.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 1,
      _var0);
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.42 4 2) ((bruijn ##.%k.98 0 0) (bruijn ##.first-indent.38 7 0)) ((bruijn ##.%k.98 0 0) (bruijn ##.new-indent.39 6 0)))
if(VDecodeBool(
statics->up->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.first-elem.42 5 2) (basic-block 1 1 (##.%x.166) ((##vcore.car (bruijn ##.expr.31 16 1))) ((bruijn ##.memv.2 18 1) (bruijn ##.%k.96 1 0) (bruijn ##.%x.166 0 0) '(##pair ##.pair.337))) ((bruijn ##.%k.96 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 3,
      statics->vars[0],
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D337, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.92 1 0) (basic-block 2 2 (##.%x.164 ##.%x.165) ((##vcore.+ (bruijn ##.indent.32 17 2) (bruijn ##.new-indent.39 9 0)) (##vcore.- 80 (bruijn ##.%x.164 0 0))) ((bruijn ##.max.3 19 2) (bruijn ##.%k.93 1 0) 40 (bruijn ##.%x.165 0 1))) ((bruijn ##.%k.93 0 0) 40))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      VGetArg(statics, 9-1, 0));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VEncodeInt(80l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 3,
      statics->vars[0],
      VEncodeInt(40l),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(40l));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.first-elem.42 8 2) ((bruijn ##.%k.91 0 0) (bruijn ##.join-line.37 12 0)) ((bruijn ##.%k.91 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.163) ((##vcore.cdr (bruijn ##.rest.41 10 1))) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.40) #f (bruijn ##.loop.40 11 0) (bruijn ##.%k.81 10 0) (bruijn ##.%x.163 0 0) #f))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.162) ((##vcore.not (bruijn ##.%x.90 1 0))) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 20 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k31) (bruijn ##.%x.160 2 0) (bruijn ##.%x.161 2 1) (bruijn ##.%x.162 0 0) (bruijn ##.short-threshold.86 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k31, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      self->vars[0];
    VWORD _arg4 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.160 ##.%x.161) ((##vcore.car (bruijn ##.rest.41 7 1)) (##vcore.+ (bruijn ##.indent.32 17 2) (bruijn ##.new-indent.85 3 0))) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30, self)))));
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k22, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.5 16 4) (bruijn ##.%k.81 4 0) (##string ##.string.320))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D320.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.168) ((##vcore.+ (bruijn ##.indent.32 14 2) 3)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 15 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k35) (bruijn ##.rest.41 4 1) (bruijn ##.%x.168 0 0) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 14-1, 2),
      VEncodeInt(3l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k35, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.display.5 15 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k34) (##string ##.string.350))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k34, self)))),
      VEncodePointer(&_V10_Dstring_D350.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.167) ((##vcore.+ (bruijn ##.indent.32 13 2) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.30 14 7) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k33) (bruijn ##.%x.167 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 13-1, 2),
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k33, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.158) ((##vcore.null? (bruijn ##.rest.41 1 1))) (if (bruijn ##.%p.158 0 0) ((bruijn ##.display.5 13 4) (bruijn ##.%k.81 1 0) (##string ##.string.320)) (basic-block 1 1 (##.%p.159) ((##vcore.pair? (bruijn ##.rest.41 2 1))) (if (bruijn ##.%p.159 0 0) ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20)) ((bruijn ##.display.5 14 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k32) #\newline)))))
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
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D320.sym, VPOINTER_OTHER));
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k32, self)))),
      VEncodeChar('\n'));
}
    }
}
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40")) (basic-block 1 1 (##.%x.169) ((##vcore.cdr (bruijn ##.expr.31 10 1))) (##qualified-call (vanity pretty-print pretty-print-impl ##.loop.40) #f (bruijn ##.loop.40 1 0) (bruijn ##.%k.72 10 0) (bruijn ##.%x.169 0 0) #t)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18, self)))));
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.157) ((##vcore.car (bruijn ##.expr.31 5 1))) (##qualified-call (vanity pretty-print join-line?) #t (bruijn ##.join-line?.24 6 1) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13) (bruijn ##.%x.157 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0join__line_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.155 ##.%x.156) ((##vcore.car (bruijn ##.expr.31 4 1)) (##vcore.+ (bruijn ##.indent.32 4 2) 1)) (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 5 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12) (bruijn ##.%x.155 0 0) (bruijn ##.%x.156 0 1) #f 40))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.1.35 0 0) ((bruijn ##.display.5 5 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7) (bruijn ##.x.1.35 0 0)) ((bruijn ##.display.5 5 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11) (##string ##.string.351)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7, self)))),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D351.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.74 0 0) ((bruijn ##.write.7 4 6) (bruijn ##.%k.72 2 0) (bruijn ##.expr.31 2 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.26 3 3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6) (bruijn ##.expr.31 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[6]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0quotation_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.150 ##.%p.151) ((##vcore.pair? (bruijn ##.expr.31 1 1)) (##vcore.not (bruijn ##.%x.150 0 0))) (if (bruijn ##.%p.151 0 1) ((bruijn ##.write.7 3 6) (bruijn ##.%k.72 1 0) (bruijn ##.expr.31 1 1)) (##qualified-call (vanity pretty-print short?) #t (bruijn ##.short?.27 2 4) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5) (bruijn ##.expr.31 1 1) (bruijn ##.short-threshold.34 1 4))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q, _V60_V0vanity_V0pretty__print)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
void _V50_V0vanity_V0pretty__print_V0pretty__print__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print__impl, got ~D~N"
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
  // ((close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3) (close _V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4, self)))));
}
void _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.46 0 0) (basic-block 1 1 (##.%r.172) ((##vcore.cdr (bruijn ##.ret.46 1 0))) ((bruijn ##.%k.114 2 0) (bruijn ##.%r.172 0 0))) ((bruijn ##.%k.114 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0join__line_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0join__line_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0join__line_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.assv.8 2 7) (close _V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36) (bruijn ##.form.45 0 1) '(##pair ##.pair.383))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, self)))),
      _var1,
      VEncodePointer(&_V10_Dpair_D383, VPOINTER_PAIR));
}
static void _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.newline.4 2 3) (bruijn ##.%k.115 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0pretty__print(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0pretty__print" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0pretty__print, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity pretty-print pretty-print-impl) #t (bruijn ##.pretty-print-impl.23 1 0) (close _V50_V0vanity_V0pretty__print_V0pretty__print_V0k37) (bruijn ##.expr.47 0 1) 0 #t 40)
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print_V0k37, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      VEncodeBool(true);
    VWORD _arg4 = 
      VEncodeInt(40l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0pretty__print_V0pretty__print__impl(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.49 0 0) (basic-block 1 1 (##.%r.174) ((##vcore.cdr (bruijn ##.ret.49 1 0))) ((bruijn ##.%k.116 3 0) (bruijn ##.%r.174 0 0))) ((bruijn ##.%k.116 2 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0pretty__print_V0quotation_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0quotation_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0quotation_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.173) ((##vcore.car (bruijn ##.expr.48 1 1))) ((bruijn ##.assv.8 3 7) (close _V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38) (bruijn ##.%x.173 0 0) '(##pair ##.pair.412)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D412, VPOINTER_PAIR));
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.179) ((##vcore.+ (bruijn ##.n.58 5 2) (bruijn ##.%x.125 1 0) 3)) ((bruijn ##.%k.121 5 0) (bruijn ##.%r.179 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      statics->vars[0],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.182) ((##vcore.+ (bruijn ##.n.58 6 2) (bruijn ##.%x.128 1 0) 1)) (##qualified-call (vanity pretty-print short? ##.lengthof-list.53 ##.loop.56) #f (bruijn ##.loop.56 7 0) (bruijn ##.%k.121 6 0) (bruijn ##.%x.180 2 0) (bruijn ##.%x.182 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.175) ((##vcore.> (bruijn ##.n.58 1 2) (bruijn ##.cutoff.51 6 2))) (if (bruijn ##.%p.175 0 0) ((bruijn ##.return.52 5 1) (bruijn ##.%k.121 1 0) #f) (basic-block 1 1 (##.%p.176) ((##vcore.null? (bruijn ##.expr.57 2 1))) (if (bruijn ##.%p.176 0 0) ((bruijn ##.%k.121 2 0) (bruijn ##.n.58 2 2)) (basic-block 2 2 (##.%x.177 ##.%p.178) ((##vcore.pair? (bruijn ##.expr.57 3 1)) (##vcore.not (bruijn ##.%x.177 0 0))) (if (bruijn ##.%p.178 0 1) (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 6 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39) (bruijn ##.expr.57 3 1)) (basic-block 2 2 (##.%x.180 ##.%x.181) ((##vcore.cdr (bruijn ##.expr.57 4 1)) (##vcore.car (bruijn ##.expr.57 4 1))) (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 7 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40) (bruijn ##.%x.181 0 1)))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[2],
      VGetArg(statics, 6-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      statics->vars[0],
      VEncodeBool(false));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56")) (##qualified-call (vanity pretty-print short? ##.lengthof-list.53 ##.loop.56) #f (bruijn ##.loop.56 0 0) (bruijn ##.%k.120 1 0) (bruijn ##.expr.55 1 1) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.186 1 1) ((bruijn ##.%k.138 0 0) 2) ((bruijn ##.%k.138 0 0) 1))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.187) ((##vcore.+ (bruijn ##.%x.134 3 0) (bruijn ##.%x.135 1 0))) ((bruijn ##.%k.131 7 0) (bruijn ##.%r.187 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 6 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45) (bruijn ##.%x.136 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.6 9 5) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44) (bruijn ##.expr.59 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.133 0 0) (basic-block 2 2 (##.%x.185 ##.%p.186) ((##vcore.car (bruijn ##.expr.59 3 1)) (##vcore.eq? (bruijn ##.%x.185 0 0) 'unquote-splicing)) ((close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43))) (##qualified-call (vanity pretty-print short? ##.lengthof-list.53) #f (bruijn ##.lengthof-list.53 3 0) (bruijn ##.%k.131 2 0) (bruijn ##.expr.59 2 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.183 ##.%p.184) ((##vcore.pair? (bruijn ##.expr.59 1 1)) (##vcore.not (bruijn ##.%x.183 0 0))) (if (bruijn ##.%p.184 0 1) (##qualified-call (vanity pretty-print lengthof-atom) #t (bruijn ##.lengthof-atom.28 5 5) (bruijn ##.%k.131 1 0) (bruijn ##.expr.59 1 1)) (##qualified-call (vanity pretty-print quotation?) #t (bruijn ##.quotation?.26 5 3) (close _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41) (bruijn ##.expr.59 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0lengthof__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0quotation_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.188) ((##vcore.> (bruijn ##.len.60 1 0) (bruijn ##.cutoff.51 4 2))) (if (bruijn ##.%p.188 0 0) ((bruijn ##.return.52 3 1) (bruijn ##.%k.119 3 0) #f) ((bruijn ##.%k.119 3 0) #t)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      statics->up->up->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
}
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53") (close "_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54")) (##qualified-call (vanity pretty-print short? ##.lengthof.54) #f (bruijn ##.lengthof.54 0 1) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0k46) (bruijn ##.expr.50 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0k46, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0short_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0short_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0short_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.118 0 0) (close _V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4, self)))));
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.142 3 0) (bruijn ##.len.189 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.len.189) ((##vcore.string-length (bruijn ##.%x.143 1 0))) ((bruijn ##.close-port.9 5 8) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50) (bruijn ##.port.62 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50, self)))),
      statics->up->vars[0]);
    }
}
static void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.get-output-string.10 3 9) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49) (bruijn ##.port.62 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49, self)))),
      self->vars[0]);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.7 3 6) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48) (bruijn ##.expr.61 1 1) (bruijn ##.port.62 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0pretty__print_V0lengthof__atom(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0lengthof__atom" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0lengthof__atom, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.open-output-string.11 2 10) (close _V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47, self)))));
}
void _V50_V0vanity_V0pretty__print_V0atom_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0atom_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0atom_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.190 ##.%r.191) ((##vcore.pair? (bruijn ##.expr.64 1 1)) (##vcore.not (bruijn ##.%x.190 0 0))) ((bruijn ##.%k.144 1 0) (bruijn ##.%r.191 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0pretty__print_V0print__indent_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.193) ((##vcore.- (bruijn ##.i.65 2 1) 1)) (##qualified-call (vanity pretty-print print-indent) #t (bruijn ##.print-indent.30 3 7) (bruijn ##.%k.146 2 0) (bruijn ##.%x.193 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0pretty__print;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0pretty__print_V0print__indent(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0pretty__print_V0print__indent(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0pretty__print_V0print__indent" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0pretty__print_V0print__indent, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.192) ((##vcore.> (bruijn ##.i.65 1 1) 0)) (if (bruijn ##.%p.192 0 0) ((bruijn ##.display.5 3 4) (close _V50_V0vanity_V0pretty__print_V0print__indent_V0k51) #\space) ((bruijn ##.%k.146 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent_V0k51, self)))),
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V0vanity_V0pretty__print_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity pretty-print) 8 ((close "_V50_V0vanity_V0pretty__print_V0pretty__print__impl" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0join__line_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0pretty__print" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0quotation_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0short_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0lengthof__atom" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0atom_Q" (vanity pretty-print)) (close "_V50_V0vanity_V0pretty__print_V0print__indent" (vanity pretty-print))) (basic-block 2 2 (##.%x.194 ##.%r.195) ((##vcore.cons 'pretty-print (bruijn ##.pretty-print.25 1 2)) (##vcore.cons (bruijn ##.%x.194 0 0) '())) ((bruijn ##.%k.71 2 0) (bruijn ##.%r.195 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    _V60_V0vanity_V0pretty__print = self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, _V60_V0vanity_V0pretty__print))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print, _V60_V0vanity_V0pretty__print))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, _V60_V0vanity_V0pretty__print))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0atom_Q, _V60_V0vanity_V0pretty__print))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, _V60_V0vanity_V0pretty__print))));
    VRegisterStaticEnv("_V0vanity_V0pretty__print_V20", &_V60_V0vanity_V0pretty__print);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0pretty__print,
      statics->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0pretty__print_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.67 0 0) (close _V0vanity_V0pretty__print_V20_V0lambda2) (close _V0vanity_V0pretty__print_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0pretty__print_V20 = (VFunc)_V0vanity_V0pretty__print_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V0port = VEncodePointer(VInternSymbol(-1893404613, &_VW_V0port.sym), VPOINTER_OTHER);
  _V0len = VEncodePointer(VInternSymbol(-191740809, &_VW_V0len.sym), VPOINTER_OTHER);
  _V10_Dlengthof_D54 = VEncodePointer(VInternSymbol(1402967600, &_VW_V10_Dlengthof_D54.sym), VPOINTER_OTHER);
  _V0n = VEncodePointer(VInternSymbol(645313662, &_VW_V0n.sym), VPOINTER_OTHER);
  _V10_Dloop_D56 = VEncodePointer(VInternSymbol(-1826761950, &_VW_V10_Dloop_D56.sym), VPOINTER_OTHER);
  _V0lengthof = VEncodePointer(VInternSymbol(-1634456303, &_VW_V0lengthof.sym), VPOINTER_OTHER);
  _V0lengthof__list = VEncodePointer(VInternSymbol(546960439, &_VW_V0lengthof__list.sym), VPOINTER_OTHER);
  _V10_Dlengthof__list_D53 = VEncodePointer(VInternSymbol(196817891, &_VW_V10_Dlengthof__list_D53.sym), VPOINTER_OTHER);
  _V0return = VEncodePointer(VInternSymbol(732585183, &_VW_V0return.sym), VPOINTER_OTHER);
  _V0cutoff = VEncodePointer(VInternSymbol(707228618, &_VW_V0cutoff.sym), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VInternSymbol(-1666054212, &_VW_V0quasiquote.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0letrec_S = VEncodePointer(VInternSymbol(2021638346, &_VW_V0letrec_S.sym), VPOINTER_OTHER);
  _V0let_S = VEncodePointer(VInternSymbol(-1235035137, &_VW_V0let_S.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0ret = VEncodePointer(VInternSymbol(1095520858, &_VW_V0ret.sym), VPOINTER_OTHER);
  _V0form = VEncodePointer(VInternSymbol(-180257785, &_VW_V0form.sym), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VInternSymbol(871318520, &_VW_V0continuation.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0first__elem = VEncodePointer(VInternSymbol(507752463, &_VW_V0first__elem.sym), VPOINTER_OTHER);
  _V0rest = VEncodePointer(VInternSymbol(1577985677, &_VW_V0rest.sym), VPOINTER_OTHER);
  _V10_Dloop_D40 = VEncodePointer(VInternSymbol(323235348, &_VW_V10_Dloop_D40.sym), VPOINTER_OTHER);
  _V0new__indent = VEncodePointer(VInternSymbol(1204588504, &_VW_V0new__indent.sym), VPOINTER_OTHER);
  _V0first__indent = VEncodePointer(VInternSymbol(1505645208, &_VW_V0first__indent.sym), VPOINTER_OTHER);
  _V0join__line = VEncodePointer(VInternSymbol(218890247, &_VW_V0join__line.sym), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VInternSymbol(-922270485, &_VW_V0unquote__splicing.sym), VPOINTER_OTHER);
  _V0x_D1 = VEncodePointer(VInternSymbol(-849682234, &_VW_V0x_D1.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0print__indent = VEncodePointer(VInternSymbol(1927030200, &_VW_V0print__indent.sym), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VInternSymbol(2133063198, &_VW_V0atom_Q.sym), VPOINTER_OTHER);
  _V0lengthof__atom = VEncodePointer(VInternSymbol(-668019671, &_VW_V0lengthof__atom.sym), VPOINTER_OTHER);
  _V0short_Q = VEncodePointer(VInternSymbol(2033625706, &_VW_V0short_Q.sym), VPOINTER_OTHER);
  _V0quotation_Q = VEncodePointer(VInternSymbol(-923615339, &_VW_V0quotation_Q.sym), VPOINTER_OTHER);
  _V0join__line_Q = VEncodePointer(VInternSymbol(1726539722, &_VW_V0join__line_Q.sym), VPOINTER_OTHER);
  _V0short__threshold = VEncodePointer(VInternSymbol(1468720911, &_VW_V0short__threshold.sym), VPOINTER_OTHER);
  _V0indent__this_Q = VEncodePointer(VInternSymbol(-649194881, &_VW_V0indent__this_Q.sym), VPOINTER_OTHER);
  _V0indent = VEncodePointer(VInternSymbol(2047042700, &_VW_V0indent.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0pretty__print__impl = VEncodePointer(VInternSymbol(1521675598, &_VW_V0pretty__print__impl.sym), VPOINTER_OTHER);
  _V0pretty__print = VEncodePointer(VInternSymbol(-2038099419, &_VW_V0pretty__print.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VInternSymbol(1528859113, &_VW_V0open__output__string.sym), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VInternSymbol(-1094109327, &_VW_V0get__output__string.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V0max = VEncodePointer(VInternSymbol(-606210272, &_VW_V0max.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D511.first = VEncodePointer(&_V10_Dpair_D510, VPOINTER_PAIR);
  _V10_Dpair_D511.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D510.first = VEncodePointer(&_V10_Dpair_D506, VPOINTER_PAIR);
  _V10_Dpair_D510.rest = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D509.first = VEncodePointer(&_V10_Dpair_D508, VPOINTER_PAIR);
  _V10_Dpair_D509.rest = VNULL;
  _V10_Dpair_D508.first = _V0_Mk;
  _V10_Dpair_D508.rest = VEncodePointer(&_V10_Dpair_D507, VPOINTER_PAIR);
  _V10_Dpair_D507.first = _V0i;
  _V10_Dpair_D507.rest = VNULL;
  _V10_Dpair_D506.first = _V0vanity;
  _V10_Dpair_D506.rest = VEncodePointer(&_V10_Dpair_D505, VPOINTER_PAIR);
  _V10_Dpair_D505.first = _V0pretty__print;
  _V10_Dpair_D505.rest = VEncodePointer(&_V10_Dpair_D238, VPOINTER_PAIR);
  _V10_Dpair_D504.first = VEncodePointer(&_V10_Dpair_D503, VPOINTER_PAIR);
  _V10_Dpair_D504.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D503.first = VEncodePointer(&_V10_Dpair_D502, VPOINTER_PAIR);
  _V10_Dpair_D503.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D502.first = _V0vanity;
  _V10_Dpair_D502.rest = VEncodePointer(&_V10_Dpair_D501, VPOINTER_PAIR);
  _V10_Dpair_D501.first = _V0pretty__print;
  _V10_Dpair_D501.rest = VEncodePointer(&_V10_Dpair_D500, VPOINTER_PAIR);
  _V10_Dpair_D500.first = _V0atom_Q;
  _V10_Dpair_D500.rest = VNULL;
  _V10_Dpair_D499.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D499.rest = VEncodePointer(&_V10_Dpair_D498, VPOINTER_PAIR);
  _V10_Dpair_D498.first = VEncodePointer(&_V10_Dpair_D497, VPOINTER_PAIR);
  _V10_Dpair_D498.rest = VNULL;
  _V10_Dpair_D497.first = VEncodePointer(&_V10_Dpair_D492, VPOINTER_PAIR);
  _V10_Dpair_D497.rest = VEncodePointer(&_V10_Dpair_D397, VPOINTER_PAIR);
  _V10_Dpair_D496.first = VEncodePointer(&_V10_Dpair_D494, VPOINTER_PAIR);
  _V10_Dpair_D496.rest = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D495.first = VEncodePointer(&_V10_Dpair_D397, VPOINTER_PAIR);
  _V10_Dpair_D495.rest = VNULL;
  _V10_Dpair_D494.first = VEncodeBool(false);
  _V10_Dpair_D494.rest = VEncodePointer(&_V10_Dpair_D493, VPOINTER_PAIR);
  _V10_Dpair_D493.first = VEncodePointer(&_V10_Dpair_D492, VPOINTER_PAIR);
  _V10_Dpair_D493.rest = VNULL;
  _V10_Dpair_D492.first = _V0port;
  _V10_Dpair_D492.rest = VNULL;
  _V10_Dpair_D491.first = VEncodePointer(&_V10_Dpair_D490, VPOINTER_PAIR);
  _V10_Dpair_D491.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D490.first = VEncodePointer(&_V10_Dpair_D489, VPOINTER_PAIR);
  _V10_Dpair_D490.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D489.first = _V0vanity;
  _V10_Dpair_D489.rest = VEncodePointer(&_V10_Dpair_D488, VPOINTER_PAIR);
  _V10_Dpair_D488.first = _V0pretty__print;
  _V10_Dpair_D488.rest = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D487.first = _V0lengthof__atom;
  _V10_Dpair_D487.rest = VNULL;
  _V10_Dpair_D486.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D486.rest = VEncodePointer(&_V10_Dpair_D438, VPOINTER_PAIR);
  _V10_Dpair_D485.first = VEncodeBool(false);
  _V10_Dpair_D485.rest = VEncodePointer(&_V10_Dpair_D484, VPOINTER_PAIR);
  _V10_Dpair_D484.first = VEncodePointer(&_V10_Dpair_D483, VPOINTER_PAIR);
  _V10_Dpair_D484.rest = VNULL;
  _V10_Dpair_D483.first = _V0len;
  _V10_Dpair_D483.rest = VNULL;
  _V10_Dpair_D482.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D482.rest = VEncodePointer(&_V10_Dpair_D481, VPOINTER_PAIR);
  _V10_Dpair_D481.first = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D481.rest = VNULL;
  _V10_Dpair_D480.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D480.rest = VEncodePointer(&_V10_Dpair_D477, VPOINTER_PAIR);
  _V10_Dpair_D479.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D479.rest = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D478.first = VEncodePointer(&_V10_Dpair_D477, VPOINTER_PAIR);
  _V10_Dpair_D478.rest = VNULL;
  _V10_Dpair_D477.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D477.rest = VEncodePointer(&_V10_Dpair_D473, VPOINTER_PAIR);
  _V10_Dpair_D476.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D476.rest = VEncodePointer(&_V10_Dpair_D474, VPOINTER_PAIR);
  _V10_Dpair_D475.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D475.rest = VEncodePointer(&_V10_Dpair_D474, VPOINTER_PAIR);
  _V10_Dpair_D474.first = VEncodePointer(&_V10_Dpair_D473, VPOINTER_PAIR);
  _V10_Dpair_D474.rest = VNULL;
  _V10_Dpair_D473.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D473.rest = VEncodePointer(&_V10_Dpair_D472, VPOINTER_PAIR);
  _V10_Dpair_D472.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D472.rest = VEncodePointer(&_V10_Dpair_D469, VPOINTER_PAIR);
  _V10_Dpair_D471.first = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D471.rest = VEncodePointer(&_V10_Dpair_D470, VPOINTER_PAIR);
  _V10_Dpair_D470.first = VEncodePointer(&_V10_Dpair_D469, VPOINTER_PAIR);
  _V10_Dpair_D470.rest = VNULL;
  _V10_Dpair_D469.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D469.rest = VEncodePointer(&_V10_Dpair_D450, VPOINTER_PAIR);
  _V10_Dpair_D468.first = VEncodePointer(&_V10_Dpair_D467, VPOINTER_PAIR);
  _V10_Dpair_D468.rest = VEncodePointer(&_V10_Dpair_D438, VPOINTER_PAIR);
  _V10_Dpair_D467.first = VEncodePointer(&_V10_Dpair_D466, VPOINTER_PAIR);
  _V10_Dpair_D467.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D466.first = _V0vanity;
  _V10_Dpair_D466.rest = VEncodePointer(&_V10_Dpair_D465, VPOINTER_PAIR);
  _V10_Dpair_D465.first = _V0pretty__print;
  _V10_Dpair_D465.rest = VEncodePointer(&_V10_Dpair_D464, VPOINTER_PAIR);
  _V10_Dpair_D464.first = _V0short_Q;
  _V10_Dpair_D464.rest = VEncodePointer(&_V10_Dpair_D463, VPOINTER_PAIR);
  _V10_Dpair_D463.first = _V10_Dlengthof_D54;
  _V10_Dpair_D463.rest = VNULL;
  _V10_Dpair_D462.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D462.rest = VEncodePointer(&_V10_Dpair_D461, VPOINTER_PAIR);
  _V10_Dpair_D461.first = VEncodePointer(&_V10_Dpair_D460, VPOINTER_PAIR);
  _V10_Dpair_D461.rest = VNULL;
  _V10_Dpair_D460.first = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D460.rest = VEncodePointer(&_V10_Dpair_D457, VPOINTER_PAIR);
  _V10_Dpair_D459.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D459.rest = VEncodePointer(&_V10_Dpair_D458, VPOINTER_PAIR);
  _V10_Dpair_D458.first = VEncodePointer(&_V10_Dpair_D457, VPOINTER_PAIR);
  _V10_Dpair_D458.rest = VNULL;
  _V10_Dpair_D457.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D457.rest = VEncodePointer(&_V10_Dpair_D456, VPOINTER_PAIR);
  _V10_Dpair_D456.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D456.rest = VEncodePointer(&_V10_Dpair_D455, VPOINTER_PAIR);
  _V10_Dpair_D455.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D455.rest = VEncodePointer(&_V10_Dpair_D454, VPOINTER_PAIR);
  _V10_Dpair_D454.first = VEncodePointer(&_V10_Dpair_D447, VPOINTER_PAIR);
  _V10_Dpair_D454.rest = VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR);
  _V10_Dpair_D453.first = VEncodePointer(&_V10_Dpair_D449, VPOINTER_PAIR);
  _V10_Dpair_D453.rest = VEncodePointer(&_V10_Dpair_D452, VPOINTER_PAIR);
  _V10_Dpair_D452.first = VEncodePointer(&_V10_Dpair_D451, VPOINTER_PAIR);
  _V10_Dpair_D452.rest = VNULL;
  _V10_Dpair_D451.first = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D451.rest = VEncodePointer(&_V10_Dpair_D450, VPOINTER_PAIR);
  _V10_Dpair_D450.first = VEncodePointer(&_V10_Dpair_D388, VPOINTER_PAIR);
  _V10_Dpair_D450.rest = VEncodePointer(&_V10_Dpair_D437, VPOINTER_PAIR);
  _V10_Dpair_D449.first = VEncodePointer(&_V10_Dpair_D444, VPOINTER_PAIR);
  _V10_Dpair_D449.rest = VEncodePointer(&_V10_Dpair_D448, VPOINTER_PAIR);
  _V10_Dpair_D448.first = VEncodePointer(&_V10_Dpair_D447, VPOINTER_PAIR);
  _V10_Dpair_D448.rest = VNULL;
  _V10_Dpair_D447.first = _V0_Mk;
  _V10_Dpair_D447.rest = VEncodePointer(&_V10_Dpair_D446, VPOINTER_PAIR);
  _V10_Dpair_D446.first = _V0expr;
  _V10_Dpair_D446.rest = VEncodePointer(&_V10_Dpair_D445, VPOINTER_PAIR);
  _V10_Dpair_D445.first = _V0n;
  _V10_Dpair_D445.rest = VNULL;
  _V10_Dpair_D444.first = _V0vanity;
  _V10_Dpair_D444.rest = VEncodePointer(&_V10_Dpair_D443, VPOINTER_PAIR);
  _V10_Dpair_D443.first = _V0pretty__print;
  _V10_Dpair_D443.rest = VEncodePointer(&_V10_Dpair_D442, VPOINTER_PAIR);
  _V10_Dpair_D442.first = _V0short_Q;
  _V10_Dpair_D442.rest = VEncodePointer(&_V10_Dpair_D441, VPOINTER_PAIR);
  _V10_Dpair_D441.first = _V10_Dlengthof__list_D53;
  _V10_Dpair_D441.rest = VEncodePointer(&_V10_Dpair_D440, VPOINTER_PAIR);
  _V10_Dpair_D440.first = _V10_Dloop_D56;
  _V10_Dpair_D440.rest = VNULL;
  _V10_Dpair_D439.first = VEncodePointer(&_V10_Dpair_D433, VPOINTER_PAIR);
  _V10_Dpair_D439.rest = VEncodePointer(&_V10_Dpair_D438, VPOINTER_PAIR);
  _V10_Dpair_D438.first = VEncodePointer(&_V10_Dpair_D437, VPOINTER_PAIR);
  _V10_Dpair_D438.rest = VNULL;
  _V10_Dpair_D437.first = VEncodePointer(&_V10_Dpair_D435, VPOINTER_PAIR);
  _V10_Dpair_D437.rest = VEncodePointer(&_V10_Dpair_D436, VPOINTER_PAIR);
  _V10_Dpair_D436.first = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D436.rest = VEncodePointer(&_V10_Dpair_D426, VPOINTER_PAIR);
  _V10_Dpair_D435.first = _V0lengthof__list;
  _V10_Dpair_D435.rest = VEncodePointer(&_V10_Dpair_D434, VPOINTER_PAIR);
  _V10_Dpair_D434.first = _V0lengthof;
  _V10_Dpair_D434.rest = VNULL;
  _V10_Dpair_D433.first = VEncodePointer(&_V10_Dpair_D432, VPOINTER_PAIR);
  _V10_Dpair_D433.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D432.first = _V0vanity;
  _V10_Dpair_D432.rest = VEncodePointer(&_V10_Dpair_D431, VPOINTER_PAIR);
  _V10_Dpair_D431.first = _V0pretty__print;
  _V10_Dpair_D431.rest = VEncodePointer(&_V10_Dpair_D430, VPOINTER_PAIR);
  _V10_Dpair_D430.first = _V0short_Q;
  _V10_Dpair_D430.rest = VEncodePointer(&_V10_Dpair_D429, VPOINTER_PAIR);
  _V10_Dpair_D429.first = _V10_Dlengthof__list_D53;
  _V10_Dpair_D429.rest = VNULL;
  _V10_Dpair_D428.first = VEncodePointer(&_V10_Dpair_D425, VPOINTER_PAIR);
  _V10_Dpair_D428.rest = VEncodePointer(&_V10_Dpair_D427, VPOINTER_PAIR);
  _V10_Dpair_D427.first = VEncodePointer(&_V10_Dpair_D426, VPOINTER_PAIR);
  _V10_Dpair_D427.rest = VNULL;
  _V10_Dpair_D426.first = VEncodePointer(&_V10_Dpair_D418, VPOINTER_PAIR);
  _V10_Dpair_D426.rest = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D425.first = VEncodeBool(false);
  _V10_Dpair_D425.rest = VEncodePointer(&_V10_Dpair_D424, VPOINTER_PAIR);
  _V10_Dpair_D424.first = VEncodePointer(&_V10_Dpair_D423, VPOINTER_PAIR);
  _V10_Dpair_D424.rest = VNULL;
  _V10_Dpair_D423.first = _V0_Mk;
  _V10_Dpair_D423.rest = VEncodePointer(&_V10_Dpair_D422, VPOINTER_PAIR);
  _V10_Dpair_D422.first = _V0return;
  _V10_Dpair_D422.rest = VNULL;
  _V10_Dpair_D421.first = VEncodePointer(&_V10_Dpair_D420, VPOINTER_PAIR);
  _V10_Dpair_D421.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D420.first = VEncodePointer(&_V10_Dpair_D415, VPOINTER_PAIR);
  _V10_Dpair_D420.rest = VEncodePointer(&_V10_Dpair_D419, VPOINTER_PAIR);
  _V10_Dpair_D419.first = VEncodePointer(&_V10_Dpair_D418, VPOINTER_PAIR);
  _V10_Dpair_D419.rest = VNULL;
  _V10_Dpair_D418.first = _V0_Mk;
  _V10_Dpair_D418.rest = VEncodePointer(&_V10_Dpair_D417, VPOINTER_PAIR);
  _V10_Dpair_D417.first = _V0expr;
  _V10_Dpair_D417.rest = VEncodePointer(&_V10_Dpair_D416, VPOINTER_PAIR);
  _V10_Dpair_D416.first = _V0cutoff;
  _V10_Dpair_D416.rest = VNULL;
  _V10_Dpair_D415.first = _V0vanity;
  _V10_Dpair_D415.rest = VEncodePointer(&_V10_Dpair_D414, VPOINTER_PAIR);
  _V10_Dpair_D414.first = _V0pretty__print;
  _V10_Dpair_D414.rest = VEncodePointer(&_V10_Dpair_D413, VPOINTER_PAIR);
  _V10_Dpair_D413.first = _V0short_Q;
  _V10_Dpair_D413.rest = VNULL;
  _V10_Dpair_D412.first = VEncodePointer(&_V10_Dpair_D402, VPOINTER_PAIR);
  _V10_Dpair_D412.rest = VEncodePointer(&_V10_Dpair_D411, VPOINTER_PAIR);
  _V10_Dpair_D411.first = VEncodePointer(&_V10_Dpair_D404, VPOINTER_PAIR);
  _V10_Dpair_D411.rest = VEncodePointer(&_V10_Dpair_D410, VPOINTER_PAIR);
  _V10_Dpair_D410.first = VEncodePointer(&_V10_Dpair_D406, VPOINTER_PAIR);
  _V10_Dpair_D410.rest = VEncodePointer(&_V10_Dpair_D409, VPOINTER_PAIR);
  _V10_Dpair_D409.first = VEncodePointer(&_V10_Dpair_D408, VPOINTER_PAIR);
  _V10_Dpair_D409.rest = VNULL;
  _V10_Dpair_D408.first = _V0unquote__splicing;
  _V10_Dpair_D408.rest = VEncodePointer(&_V10_Dstring_D407.sym, VPOINTER_OTHER);
  _V10_Dpair_D406.first = _V0unquote;
  _V10_Dpair_D406.rest = VEncodePointer(&_V10_Dstring_D405.sym, VPOINTER_OTHER);
  _V10_Dpair_D404.first = _V0quasiquote;
  _V10_Dpair_D404.rest = VEncodePointer(&_V10_Dstring_D403.sym, VPOINTER_OTHER);
  _V10_Dpair_D402.first = _V0quote;
  _V10_Dpair_D402.rest = VEncodePointer(&_V10_Dstring_D401.sym, VPOINTER_OTHER);
  _V10_Dpair_D400.first = VEncodePointer(&_V10_Dpair_D362, VPOINTER_PAIR);
  _V10_Dpair_D400.rest = VEncodePointer(&_V10_Dpair_D399, VPOINTER_PAIR);
  _V10_Dpair_D399.first = VEncodePointer(&_V10_Dpair_D398, VPOINTER_PAIR);
  _V10_Dpair_D399.rest = VNULL;
  _V10_Dpair_D398.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D398.rest = VEncodePointer(&_V10_Dpair_D397, VPOINTER_PAIR);
  _V10_Dpair_D397.first = VEncodePointer(&_V10_Dpair_D388, VPOINTER_PAIR);
  _V10_Dpair_D397.rest = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D396.first = VEncodePointer(&_V10_Dpair_D395, VPOINTER_PAIR);
  _V10_Dpair_D396.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D395.first = VEncodePointer(&_V10_Dpair_D394, VPOINTER_PAIR);
  _V10_Dpair_D395.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D394.first = _V0vanity;
  _V10_Dpair_D394.rest = VEncodePointer(&_V10_Dpair_D393, VPOINTER_PAIR);
  _V10_Dpair_D393.first = _V0pretty__print;
  _V10_Dpair_D393.rest = VEncodePointer(&_V10_Dpair_D392, VPOINTER_PAIR);
  _V10_Dpair_D392.first = _V0quotation_Q;
  _V10_Dpair_D392.rest = VNULL;
  _V10_Dpair_D391.first = VEncodePointer(&_V10_Dpair_D390, VPOINTER_PAIR);
  _V10_Dpair_D391.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D390.first = VEncodePointer(&_V10_Dpair_D386, VPOINTER_PAIR);
  _V10_Dpair_D390.rest = VEncodePointer(&_V10_Dpair_D389, VPOINTER_PAIR);
  _V10_Dpair_D389.first = VEncodePointer(&_V10_Dpair_D388, VPOINTER_PAIR);
  _V10_Dpair_D389.rest = VNULL;
  _V10_Dpair_D388.first = _V0_Mk;
  _V10_Dpair_D388.rest = VEncodePointer(&_V10_Dpair_D387, VPOINTER_PAIR);
  _V10_Dpair_D387.first = _V0expr;
  _V10_Dpair_D387.rest = VNULL;
  _V10_Dpair_D386.first = _V0vanity;
  _V10_Dpair_D386.rest = VEncodePointer(&_V10_Dpair_D385, VPOINTER_PAIR);
  _V10_Dpair_D385.first = _V0pretty__print;
  _V10_Dpair_D385.rest = VEncodePointer(&_V10_Dpair_D384, VPOINTER_PAIR);
  _V10_Dpair_D384.first = _V0pretty__print;
  _V10_Dpair_D384.rest = VNULL;
  _V10_Dpair_D383.first = VEncodePointer(&_V10_Dpair_D366, VPOINTER_PAIR);
  _V10_Dpair_D383.rest = VEncodePointer(&_V10_Dpair_D382, VPOINTER_PAIR);
  _V10_Dpair_D382.first = VEncodePointer(&_V10_Dpair_D367, VPOINTER_PAIR);
  _V10_Dpair_D382.rest = VEncodePointer(&_V10_Dpair_D381, VPOINTER_PAIR);
  _V10_Dpair_D381.first = VEncodePointer(&_V10_Dpair_D368, VPOINTER_PAIR);
  _V10_Dpair_D381.rest = VEncodePointer(&_V10_Dpair_D380, VPOINTER_PAIR);
  _V10_Dpair_D380.first = VEncodePointer(&_V10_Dpair_D369, VPOINTER_PAIR);
  _V10_Dpair_D380.rest = VEncodePointer(&_V10_Dpair_D379, VPOINTER_PAIR);
  _V10_Dpair_D379.first = VEncodePointer(&_V10_Dpair_D370, VPOINTER_PAIR);
  _V10_Dpair_D379.rest = VEncodePointer(&_V10_Dpair_D378, VPOINTER_PAIR);
  _V10_Dpair_D378.first = VEncodePointer(&_V10_Dpair_D371, VPOINTER_PAIR);
  _V10_Dpair_D378.rest = VEncodePointer(&_V10_Dpair_D377, VPOINTER_PAIR);
  _V10_Dpair_D377.first = VEncodePointer(&_V10_Dpair_D372, VPOINTER_PAIR);
  _V10_Dpair_D377.rest = VEncodePointer(&_V10_Dpair_D376, VPOINTER_PAIR);
  _V10_Dpair_D376.first = VEncodePointer(&_V10_Dpair_D373, VPOINTER_PAIR);
  _V10_Dpair_D376.rest = VEncodePointer(&_V10_Dpair_D375, VPOINTER_PAIR);
  _V10_Dpair_D375.first = VEncodePointer(&_V10_Dpair_D374, VPOINTER_PAIR);
  _V10_Dpair_D375.rest = VNULL;
  _V10_Dpair_D374.first = _V0letrec_S;
  _V10_Dpair_D374.rest = VEncodeInt(2l);
  _V10_Dpair_D373.first = _V0let_S;
  _V10_Dpair_D373.rest = VEncodeInt(2l);
  _V10_Dpair_D372.first = _V0letrec;
  _V10_Dpair_D372.rest = VEncodeInt(2l);
  _V10_Dpair_D371.first = _V0let;
  _V10_Dpair_D371.rest = VEncodeInt(2l);
  _V10_Dpair_D370.first = _V0if;
  _V10_Dpair_D370.rest = VEncodeInt(4l);
  _V10_Dpair_D369.first = _V0continuation;
  _V10_Dpair_D369.rest = VEncodeInt(2l);
  _V10_Dpair_D368.first = _V0lambda;
  _V10_Dpair_D368.rest = VEncodeInt(2l);
  _V10_Dpair_D367.first = _V0set_B;
  _V10_Dpair_D367.rest = VEncodeInt(2l);
  _V10_Dpair_D366.first = _V0define;
  _V10_Dpair_D366.rest = VEncodeInt(2l);
  _V10_Dpair_D365.first = VEncodePointer(&_V10_Dpair_D362, VPOINTER_PAIR);
  _V10_Dpair_D365.rest = VEncodePointer(&_V10_Dpair_D364, VPOINTER_PAIR);
  _V10_Dpair_D364.first = VEncodePointer(&_V10_Dpair_D363, VPOINTER_PAIR);
  _V10_Dpair_D364.rest = VNULL;
  _V10_Dpair_D363.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D363.rest = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D362.first = VEncodeBool(false);
  _V10_Dpair_D362.rest = VEncodePointer(&_V10_Dpair_D361, VPOINTER_PAIR);
  _V10_Dpair_D361.first = VEncodePointer(&_V10_Dpair_D360, VPOINTER_PAIR);
  _V10_Dpair_D361.rest = VNULL;
  _V10_Dpair_D360.first = _V0ret;
  _V10_Dpair_D360.rest = VNULL;
  _V10_Dpair_D359.first = VEncodePointer(&_V10_Dpair_D358, VPOINTER_PAIR);
  _V10_Dpair_D359.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D358.first = VEncodePointer(&_V10_Dpair_D354, VPOINTER_PAIR);
  _V10_Dpair_D358.rest = VEncodePointer(&_V10_Dpair_D357, VPOINTER_PAIR);
  _V10_Dpair_D357.first = VEncodePointer(&_V10_Dpair_D356, VPOINTER_PAIR);
  _V10_Dpair_D357.rest = VNULL;
  _V10_Dpair_D356.first = _V0_Mk;
  _V10_Dpair_D356.rest = VEncodePointer(&_V10_Dpair_D355, VPOINTER_PAIR);
  _V10_Dpair_D355.first = _V0form;
  _V10_Dpair_D355.rest = VNULL;
  _V10_Dpair_D354.first = _V0vanity;
  _V10_Dpair_D354.rest = VEncodePointer(&_V10_Dpair_D353, VPOINTER_PAIR);
  _V10_Dpair_D353.first = _V0pretty__print;
  _V10_Dpair_D353.rest = VEncodePointer(&_V10_Dpair_D352, VPOINTER_PAIR);
  _V10_Dpair_D352.first = _V0join__line_Q;
  _V10_Dpair_D352.rest = VNULL;
  _V10_Dpair_D349.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D349.rest = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D348.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D348.rest = VEncodePointer(&_V10_Dpair_D347, VPOINTER_PAIR);
  _V10_Dpair_D347.first = VEncodePointer(&_V10_Dpair_D346, VPOINTER_PAIR);
  _V10_Dpair_D347.rest = VNULL;
  _V10_Dpair_D346.first = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D346.rest = VEncodePointer(&_V10_Dpair_D345, VPOINTER_PAIR);
  _V10_Dpair_D345.first = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D345.rest = VEncodePointer(&_V10_Dpair_D339, VPOINTER_PAIR);
  _V10_Dpair_D344.first = VEncodePointer(&_V10_Dpair_D343, VPOINTER_PAIR);
  _V10_Dpair_D344.rest = VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR);
  _V10_Dpair_D343.first = VEncodeBool(false);
  _V10_Dpair_D343.rest = VEncodePointer(&_V10_Dpair_D342, VPOINTER_PAIR);
  _V10_Dpair_D342.first = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D342.rest = VNULL;
  _V10_Dpair_D341.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D341.rest = VEncodePointer(&_V10_Dpair_D340, VPOINTER_PAIR);
  _V10_Dpair_D340.first = VEncodePointer(&_V10_Dpair_D339, VPOINTER_PAIR);
  _V10_Dpair_D340.rest = VNULL;
  _V10_Dpair_D339.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D339.rest = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D338.first = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D338.rest = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D337.first = _V0define;
  _V10_Dpair_D337.rest = VEncodePointer(&_V10_Dpair_D336, VPOINTER_PAIR);
  _V10_Dpair_D336.first = _V0lambda;
  _V10_Dpair_D336.rest = VEncodePointer(&_V10_Dpair_D335, VPOINTER_PAIR);
  _V10_Dpair_D335.first = _V0continuation;
  _V10_Dpair_D335.rest = VNULL;
  _V10_Dpair_D334.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D334.rest = VEncodePointer(&_V10_Dpair_D333, VPOINTER_PAIR);
  _V10_Dpair_D333.first = VEncodePointer(&_V10_Dpair_D332, VPOINTER_PAIR);
  _V10_Dpair_D333.rest = VNULL;
  _V10_Dpair_D332.first = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D332.rest = VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR);
  _V10_Dpair_D331.first = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D331.rest = VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR);
  _V10_Dpair_D329.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D329.rest = VEncodePointer(&_V10_Dpair_D328, VPOINTER_PAIR);
  _V10_Dpair_D328.first = VEncodePointer(&_V10_Dpair_D327, VPOINTER_PAIR);
  _V10_Dpair_D328.rest = VNULL;
  _V10_Dpair_D327.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D327.rest = VEncodePointer(&_V10_Dpair_D323, VPOINTER_PAIR);
  _V10_Dpair_D326.first = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D326.rest = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D325.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D325.rest = VEncodePointer(&_V10_Dpair_D324, VPOINTER_PAIR);
  _V10_Dpair_D324.first = VEncodePointer(&_V10_Dpair_D323, VPOINTER_PAIR);
  _V10_Dpair_D324.rest = VNULL;
  _V10_Dpair_D323.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D323.rest = VEncodePointer(&_V10_Dpair_D322, VPOINTER_PAIR);
  _V10_Dpair_D322.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D322.rest = VEncodePointer(&_V10_Dpair_D321, VPOINTER_PAIR);
  _V10_Dpair_D321.first = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D321.rest = VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR);
  _V10_Dpair_D319.first = VEncodePointer(&_V10_Dpair_D314, VPOINTER_PAIR);
  _V10_Dpair_D319.rest = VEncodePointer(&_V10_Dpair_D318, VPOINTER_PAIR);
  _V10_Dpair_D318.first = VEncodePointer(&_V10_Dpair_D317, VPOINTER_PAIR);
  _V10_Dpair_D318.rest = VNULL;
  _V10_Dpair_D317.first = VEncodePointer(&_V10_Dpair_D315, VPOINTER_PAIR);
  _V10_Dpair_D317.rest = VEncodePointer(&_V10_Dpair_D316, VPOINTER_PAIR);
  _V10_Dpair_D316.first = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D316.rest = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D315.first = _V0loop;
  _V10_Dpair_D315.rest = VNULL;
  _V10_Dpair_D314.first = VEncodePointer(&_V10_Dpair_D309, VPOINTER_PAIR);
  _V10_Dpair_D314.rest = VEncodePointer(&_V10_Dpair_D313, VPOINTER_PAIR);
  _V10_Dpair_D313.first = VEncodePointer(&_V10_Dpair_D312, VPOINTER_PAIR);
  _V10_Dpair_D313.rest = VNULL;
  _V10_Dpair_D312.first = _V0_Mk;
  _V10_Dpair_D312.rest = VEncodePointer(&_V10_Dpair_D311, VPOINTER_PAIR);
  _V10_Dpair_D311.first = _V0rest;
  _V10_Dpair_D311.rest = VEncodePointer(&_V10_Dpair_D310, VPOINTER_PAIR);
  _V10_Dpair_D310.first = _V0first__elem;
  _V10_Dpair_D310.rest = VNULL;
  _V10_Dpair_D309.first = _V0vanity;
  _V10_Dpair_D309.rest = VEncodePointer(&_V10_Dpair_D308, VPOINTER_PAIR);
  _V10_Dpair_D308.first = _V0pretty__print;
  _V10_Dpair_D308.rest = VEncodePointer(&_V10_Dpair_D307, VPOINTER_PAIR);
  _V10_Dpair_D307.first = _V0pretty__print__impl;
  _V10_Dpair_D307.rest = VEncodePointer(&_V10_Dpair_D306, VPOINTER_PAIR);
  _V10_Dpair_D306.first = _V10_Dloop_D40;
  _V10_Dpair_D306.rest = VNULL;
  _V10_Dpair_D305.first = VEncodePointer(&_V10_Dpair_D304, VPOINTER_PAIR);
  _V10_Dpair_D305.rest = VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR);
  _V10_Dpair_D304.first = VEncodeBool(false);
  _V10_Dpair_D304.rest = VEncodePointer(&_V10_Dpair_D303, VPOINTER_PAIR);
  _V10_Dpair_D303.first = VEncodePointer(&_V10_Dpair_D302, VPOINTER_PAIR);
  _V10_Dpair_D303.rest = VNULL;
  _V10_Dpair_D302.first = _V0new__indent;
  _V10_Dpair_D302.rest = VNULL;
  _V10_Dpair_D301.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D301.rest = VEncodePointer(&_V10_Dpair_D300, VPOINTER_PAIR);
  _V10_Dpair_D300.first = VEncodePointer(&_V10_Dpair_D299, VPOINTER_PAIR);
  _V10_Dpair_D300.rest = VNULL;
  _V10_Dpair_D299.first = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D299.rest = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D298.first = VEncodePointer(&_V10_Dpair_D297, VPOINTER_PAIR);
  _V10_Dpair_D298.rest = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D297.first = VEncodeBool(false);
  _V10_Dpair_D297.rest = VEncodePointer(&_V10_Dpair_D296, VPOINTER_PAIR);
  _V10_Dpair_D296.first = VEncodePointer(&_V10_Dpair_D295, VPOINTER_PAIR);
  _V10_Dpair_D296.rest = VNULL;
  _V10_Dpair_D295.first = _V0first__indent;
  _V10_Dpair_D295.rest = VNULL;
  _V10_Dpair_D294.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D294.rest = VEncodePointer(&_V10_Dpair_D293, VPOINTER_PAIR);
  _V10_Dpair_D293.first = VEncodePointer(&_V10_Dpair_D292, VPOINTER_PAIR);
  _V10_Dpair_D293.rest = VNULL;
  _V10_Dpair_D292.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D292.rest = VEncodePointer(&_V10_Dpair_D291, VPOINTER_PAIR);
  _V10_Dpair_D291.first = VEncodePointer(&_V10_Dpair_D196, VPOINTER_PAIR);
  _V10_Dpair_D291.rest = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D290.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D290.rest = VEncodePointer(&_V10_Dpair_D289, VPOINTER_PAIR);
  _V10_Dpair_D289.first = VEncodePointer(&_V10_Dpair_D288, VPOINTER_PAIR);
  _V10_Dpair_D289.rest = VNULL;
  _V10_Dpair_D288.first = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D288.rest = VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR);
  _V10_Dpair_D287.first = VEncodePointer(&_V10_Dpair_D282, VPOINTER_PAIR);
  _V10_Dpair_D287.rest = VEncodePointer(&_V10_Dpair_D286, VPOINTER_PAIR);
  _V10_Dpair_D286.first = VEncodePointer(&_V10_Dpair_D285, VPOINTER_PAIR);
  _V10_Dpair_D286.rest = VNULL;
  _V10_Dpair_D285.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D285.rest = VEncodePointer(&_V10_Dpair_D284, VPOINTER_PAIR);
  _V10_Dpair_D284.first = VEncodePointer(&_V10_Dpair_D283, VPOINTER_PAIR);
  _V10_Dpair_D284.rest = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D283.first = _V0_Mx;
  _V10_Dpair_D283.rest = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D282.first = VEncodeBool(false);
  _V10_Dpair_D282.rest = VEncodePointer(&_V10_Dpair_D281, VPOINTER_PAIR);
  _V10_Dpair_D281.first = VEncodePointer(&_V10_Dpair_D280, VPOINTER_PAIR);
  _V10_Dpair_D281.rest = VNULL;
  _V10_Dpair_D280.first = _V0join__line;
  _V10_Dpair_D280.rest = VNULL;
  _V10_Dpair_D279.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D279.rest = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D278.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D278.rest = VEncodePointer(&_V10_Dpair_D277, VPOINTER_PAIR);
  _V10_Dpair_D277.first = VEncodePointer(&_V10_Dpair_D276, VPOINTER_PAIR);
  _V10_Dpair_D277.rest = VNULL;
  _V10_Dpair_D276.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D276.rest = VEncodePointer(&_V10_Dpair_D275, VPOINTER_PAIR);
  _V10_Dpair_D275.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D275.rest = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D274.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D274.rest = VEncodePointer(&_V10_Dpair_D273, VPOINTER_PAIR);
  _V10_Dpair_D273.first = VEncodePointer(&_V10_Dpair_D272, VPOINTER_PAIR);
  _V10_Dpair_D273.rest = VNULL;
  _V10_Dpair_D272.first = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D272.rest = VEncodePointer(&_V10_Dpair_D269, VPOINTER_PAIR);
  _V10_Dpair_D271.first = VEncodePointer(&_V10_Dpair_D268, VPOINTER_PAIR);
  _V10_Dpair_D271.rest = VEncodePointer(&_V10_Dpair_D270, VPOINTER_PAIR);
  _V10_Dpair_D270.first = VEncodePointer(&_V10_Dpair_D269, VPOINTER_PAIR);
  _V10_Dpair_D270.rest = VNULL;
  _V10_Dpair_D269.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D269.rest = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D268.first = VEncodeBool(false);
  _V10_Dpair_D268.rest = VEncodePointer(&_V10_Dpair_D267, VPOINTER_PAIR);
  _V10_Dpair_D267.first = VEncodePointer(&_V10_Dpair_D266, VPOINTER_PAIR);
  _V10_Dpair_D267.rest = VNULL;
  _V10_Dpair_D266.first = _V0x_D1;
  _V10_Dpair_D266.rest = VNULL;
  _V10_Dpair_D265.first = VEncodePointer(&_V10_Dpair_D261, VPOINTER_PAIR);
  _V10_Dpair_D265.rest = VEncodePointer(&_V10_Dpair_D264, VPOINTER_PAIR);
  _V10_Dpair_D264.first = VEncodePointer(&_V10_Dpair_D263, VPOINTER_PAIR);
  _V10_Dpair_D264.rest = VNULL;
  _V10_Dpair_D263.first = VEncodePointer(&_V10_Dpair_D262, VPOINTER_PAIR);
  _V10_Dpair_D263.rest = VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR);
  _V10_Dpair_D262.first = _V0_Mx;
  _V10_Dpair_D262.rest = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D261.first = VEncodeBool(false);
  _V10_Dpair_D261.rest = VEncodePointer(&_V10_Dpair_D260, VPOINTER_PAIR);
  _V10_Dpair_D260.first = VEncodePointer(&_V10_Dpair_D259, VPOINTER_PAIR);
  _V10_Dpair_D260.rest = VNULL;
  _V10_Dpair_D259.first = _V0_Mp;
  _V10_Dpair_D259.rest = VNULL;
  _V10_Dpair_D258.first = VEncodePointer(&_V10_Dpair_D254, VPOINTER_PAIR);
  _V10_Dpair_D258.rest = VEncodePointer(&_V10_Dpair_D257, VPOINTER_PAIR);
  _V10_Dpair_D257.first = VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR);
  _V10_Dpair_D257.rest = VNULL;
  _V10_Dpair_D256.first = _V0unquote;
  _V10_Dpair_D256.rest = VEncodePointer(&_V10_Dpair_D255, VPOINTER_PAIR);
  _V10_Dpair_D255.first = _V0unmangled__env;
  _V10_Dpair_D255.rest = VNULL;
  _V10_Dpair_D254.first = VEncodeBool(false);
  _V10_Dpair_D254.rest = VEncodePointer(&_V10_Dpair_D253, VPOINTER_PAIR);
  _V10_Dpair_D253.first = _V0_U;
  _V10_Dpair_D253.rest = VNULL;
  _V10_Dpair_D252.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D252.rest = VEncodePointer(&_V10_Dpair_D251, VPOINTER_PAIR);
  _V10_Dpair_D251.first = VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR);
  _V10_Dpair_D251.rest = VNULL;
  _V10_Dpair_D250.first = VEncodePointer(&_V10_Dpair_D235, VPOINTER_PAIR);
  _V10_Dpair_D250.rest = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D249.first = VEncodePointer(&_V10_Dpair_D237, VPOINTER_PAIR);
  _V10_Dpair_D249.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D248.first = VEncodePointer(&_V10_Dpair_D247, VPOINTER_PAIR);
  _V10_Dpair_D248.rest = VNULL;
  _V10_Dpair_D247.first = VEncodePointer(&_V10_Dpair_D245, VPOINTER_PAIR);
  _V10_Dpair_D247.rest = VEncodePointer(&_V10_Dpair_D246, VPOINTER_PAIR);
  _V10_Dpair_D246.first = VEncodePointer(&_V10_Dpair_D224, VPOINTER_PAIR);
  _V10_Dpair_D246.rest = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D245.first = _V0pretty__print__impl;
  _V10_Dpair_D245.rest = VEncodePointer(&_V10_Dpair_D244, VPOINTER_PAIR);
  _V10_Dpair_D244.first = _V0join__line_Q;
  _V10_Dpair_D244.rest = VEncodePointer(&_V10_Dpair_D243, VPOINTER_PAIR);
  _V10_Dpair_D243.first = _V0pretty__print;
  _V10_Dpair_D243.rest = VEncodePointer(&_V10_Dpair_D242, VPOINTER_PAIR);
  _V10_Dpair_D242.first = _V0quotation_Q;
  _V10_Dpair_D242.rest = VEncodePointer(&_V10_Dpair_D241, VPOINTER_PAIR);
  _V10_Dpair_D241.first = _V0short_Q;
  _V10_Dpair_D241.rest = VEncodePointer(&_V10_Dpair_D240, VPOINTER_PAIR);
  _V10_Dpair_D240.first = _V0lengthof__atom;
  _V10_Dpair_D240.rest = VEncodePointer(&_V10_Dpair_D239, VPOINTER_PAIR);
  _V10_Dpair_D239.first = _V0atom_Q;
  _V10_Dpair_D239.rest = VEncodePointer(&_V10_Dpair_D238, VPOINTER_PAIR);
  _V10_Dpair_D238.first = _V0print__indent;
  _V10_Dpair_D238.rest = VNULL;
  _V10_Dpair_D237.first = VEncodePointer(&_V10_Dpair_D230, VPOINTER_PAIR);
  _V10_Dpair_D237.rest = VEncodePointer(&_V10_Dpair_D236, VPOINTER_PAIR);
  _V10_Dpair_D236.first = VEncodePointer(&_V10_Dpair_D235, VPOINTER_PAIR);
  _V10_Dpair_D236.rest = VNULL;
  _V10_Dpair_D235.first = _V0_Mk;
  _V10_Dpair_D235.rest = VEncodePointer(&_V10_Dpair_D234, VPOINTER_PAIR);
  _V10_Dpair_D234.first = _V0expr;
  _V10_Dpair_D234.rest = VEncodePointer(&_V10_Dpair_D233, VPOINTER_PAIR);
  _V10_Dpair_D233.first = _V0indent;
  _V10_Dpair_D233.rest = VEncodePointer(&_V10_Dpair_D232, VPOINTER_PAIR);
  _V10_Dpair_D232.first = _V0indent__this_Q;
  _V10_Dpair_D232.rest = VEncodePointer(&_V10_Dpair_D231, VPOINTER_PAIR);
  _V10_Dpair_D231.first = _V0short__threshold;
  _V10_Dpair_D231.rest = VNULL;
  _V10_Dpair_D230.first = _V0vanity;
  _V10_Dpair_D230.rest = VEncodePointer(&_V10_Dpair_D229, VPOINTER_PAIR);
  _V10_Dpair_D229.first = _V0pretty__print;
  _V10_Dpair_D229.rest = VEncodePointer(&_V10_Dpair_D228, VPOINTER_PAIR);
  _V10_Dpair_D228.first = _V0pretty__print__impl;
  _V10_Dpair_D228.rest = VNULL;
  _V10_Dpair_D227.first = VEncodePointer(&_V10_Dpair_D226, VPOINTER_PAIR);
  _V10_Dpair_D227.rest = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D226.first = VEncodeBool(false);
  _V10_Dpair_D226.rest = VEncodePointer(&_V10_Dpair_D225, VPOINTER_PAIR);
  _V10_Dpair_D225.first = VEncodePointer(&_V10_Dpair_D224, VPOINTER_PAIR);
  _V10_Dpair_D225.rest = VNULL;
  _V10_Dpair_D224.first = _V0_Mk;
  _V10_Dpair_D224.rest = VEncodePointer(&_V10_Dpair_D223, VPOINTER_PAIR);
  _V10_Dpair_D223.first = _V0memv;
  _V10_Dpair_D223.rest = VEncodePointer(&_V10_Dpair_D222, VPOINTER_PAIR);
  _V10_Dpair_D222.first = _V0max;
  _V10_Dpair_D222.rest = VEncodePointer(&_V10_Dpair_D221, VPOINTER_PAIR);
  _V10_Dpair_D221.first = _V0newline;
  _V10_Dpair_D221.rest = VEncodePointer(&_V10_Dpair_D220, VPOINTER_PAIR);
  _V10_Dpair_D220.first = _V0display;
  _V10_Dpair_D220.rest = VEncodePointer(&_V10_Dpair_D219, VPOINTER_PAIR);
  _V10_Dpair_D219.first = _V0cadr;
  _V10_Dpair_D219.rest = VEncodePointer(&_V10_Dpair_D218, VPOINTER_PAIR);
  _V10_Dpair_D218.first = _V0write;
  _V10_Dpair_D218.rest = VEncodePointer(&_V10_Dpair_D217, VPOINTER_PAIR);
  _V10_Dpair_D217.first = _V0assv;
  _V10_Dpair_D217.rest = VEncodePointer(&_V10_Dpair_D216, VPOINTER_PAIR);
  _V10_Dpair_D216.first = _V0close__port;
  _V10_Dpair_D216.rest = VEncodePointer(&_V10_Dpair_D215, VPOINTER_PAIR);
  _V10_Dpair_D215.first = _V0get__output__string;
  _V10_Dpair_D215.rest = VEncodePointer(&_V10_Dpair_D214, VPOINTER_PAIR);
  _V10_Dpair_D214.first = _V0open__output__string;
  _V10_Dpair_D214.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D211.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D211.rest = VEncodePointer(&_V10_Dpair_D210, VPOINTER_PAIR);
  _V10_Dpair_D210.first = VEncodePointer(&_V10_Dpair_D209, VPOINTER_PAIR);
  _V10_Dpair_D210.rest = VNULL;
  _V10_Dpair_D209.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D209.rest = VEncodePointer(&_V10_Dpair_D206, VPOINTER_PAIR);
  _V10_Dpair_D208.first = VEncodePointer(&_V10_Dpair_D205, VPOINTER_PAIR);
  _V10_Dpair_D208.rest = VEncodePointer(&_V10_Dpair_D207, VPOINTER_PAIR);
  _V10_Dpair_D207.first = VEncodePointer(&_V10_Dpair_D206, VPOINTER_PAIR);
  _V10_Dpair_D207.rest = VNULL;
  _V10_Dpair_D206.first = VEncodePointer(&_V10_Dpair_D196, VPOINTER_PAIR);
  _V10_Dpair_D206.rest = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D205.first = VEncodeBool(false);
  _V10_Dpair_D205.rest = VEncodePointer(&_V10_Dpair_D204, VPOINTER_PAIR);
  _V10_Dpair_D204.first = VEncodePointer(&_V10_Dpair_D203, VPOINTER_PAIR);
  _V10_Dpair_D204.rest = VNULL;
  _V10_Dpair_D203.first = _V0_Mx;
  _V10_Dpair_D203.rest = VNULL;
  _V10_Dpair_D202.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D202.rest = VEncodePointer(&_V10_Dpair_D201, VPOINTER_PAIR);
  _V10_Dpair_D201.first = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D201.rest = VNULL;
  _V10_Dpair_D200.first = VEncodePointer(&_V10_Dpair_D198, VPOINTER_PAIR);
  _V10_Dpair_D200.rest = VEncodePointer(&_V10_Dpair_D199, VPOINTER_PAIR);
  _V10_Dpair_D199.first = VNULL;
  _V10_Dpair_D199.rest = VNULL;
  _V10_Dpair_D198.first = VEncodeBool(false);
  _V10_Dpair_D198.rest = VEncodePointer(&_V10_Dpair_D197, VPOINTER_PAIR);
  _V10_Dpair_D197.first = VEncodePointer(&_V10_Dpair_D196, VPOINTER_PAIR);
  _V10_Dpair_D197.rest = VNULL;
  _V10_Dpair_D196.first = _V0_Mk;
  _V10_Dpair_D196.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0pretty__print_V20_V0k2, VEncodePointer(&_V10_Dpair_D211, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0pretty__print_V20_V0k1, VEncodePointer(&_V10_Dpair_D208, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0pretty__print_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D202, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k3, VEncodePointer(&_V10_Dpair_D252, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k9, VEncodePointer(&_V10_Dpair_D278, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k10, VEncodePointer(&_V10_Dpair_D279, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k8, VEncodePointer(&_V10_Dpair_D274, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k7, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k15, VEncodePointer(&_V10_Dpair_D294, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k14, VEncodePointer(&_V10_Dpair_D290, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k17, VEncodePointer(&_V10_Dpair_D301, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k19, VEncodePointer(&_V10_Dpair_D325, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k21, VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k23, VEncodePointer(&_V10_Dpair_D329, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k25, VEncodePointer(&_V10_Dpair_D334, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k27, VEncodePointer(&_V10_Dpair_D341, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k29, VEncodePointer(&_V10_Dpair_D348, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k31, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k30, VEncodePointer(&_V10_Dpair_D349, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k28, VEncodePointer(&_V10_Dpair_D344, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k26, VEncodePointer(&_V10_Dpair_D338, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k24, VEncodePointer(&_V10_Dpair_D331, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k22, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k20, VEncodePointer(&_V10_Dpair_D326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k35, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k34, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k33, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40_V0k32, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V10_Dloop_D40, VEncodePointer(&_V10_Dpair_D319, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k18, VEncodePointer(&_V10_Dpair_D305, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k16, VEncodePointer(&_V10_Dpair_D298, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k13, VEncodePointer(&_V10_Dpair_D287, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k12, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k11, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k6, VEncodePointer(&_V10_Dpair_D271, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k5, VEncodePointer(&_V10_Dpair_D265, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl_V0k4, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print__impl, VEncodePointer(&_V10_Dpair_D249, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q_V0k36, VEncodePointer(&_V10_Dpair_D365, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0join__line_Q, VEncodePointer(&_V10_Dpair_D359, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print_V0k37, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0pretty__print, VEncodePointer(&_V10_Dpair_D391, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q_V0k38, VEncodePointer(&_V10_Dpair_D400, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0quotation_Q, VEncodePointer(&_V10_Dpair_D396, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k39, VEncodePointer(&_V10_Dpair_D459, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56_V0k40, VEncodePointer(&_V10_Dpair_D462, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53_V10_Dloop_D56, VEncodePointer(&_V10_Dpair_D453, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof__list_D53, VEncodePointer(&_V10_Dpair_D439, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k42, VEncodePointer(&_V10_Dpair_D475, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k45, VEncodePointer(&_V10_Dpair_D482, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k44, VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k43, VEncodePointer(&_V10_Dpair_D476, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54_V0k41, VEncodePointer(&_V10_Dpair_D471, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V10_Dlengthof_D54, VEncodePointer(&_V10_Dpair_D468, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0k46, VEncodePointer(&_V10_Dpair_D486, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q_V0lambda4, VEncodePointer(&_V10_Dpair_D428, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0short_Q, VEncodePointer(&_V10_Dpair_D421, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k50, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k49, VEncodePointer(&_V10_Dpair_D499, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k48, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom_V0k47, VEncodePointer(&_V10_Dpair_D496, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0lengthof__atom, VEncodePointer(&_V10_Dpair_D491, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0atom_Q, VEncodePointer(&_V10_Dpair_D504, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent_V0k51, VEncodePointer(&_V10_Dpair_D258, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0pretty__print_V0print__indent, VEncodePointer(&_V10_Dpair_D511, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0pretty__print_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D227, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0pretty__print_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D200, VPOINTER_PAIR));
}
