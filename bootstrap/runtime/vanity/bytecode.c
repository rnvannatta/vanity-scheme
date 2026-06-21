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

V_DECLARE_FUNC(VFunction3, _var0, _var1);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0bytecode;

static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
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
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static VPair _V10_Dpair_D1639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0preprocess__loop;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0preprocess__loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "preprocess-loop" };
static VPair _V10_Dpair_D1634 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1633 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1632 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1631 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1630 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1629 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1628 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1627 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dpreprocess__loop_D232;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10_Dpreprocess__loop_D232 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##.preprocess-loop.232" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1626 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
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
static VPair _V10_Dpair_D1614 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1613 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin: malformed" };
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
VWEAK VWORD _V0expr_D53;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D53 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.53" };
static VPair _V10_Dpair_D1600 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1599 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1598 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1597 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1596 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1595 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1593 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1592 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
static VPair _V10_Dpair_D1591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D61;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D61 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.61" };
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
VWEAK VWORD _V0expr_D51;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D51 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.51" };
static VPair _V10_Dpair_D1575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1573 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1571 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1570 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1569 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
static VPair _V10_Dpair_D1568 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1559 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1558 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1557 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
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
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
static VPair _V10_Dpair_D1545 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0args = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "args" };
static VPair _V10_Dpair_D1539 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D47;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D47 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.47" };
static VPair _V10_Dpair_D1534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D1522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args_D45;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0args_D45 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "args.45" };
VWEAK VWORD _V0expr_D48;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D48 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.48" };
static VPair _V10_Dpair_D1517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D213;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D213 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.213" };
static VPair _V10_Dpair_D1512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D46;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D46 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.46" };
static VPair _V10_Dpair_D1505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D41;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D41 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.41" };
static VPair _V10_Dpair_D1497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D42;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D42 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.42" };
VWEAK VWORD _V0lang;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lang = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lang" };
static VPair _V10_Dpair_D1495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D43;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D43 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.43" };
VWEAK VWORD _V0ret;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ret" };
static VPair _V10_Dpair_D1493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D44;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D44 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.44" };
static VPair _V10_Dpair_D1491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static VPair _V10_Dpair_D1483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
static VPair _V10_Dpair_D1476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D60;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D60 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.60" };
static VPair _V10_Dpair_D1472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static VPair _V10_Dpair_D1466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D38;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D38 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.38" };
static VPair _V10_Dpair_D1458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D39;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D39 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.39" };
static VPair _V10_Dpair_D1456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A_shim" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "vasm foreign-function: not a nonnegative integer" };
static VPair _V10_Dpair_D1447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static VPair _V10_Dpair_D1441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D59;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D59 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.59" };
static VPair _V10_Dpair_D1437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0expr_D36;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D36 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.36" };
static VPair _V10_Dpair_D1417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1410 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static VPair _V10_Dpair_D1409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1403 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static VPair _V10_Dpair_D1402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D58;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D58 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.58" };
static VPair _V10_Dpair_D1398 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1395 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "vasm close: malformed env name" };
static VPair _V10_Dpair_D1394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D34;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D34 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.34" };
static VPair _V10_Dpair_D1374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static VPair _V10_Dpair_D1365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D31;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D31 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.31" };
static VPair _V10_Dpair_D1357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D32;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.32" };
static VPair _V10_Dpair_D1355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0str;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0str = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "str" };
static VPair _V10_Dpair_D1354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1347 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1346 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static VPair _V10_Dpair_D1345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D57;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D57 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.57" };
static VPair _V10_Dpair_D1341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1337 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static VPair _V10_Dpair_D1336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D28;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D28 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.28" };
static VPair _V10_Dpair_D1319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D29;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D29 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.29" };
static VPair _V10_Dpair_D1317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1310 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1309 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static VPair _V10_Dpair_D1308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D56;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D56 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.56" };
static VPair _V10_Dpair_D1304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1300 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
static VPair _V10_Dpair_D1299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D25;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D25 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.25" };
static VPair _V10_Dpair_D1282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D26;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D26 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.26" };
static VPair _V10_Dpair_D1280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0b;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0b = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "b" };
static VPair _V10_Dpair_D1279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1272 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
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
VWEAK VWORD _V0expr_D23;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D23 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.23" };
static VPair _V10_Dpair_D1259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1252 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
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
VWEAK VWORD _V0expr_D21;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D21 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.21" };
static VPair _V10_Dpair_D1239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
static VPair _V10_Dpair_D1231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D19;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D19 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.19" };
static VPair _V10_Dpair_D1219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1212 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
static VPair _V10_Dpair_D1211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D17;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D17 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.17" };
static VPair _V10_Dpair_D1204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1197 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static VPair _V10_Dpair_D1196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D14;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D14 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.14" };
static VPair _V10_Dpair_D1183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D15;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D15 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.15" };
VWEAK VWORD _V0up;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0up = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "up" };
static VPair _V10_Dpair_D1181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0right;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "right" };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1173 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
static VPair _V10_Dpair_D1172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D55;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D55 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.55" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
static VPair _V10_Dpair_D1168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40VFunction3;
VWEAK VClosure _VW_V40VFunction3 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction3, NULL };
static VPair _V10_Dpair_D1164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D12;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.12" };
static VPair _V10_Dpair_D1157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
static VPair _V10_Dpair_D1150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D10;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D10 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.10" };
static VPair _V10_Dpair_D1143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1136 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1135 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1134 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1133 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1132 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1131 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1130 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1129 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1128 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1127 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1126 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1125 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1121 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1120 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1119 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1118 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1117 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D6;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0kk_D6 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "kk.6" };
static VPair _V10_Dpair_D1116 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1115 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dpreprocess__expr_D124;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10_Dpreprocess__expr_D124 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##.preprocess-expr.124" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1107 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static VPair _V10_Dpair_D1106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1102 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static VPair _V10_Dpair_D1101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1099 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1098 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1097 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1096 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1095 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1094 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1093 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1092 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1091 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1090 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.4" };
static VPair _V10_Dpair_D1089 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1088 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D5;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D5 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.5" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static VPair _V10_Dpair_D1087 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D1086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1085 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1084 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1083 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1082 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1081 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1080 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1079 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0input_D2;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0input_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "input.2" };
static VPair _V10_Dpair_D1077 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D1;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0kk_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "kk.1" };
static VPair _V10_Dpair_D1069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0len;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0len = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "len" };
static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0peel__loop;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0peel__loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "peel-loop" };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dpeel__loop_D127;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10_Dpeel__loop_D127 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##.peel-loop.127" };
static VPair _V10_Dpair_D1056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1054 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0preprocess__expr;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0preprocess__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "preprocess-expr" };
VWEAK VWORD _V0peel__labels;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0peel__labels = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "peel-labels" };
VWEAK VWORD _V0labels;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0labels = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "labels" };
static VPair _V10_Dpair_D1050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dpeel__labels_D123;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10_Dpeel__labels_D123 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##.peel-labels.123" };
static VPair _V10_Dpair_D1045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1041 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1040 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1035 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
static VPair _V10_Dpair_D1034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D65;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D65 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.65" };
static VPair _V10_Dpair_D1023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D66;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D66 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.66" };
VWEAK VWORD _V0name;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "name" };
static VPair _V10_Dpair_D1021 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D1019 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1018 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1017 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1013 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1012 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1011 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1010 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
VWEAK VWORD _V0input_D63;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0input_D63 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "input.63" };
static VPair _V10_Dpair_D1007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D62;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D62 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.62" };
static VPair _V10_Dpair_D1002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set__declare__loop;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0set__declare__loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "set-declare-loop" };
static VPair _V10_Dpair_D994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0pc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0pc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "pc" };
static VPair _V10_Dpair_D990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dset__declare__loop_D109;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10_Dset__declare__loop_D109 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##.set-declare-loop.109" };
static VPair _V10_Dpair_D986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D983 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D982 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D981 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D980 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D979 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
static VPair _V10_Dpair_D978 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D977 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D976 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D975 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D974 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D973 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D972 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D971 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D970 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D969 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D968 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0eval__loop;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-loop" };
VWEAK VWORD _V0program__counter;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0program__counter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "program-counter" };
VWEAK VWORD _V0tape;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0tape = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "tape" };
static VPair _V10_Dpair_D948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D947 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rets;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0rets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "rets" };
static VPair _V10_Dpair_D945 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D942 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Deval__loop_D104;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10_Deval__loop_D104 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##.eval-loop.104" };
static VPair _V10_Dpair_D941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D940 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D939 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D938 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D937 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D936 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D935 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D934 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D933 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D932 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D931 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D930 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D929 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D928 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0preprocess__vasm;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0preprocess__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "preprocess-vasm" };
VWEAK VWORD _V0find__declare;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0find__declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "find-declare" };
VWEAK VWORD _V0make__vasm__lambda;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0make__vasm__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "make-vasm-lambda" };
VWEAK VWORD _V0eval__vasm__toplevel;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0eval__vasm__toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "eval-vasm-toplevel" };
VWEAK VWORD _V0set__declares_B;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0set__declares_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "set-declares!" };
VWEAK VWORD _V0find__toplevel;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0find__toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "find-toplevel" };
static VPair _V10_Dpair_D927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vasm;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "vasm" };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D910 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D909 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D908 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D907 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D906 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D905 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D904 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D903 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D902 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D901 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D900 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D899 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D898 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D897 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D896 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D891 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__declare, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__toplevel, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0eval__vasm, _var0, _var1);
static void _V0vanity_V0bytecode_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.238 4 0) (##string ##.string.906) (bruijn ##.%x.239 0 0) 'values 'equal? 'error 'lookup-intrinsic 'sprintf 'reverse 'assv)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 10,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D906.sym, VPOINTER_OTHER),
      _var0,
      _V0values,
      _V0equal_Q,
      _V0error,
      _V0lookup__intrinsic,
      _V0sprintf,
      _V0reverse,
      _V0assv);
}
static void _V0vanity_V0bytecode_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0bytecode_V20_V0k4) (bruijn ##.%x.240 2 0) (bruijn ##.%x.241 1 0) (bruijn ##.%x.242 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k4, self)))),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0bytecode_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k3) (##string ##.string.907))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D907.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k2) (##string ##.string.908))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D908.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k1) (##string ##.string.909))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D909.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.248 1 0) (bruijn ##.program-counter.103 3 1) (bruijn ##.%x.249 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.103 2 1) (##qualified-call (vanity bytecode find-toplevel) #t (bruijn ##.find-toplevel.95 5 1) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k7) (bruijn ##.tape.102 2 0) (bruijn ##.program-counter.103 2 1)) ((bruijn ##.%k.248 0 0) #f))
if(VDecodeBool(
statics->up->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k7, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-vasm-toplevel.97 5 3) (bruijn ##.%k.247 0 0) (bruijn ##.tape.102 2 0) (bruijn ##.program-counter.103 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      _var0,
      statics->up->vars[0],
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k8(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.program-counter.103 1 1) (##vcore.call-with-values (bruijn ##.%k.246 0 0) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0lambda4) (bruijn ##.eval-loop.104 1 2)) (##vcore.apply (bruijn ##.%k.246 0 0) (bruijn ##.values.67 5 1) (bruijn ##.rets.105 0 1)))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0lambda4, self)))),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      self->vars[0],
      VGetArg(statics, 5-1, 1),
      self->vars[1]);
}
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104, got ~D~N"
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
  // ((close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k6) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k8, self)))));
}
static void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity bytecode eval-vasm ##.eval-loop.104) #f (bruijn ##.eval-loop.104 0 2) (bruijn ##.%k.244 2 0))
  {
    VClosure * _closure = VDecodeClosure(self->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104(runtime, _closure_env, 1, _arg0);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.%x.245 1 0) 0 (close "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104")) (##qualified-call (vanity bytecode set-declares!) #t (bruijn ##.set-declares!.96 3 2) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9) (bruijn ##.tape.102 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k9, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B, _V60_V0vanity_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0eval__vasm(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity bytecode preprocess-vasm) #t (bruijn ##.preprocess-vasm.100 1 6) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5) (bruijn ##.vasm.101 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k5, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm, _V60_V0vanity_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0find__toplevel(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0find__toplevel" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0find__toplevel, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.601 ##.%p.602) ((##vcore.vector-length (bruijn ##.tape.106 1 1)) (##vcore.>= (bruijn ##.program-counter.107 1 2) (bruijn ##.%x.601 0 0))) (if (bruijn ##.%p.602 0 1) ((bruijn ##.%k.250 1 0) #f) (basic-block 3 3 (##.%x.603 ##.%x.604 ##.%p.605) ((##vcore.vector-ref (bruijn ##.tape.106 2 1) (bruijn ##.program-counter.107 2 2)) (##vcore.car (bruijn ##.%x.603 0 0)) (##vcore.eq? (bruijn ##.%x.604 0 1) 'toplevel)) (if (bruijn ##.%p.605 0 2) (basic-block 1 1 (##.%r.606) ((##vcore.+ (bruijn ##.program-counter.107 3 2) 1)) ((bruijn ##.%k.250 3 0) (bruijn ##.%r.606 0 0))) (basic-block 1 1 (##.%x.607) ((##vcore.+ 1 (bruijn ##.program-counter.107 3 2))) (##qualified-call (vanity bytecode find-toplevel) #t (bruijn ##.find-toplevel.95 4 1) (bruijn ##.%k.250 3 0) (bruijn ##.tape.106 3 1) (bruijn ##.%x.607 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[2],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[1],
      _V0toplevel);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.109) #f (bruijn ##.set-declare-loop.109 2 0) (bruijn ##.%k.258 1 0) (bruijn ##.%x.259 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.99 3 5) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k11) (bruijn ##.tape.108 2 1) (bruijn ##.pc.110 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k11, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.269 0 0) (bruijn ##.%k.264 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-declare! (bruijn ##.%k.270 1 0) (bruijn ##.name.614 3 0) (bruijn ##.%x.271 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetDeclare, 3,
      statics->vars[0],
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vasm-lambda.98 12 4) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k15) (bruijn ##.tape.108 11 1) (bruijn ##.x.617 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k15, self)))),
      VGetArg(statics, 11-1, 1),
      statics->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.265 0 0) (basic-block 2 2 (##.expr.65.612 ##.%p.613) ((##vcore.cdr (bruijn ##.input.63.608 4 0)) (##vcore.pair? (bruijn ##.expr.65.612 0 0))) (if (bruijn ##.%p.613 0 1) (basic-block 3 3 (##.name.614 ##.expr.66.615 ##.%p.616) ((##vcore.car (bruijn ##.expr.65.612 1 0)) (##vcore.cdr (bruijn ##.expr.65.612 1 0)) (##vcore.pair? (bruijn ##.expr.66.615 0 1))) (if (bruijn ##.%p.616 0 2) (basic-block 3 3 (##.x.617 ##.%x.618 ##.%p.619) ((##vcore.car (bruijn ##.expr.66.615 1 1)) (##vcore.cdr (bruijn ##.expr.66.615 1 1)) (##vcore.null? (bruijn ##.%x.618 0 1))) (if (bruijn ##.%p.619 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k14) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda6) (bruijn ##.kk.62.111 7 1)) ((bruijn ##.%k.264 5 0) #f))) ((bruijn ##.%k.264 4 0) #f))) ((bruijn ##.%k.264 3 0) #f))) ((bruijn ##.%k.264 2 0) #f))
if(VDecodeBool(
_var0)) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k14, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda6, self)))),
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
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.609 1 1) (basic-block 1 1 (##.%x.611) ((##vcore.car (bruijn ##.input.63.608 2 0))) ((bruijn ##.equal?.68 8 2) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k13) 'declare (bruijn ##.%x.611 0 0))) ((bruijn ##.%k.264 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k13, self)))),
      _V0declare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.610) ((##vcore.vector-ref (bruijn ##.tape.108 6 1) (bruijn ##.pc.110 4 1))) ((bruijn ##.error.69 8 3) (bruijn ##.%k.261 1 0) (##string ##.string.1035) (bruijn ##.%x.610 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1035.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.260 1 0) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda7) (bruijn ##.kk.62.111 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda7, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.63.608 ##.%p.609) ((##vcore.vector-ref (bruijn ##.tape.108 4 1) (bruijn ##.pc.110 2 1)) (##vcore.pair? (bruijn ##.input.63.608 0 0))) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k12) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k16, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.pc.110 0 1) (##vcore.call/cc (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k10) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda5)) ((bruijn ##.%k.258 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k10, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda5, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.109) #f (bruijn ##.set-declare-loop.109 1 0) (bruijn ##.%k.257 2 0) (bruijn ##.%x.274 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109")) (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.99 2 5) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V0k17) (bruijn ##.tape.108 1 1) -1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V0k17, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(-1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0find__declare(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0find__declare" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0find__declare, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.program-counter.620 ##.%x.621 ##.%p.622) ((##vcore.+ (bruijn ##.program-counter.119 1 2) 1) (##vcore.vector-length (bruijn ##.tape.118 1 1)) (##vcore.>= (bruijn ##.program-counter.620 0 0) (bruijn ##.%x.621 0 1))) (if (bruijn ##.%p.622 0 2) ((bruijn ##.%k.275 1 0) #f) (basic-block 3 3 (##.%x.623 ##.%x.624 ##.%p.625) ((##vcore.vector-ref (bruijn ##.tape.118 2 1) (bruijn ##.program-counter.620 1 0)) (##vcore.car (bruijn ##.%x.623 0 0)) (##vcore.eq? (bruijn ##.%x.624 0 1) 'declare)) (if (bruijn ##.%p.625 0 2) ((bruijn ##.%k.275 2 0) (bruijn ##.program-counter.620 1 0)) (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.99 3 5) (bruijn ##.%k.275 2 0) (bruijn ##.tape.118 2 1) (bruijn ##.program-counter.620 1 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VCmpGe(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[1],
      _V0declare);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.294 0 0) (bruijn ##.%k.289 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.641 1 1) ((bruijn ##.error.69 19 3) (bruijn ##.%k.302 0 0) (##string ##.string.1102) (bruijn ##.label.634 4 0)) ((bruijn ##.%k.302 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1102.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.299 1 0) ((bruijn ##.error.69 20 3) (bruijn ##.%k.300 0 0) (##string ##.string.1107) (bruijn ##.label.634 5 0)) ((bruijn ##.%k.300 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1107.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.644) ((##vcore.+ (bruijn ##.pc.128 14 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.123 ##.peel-loop.127) #f (bruijn ##.peel-loop.127 15 0) (bruijn ##.%k.295 4 0) (bruijn ##.%x.644 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.vector-set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k27) (bruijn ##.tape.125 16 1) (bruijn ##.pc.128 13 1) (bruijn ##.expr.637 4 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k27, self)))),
      VGetArg(statics, 16-1, 1),
      VGetArg(statics, 13-1, 1),
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.642 ##.%x.643) ((##vcore.cons (bruijn ##.label.634 5 0) (bruijn ##.pc.128 13 1)) (##vcore.cons (bruijn ##.%x.642 0 0) (bruijn ##.labels.122 17 0))) (set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k26) (bruijn ##.labels.122 17 0) (bruijn ##.%x.643 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 17-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k26, self)))),
      VEncodeInt(17l), VEncodeInt(0l),
      self->vars[1]
    );
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k24) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k25))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k25, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.assv.73 18 7) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k23) (bruijn ##.label.634 3 0) (bruijn ##.labels.122 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k23, self)))),
      statics->up->up->vars[0],
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.640 ##.%p.641) ((##vcore.symbol? (bruijn ##.label.634 3 0)) (##vcore.not (bruijn ##.%x.640 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k21) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k22)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k22, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.290 0 0) (basic-block 2 2 (##.expr.4.632 ##.%p.633) ((##vcore.cdr (bruijn ##.input.2.628 4 0)) (##vcore.pair? (bruijn ##.expr.4.632 0 0))) (if (bruijn ##.%p.633 0 1) (basic-block 3 3 (##.label.634 ##.expr.5.635 ##.%p.636) ((##vcore.car (bruijn ##.expr.4.632 1 0)) (##vcore.cdr (bruijn ##.expr.4.632 1 0)) (##vcore.pair? (bruijn ##.expr.5.635 0 1))) (if (bruijn ##.%p.636 0 2) (basic-block 3 3 (##.expr.637 ##.%x.638 ##.%p.639) ((##vcore.car (bruijn ##.expr.5.635 1 1)) (##vcore.cdr (bruijn ##.expr.5.635 1 1)) (##vcore.null? (bruijn ##.%x.638 0 1))) (if (bruijn ##.%p.639 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k20) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda9) (bruijn ##.kk.1.129 7 1)) ((bruijn ##.%k.289 5 0) #f))) ((bruijn ##.%k.289 4 0) #f))) ((bruijn ##.%k.289 3 0) #f))) ((bruijn ##.%k.289 2 0) #f))
if(VDecodeBool(
_var0)) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda9, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.629 1 1) (basic-block 1 1 (##.%x.631) ((##vcore.car (bruijn ##.input.2.628 2 0))) ((bruijn ##.equal?.68 12 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k19) 'label (bruijn ##.%x.631 0 0))) ((bruijn ##.%k.289 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k19, self)))),
      _V0label,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.630) ((##vcore.+ (bruijn ##.pc.128 5 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.123 ##.peel-loop.127) #f (bruijn ##.peel-loop.127 6 0) (bruijn ##.%k.286 1 0) (bruijn ##.%x.630 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.285 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda10) (bruijn ##.kk.1.129 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda10, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.2.628 ##.%p.629) ((##vcore.vector-ref (bruijn ##.tape.125 6 1) (bruijn ##.pc.128 3 1)) (##vcore.pair? (bruijn ##.input.2.628 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k18) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k28)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k18, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k28, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.627) ((##vcore.>= (bruijn ##.pc.128 1 1) (bruijn ##.len.626 3 0))) (if (bruijn ##.%p.627 0 0) ((bruijn ##.%k.283 1 0) (bruijn ##.tape.125 4 1)) (##vcore.call/cc (bruijn ##.%k.283 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda8))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda8, self)))));
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.len.626) ((##vcore.vector-length (bruijn ##.tape.125 1 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.123 ##.peel-loop.127) #f (bruijn ##.peel-loop.127 0 0) (bruijn ##.%k.282 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.585 0 0) (bruijn ##.%k.582 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.586 0 0) (bruijn ##.expr.136 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.583 0 0) (basic-block 2 2 (##.%x.873 ##.%p.874) ((##vcore.cdr (bruijn ##.expr.136 6 1)) (##vcore.null? (bruijn ##.%x.873 0 0))) (if (bruijn ##.%p.874 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k31) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda12) (bruijn ##.kk.6.138 5 1)) ((bruijn ##.%k.582 3 0) #f))) ((bruijn ##.%k.582 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k31, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda12, self)))),
      VGetArg(statics, 5-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.645 1 0) (basic-block 1 1 (##.%x.872) ((##vcore.car (bruijn ##.expr.136 4 1))) ((bruijn ##.equal?.68 8 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k30) 'toplevel (bruijn ##.%x.872 0 0))) ((bruijn ##.%k.582 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k30, self)))),
      _V0toplevel,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.577 0 0) (bruijn ##.%k.573 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.578 0 0) (bruijn ##.expr.136 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.574 0 0) (basic-block 2 2 (##.expr.10.867 ##.%p.868) ((##vcore.cdr (bruijn ##.expr.136 7 1)) (##vcore.pair? (bruijn ##.expr.10.867 0 0))) (if (bruijn ##.%p.868 0 1) (basic-block 3 3 (##.x.869 ##.%x.870 ##.%p.871) ((##vcore.car (bruijn ##.expr.10.867 1 0)) (##vcore.cdr (bruijn ##.expr.10.867 1 0)) (##vcore.null? (bruijn ##.%x.870 0 1))) (if (bruijn ##.%p.871 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k35) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda13) (bruijn ##.kk.6.138 7 1)) ((bruijn ##.%k.573 4 0) #f))) ((bruijn ##.%k.573 3 0) #f))) ((bruijn ##.%k.573 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda13, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.646 1 0) (basic-block 1 1 (##.%x.866) ((##vcore.car (bruijn ##.expr.136 5 1))) ((bruijn ##.equal?.68 9 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k34) 'push (bruijn ##.%x.866 0 0))) ((bruijn ##.%k.573 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k34, self)))),
      _V0push,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.564 0 0) (bruijn ##.%k.560 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.862 ##.%r.863) ((##vcore.cons (bruijn ##.%x.568 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.862 0 0))) ((bruijn ##.%k.565 3 0) (bruijn ##.%r.863 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.55.147 0 0) (basic-block 2 2 (##.%x.864 ##.%r.865) ((##vcore.cons (bruijn ##.x.55.147 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.864 0 0))) ((bruijn ##.%k.565 3 0) (bruijn ##.%r.865 0 1))) ((bruijn ##.error.69 16 3) (bruijn ##.%k.565 2 0) (##string ##.string.1173) (bruijn ##.x.858 3 0)))
if(VDecodeBool(
_var0)) {
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1173.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.861) ((##vcore.string? (bruijn ##.x.858 2 0))) (if (bruijn ##.%p.861 0 0) ((##intrinsic "VFunction3") (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k40) (bruijn ##.x.858 2 0)) ((bruijn ##.lookup-intrinsic.70 15 4) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k41) (bruijn ##.x.858 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VFunction3, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k40, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k41, self)))),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.561 0 0) (basic-block 2 2 (##.expr.12.856 ##.%p.857) ((##vcore.cdr (bruijn ##.expr.136 8 1)) (##vcore.pair? (bruijn ##.expr.12.856 0 0))) (if (bruijn ##.%p.857 0 1) (basic-block 3 3 (##.x.858 ##.%x.859 ##.%p.860) ((##vcore.car (bruijn ##.expr.12.856 1 0)) (##vcore.cdr (bruijn ##.expr.12.856 1 0)) (##vcore.null? (bruijn ##.%x.859 0 1))) (if (bruijn ##.%p.860 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k39) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda14) (bruijn ##.kk.6.138 8 1)) ((bruijn ##.%k.560 4 0) #f))) ((bruijn ##.%k.560 3 0) #f))) ((bruijn ##.%k.560 2 0) #f))
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda14, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.647 1 0) (basic-block 1 1 (##.%x.855) ((##vcore.car (bruijn ##.expr.136 6 1))) ((bruijn ##.equal?.68 10 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k38) 'intrinsic (bruijn ##.%x.855 0 0))) ((bruijn ##.%k.560 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k38, self)))),
      _V0intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.550 0 0) (bruijn ##.%k.545 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.851 1 0) (basic-block 1 1 (##.%p.852) ((##vcore.int? (bruijn ##.right.848 4 0))) (if (bruijn ##.%p.852 0 0) (basic-block 1 1 (##.%p.853) ((##vcore.>= (bruijn ##.up.845 6 0) 0)) (if (bruijn ##.%p.853 0 0) (basic-block 1 1 (##.%r.854) ((##vcore.>= (bruijn ##.right.848 6 0) 0)) ((bruijn ##.%k.554 3 0) (bruijn ##.%r.854 0 0))) ((bruijn ##.%k.554 2 0) #f))) ((bruijn ##.%k.554 1 0) #f))) ((bruijn ##.%k.554 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.552 0 0) ((bruijn ##.%k.551 2 0) (bruijn ##.expr.136 14 1)) ((bruijn ##.error.69 18 3) (bruijn ##.%k.551 2 0) (##string ##.string.1197) (bruijn ##.up.845 4 0) (bruijn ##.right.848 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1197.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.851) ((##vcore.int? (bruijn ##.up.845 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k46) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k47)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k46, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k47, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.546 0 0) (basic-block 2 2 (##.expr.14.843 ##.%p.844) ((##vcore.cdr (bruijn ##.expr.136 9 1)) (##vcore.pair? (bruijn ##.expr.14.843 0 0))) (if (bruijn ##.%p.844 0 1) (basic-block 3 3 (##.up.845 ##.expr.15.846 ##.%p.847) ((##vcore.car (bruijn ##.expr.14.843 1 0)) (##vcore.cdr (bruijn ##.expr.14.843 1 0)) (##vcore.pair? (bruijn ##.expr.15.846 0 1))) (if (bruijn ##.%p.847 0 2) (basic-block 3 3 (##.right.848 ##.%x.849 ##.%p.850) ((##vcore.car (bruijn ##.expr.15.846 1 1)) (##vcore.cdr (bruijn ##.expr.15.846 1 1)) (##vcore.null? (bruijn ##.%x.849 0 1))) (if (bruijn ##.%p.850 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k45) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda15) (bruijn ##.kk.6.138 10 1)) ((bruijn ##.%k.545 5 0) #f))) ((bruijn ##.%k.545 4 0) #f))) ((bruijn ##.%k.545 3 0) #f))) ((bruijn ##.%k.545 2 0) #f))
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda15, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.648 1 0) (basic-block 1 1 (##.%x.842) ((##vcore.car (bruijn ##.expr.136 7 1))) ((bruijn ##.equal?.68 11 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k44) 'bruijn (bruijn ##.%x.842 0 0))) ((bruijn ##.%k.545 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k44, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.539 0 0) (bruijn ##.%k.535 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.841) ((##vcore.symbol? (bruijn ##.x.838 2 0))) (if (bruijn ##.%p.841 0 0) ((bruijn ##.%k.540 1 0) (bruijn ##.expr.136 13 1)) ((bruijn ##.error.69 17 3) (bruijn ##.%k.540 1 0) (##string ##.string.1212) (bruijn ##.x.838 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1212.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.536 0 0) (basic-block 2 2 (##.expr.17.836 ##.%p.837) ((##vcore.cdr (bruijn ##.expr.136 10 1)) (##vcore.pair? (bruijn ##.expr.17.836 0 0))) (if (bruijn ##.%p.837 0 1) (basic-block 3 3 (##.x.838 ##.%x.839 ##.%p.840) ((##vcore.car (bruijn ##.expr.17.836 1 0)) (##vcore.cdr (bruijn ##.expr.17.836 1 0)) (##vcore.null? (bruijn ##.%x.839 0 1))) (if (bruijn ##.%p.840 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k51) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda16) (bruijn ##.kk.6.138 10 1)) ((bruijn ##.%k.535 4 0) #f))) ((bruijn ##.%k.535 3 0) #f))) ((bruijn ##.%k.535 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda16, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.649 1 0) (basic-block 1 1 (##.%x.835) ((##vcore.car (bruijn ##.expr.136 8 1))) ((bruijn ##.equal?.68 12 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k50) 'lookup (bruijn ##.%x.835 0 0))) ((bruijn ##.%k.535 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k50, self)))),
      _V0lookup,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.527 0 0) (bruijn ##.%k.523 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.833 1 0) (basic-block 1 1 (##.%r.834) ((##vcore.>= (bruijn ##.x.830 4 0) 0)) ((bruijn ##.%k.531 1 0) (bruijn ##.%r.834 0 0))) ((bruijn ##.%k.531 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.529 0 0) ((bruijn ##.%k.528 2 0) (bruijn ##.expr.136 15 1)) ((bruijn ##.error.69 19 3) (bruijn ##.%k.528 2 0) (##string ##.string.1232) (bruijn ##.x.830 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1232.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.833) ((##vcore.int? (bruijn ##.x.830 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k56) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k57)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k56, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k57, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.524 0 0) (basic-block 2 2 (##.expr.19.828 ##.%p.829) ((##vcore.cdr (bruijn ##.expr.136 11 1)) (##vcore.pair? (bruijn ##.expr.19.828 0 0))) (if (bruijn ##.%p.829 0 1) (basic-block 3 3 (##.x.830 ##.%x.831 ##.%p.832) ((##vcore.car (bruijn ##.expr.19.828 1 0)) (##vcore.cdr (bruijn ##.expr.19.828 1 0)) (##vcore.null? (bruijn ##.%x.831 0 1))) (if (bruijn ##.%p.832 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k55) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda17) (bruijn ##.kk.6.138 11 1)) ((bruijn ##.%k.523 4 0) #f))) ((bruijn ##.%k.523 3 0) #f))) ((bruijn ##.%k.523 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k55, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda17, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.650 1 0) (basic-block 1 1 (##.%x.827) ((##vcore.car (bruijn ##.expr.136 9 1))) ((bruijn ##.equal?.68 13 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k54) 'call (bruijn ##.%x.827 0 0))) ((bruijn ##.%k.523 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k54, self)))),
      _V0call,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.514 0 0) (bruijn ##.%k.510 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.824 1 0) ((bruijn ##.%k.518 0 0) (bruijn ##.%p.824 1 0)) (basic-block 1 1 (##.%p.825) ((##vcore.int? (bruijn ##.x.821 4 0))) (if (bruijn ##.%p.825 0 0) (basic-block 1 1 (##.%r.826) ((##vcore.>= (bruijn ##.x.821 5 0) 0)) ((bruijn ##.%k.518 2 0) (bruijn ##.%r.826 0 0))) ((bruijn ##.%k.518 1 0) #f))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.516 0 0) ((bruijn ##.%k.515 2 0) (bruijn ##.expr.136 16 1)) ((bruijn ##.error.69 20 3) (bruijn ##.%k.515 2 0) (##string ##.string.1252) (bruijn ##.x.821 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1252.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.824) ((##vcore.not (bruijn ##.x.821 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k62) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k63)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k63, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.511 0 0) (basic-block 2 2 (##.expr.21.819 ##.%p.820) ((##vcore.cdr (bruijn ##.expr.136 12 1)) (##vcore.pair? (bruijn ##.expr.21.819 0 0))) (if (bruijn ##.%p.820 0 1) (basic-block 3 3 (##.x.821 ##.%x.822 ##.%p.823) ((##vcore.car (bruijn ##.expr.21.819 1 0)) (##vcore.cdr (bruijn ##.expr.21.819 1 0)) (##vcore.null? (bruijn ##.%x.822 0 1))) (if (bruijn ##.%p.823 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k61) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda18) (bruijn ##.kk.6.138 12 1)) ((bruijn ##.%k.510 4 0) #f))) ((bruijn ##.%k.510 3 0) #f))) ((bruijn ##.%k.510 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda18, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.651 1 0) (basic-block 1 1 (##.%x.818) ((##vcore.car (bruijn ##.expr.136 10 1))) ((bruijn ##.equal?.68 14 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k60) 'lambda (bruijn ##.%x.818 0 0))) ((bruijn ##.%k.510 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k60, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.502 0 0) (bruijn ##.%k.498 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.816 1 0) (basic-block 1 1 (##.%r.817) ((##vcore.>= (bruijn ##.x.813 4 0) 0)) ((bruijn ##.%k.506 1 0) (bruijn ##.%r.817 0 0))) ((bruijn ##.%k.506 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.504 0 0) ((bruijn ##.%k.503 2 0) (bruijn ##.expr.136 17 1)) ((bruijn ##.error.69 21 3) (bruijn ##.%k.503 2 0) (##string ##.string.1272) (bruijn ##.x.813 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1272.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.816) ((##vcore.int? (bruijn ##.x.813 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k68) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k69)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k69, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.499 0 0) (basic-block 2 2 (##.expr.23.811 ##.%p.812) ((##vcore.cdr (bruijn ##.expr.136 13 1)) (##vcore.pair? (bruijn ##.expr.23.811 0 0))) (if (bruijn ##.%p.812 0 1) (basic-block 3 3 (##.x.813 ##.%x.814 ##.%p.815) ((##vcore.car (bruijn ##.expr.23.811 1 0)) (##vcore.cdr (bruijn ##.expr.23.811 1 0)) (##vcore.null? (bruijn ##.%x.814 0 1))) (if (bruijn ##.%p.815 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k67) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda19) (bruijn ##.kk.6.138 13 1)) ((bruijn ##.%k.498 4 0) #f))) ((bruijn ##.%k.498 3 0) #f))) ((bruijn ##.%k.498 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k67, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda19, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.652 1 0) (basic-block 1 1 (##.%x.810) ((##vcore.car (bruijn ##.expr.136 11 1))) ((bruijn ##.equal?.68 15 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k66) 'lambda+ (bruijn ##.%x.810 0 0))) ((bruijn ##.%k.498 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k66, self)))),
      _V0lambda_P,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.480 0 0) (bruijn ##.%k.475 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.799 1 0) (basic-block 1 1 (##.%r.809) ((##vcore.>= (bruijn ##.x.793 5 0) 0)) ((bruijn ##.%k.494 1 0) (bruijn ##.%r.809 0 0))) ((bruijn ##.%k.494 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.800 1 0) ((bruijn ##.error.69 25 3) (bruijn ##.%k.491 0 0) (##string ##.string.1300) (bruijn ##.x.793 6 0)) ((bruijn ##.%k.491 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1300.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.802 1 0) ((bruijn ##.assv.73 27 7) (bruijn ##.%k.489 0 0) (bruijn ##.b.796 7 0) (bruijn ##.labels.122 24 0)) ((bruijn ##.%k.489 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 7)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 24-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.56.171 0 0) (basic-block 5 5 (##.%x.803 ##.%x.804 ##.%x.805 ##.%x.806 ##.%r.807) ((##vcore.cdr (bruijn ##.x.56.171 1 0)) (##vcore.- (bruijn ##.%x.803 0 0) (bruijn ##.pc.137 24 2) 1) (##vcore.cons (bruijn ##.%x.804 0 1) '()) (##vcore.cons (bruijn ##.x.793 9 0) (bruijn ##.%x.805 0 2)) (##vcore.cons 'case-lambda (bruijn ##.%x.806 0 3))) ((bruijn ##.%k.481 7 0) (bruijn ##.%r.807 0 4))) (basic-block 1 1 (##.%p.808) ((##vcore.symbol? (bruijn ##.b.796 8 0))) (if (bruijn ##.%p.808 0 0) ((bruijn ##.error.69 28 3) (bruijn ##.%k.481 7 0) (##string ##.string.1309) (bruijn ##.b.796 8 0)) ((bruijn ##.error.69 28 3) (bruijn ##.%k.481 7 0) (##string ##.string.1310) (bruijn ##.b.796 8 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 24-1, 2),
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[4]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 3)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1309.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 3)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1310.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k77(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.801) ((##vcore.int? (bruijn ##.b.796 5 0))) (if (bruijn ##.%p.801 0 0) ((bruijn ##.%k.481 4 0) (bruijn ##.expr.136 21 1)) (basic-block 1 1 (##.%p.802) ((##vcore.symbol? (bruijn ##.b.796 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k78) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k79)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VGetArg(statics, 21-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k79, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.800) ((##vcore.not (bruijn ##.%x.492 1 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k76) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k77)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k77, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.799) ((##vcore.int? (bruijn ##.x.793 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k74) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k75)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k75, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.476 0 0) (basic-block 2 2 (##.expr.25.791 ##.%p.792) ((##vcore.cdr (bruijn ##.expr.136 14 1)) (##vcore.pair? (bruijn ##.expr.25.791 0 0))) (if (bruijn ##.%p.792 0 1) (basic-block 3 3 (##.x.793 ##.expr.26.794 ##.%p.795) ((##vcore.car (bruijn ##.expr.25.791 1 0)) (##vcore.cdr (bruijn ##.expr.25.791 1 0)) (##vcore.pair? (bruijn ##.expr.26.794 0 1))) (if (bruijn ##.%p.795 0 2) (basic-block 3 3 (##.b.796 ##.%x.797 ##.%p.798) ((##vcore.car (bruijn ##.expr.26.794 1 1)) (##vcore.cdr (bruijn ##.expr.26.794 1 1)) (##vcore.null? (bruijn ##.%x.797 0 1))) (if (bruijn ##.%p.798 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k73) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda20) (bruijn ##.kk.6.138 15 1)) ((bruijn ##.%k.475 5 0) #f))) ((bruijn ##.%k.475 4 0) #f))) ((bruijn ##.%k.475 3 0) #f))) ((bruijn ##.%k.475 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k73, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda20, self)))),
      VGetArg(statics, 15-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.653 1 0) (basic-block 1 1 (##.%x.790) ((##vcore.car (bruijn ##.expr.136 12 1))) ((bruijn ##.equal?.68 16 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k72) 'case-lambda (bruijn ##.%x.790 0 0))) ((bruijn ##.%k.475 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k72, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.457 0 0) (bruijn ##.%k.452 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.779 1 0) (basic-block 1 1 (##.%r.789) ((##vcore.>= (bruijn ##.x.773 5 0) 0)) ((bruijn ##.%k.471 1 0) (bruijn ##.%r.789 0 0))) ((bruijn ##.%k.471 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.780 1 0) ((bruijn ##.error.69 26 3) (bruijn ##.%k.468 0 0) (##string ##.string.1337) (bruijn ##.x.773 6 0)) ((bruijn ##.%k.468 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1337.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.782 1 0) ((bruijn ##.assv.73 28 7) (bruijn ##.%k.466 0 0) (bruijn ##.b.776 7 0) (bruijn ##.labels.122 25 0)) ((bruijn ##.%k.466 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 7)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 25-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.57.178 0 0) (basic-block 5 5 (##.%x.783 ##.%x.784 ##.%x.785 ##.%x.786 ##.%r.787) ((##vcore.cdr (bruijn ##.x.57.178 1 0)) (##vcore.- (bruijn ##.%x.783 0 0) (bruijn ##.pc.137 25 2) 1) (##vcore.cons (bruijn ##.%x.784 0 1) '()) (##vcore.cons (bruijn ##.x.773 9 0) (bruijn ##.%x.785 0 2)) (##vcore.cons 'case-lambda+ (bruijn ##.%x.786 0 3))) ((bruijn ##.%k.458 7 0) (bruijn ##.%r.787 0 4))) (basic-block 1 1 (##.%p.788) ((##vcore.symbol? (bruijn ##.b.776 8 0))) (if (bruijn ##.%p.788 0 0) ((bruijn ##.error.69 29 3) (bruijn ##.%k.458 7 0) (##string ##.string.1346) (bruijn ##.b.776 8 0)) ((bruijn ##.error.69 29 3) (bruijn ##.%k.458 7 0) (##string ##.string.1347) (bruijn ##.b.776 8 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 25-1, 2),
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda_P,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[4]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 3)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1346.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 3)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1347.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.781) ((##vcore.int? (bruijn ##.b.776 5 0))) (if (bruijn ##.%p.781 0 0) ((bruijn ##.%k.458 4 0) (bruijn ##.expr.136 22 1)) (basic-block 1 1 (##.%p.782) ((##vcore.symbol? (bruijn ##.b.776 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k88) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k89)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VGetArg(statics, 22-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k89, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.780) ((##vcore.not (bruijn ##.%x.469 1 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k86) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k87)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k87, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.779) ((##vcore.int? (bruijn ##.x.773 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k84) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k85)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k85, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.453 0 0) (basic-block 2 2 (##.expr.28.771 ##.%p.772) ((##vcore.cdr (bruijn ##.expr.136 15 1)) (##vcore.pair? (bruijn ##.expr.28.771 0 0))) (if (bruijn ##.%p.772 0 1) (basic-block 3 3 (##.x.773 ##.expr.29.774 ##.%p.775) ((##vcore.car (bruijn ##.expr.28.771 1 0)) (##vcore.cdr (bruijn ##.expr.28.771 1 0)) (##vcore.pair? (bruijn ##.expr.29.774 0 1))) (if (bruijn ##.%p.775 0 2) (basic-block 3 3 (##.b.776 ##.%x.777 ##.%p.778) ((##vcore.car (bruijn ##.expr.29.774 1 1)) (##vcore.cdr (bruijn ##.expr.29.774 1 1)) (##vcore.null? (bruijn ##.%x.777 0 1))) (if (bruijn ##.%p.778 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k83) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda21) (bruijn ##.kk.6.138 16 1)) ((bruijn ##.%k.452 5 0) #f))) ((bruijn ##.%k.452 4 0) #f))) ((bruijn ##.%k.452 3 0) #f))) ((bruijn ##.%k.452 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k83, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda21, self)))),
      VGetArg(statics, 16-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.654 1 0) (basic-block 1 1 (##.%x.770) ((##vcore.car (bruijn ##.expr.136 13 1))) ((bruijn ##.equal?.68 17 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k82) 'case-lambda+ (bruijn ##.%x.770 0 0))) ((bruijn ##.%k.452 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k82, self)))),
      _V0case__lambda_P,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.447 0 0) (bruijn ##.%k.442 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.448 0 0) (bruijn ##.expr.136 19 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 19-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.443 0 0) (basic-block 2 2 (##.expr.31.762 ##.%p.763) ((##vcore.cdr (bruijn ##.expr.136 16 1)) (##vcore.pair? (bruijn ##.expr.31.762 0 0))) (if (bruijn ##.%p.763 0 1) (basic-block 3 3 (##.name.764 ##.expr.32.765 ##.%p.766) ((##vcore.car (bruijn ##.expr.31.762 1 0)) (##vcore.cdr (bruijn ##.expr.31.762 1 0)) (##vcore.pair? (bruijn ##.expr.32.765 0 1))) (if (bruijn ##.%p.766 0 2) (basic-block 3 3 (##.str.767 ##.%x.768 ##.%p.769) ((##vcore.car (bruijn ##.expr.32.765 1 1)) (##vcore.cdr (bruijn ##.expr.32.765 1 1)) (##vcore.null? (bruijn ##.%x.768 0 1))) (if (bruijn ##.%p.769 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k93) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda22) (bruijn ##.kk.6.138 17 1)) ((bruijn ##.%k.442 5 0) #f))) ((bruijn ##.%k.442 4 0) #f))) ((bruijn ##.%k.442 3 0) #f))) ((bruijn ##.%k.442 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda22, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.655 1 0) (basic-block 1 1 (##.%x.761) ((##vcore.car (bruijn ##.expr.136 14 1))) ((bruijn ##.equal?.68 18 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k92) 'case-lambda-error (bruijn ##.%x.761 0 0))) ((bruijn ##.%k.442 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k92, self)))),
      _V0case__lambda__error,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.421 0 0) (bruijn ##.%k.418 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.757 1 0) (basic-block 2 2 (##.%x.759 ##.%r.760) ((##vcore.car (bruijn ##.name.747 6 1)) (##vcore.string? (bruijn ##.%x.759 0 0))) ((bruijn ##.%k.437 1 0) (bruijn ##.%r.760 0 1))) ((bruijn ##.%k.437 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.758) ((##vcore.not (bruijn ##.%x.435 1 0))) ((bruijn ##.%k.434 3 0) (bruijn ##.%r.758 0 0)))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.749 1 1) (basic-block 1 1 (##.%p.757) ((##vcore.pair? (bruijn ##.name.747 4 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k99) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k100))) ((bruijn ##.%k.434 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k100, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.431 1 0) ((bruijn ##.error.69 26 3) (bruijn ##.%k.432 0 0) (##string ##.string.1395)) ((bruijn ##.%k.432 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 3)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1395.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.750 1 0) ((bruijn ##.assv.73 27 7) (bruijn ##.%k.430 0 0) (bruijn ##.x.746 5 0) (bruijn ##.labels.122 24 0)) ((bruijn ##.%k.430 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 7)), 3,
      _var0,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 24-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.755 1 0) (basic-block 1 1 (##.%r.756) ((##vcore.>= (bruijn ##.x.746 9 0) 0)) ((bruijn ##.%k.428 1 0) (bruijn ##.%r.756 0 0))) ((bruijn ##.%k.428 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.426 0 0) ((bruijn ##.%k.422 7 0) (bruijn ##.expr.136 26 1)) ((bruijn ##.error.69 30 3) (bruijn ##.%k.422 7 0) (##string ##.string.1410) (bruijn ##.x.746 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 3)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1410.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.58.189 0 0) (basic-block 3 3 (##.%x.751 ##.%x.752 ##.%r.753) ((##vcore.cdr (bruijn ##.x.58.189 1 0)) (##vcore.cons (bruijn ##.%x.751 0 0) (bruijn ##.name.747 6 1)) (##vcore.cons 'close (bruijn ##.%x.752 0 1))) ((bruijn ##.%k.422 5 0) (bruijn ##.%r.753 0 2))) (basic-block 1 1 (##.%p.754) ((##vcore.symbol? (bruijn ##.x.746 6 0))) (if (bruijn ##.%p.754 0 0) ((bruijn ##.error.69 28 3) (bruijn ##.%k.422 5 0) (##string ##.string.1403) (bruijn ##.x.746 6 0)) (basic-block 1 1 (##.%p.755) ((##vcore.int? (bruijn ##.x.746 7 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k106) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k107))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 6-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 3)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1403.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k107, self)))));
    }
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.750) ((##vcore.symbol? (bruijn ##.x.746 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k104) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k105)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k104, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k105, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k102) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k103))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k103, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.748 ##.%p.749) ((##vcore.null? (bruijn ##.name.747 2 1)) (##vcore.not (bruijn ##.%x.748 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k98) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k101)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k101, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.419 0 0) (basic-block 2 2 (##.expr.34.744 ##.%p.745) ((##vcore.cdr (bruijn ##.expr.136 17 1)) (##vcore.pair? (bruijn ##.expr.34.744 0 0))) (if (bruijn ##.%p.745 0 1) (basic-block 2 2 (##.x.746 ##.name.747) ((##vcore.car (bruijn ##.expr.34.744 1 0)) (##vcore.cdr (bruijn ##.expr.34.744 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k97) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda23) (bruijn ##.kk.6.138 17 1))) ((bruijn ##.%k.418 3 0) #f))) ((bruijn ##.%k.418 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k97, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda23, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.656 1 0) (basic-block 1 1 (##.%x.743) ((##vcore.car (bruijn ##.expr.136 15 1))) ((bruijn ##.equal?.68 19 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k96) 'close (bruijn ##.%x.743 0 0))) ((bruijn ##.%k.418 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k96, self)))),
      _V0close,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.404 0 0) (bruijn ##.%k.400 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.736 1 0) ((bruijn ##.assv.73 28 7) (bruijn ##.%k.413 0 0) (bruijn ##.x.194 2 0) (bruijn ##.labels.122 25 0)) ((bruijn ##.%k.413 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 7)), 3,
      _var0,
      statics->up->vars[0],
      VGetArg(statics, 25-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.741 1 0) (basic-block 1 1 (##.%r.742) ((##vcore.>= (bruijn ##.x.194 6 0) 0)) ((bruijn ##.%k.411 1 0) (bruijn ##.%r.742 0 0))) ((bruijn ##.%k.411 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.409 0 0) ((bruijn ##.%k.405 7 0) (bruijn ##.expr.136 27 1)) ((bruijn ##.error.69 31 3) (bruijn ##.%k.405 7 0) (##string ##.string.1448) (bruijn ##.x.194 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 27-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 3)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1448.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.59.195 0 0) (basic-block 3 3 (##.%x.737 ##.%x.738 ##.%r.739) ((##vcore.cdr (bruijn ##.x.59.195 1 0)) (##vcore.cons (bruijn ##.%x.737 0 0) '()) (##vcore.cons 'foreign-function (bruijn ##.%x.738 0 1))) ((bruijn ##.%k.405 5 0) (bruijn ##.%r.739 0 2))) (basic-block 1 1 (##.%p.740) ((##vcore.symbol? (bruijn ##.x.194 3 0))) (if (bruijn ##.%p.740 0 0) ((bruijn ##.error.69 29 3) (bruijn ##.%k.405 5 0) (##string ##.string.1403) (bruijn ##.x.194 3 0)) (basic-block 1 1 (##.%p.741) ((##vcore.int? (bruijn ##.x.194 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k116) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k117))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0foreign__function,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 3)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1403.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k117, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.736) ((##vcore.symbol? (bruijn ##.x.194 1 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k114) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k115)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k114, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k115, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k113) (bruijn ##.%x.414 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k113, self)))),
      _var0);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sprintf.71 24 5) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k112) (##string ##.string.1449) (bruijn ##.x.733 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k112, self)))),
      VEncodePointer(&_V10_Dstring_D1449.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.401 0 0) (basic-block 2 2 (##.expr.36.731 ##.%p.732) ((##vcore.cdr (bruijn ##.expr.136 18 1)) (##vcore.pair? (bruijn ##.expr.36.731 0 0))) (if (bruijn ##.%p.732 0 1) (basic-block 3 3 (##.x.733 ##.%x.734 ##.%p.735) ((##vcore.car (bruijn ##.expr.36.731 1 0)) (##vcore.cdr (bruijn ##.expr.36.731 1 0)) (##vcore.null? (bruijn ##.%x.734 0 1))) (if (bruijn ##.%p.735 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k111) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda24) (bruijn ##.kk.6.138 18 1)) ((bruijn ##.%k.400 4 0) #f))) ((bruijn ##.%k.400 3 0) #f))) ((bruijn ##.%k.400 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k111, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda24, self)))),
      VGetArg(statics, 18-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.657 1 0) (basic-block 1 1 (##.%x.730) ((##vcore.car (bruijn ##.expr.136 16 1))) ((bruijn ##.equal?.68 20 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k110) 'foreign-function (bruijn ##.%x.730 0 0))) ((bruijn ##.%k.400 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k110, self)))),
      _V0foreign__function,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.384 0 0) (bruijn ##.%k.379 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.722 1 0) ((bruijn ##.assv.73 29 7) (bruijn ##.%k.395 0 0) (bruijn ##.x.717 4 0) (bruijn ##.labels.122 26 0)) ((bruijn ##.%k.395 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 7)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 26-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.728 1 0) (basic-block 1 1 (##.%r.729) ((##vcore.>= (bruijn ##.x.717 8 0) 0)) ((bruijn ##.%k.393 1 0) (bruijn ##.%r.729 0 0))) ((bruijn ##.%k.393 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.391 0 0) ((bruijn ##.%k.385 6 0) (bruijn ##.expr.136 28 1)) ((bruijn ##.error.69 32 3) (bruijn ##.%k.385 6 0) (##string ##.string.1484) (bruijn ##.x.717 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 28-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1484.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.60.202 0 0) (basic-block 4 4 (##.%x.723 ##.%x.724 ##.%x.725 ##.%r.726) ((##vcore.cdr (bruijn ##.x.60.202 1 0)) (##vcore.cons (bruijn ##.%x.723 0 0) '()) (##vcore.cons (bruijn ##.name.714 6 0) (bruijn ##.%x.724 0 1)) (##vcore.cons 'declare (bruijn ##.%x.725 0 2))) ((bruijn ##.%k.385 4 0) (bruijn ##.%r.726 0 3))) (basic-block 1 1 (##.%p.727) ((##vcore.symbol? (bruijn ##.x.717 5 0))) (if (bruijn ##.%p.727 0 0) ((bruijn ##.error.69 30 3) (bruijn ##.%k.385 4 0) (##string ##.string.1477) (bruijn ##.x.717 5 0)) (basic-block 1 1 (##.%p.728) ((##vcore.int? (bruijn ##.x.717 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k124) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k125))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0declare,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[3]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1477.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k125, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.720 ##.%p.721) ((##vcore.string? (bruijn ##.name.714 3 0)) (##vcore.not (bruijn ##.%x.720 0 0))) (if (bruijn ##.%p.721 0 1) ((bruijn ##.error.69 27 3) (bruijn ##.%k.385 1 0) (##string ##.string.1467) (bruijn ##.x.717 2 0)) (basic-block 1 1 (##.%p.722) ((##vcore.symbol? (bruijn ##.x.717 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k122) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k123)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 3)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1467.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k122, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k123, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.380 0 0) (basic-block 2 2 (##.expr.38.712 ##.%p.713) ((##vcore.cdr (bruijn ##.expr.136 19 1)) (##vcore.pair? (bruijn ##.expr.38.712 0 0))) (if (bruijn ##.%p.713 0 1) (basic-block 3 3 (##.name.714 ##.expr.39.715 ##.%p.716) ((##vcore.car (bruijn ##.expr.38.712 1 0)) (##vcore.cdr (bruijn ##.expr.38.712 1 0)) (##vcore.pair? (bruijn ##.expr.39.715 0 1))) (if (bruijn ##.%p.716 0 2) (basic-block 3 3 (##.x.717 ##.%x.718 ##.%p.719) ((##vcore.car (bruijn ##.expr.39.715 1 1)) (##vcore.cdr (bruijn ##.expr.39.715 1 1)) (##vcore.null? (bruijn ##.%x.718 0 1))) (if (bruijn ##.%p.719 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k121) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda25) (bruijn ##.kk.6.138 20 1)) ((bruijn ##.%k.379 5 0) #f))) ((bruijn ##.%k.379 4 0) #f))) ((bruijn ##.%k.379 3 0) #f))) ((bruijn ##.%k.379 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k121, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda25, self)))),
      VGetArg(statics, 20-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.658 1 0) (basic-block 1 1 (##.%x.711) ((##vcore.car (bruijn ##.expr.136 17 1))) ((bruijn ##.equal?.68 21 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k120) 'declare (bruijn ##.%x.711 0 0))) ((bruijn ##.%k.379 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k120, self)))),
      _V0declare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.46.212 5 1) (bruijn ##.%k.370 1 0) (bruijn ##.expr.48.214 3 1) (bruijn ##.%x.371 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.706 1 1) ((bruijn ##.reverse.72 33 6) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k130) (bruijn ##.args.45.215 2 2)) ((bruijn ##.%k.370 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k130, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.46.212 7 1) (bruijn ##.%k.365 2 0) (bruijn ##.expr.48.214 5 1) (bruijn ##.%x.366 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.72 35 6) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k133) (bruijn ##.args.45.215 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k133, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.args.707 ##.%x.708 ##.%x.709) ((##vcore.car (bruijn ##.expr.48.214 4 1)) (##vcore.cdr (bruijn ##.expr.48.214 4 1)) (##vcore.cons (bruijn ##.args.707 0 0) (bruijn ##.args.45.215 4 2))) ((bruijn ##.kk.47.216 1 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k132) (bruijn ##.%x.708 0 1) (bruijn ##.%x.709 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k132, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.364 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda29, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k131(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.363 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda28) (bruijn ##.loop.213 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda28, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.705 ##.%p.706) ((##vcore.pair? (bruijn ##.expr.48.214 1 1)) (##vcore.not (bruijn ##.%x.705 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k129) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k131)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k129, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k131, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213")) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.124 ##.loop.213) #f (bruijn ##.loop.213 0 0) (bruijn ##.%k.362 1 0) (bruijn ##.expr.44.704 3 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213, self))));
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
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.361 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda27))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda27, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.375 0 0) (bruijn ##.%k.373 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.376 0 0) (bruijn ##.expr.136 26 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 26-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.710) ((##vcore.null? (bruijn ##.tail-expr.218 1 1))) (if (bruijn ##.%p.710 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k134) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda31) (bruijn ##.kk.6.138 24 1)) ((bruijn ##.%k.373 1 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k134, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda31, self)))),
      VGetArg(statics, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.357 0 0) (basic-block 2 2 (##.expr.41.695 ##.%p.696) ((##vcore.cdr (bruijn ##.expr.136 20 1)) (##vcore.pair? (bruijn ##.expr.41.695 0 0))) (if (bruijn ##.%p.696 0 1) (basic-block 3 3 (##.lang.697 ##.expr.42.698 ##.%p.699) ((##vcore.car (bruijn ##.expr.41.695 1 0)) (##vcore.cdr (bruijn ##.expr.41.695 1 0)) (##vcore.pair? (bruijn ##.expr.42.698 0 1))) (if (bruijn ##.%p.699 0 2) (basic-block 3 3 (##.ret.700 ##.expr.43.701 ##.%p.702) ((##vcore.car (bruijn ##.expr.42.698 1 1)) (##vcore.cdr (bruijn ##.expr.42.698 1 1)) (##vcore.pair? (bruijn ##.expr.43.701 0 1))) (if (bruijn ##.%p.702 0 2) (basic-block 2 2 (##.name.703 ##.expr.44.704) ((##vcore.car (bruijn ##.expr.43.701 1 1)) (##vcore.cdr (bruijn ##.expr.43.701 1 1))) (##vcore.call-with-values (bruijn ##.%k.356 6 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda26) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda30))) ((bruijn ##.%k.356 5 0) #f))) ((bruijn ##.%k.356 4 0) #f))) ((bruijn ##.%k.356 3 0) #f))) ((bruijn ##.%k.356 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda26, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda30, self)))));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.659 1 0) (basic-block 1 1 (##.%x.694) ((##vcore.car (bruijn ##.expr.136 18 1))) ((bruijn ##.equal?.68 22 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k128) 'declare-foreign (bruijn ##.%x.694 0 0))) ((bruijn ##.%k.356 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k128, self)))),
      _V0declare__foreign,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.351 0 0) (bruijn ##.%k.348 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.352 0 0) (bruijn ##.expr.136 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 22-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.349 0 0) (basic-block 2 2 (##.%x.692 ##.%p.693) ((##vcore.cdr (bruijn ##.expr.136 21 1)) (##vcore.null? (bruijn ##.%x.692 0 0))) (if (bruijn ##.%p.693 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k138) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda32) (bruijn ##.kk.6.138 20 1)) ((bruijn ##.%k.348 3 0) #f))) ((bruijn ##.%k.348 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda32, self)))),
      VGetArg(statics, 20-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.660 1 0) (basic-block 1 1 (##.%x.691) ((##vcore.car (bruijn ##.expr.136 19 1))) ((bruijn ##.equal?.68 23 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k137) 'push-set! (bruijn ##.%x.691 0 0))) ((bruijn ##.%k.348 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k137, self)))),
      _V0push__set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.336 0 0) (bruijn ##.%k.332 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.685 1 0) ((bruijn ##.assv.73 31 7) (bruijn ##.%k.344 0 0) (bruijn ##.x.681 4 0) (bruijn ##.labels.122 28 0)) ((bruijn ##.%k.344 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 7)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 28-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.61.224 0 0) (basic-block 4 4 (##.%x.686 ##.%x.687 ##.%x.688 ##.%r.689) ((##vcore.cdr (bruijn ##.x.61.224 1 0)) (##vcore.- (bruijn ##.%x.686 0 0) (bruijn ##.pc.137 28 2) 1) (##vcore.cons (bruijn ##.%x.687 0 1) '()) (##vcore.cons 'bf (bruijn ##.%x.688 0 2))) ((bruijn ##.%k.337 4 0) (bruijn ##.%r.689 0 3))) (basic-block 1 1 (##.%p.690) ((##vcore.symbol? (bruijn ##.x.681 5 0))) (if (bruijn ##.%p.690 0 0) ((bruijn ##.error.69 32 3) (bruijn ##.%k.337 4 0) (##string ##.string.1592) (bruijn ##.x.681 5 0)) ((bruijn ##.error.69 32 3) (bruijn ##.%k.337 4 0) (##string ##.string.1593) (bruijn ##.x.681 5 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 28-1, 2),
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0bf,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[3]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1592.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1593.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.684) ((##vcore.int? (bruijn ##.x.681 2 0))) (if (bruijn ##.%p.684 0 0) ((bruijn ##.%k.337 1 0) (bruijn ##.expr.136 25 1)) (basic-block 1 1 (##.%p.685) ((##vcore.symbol? (bruijn ##.x.681 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k143) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k144)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 25-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k144, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.333 0 0) (basic-block 2 2 (##.expr.51.679 ##.%p.680) ((##vcore.cdr (bruijn ##.expr.136 22 1)) (##vcore.pair? (bruijn ##.expr.51.679 0 0))) (if (bruijn ##.%p.680 0 1) (basic-block 3 3 (##.x.681 ##.%x.682 ##.%p.683) ((##vcore.car (bruijn ##.expr.51.679 1 0)) (##vcore.cdr (bruijn ##.expr.51.679 1 0)) (##vcore.null? (bruijn ##.%x.682 0 1))) (if (bruijn ##.%p.683 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k142) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda33) (bruijn ##.kk.6.138 22 1)) ((bruijn ##.%k.332 4 0) #f))) ((bruijn ##.%k.332 3 0) #f))) ((bruijn ##.%k.332 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 22-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k142, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda33, self)))),
      VGetArg(statics, 22-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.661 1 0) (basic-block 1 1 (##.%x.678) ((##vcore.car (bruijn ##.expr.136 20 1))) ((bruijn ##.equal?.68 24 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k141) 'bf (bruijn ##.%x.678 0 0))) ((bruijn ##.%k.332 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k141, self)))),
      _V0bf,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.321 0 0) (bruijn ##.%k.318 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.672 1 0) (basic-block 1 1 (##.%p.673) ((##vcore.>= (bruijn ##.x.670 4 0) 0)) (if (bruijn ##.%p.673 0 0) (basic-block 1 1 (##.%p.674) ((##vcore.null? (bruijn ##.name.671 5 1))) (if (bruijn ##.%p.674 0 0) ((bruijn ##.%k.325 2 0) (bruijn ##.%p.674 0 0)) (basic-block 1 1 (##.%p.675) ((##vcore.pair? (bruijn ##.name.671 6 1))) (if (bruijn ##.%p.675 0 0) (basic-block 2 2 (##.%x.676 ##.%r.677) ((##vcore.car (bruijn ##.name.671 7 1)) (##vcore.string? (bruijn ##.%x.676 0 0))) ((bruijn ##.%k.325 4 0) (bruijn ##.%r.677 0 1))) ((bruijn ##.%k.325 3 0) #f))))) ((bruijn ##.%k.325 1 0) #f))) ((bruijn ##.%k.325 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.323 0 0) ((bruijn ##.%k.322 2 0) (bruijn ##.expr.136 27 1)) ((bruijn ##.error.69 31 3) (bruijn ##.%k.322 2 0) (##string ##.string.1613) (bruijn ##.expr.136 27 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 27-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1613.sym, VPOINTER_OTHER),
      VGetArg(statics, 27-1, 1));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.672) ((##vcore.int? (bruijn ##.x.670 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k149) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k150)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k150, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.319 0 0) (basic-block 2 2 (##.expr.53.668 ##.%p.669) ((##vcore.cdr (bruijn ##.expr.136 23 1)) (##vcore.pair? (bruijn ##.expr.53.668 0 0))) (if (bruijn ##.%p.669 0 1) (basic-block 2 2 (##.x.670 ##.name.671) ((##vcore.car (bruijn ##.expr.53.668 1 0)) (##vcore.cdr (bruijn ##.expr.53.668 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k148) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda34) (bruijn ##.kk.6.138 23 1))) ((bruijn ##.%k.318 3 0) #f))) ((bruijn ##.%k.318 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 23-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k148, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda34, self)))),
      VGetArg(statics, 23-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.662 1 0) (basic-block 1 1 (##.%x.667) ((##vcore.car (bruijn ##.expr.136 21 1))) ((bruijn ##.equal?.68 25 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k147) 'letrec-begin (bruijn ##.%x.667 0 0))) ((bruijn ##.%k.318 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k147, self)))),
      _V0letrec__begin,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.313 0 0) (bruijn ##.%k.310 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.314 0 0) (bruijn ##.expr.136 25 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 25-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.311 0 0) (basic-block 2 2 (##.%x.665 ##.%p.666) ((##vcore.cdr (bruijn ##.expr.136 24 1)) (##vcore.null? (bruijn ##.%x.665 0 0))) (if (bruijn ##.%p.666 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k154) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda35) (bruijn ##.kk.6.138 23 1)) ((bruijn ##.%k.310 3 0) #f))) ((bruijn ##.%k.310 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 24-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k154, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda35, self)))),
      VGetArg(statics, 23-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.663 1 0) (basic-block 1 1 (##.%x.664) ((##vcore.car (bruijn ##.expr.136 22 1))) ((bruijn ##.equal?.68 26 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k153) 'letrec-end (bruijn ##.%x.664 0 0))) ((bruijn ##.%k.310 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 22-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k153, self)))),
      _V0letrec__end,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.69 25 3) (bruijn ##.%k.308 0 0) (##string ##.string.1626) (bruijn ##.expr.136 21 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1626.sym, VPOINTER_OTHER),
      VGetArg(statics, 21-1, 1));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k155(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.307 19 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda36) (bruijn ##.kk.6.138 19 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 19-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda36, self)))),
      VGetArg(statics, 19-1, 1));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.663) ((##vcore.pair? (bruijn ##.expr.136 20 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k152) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k155)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k152, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k155, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.662) ((##vcore.pair? (bruijn ##.expr.136 19 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k146) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k151)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k146, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k151, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.661) ((##vcore.pair? (bruijn ##.expr.136 18 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k140) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k145)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k145, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.660) ((##vcore.pair? (bruijn ##.expr.136 17 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k136) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k136, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k139, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.659) ((##vcore.pair? (bruijn ##.expr.136 16 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k127) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k135)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k135, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.658) ((##vcore.pair? (bruijn ##.expr.136 15 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k119) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k126)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k126, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k108(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.657) ((##vcore.pair? (bruijn ##.expr.136 14 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k109) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k118, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.656) ((##vcore.pair? (bruijn ##.expr.136 13 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k95) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k108)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k108, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.655) ((##vcore.pair? (bruijn ##.expr.136 12 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k91) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k94)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k94, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k80(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.654) ((##vcore.pair? (bruijn ##.expr.136 11 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k81) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k90, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k70(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.653) ((##vcore.pair? (bruijn ##.expr.136 10 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k71) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k80, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.652) ((##vcore.pair? (bruijn ##.expr.136 9 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k65) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k70)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k70, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.651) ((##vcore.pair? (bruijn ##.expr.136 8 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k59) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k64, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k52(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.650) ((##vcore.pair? (bruijn ##.expr.136 7 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k53) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k58)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k53, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k58, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.649) ((##vcore.pair? (bruijn ##.expr.136 6 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k49) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k52)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k52, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.648) ((##vcore.pair? (bruijn ##.expr.136 5 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k43) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k48)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k48, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.647) ((##vcore.pair? (bruijn ##.expr.136 4 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k37) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k37, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k42, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.646) ((##vcore.pair? (bruijn ##.expr.136 3 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k33) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k36)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k36, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.645) ((##vcore.pair? (bruijn ##.expr.136 2 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k29) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k32, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.306 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda11))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda11, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.880 1 2) (##vcore.vector-set! (bruijn ##.%k.593 0 0) (bruijn ##.tape.233 5 1) (bruijn ##.pc.234 5 2) (bruijn ##.e.235 2 0)) ((bruijn ##.%k.593 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      _var0,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 2),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k158(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.881) ((##vcore.+ (bruijn ##.pc.234 5 2) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.232) #f (bruijn ##.preprocess-loop.232 6 0) (bruijn ##.%k.589 5 0) (bruijn ##.tape.233 5 1) (bruijn ##.%x.881 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.878 ##.%x.879 ##.%p.880) ((##vcore.vector-ref (bruijn ##.tape.233 4 1) (bruijn ##.pc.234 4 2)) (##vcore.eq? (bruijn ##.e.235 1 0) (bruijn ##.%x.878 0 0)) (##vcore.not (bruijn ##.%x.879 0 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k157) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k158)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k157, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k158, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.876) ((##vcore.>= (bruijn ##.pc.234 1 2) (bruijn ##.len.875 3 0))) (if (bruijn ##.%p.876 0 0) ((bruijn ##.%k.589 1 0) (bruijn ##.tape.233 1 1)) (basic-block 1 1 (##.%x.877) ((##vcore.vector-ref (bruijn ##.tape.233 2 1) (bruijn ##.pc.234 2 2))) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.124) #f (bruijn ##.preprocess-expr.124 5 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k156) (bruijn ##.%x.877 0 0) (bruijn ##.pc.234 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[2],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k156, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.232) #f (bruijn ##.preprocess-loop.232 1 0) (bruijn ##.%k.281 4 0) (bruijn ##.%x.597 0 0) 0)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 3 ('() (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123") (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124")) (basic-block 1 1 (##.len.875) ((##vcore.vector-length (bruijn ##.tape.121 2 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.123) #f (bruijn ##.peel-labels.123 2 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k159) (bruijn ##.tape.121 3 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k159, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
    }
}
static void _V0vanity_V0bytecode_V20_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.882 ##.%r.883) ((##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.94 3 0)) (##vcore.cons (bruijn ##.%x.882 0 0) '())) ((bruijn ##.%k.243 4 0) (bruijn ##.%r.883 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0eval__vasm,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
static void _V0vanity_V0bytecode_V20_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k163) (bruijn ##.eval-vasm-toplevel.97 2 3) (bruijn ##.%x.599 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k163, self)))),
      VEncodeInt(2l), VEncodeInt(3l),
      _var0
    );
}
static void _V0vanity_V0bytecode_V20_V0k161(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_V0k162) (##string ##.string.1658))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k162, self)))),
      VEncodePointer(&_V10_Dstring_D1658.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k161) (bruijn ##.make-vasm-lambda.98 1 4) (bruijn ##.%x.600 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k161, self)))),
      VEncodeInt(1l), VEncodeInt(4l),
      _var0
    );
}
static void _V0vanity_V0bytecode_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 8) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda3, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[8]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 8, 8, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  // (##letrec (vanity bytecode) 7 ((close "_V50_V0vanity_V0bytecode_V0eval__vasm" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0find__toplevel" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0set__declares_B" (vanity bytecode)) #f #f (close "_V50_V0vanity_V0bytecode_V0find__declare" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm" (vanity bytecode))) (##vcore.function (close _V0vanity_V0bytecode_V20_V0k160) (##string ##.string.1659)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    _V60_V0vanity_V0bytecode = self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm, _V60_V0vanity_V0bytecode))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, _V60_V0vanity_V0bytecode))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B, _V60_V0vanity_V0bytecode))));
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm, _V60_V0vanity_V0bytecode))));
    VRegisterStaticEnv("_V0vanity_V0bytecode_V20", &_V60_V0vanity_V0bytecode);
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k160, self)))),
      VEncodePointer(&_V10_Dstring_D1659.sym, VPOINTER_OTHER));
    }
}
static void _V0vanity_V0bytecode_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.237 0 0) (close _V0vanity_V0bytecode_V20_V0lambda2) (close _V0vanity_V0bytecode_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V0preprocess__loop = VEncodePointer(VInternSymbol(2116780904, &_VW_V0preprocess__loop.sym), VPOINTER_OTHER);
  _V10_Dpreprocess__loop_D232 = VEncodePointer(VInternSymbol(2005326751, &_VW_V10_Dpreprocess__loop_D232.sym), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VInternSymbol(1680038956, &_VW_V0letrec__end.sym), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VInternSymbol(1445174670, &_VW_V0letrec__begin.sym), VPOINTER_OTHER);
  _V0expr_D53 = VEncodePointer(VInternSymbol(85795106, &_VW_V0expr_D53.sym), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VInternSymbol(1139667182, &_VW_V0bf.sym), VPOINTER_OTHER);
  _V0x_D61 = VEncodePointer(VInternSymbol(289449637, &_VW_V0x_D61.sym), VPOINTER_OTHER);
  _V0expr_D51 = VEncodePointer(VInternSymbol(1921305454, &_VW_V0expr_D51.sym), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VInternSymbol(1593164417, &_VW_V0push__set_B.sym), VPOINTER_OTHER);
  _V0declare__foreign = VEncodePointer(VInternSymbol(-1354590835, &_VW_V0declare__foreign.sym), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VInternSymbol(1213435809, &_VW_V0tail__expr.sym), VPOINTER_OTHER);
  _V0args = VEncodePointer(VInternSymbol(-1952811398, &_VW_V0args.sym), VPOINTER_OTHER);
  _V0kk_D47 = VEncodePointer(VInternSymbol(-1643610586, &_VW_V0kk_D47.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0args_D45 = VEncodePointer(VInternSymbol(1287073606, &_VW_V0args_D45.sym), VPOINTER_OTHER);
  _V0expr_D48 = VEncodePointer(VInternSymbol(530799449, &_VW_V0expr_D48.sym), VPOINTER_OTHER);
  _V10_Dloop_D213 = VEncodePointer(VInternSymbol(625737590, &_VW_V10_Dloop_D213.sym), VPOINTER_OTHER);
  _V0kk_D46 = VEncodePointer(VInternSymbol(-1403483567, &_VW_V0kk_D46.sym), VPOINTER_OTHER);
  _V0expr_D41 = VEncodePointer(VInternSymbol(-2051422785, &_VW_V0expr_D41.sym), VPOINTER_OTHER);
  _V0expr_D42 = VEncodePointer(VInternSymbol(-1983730220, &_VW_V0expr_D42.sym), VPOINTER_OTHER);
  _V0lang = VEncodePointer(VInternSymbol(1420709583, &_VW_V0lang.sym), VPOINTER_OTHER);
  _V0expr_D43 = VEncodePointer(VInternSymbol(-858196652, &_VW_V0expr_D43.sym), VPOINTER_OTHER);
  _V0ret = VEncodePointer(VInternSymbol(1095520858, &_VW_V0ret.sym), VPOINTER_OTHER);
  _V0expr_D44 = VEncodePointer(VInternSymbol(166717540, &_VW_V0expr_D44.sym), VPOINTER_OTHER);
  _V0x_D60 = VEncodePointer(VInternSymbol(1233795686, &_VW_V0x_D60.sym), VPOINTER_OTHER);
  _V0expr_D38 = VEncodePointer(VInternSymbol(1190420271, &_VW_V0expr_D38.sym), VPOINTER_OTHER);
  _V0expr_D39 = VEncodePointer(VInternSymbol(-1813819538, &_VW_V0expr_D39.sym), VPOINTER_OTHER);
  _V0foreign__function = VEncodePointer(VInternSymbol(1036213076, &_VW_V0foreign__function.sym), VPOINTER_OTHER);
  _V0x_D59 = VEncodePointer(VInternSymbol(1578560986, &_VW_V0x_D59.sym), VPOINTER_OTHER);
  _V0expr_D36 = VEncodePointer(VInternSymbol(1003530614, &_VW_V0expr_D36.sym), VPOINTER_OTHER);
  _V0close = VEncodePointer(VInternSymbol(-786291330, &_VW_V0close.sym), VPOINTER_OTHER);
  _V0x_D58 = VEncodePointer(VInternSymbol(184642977, &_VW_V0x_D58.sym), VPOINTER_OTHER);
  _V0expr_D34 = VEncodePointer(VInternSymbol(2072463023, &_VW_V0expr_D34.sym), VPOINTER_OTHER);
  _V0case__lambda__error = VEncodePointer(VInternSymbol(-197562183, &_VW_V0case__lambda__error.sym), VPOINTER_OTHER);
  _V0expr_D31 = VEncodePointer(VInternSymbol(-307722423, &_VW_V0expr_D31.sym), VPOINTER_OTHER);
  _V0expr_D32 = VEncodePointer(VInternSymbol(1640869111, &_VW_V0expr_D32.sym), VPOINTER_OTHER);
  _V0str = VEncodePointer(VInternSymbol(128699971, &_VW_V0str.sym), VPOINTER_OTHER);
  _V0case__lambda_P = VEncodePointer(VInternSymbol(-1941514912, &_VW_V0case__lambda_P.sym), VPOINTER_OTHER);
  _V0x_D57 = VEncodePointer(VInternSymbol(-1129293211, &_VW_V0x_D57.sym), VPOINTER_OTHER);
  _V0expr_D28 = VEncodePointer(VInternSymbol(-1579429271, &_VW_V0expr_D28.sym), VPOINTER_OTHER);
  _V0expr_D29 = VEncodePointer(VInternSymbol(-206703007, &_VW_V0expr_D29.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V0x_D56 = VEncodePointer(VInternSymbol(1745616426, &_VW_V0x_D56.sym), VPOINTER_OTHER);
  _V0expr_D25 = VEncodePointer(VInternSymbol(733883527, &_VW_V0expr_D25.sym), VPOINTER_OTHER);
  _V0expr_D26 = VEncodePointer(VInternSymbol(-555246409, &_VW_V0expr_D26.sym), VPOINTER_OTHER);
  _V0b = VEncodePointer(VInternSymbol(452173723, &_VW_V0b.sym), VPOINTER_OTHER);
  _V0lambda_P = VEncodePointer(VInternSymbol(1006106366, &_VW_V0lambda_P.sym), VPOINTER_OTHER);
  _V0expr_D23 = VEncodePointer(VInternSymbol(-351956173, &_VW_V0expr_D23.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0expr_D21 = VEncodePointer(VInternSymbol(1780795813, &_VW_V0expr_D21.sym), VPOINTER_OTHER);
  _V0call = VEncodePointer(VInternSymbol(-822823338, &_VW_V0call.sym), VPOINTER_OTHER);
  _V0expr_D19 = VEncodePointer(VInternSymbol(-1944829827, &_VW_V0expr_D19.sym), VPOINTER_OTHER);
  _V0lookup = VEncodePointer(VInternSymbol(362294115, &_VW_V0lookup.sym), VPOINTER_OTHER);
  _V0expr_D17 = VEncodePointer(VInternSymbol(880016266, &_VW_V0expr_D17.sym), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VInternSymbol(-996132237, &_VW_V0bruijn.sym), VPOINTER_OTHER);
  _V0expr_D14 = VEncodePointer(VInternSymbol(-1690545628, &_VW_V0expr_D14.sym), VPOINTER_OTHER);
  _V0expr_D15 = VEncodePointer(VInternSymbol(629565450, &_VW_V0expr_D15.sym), VPOINTER_OTHER);
  _V0up = VEncodePointer(VInternSymbol(2064092815, &_VW_V0up.sym), VPOINTER_OTHER);
  _V0right = VEncodePointer(VInternSymbol(-1095549294, &_VW_V0right.sym), VPOINTER_OTHER);
  _V0x_D55 = VEncodePointer(VInternSymbol(72078404, &_VW_V0x_D55.sym), VPOINTER_OTHER);
  _V0intrinsic = VEncodePointer(VInternSymbol(1953518893, &_VW_V0intrinsic.sym), VPOINTER_OTHER);
  _V0expr_D12 = VEncodePointer(VInternSymbol(-345568046, &_VW_V0expr_D12.sym), VPOINTER_OTHER);
  _V0push = VEncodePointer(VInternSymbol(-1491894077, &_VW_V0push.sym), VPOINTER_OTHER);
  _V0expr_D10 = VEncodePointer(VInternSymbol(-1791402052, &_VW_V0expr_D10.sym), VPOINTER_OTHER);
  _V0kk_D6 = VEncodePointer(VInternSymbol(1677595541, &_VW_V0kk_D6.sym), VPOINTER_OTHER);
  _V10_Dpreprocess__expr_D124 = VEncodePointer(VInternSymbol(-1495818690, &_VW_V10_Dpreprocess__expr_D124.sym), VPOINTER_OTHER);
  _V0expr_D4 = VEncodePointer(VInternSymbol(1998170004, &_VW_V0expr_D4.sym), VPOINTER_OTHER);
  _V0expr_D5 = VEncodePointer(VInternSymbol(-265734499, &_VW_V0expr_D5.sym), VPOINTER_OTHER);
  _V0label = VEncodePointer(VInternSymbol(619689535, &_VW_V0label.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0input_D2 = VEncodePointer(VInternSymbol(2051096522, &_VW_V0input_D2.sym), VPOINTER_OTHER);
  _V0kk_D1 = VEncodePointer(VInternSymbol(-1164357159, &_VW_V0kk_D1.sym), VPOINTER_OTHER);
  _V0len = VEncodePointer(VInternSymbol(-191740809, &_VW_V0len.sym), VPOINTER_OTHER);
  _V0peel__loop = VEncodePointer(VInternSymbol(714464805, &_VW_V0peel__loop.sym), VPOINTER_OTHER);
  _V10_Dpeel__loop_D127 = VEncodePointer(VInternSymbol(1894217045, &_VW_V10_Dpeel__loop_D127.sym), VPOINTER_OTHER);
  _V0preprocess__expr = VEncodePointer(VInternSymbol(724488667, &_VW_V0preprocess__expr.sym), VPOINTER_OTHER);
  _V0peel__labels = VEncodePointer(VInternSymbol(268331366, &_VW_V0peel__labels.sym), VPOINTER_OTHER);
  _V0labels = VEncodePointer(VInternSymbol(1190045009, &_VW_V0labels.sym), VPOINTER_OTHER);
  _V10_Dpeel__labels_D123 = VEncodePointer(VInternSymbol(-1994800504, &_VW_V10_Dpeel__labels_D123.sym), VPOINTER_OTHER);
  _V0declare = VEncodePointer(VInternSymbol(1810290051, &_VW_V0declare.sym), VPOINTER_OTHER);
  _V0expr_D65 = VEncodePointer(VInternSymbol(1920185625, &_VW_V0expr_D65.sym), VPOINTER_OTHER);
  _V0expr_D66 = VEncodePointer(VInternSymbol(-1242073231, &_VW_V0expr_D66.sym), VPOINTER_OTHER);
  _V0name = VEncodePointer(VInternSymbol(1249508717, &_VW_V0name.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0input_D63 = VEncodePointer(VInternSymbol(-1651394530, &_VW_V0input_D63.sym), VPOINTER_OTHER);
  _V0kk_D62 = VEncodePointer(VInternSymbol(-1059400515, &_VW_V0kk_D62.sym), VPOINTER_OTHER);
  _V0set__declare__loop = VEncodePointer(VInternSymbol(-544141998, &_VW_V0set__declare__loop.sym), VPOINTER_OTHER);
  _V0pc = VEncodePointer(VInternSymbol(-333694274, &_VW_V0pc.sym), VPOINTER_OTHER);
  _V10_Dset__declare__loop_D109 = VEncodePointer(VInternSymbol(1272473419, &_VW_V10_Dset__declare__loop_D109.sym), VPOINTER_OTHER);
  _V0toplevel = VEncodePointer(VInternSymbol(1376451653, &_VW_V0toplevel.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0eval__loop = VEncodePointer(VInternSymbol(-1458352681, &_VW_V0eval__loop.sym), VPOINTER_OTHER);
  _V0program__counter = VEncodePointer(VInternSymbol(-247209645, &_VW_V0program__counter.sym), VPOINTER_OTHER);
  _V0tape = VEncodePointer(VInternSymbol(-1069653910, &_VW_V0tape.sym), VPOINTER_OTHER);
  _V0rets = VEncodePointer(VInternSymbol(12500257, &_VW_V0rets.sym), VPOINTER_OTHER);
  _V10_Deval__loop_D104 = VEncodePointer(VInternSymbol(1936804174, &_VW_V10_Deval__loop_D104.sym), VPOINTER_OTHER);
  _V0preprocess__vasm = VEncodePointer(VInternSymbol(-1382736580, &_VW_V0preprocess__vasm.sym), VPOINTER_OTHER);
  _V0find__declare = VEncodePointer(VInternSymbol(-635575701, &_VW_V0find__declare.sym), VPOINTER_OTHER);
  _V0make__vasm__lambda = VEncodePointer(VInternSymbol(-1445059514, &_VW_V0make__vasm__lambda.sym), VPOINTER_OTHER);
  _V0eval__vasm__toplevel = VEncodePointer(VInternSymbol(1321920139, &_VW_V0eval__vasm__toplevel.sym), VPOINTER_OTHER);
  _V0set__declares_B = VEncodePointer(VInternSymbol(-639844590, &_VW_V0set__declares_B.sym), VPOINTER_OTHER);
  _V0find__toplevel = VEncodePointer(VInternSymbol(2144824951, &_VW_V0find__toplevel.sym), VPOINTER_OTHER);
  _V0vasm = VEncodePointer(VInternSymbol(2047295790, &_VW_V0vasm.sym), VPOINTER_OTHER);
  _V0eval__vasm = VEncodePointer(VInternSymbol(-229856296, &_VW_V0eval__vasm.sym), VPOINTER_OTHER);
  _V0bytecode = VEncodePointer(VInternSymbol(610863972, &_VW_V0bytecode.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D1657.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1657.rest = VEncodePointer(&_V10_Dpair_D1656, VPOINTER_PAIR);
  _V10_Dpair_D1656.first = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1656.rest = VNULL;
  _V10_Dpair_D1655.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1655.rest = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D1654.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1654.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1653.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1653.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1652.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1652.rest = VEncodePointer(&_V10_Dpair_D1651, VPOINTER_PAIR);
  _V10_Dpair_D1651.first = VEncodePointer(&_V10_Dpair_D1650, VPOINTER_PAIR);
  _V10_Dpair_D1651.rest = VNULL;
  _V10_Dpair_D1650.first = VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR);
  _V10_Dpair_D1650.rest = VEncodePointer(&_V10_Dpair_D1649, VPOINTER_PAIR);
  _V10_Dpair_D1649.first = VEncodePointer(&_V10_Dpair_D1640, VPOINTER_PAIR);
  _V10_Dpair_D1649.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1648.first = _V0_Mx;
  _V10_Dpair_D1648.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1647.first = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D1647.rest = VEncodePointer(&_V10_Dpair_D1646, VPOINTER_PAIR);
  _V10_Dpair_D1646.first = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1646.rest = VNULL;
  _V10_Dpair_D1645.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1645.rest = VEncodePointer(&_V10_Dpair_D1644, VPOINTER_PAIR);
  _V10_Dpair_D1644.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1644.rest = VEncodePointer(&_V10_Dpair_D1643, VPOINTER_PAIR);
  _V10_Dpair_D1643.first = VEncodePointer(&_V10_Dpair_D1632, VPOINTER_PAIR);
  _V10_Dpair_D1643.rest = VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR);
  _V10_Dpair_D1642.first = VEncodeBool(false);
  _V10_Dpair_D1642.rest = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D1641.first = VEncodePointer(&_V10_Dpair_D1640, VPOINTER_PAIR);
  _V10_Dpair_D1641.rest = VNULL;
  _V10_Dpair_D1640.first = _V0e;
  _V10_Dpair_D1640.rest = VNULL;
  _V10_Dpair_D1639.first = VEncodePointer(&_V10_Dpair_D1634, VPOINTER_PAIR);
  _V10_Dpair_D1639.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1638.first = VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR);
  _V10_Dpair_D1638.rest = VNULL;
  _V10_Dpair_D1637.first = VEncodePointer(&_V10_Dpair_D1635, VPOINTER_PAIR);
  _V10_Dpair_D1637.rest = VEncodePointer(&_V10_Dpair_D1636, VPOINTER_PAIR);
  _V10_Dpair_D1636.first = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1636.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1635.first = _V0preprocess__loop;
  _V10_Dpair_D1635.rest = VNULL;
  _V10_Dpair_D1634.first = VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR);
  _V10_Dpair_D1634.rest = VEncodePointer(&_V10_Dpair_D1633, VPOINTER_PAIR);
  _V10_Dpair_D1633.first = VEncodePointer(&_V10_Dpair_D1632, VPOINTER_PAIR);
  _V10_Dpair_D1633.rest = VNULL;
  _V10_Dpair_D1632.first = _V0_Mk;
  _V10_Dpair_D1632.rest = VEncodePointer(&_V10_Dpair_D1631, VPOINTER_PAIR);
  _V10_Dpair_D1631.first = _V0tape;
  _V10_Dpair_D1631.rest = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1630.first = _V0vanity;
  _V10_Dpair_D1630.rest = VEncodePointer(&_V10_Dpair_D1629, VPOINTER_PAIR);
  _V10_Dpair_D1629.first = _V0bytecode;
  _V10_Dpair_D1629.rest = VEncodePointer(&_V10_Dpair_D1628, VPOINTER_PAIR);
  _V10_Dpair_D1628.first = _V0preprocess__vasm;
  _V10_Dpair_D1628.rest = VEncodePointer(&_V10_Dpair_D1627, VPOINTER_PAIR);
  _V10_Dpair_D1627.first = _V10_Dpreprocess__loop_D232;
  _V10_Dpair_D1627.rest = VNULL;
  _V10_Dpair_D1625.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1625.rest = VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR);
  _V10_Dpair_D1624.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1624.rest = VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR);
  _V10_Dpair_D1623.first = VEncodePointer(&_V10_Dpair_D1622, VPOINTER_PAIR);
  _V10_Dpair_D1623.rest = VNULL;
  _V10_Dpair_D1622.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1622.rest = VEncodePointer(&_V10_Dpair_D1621, VPOINTER_PAIR);
  _V10_Dpair_D1621.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1621.rest = VEncodePointer(&_V10_Dpair_D1618, VPOINTER_PAIR);
  _V10_Dpair_D1620.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1620.rest = VEncodePointer(&_V10_Dpair_D1619, VPOINTER_PAIR);
  _V10_Dpair_D1619.first = VEncodePointer(&_V10_Dpair_D1618, VPOINTER_PAIR);
  _V10_Dpair_D1619.rest = VNULL;
  _V10_Dpair_D1618.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1618.rest = VEncodePointer(&_V10_Dpair_D1617, VPOINTER_PAIR);
  _V10_Dpair_D1617.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1617.rest = VEncodePointer(&_V10_Dpair_D1614, VPOINTER_PAIR);
  _V10_Dpair_D1616.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1616.rest = VEncodePointer(&_V10_Dpair_D1615, VPOINTER_PAIR);
  _V10_Dpair_D1615.first = VEncodePointer(&_V10_Dpair_D1614, VPOINTER_PAIR);
  _V10_Dpair_D1615.rest = VNULL;
  _V10_Dpair_D1614.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1614.rest = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1612.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1612.rest = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1611.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1611.rest = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1610.first = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1610.rest = VNULL;
  _V10_Dpair_D1609.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1609.rest = VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR);
  _V10_Dpair_D1608.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1608.rest = VEncodePointer(&_V10_Dpair_D1604, VPOINTER_PAIR);
  _V10_Dpair_D1607.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1607.rest = VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR);
  _V10_Dpair_D1606.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1606.rest = VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR);
  _V10_Dpair_D1605.first = VEncodePointer(&_V10_Dpair_D1604, VPOINTER_PAIR);
  _V10_Dpair_D1605.rest = VNULL;
  _V10_Dpair_D1604.first = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1604.rest = VEncodePointer(&_V10_Dpair_D1603, VPOINTER_PAIR);
  _V10_Dpair_D1603.first = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1603.rest = VEncodePointer(&_V10_Dpair_D1602, VPOINTER_PAIR);
  _V10_Dpair_D1602.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1602.rest = VEncodePointer(&_V10_Dpair_D1598, VPOINTER_PAIR);
  _V10_Dpair_D1601.first = _V0expr_D53;
  _V10_Dpair_D1601.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1600.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1600.rest = VEncodePointer(&_V10_Dpair_D1599, VPOINTER_PAIR);
  _V10_Dpair_D1599.first = VEncodePointer(&_V10_Dpair_D1598, VPOINTER_PAIR);
  _V10_Dpair_D1599.rest = VNULL;
  _V10_Dpair_D1598.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1598.rest = VEncodePointer(&_V10_Dpair_D1597, VPOINTER_PAIR);
  _V10_Dpair_D1597.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1597.rest = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1596.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1596.rest = VEncodePointer(&_V10_Dpair_D1595, VPOINTER_PAIR);
  _V10_Dpair_D1595.first = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1595.rest = VNULL;
  _V10_Dpair_D1594.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1594.rest = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1591.first = VEncodePointer(&_V10_Dpair_D1590, VPOINTER_PAIR);
  _V10_Dpair_D1591.rest = VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR);
  _V10_Dpair_D1590.first = VEncodeBool(false);
  _V10_Dpair_D1590.rest = VEncodePointer(&_V10_Dpair_D1589, VPOINTER_PAIR);
  _V10_Dpair_D1589.first = VEncodePointer(&_V10_Dpair_D1588, VPOINTER_PAIR);
  _V10_Dpair_D1589.rest = VNULL;
  _V10_Dpair_D1588.first = _V0x_D61;
  _V10_Dpair_D1588.rest = VNULL;
  _V10_Dpair_D1587.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1587.rest = VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR);
  _V10_Dpair_D1586.first = VEncodePointer(&_V10_Dpair_D1585, VPOINTER_PAIR);
  _V10_Dpair_D1586.rest = VNULL;
  _V10_Dpair_D1585.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1585.rest = VEncodePointer(&_V10_Dpair_D1584, VPOINTER_PAIR);
  _V10_Dpair_D1584.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1584.rest = VEncodePointer(&_V10_Dpair_D1583, VPOINTER_PAIR);
  _V10_Dpair_D1583.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1583.rest = VEncodePointer(&_V10_Dpair_D1579, VPOINTER_PAIR);
  _V10_Dpair_D1582.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1582.rest = VEncodePointer(&_V10_Dpair_D1580, VPOINTER_PAIR);
  _V10_Dpair_D1581.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1581.rest = VEncodePointer(&_V10_Dpair_D1580, VPOINTER_PAIR);
  _V10_Dpair_D1580.first = VEncodePointer(&_V10_Dpair_D1579, VPOINTER_PAIR);
  _V10_Dpair_D1580.rest = VNULL;
  _V10_Dpair_D1579.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1579.rest = VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR);
  _V10_Dpair_D1578.first = VEncodePointer(&_V10_Dpair_D1576, VPOINTER_PAIR);
  _V10_Dpair_D1578.rest = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V10_Dpair_D1577.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1577.rest = VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR);
  _V10_Dpair_D1576.first = _V0expr_D51;
  _V10_Dpair_D1576.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1575.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1575.rest = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1574.first = VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR);
  _V10_Dpair_D1574.rest = VNULL;
  _V10_Dpair_D1573.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1573.rest = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1572.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1572.rest = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1571.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1571.rest = VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR);
  _V10_Dpair_D1570.first = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1570.rest = VNULL;
  _V10_Dpair_D1569.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1569.rest = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1568.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1568.rest = VEncodePointer(&_V10_Dpair_D1566, VPOINTER_PAIR);
  _V10_Dpair_D1567.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1567.rest = VEncodePointer(&_V10_Dpair_D1566, VPOINTER_PAIR);
  _V10_Dpair_D1566.first = VEncodePointer(&_V10_Dpair_D1565, VPOINTER_PAIR);
  _V10_Dpair_D1566.rest = VNULL;
  _V10_Dpair_D1565.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1565.rest = VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR);
  _V10_Dpair_D1564.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1564.rest = VEncodePointer(&_V10_Dpair_D1561, VPOINTER_PAIR);
  _V10_Dpair_D1563.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1563.rest = VEncodePointer(&_V10_Dpair_D1562, VPOINTER_PAIR);
  _V10_Dpair_D1562.first = VEncodePointer(&_V10_Dpair_D1561, VPOINTER_PAIR);
  _V10_Dpair_D1562.rest = VNULL;
  _V10_Dpair_D1561.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1561.rest = VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR);
  _V10_Dpair_D1560.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1560.rest = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1559.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1559.rest = VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR);
  _V10_Dpair_D1558.first = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1558.rest = VNULL;
  _V10_Dpair_D1557.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1557.rest = VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR);
  _V10_Dpair_D1556.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1556.rest = VEncodePointer(&_V10_Dpair_D1554, VPOINTER_PAIR);
  _V10_Dpair_D1555.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1555.rest = VEncodePointer(&_V10_Dpair_D1554, VPOINTER_PAIR);
  _V10_Dpair_D1554.first = VEncodePointer(&_V10_Dpair_D1553, VPOINTER_PAIR);
  _V10_Dpair_D1554.rest = VNULL;
  _V10_Dpair_D1553.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1553.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1552.first = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1552.rest = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1551.first = VEncodePointer(&_V10_Dpair_D1550, VPOINTER_PAIR);
  _V10_Dpair_D1551.rest = VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR);
  _V10_Dpair_D1550.first = VEncodeBool(false);
  _V10_Dpair_D1550.rest = VEncodePointer(&_V10_Dpair_D1549, VPOINTER_PAIR);
  _V10_Dpair_D1549.first = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1549.rest = VNULL;
  _V10_Dpair_D1548.first = _V0_Mk;
  _V10_Dpair_D1548.rest = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1547.first = _V0tail__expr;
  _V10_Dpair_D1547.rest = VEncodePointer(&_V10_Dpair_D1546, VPOINTER_PAIR);
  _V10_Dpair_D1546.first = _V0args;
  _V10_Dpair_D1546.rest = VNULL;
  _V10_Dpair_D1545.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1545.rest = VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR);
  _V10_Dpair_D1544.first = VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR);
  _V10_Dpair_D1544.rest = VNULL;
  _V10_Dpair_D1543.first = VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR);
  _V10_Dpair_D1543.rest = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1542.first = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1542.rest = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1541.first = _V0args;
  _V10_Dpair_D1541.rest = VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR);
  _V10_Dpair_D1540.first = _V0_Mx;
  _V10_Dpair_D1540.rest = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1539.first = VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR);
  _V10_Dpair_D1539.rest = VEncodePointer(&_V10_Dpair_D1533, VPOINTER_PAIR);
  _V10_Dpair_D1538.first = VEncodeBool(false);
  _V10_Dpair_D1538.rest = VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR);
  _V10_Dpair_D1537.first = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1537.rest = VNULL;
  _V10_Dpair_D1536.first = _V0_Mk;
  _V10_Dpair_D1536.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1535.first = _V0kk_D47;
  _V10_Dpair_D1535.rest = VNULL;
  _V10_Dpair_D1534.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1534.rest = VEncodePointer(&_V10_Dpair_D1533, VPOINTER_PAIR);
  _V10_Dpair_D1533.first = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1533.rest = VNULL;
  _V10_Dpair_D1532.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1532.rest = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1531.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1531.rest = VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR);
  _V10_Dpair_D1530.first = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1530.rest = VNULL;
  _V10_Dpair_D1529.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1529.rest = VEncodePointer(&_V10_Dpair_D1528, VPOINTER_PAIR);
  _V10_Dpair_D1528.first = VEncodePointer(&_V10_Dpair_D1520, VPOINTER_PAIR);
  _V10_Dpair_D1528.rest = VEncodePointer(&_V10_Dpair_D1525, VPOINTER_PAIR);
  _V10_Dpair_D1527.first = VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR);
  _V10_Dpair_D1527.rest = VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR);
  _V10_Dpair_D1526.first = VEncodePointer(&_V10_Dpair_D1525, VPOINTER_PAIR);
  _V10_Dpair_D1526.rest = VNULL;
  _V10_Dpair_D1525.first = VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR);
  _V10_Dpair_D1525.rest = VEncodePointer(&_V10_Dpair_D1524, VPOINTER_PAIR);
  _V10_Dpair_D1524.first = VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR);
  _V10_Dpair_D1524.rest = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1523.first = _V0loop;
  _V10_Dpair_D1523.rest = VNULL;
  _V10_Dpair_D1522.first = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1522.rest = VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR);
  _V10_Dpair_D1521.first = VEncodePointer(&_V10_Dpair_D1520, VPOINTER_PAIR);
  _V10_Dpair_D1521.rest = VNULL;
  _V10_Dpair_D1520.first = _V0_Mk;
  _V10_Dpair_D1520.rest = VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR);
  _V10_Dpair_D1519.first = _V0expr_D48;
  _V10_Dpair_D1519.rest = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1518.first = _V0args_D45;
  _V10_Dpair_D1518.rest = VNULL;
  _V10_Dpair_D1517.first = _V0vanity;
  _V10_Dpair_D1517.rest = VEncodePointer(&_V10_Dpair_D1516, VPOINTER_PAIR);
  _V10_Dpair_D1516.first = _V0bytecode;
  _V10_Dpair_D1516.rest = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1515.first = _V0preprocess__vasm;
  _V10_Dpair_D1515.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1514.first = _V10_Dpreprocess__expr_D124;
  _V10_Dpair_D1514.rest = VEncodePointer(&_V10_Dpair_D1513, VPOINTER_PAIR);
  _V10_Dpair_D1513.first = _V10_Dloop_D213;
  _V10_Dpair_D1513.rest = VNULL;
  _V10_Dpair_D1512.first = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1512.rest = VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR);
  _V10_Dpair_D1511.first = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1511.rest = VNULL;
  _V10_Dpair_D1510.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1510.rest = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1509.first = VEncodeBool(false);
  _V10_Dpair_D1509.rest = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1508.first = VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR);
  _V10_Dpair_D1508.rest = VNULL;
  _V10_Dpair_D1507.first = _V0_Mk;
  _V10_Dpair_D1507.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1506.first = _V0kk_D46;
  _V10_Dpair_D1506.rest = VNULL;
  _V10_Dpair_D1505.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1505.rest = VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR);
  _V10_Dpair_D1504.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1504.rest = VNULL;
  _V10_Dpair_D1503.first = VEncodePointer(&_V10_Dpair_D1493, VPOINTER_PAIR);
  _V10_Dpair_D1503.rest = VEncodePointer(&_V10_Dpair_D1502, VPOINTER_PAIR);
  _V10_Dpair_D1502.first = VEncodePointer(&_V10_Dpair_D1495, VPOINTER_PAIR);
  _V10_Dpair_D1502.rest = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1501.first = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1501.rest = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1500.first = VEncodePointer(&_V10_Dpair_D1498, VPOINTER_PAIR);
  _V10_Dpair_D1500.rest = VEncodePointer(&_V10_Dpair_D1499, VPOINTER_PAIR);
  _V10_Dpair_D1499.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1499.rest = VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR);
  _V10_Dpair_D1498.first = _V0expr_D41;
  _V10_Dpair_D1498.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1497.first = _V0lang;
  _V10_Dpair_D1497.rest = VEncodePointer(&_V10_Dpair_D1496, VPOINTER_PAIR);
  _V10_Dpair_D1496.first = _V0expr_D42;
  _V10_Dpair_D1496.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1495.first = _V0ret;
  _V10_Dpair_D1495.rest = VEncodePointer(&_V10_Dpair_D1494, VPOINTER_PAIR);
  _V10_Dpair_D1494.first = _V0expr_D43;
  _V10_Dpair_D1494.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1493.first = _V0name;
  _V10_Dpair_D1493.rest = VEncodePointer(&_V10_Dpair_D1492, VPOINTER_PAIR);
  _V10_Dpair_D1492.first = _V0expr_D44;
  _V10_Dpair_D1492.rest = VNULL;
  _V10_Dpair_D1491.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1491.rest = VEncodePointer(&_V10_Dpair_D1490, VPOINTER_PAIR);
  _V10_Dpair_D1490.first = VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR);
  _V10_Dpair_D1490.rest = VNULL;
  _V10_Dpair_D1489.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1489.rest = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1488.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1488.rest = VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR);
  _V10_Dpair_D1487.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1487.rest = VEncodePointer(&_V10_Dpair_D1486, VPOINTER_PAIR);
  _V10_Dpair_D1486.first = VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR);
  _V10_Dpair_D1486.rest = VNULL;
  _V10_Dpair_D1485.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1485.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1483.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1483.rest = VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR);
  _V10_Dpair_D1482.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1482.rest = VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR);
  _V10_Dpair_D1481.first = VEncodePointer(&_V10_Dpair_D1480, VPOINTER_PAIR);
  _V10_Dpair_D1481.rest = VNULL;
  _V10_Dpair_D1480.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1480.rest = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1479.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1479.rest = VEncodePointer(&_V10_Dpair_D1478, VPOINTER_PAIR);
  _V10_Dpair_D1478.first = VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR);
  _V10_Dpair_D1478.rest = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1476.first = VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR);
  _V10_Dpair_D1476.rest = VEncodePointer(&_V10_Dpair_D1471, VPOINTER_PAIR);
  _V10_Dpair_D1475.first = VEncodeBool(false);
  _V10_Dpair_D1475.rest = VEncodePointer(&_V10_Dpair_D1474, VPOINTER_PAIR);
  _V10_Dpair_D1474.first = VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR);
  _V10_Dpair_D1474.rest = VNULL;
  _V10_Dpair_D1473.first = _V0x_D60;
  _V10_Dpair_D1473.rest = VNULL;
  _V10_Dpair_D1472.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1472.rest = VEncodePointer(&_V10_Dpair_D1471, VPOINTER_PAIR);
  _V10_Dpair_D1471.first = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1471.rest = VNULL;
  _V10_Dpair_D1470.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1470.rest = VEncodePointer(&_V10_Dpair_D1469, VPOINTER_PAIR);
  _V10_Dpair_D1469.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1469.rest = VEncodePointer(&_V10_Dpair_D1468, VPOINTER_PAIR);
  _V10_Dpair_D1468.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1468.rest = VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR);
  _V10_Dpair_D1466.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1466.rest = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1465.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1465.rest = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1464.first = VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR);
  _V10_Dpair_D1464.rest = VNULL;
  _V10_Dpair_D1463.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1463.rest = VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR);
  _V10_Dpair_D1462.first = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1462.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1461.first = VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR);
  _V10_Dpair_D1461.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1460.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1460.rest = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1459.first = _V0expr_D38;
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = _V0name;
  _V10_Dpair_D1458.rest = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1457.first = _V0expr_D39;
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1455.rest = VNULL;
  _V10_Dpair_D1454.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1454.rest = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1453.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1453.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1452.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1451.rest = VNULL;
  _V10_Dpair_D1450.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1447.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1447.rest = VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR);
  _V10_Dpair_D1446.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1446.rest = VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR);
  _V10_Dpair_D1445.first = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1445.rest = VNULL;
  _V10_Dpair_D1444.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1444.rest = VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR);
  _V10_Dpair_D1443.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1443.rest = VEncodePointer(&_V10_Dpair_D1442, VPOINTER_PAIR);
  _V10_Dpair_D1442.first = VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR);
  _V10_Dpair_D1442.rest = VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR);
  _V10_Dpair_D1441.first = VEncodePointer(&_V10_Dpair_D1440, VPOINTER_PAIR);
  _V10_Dpair_D1441.rest = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1440.first = VEncodeBool(false);
  _V10_Dpair_D1440.rest = VEncodePointer(&_V10_Dpair_D1439, VPOINTER_PAIR);
  _V10_Dpair_D1439.first = VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR);
  _V10_Dpair_D1439.rest = VNULL;
  _V10_Dpair_D1438.first = _V0x_D59;
  _V10_Dpair_D1438.rest = VNULL;
  _V10_Dpair_D1437.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1437.rest = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1436.first = VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR);
  _V10_Dpair_D1436.rest = VNULL;
  _V10_Dpair_D1435.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1435.rest = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1434.first = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1434.rest = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1433.rest = VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR);
  _V10_Dpair_D1432.first = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1432.rest = VNULL;
  _V10_Dpair_D1431.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1431.rest = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1430.first = VEncodeBool(false);
  _V10_Dpair_D1430.rest = VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR);
  _V10_Dpair_D1429.first = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1429.rest = VNULL;
  _V10_Dpair_D1428.first = _V0x;
  _V10_Dpair_D1428.rest = VNULL;
  _V10_Dpair_D1427.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1427.rest = VEncodePointer(&_V10_Dpair_D1426, VPOINTER_PAIR);
  _V10_Dpair_D1426.first = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1426.rest = VNULL;
  _V10_Dpair_D1425.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1425.rest = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1424.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1424.rest = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1423.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1423.rest = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1422.first = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1422.rest = VNULL;
  _V10_Dpair_D1421.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1421.rest = VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR);
  _V10_Dpair_D1420.first = VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR);
  _V10_Dpair_D1420.rest = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1419.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1419.rest = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1418.first = _V0expr_D36;
  _V10_Dpair_D1418.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1417.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1417.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1416.first = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1416.rest = VNULL;
  _V10_Dpair_D1415.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1415.rest = VEncodePointer(&_V10_Dpair_D1414, VPOINTER_PAIR);
  _V10_Dpair_D1414.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1414.rest = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1413.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1413.rest = VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR);
  _V10_Dpair_D1412.first = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1412.rest = VNULL;
  _V10_Dpair_D1411.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1411.rest = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1409.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1409.rest = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1408.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1408.rest = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1407.first = VEncodePointer(&_V10_Dpair_D1406, VPOINTER_PAIR);
  _V10_Dpair_D1407.rest = VNULL;
  _V10_Dpair_D1406.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1406.rest = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1405.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1405.rest = VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR);
  _V10_Dpair_D1404.first = VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR);
  _V10_Dpair_D1404.rest = VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR);
  _V10_Dpair_D1402.first = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1402.rest = VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR);
  _V10_Dpair_D1401.first = VEncodeBool(false);
  _V10_Dpair_D1401.rest = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1400.first = VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR);
  _V10_Dpair_D1400.rest = VNULL;
  _V10_Dpair_D1399.first = _V0x_D58;
  _V10_Dpair_D1399.rest = VNULL;
  _V10_Dpair_D1398.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1398.rest = VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR);
  _V10_Dpair_D1397.first = VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR);
  _V10_Dpair_D1397.rest = VNULL;
  _V10_Dpair_D1396.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1396.rest = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1394.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1394.rest = VEncodePointer(&_V10_Dpair_D1393, VPOINTER_PAIR);
  _V10_Dpair_D1393.first = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1393.rest = VNULL;
  _V10_Dpair_D1392.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1392.rest = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1391.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1391.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1390.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1390.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1389.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1389.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1388.first = VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR);
  _V10_Dpair_D1388.rest = VNULL;
  _V10_Dpair_D1387.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1387.rest = VEncodePointer(&_V10_Dpair_D1386, VPOINTER_PAIR);
  _V10_Dpair_D1386.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1386.rest = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1385.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1385.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1384.first = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1384.rest = VNULL;
  _V10_Dpair_D1383.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1383.rest = VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR);
  _V10_Dpair_D1382.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1382.rest = VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR);
  _V10_Dpair_D1381.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1381.rest = VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR);
  _V10_Dpair_D1380.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1380.rest = VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR);
  _V10_Dpair_D1379.first = VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR);
  _V10_Dpair_D1379.rest = VNULL;
  _V10_Dpair_D1378.first = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1378.rest = VEncodePointer(&_V10_Dpair_D1377, VPOINTER_PAIR);
  _V10_Dpair_D1377.first = VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR);
  _V10_Dpair_D1377.rest = VEncodePointer(&_V10_Dpair_D1376, VPOINTER_PAIR);
  _V10_Dpair_D1376.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1376.rest = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1375.first = _V0expr_D34;
  _V10_Dpair_D1375.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1374.first = _V0x;
  _V10_Dpair_D1374.rest = VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR);
  _V10_Dpair_D1373.first = _V0name;
  _V10_Dpair_D1373.rest = VNULL;
  _V10_Dpair_D1372.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1372.rest = VEncodePointer(&_V10_Dpair_D1371, VPOINTER_PAIR);
  _V10_Dpair_D1371.first = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1371.rest = VNULL;
  _V10_Dpair_D1370.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1370.rest = VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR);
  _V10_Dpair_D1369.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1369.rest = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1368.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1368.rest = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1367.first = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1367.rest = VNULL;
  _V10_Dpair_D1366.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1366.rest = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1365.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1365.rest = VEncodePointer(&_V10_Dpair_D1363, VPOINTER_PAIR);
  _V10_Dpair_D1364.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1364.rest = VEncodePointer(&_V10_Dpair_D1363, VPOINTER_PAIR);
  _V10_Dpair_D1363.first = VEncodePointer(&_V10_Dpair_D1362, VPOINTER_PAIR);
  _V10_Dpair_D1363.rest = VNULL;
  _V10_Dpair_D1362.first = VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR);
  _V10_Dpair_D1362.rest = VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR);
  _V10_Dpair_D1361.first = VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR);
  _V10_Dpair_D1361.rest = VEncodePointer(&_V10_Dpair_D1360, VPOINTER_PAIR);
  _V10_Dpair_D1360.first = VEncodePointer(&_V10_Dpair_D1358, VPOINTER_PAIR);
  _V10_Dpair_D1360.rest = VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR);
  _V10_Dpair_D1359.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1359.rest = VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR);
  _V10_Dpair_D1358.first = _V0expr_D31;
  _V10_Dpair_D1358.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1357.first = _V0name;
  _V10_Dpair_D1357.rest = VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR);
  _V10_Dpair_D1356.first = _V0expr_D32;
  _V10_Dpair_D1356.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1355.first = _V0str;
  _V10_Dpair_D1355.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1354.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1354.rest = VEncodePointer(&_V10_Dpair_D1353, VPOINTER_PAIR);
  _V10_Dpair_D1353.first = VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR);
  _V10_Dpair_D1353.rest = VNULL;
  _V10_Dpair_D1352.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1352.rest = VEncodePointer(&_V10_Dpair_D1351, VPOINTER_PAIR);
  _V10_Dpair_D1351.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1351.rest = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1350.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1350.rest = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1349.first = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1349.rest = VNULL;
  _V10_Dpair_D1348.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1348.rest = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1345.first = VEncodePointer(&_V10_Dpair_D1344, VPOINTER_PAIR);
  _V10_Dpair_D1345.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1344.first = VEncodeBool(false);
  _V10_Dpair_D1344.rest = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1343.first = VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR);
  _V10_Dpair_D1343.rest = VNULL;
  _V10_Dpair_D1342.first = _V0x_D57;
  _V10_Dpair_D1342.rest = VNULL;
  _V10_Dpair_D1341.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1341.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1340.first = VEncodePointer(&_V10_Dpair_D1339, VPOINTER_PAIR);
  _V10_Dpair_D1340.rest = VNULL;
  _V10_Dpair_D1339.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1339.rest = VEncodePointer(&_V10_Dpair_D1338, VPOINTER_PAIR);
  _V10_Dpair_D1338.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1338.rest = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1336.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1336.rest = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1335.first = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1335.rest = VNULL;
  _V10_Dpair_D1334.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1334.rest = VEncodePointer(&_V10_Dpair_D1333, VPOINTER_PAIR);
  _V10_Dpair_D1333.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1333.rest = VEncodePointer(&_V10_Dpair_D1329, VPOINTER_PAIR);
  _V10_Dpair_D1332.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1332.rest = VEncodePointer(&_V10_Dpair_D1330, VPOINTER_PAIR);
  _V10_Dpair_D1331.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1331.rest = VEncodePointer(&_V10_Dpair_D1330, VPOINTER_PAIR);
  _V10_Dpair_D1330.first = VEncodePointer(&_V10_Dpair_D1329, VPOINTER_PAIR);
  _V10_Dpair_D1330.rest = VNULL;
  _V10_Dpair_D1329.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1329.rest = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1328.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1328.rest = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1327.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1327.rest = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1326.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1326.rest = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1325.first = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1325.rest = VNULL;
  _V10_Dpair_D1324.first = VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR);
  _V10_Dpair_D1324.rest = VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR);
  _V10_Dpair_D1323.first = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1323.rest = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1322.first = VEncodePointer(&_V10_Dpair_D1320, VPOINTER_PAIR);
  _V10_Dpair_D1322.rest = VEncodePointer(&_V10_Dpair_D1321, VPOINTER_PAIR);
  _V10_Dpair_D1321.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1321.rest = VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR);
  _V10_Dpair_D1320.first = _V0expr_D28;
  _V10_Dpair_D1320.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1319.first = _V0x;
  _V10_Dpair_D1319.rest = VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR);
  _V10_Dpair_D1318.first = _V0expr_D29;
  _V10_Dpair_D1318.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1317.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1317.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1316.first = VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR);
  _V10_Dpair_D1316.rest = VNULL;
  _V10_Dpair_D1315.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1315.rest = VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR);
  _V10_Dpair_D1314.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1314.rest = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1313.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1313.rest = VEncodePointer(&_V10_Dpair_D1312, VPOINTER_PAIR);
  _V10_Dpair_D1312.first = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1312.rest = VNULL;
  _V10_Dpair_D1311.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1311.rest = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1308.first = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D1308.rest = VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR);
  _V10_Dpair_D1307.first = VEncodeBool(false);
  _V10_Dpair_D1307.rest = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D1306.first = VEncodePointer(&_V10_Dpair_D1305, VPOINTER_PAIR);
  _V10_Dpair_D1306.rest = VNULL;
  _V10_Dpair_D1305.first = _V0x_D56;
  _V10_Dpair_D1305.rest = VNULL;
  _V10_Dpair_D1304.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1304.rest = VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR);
  _V10_Dpair_D1303.first = VEncodePointer(&_V10_Dpair_D1302, VPOINTER_PAIR);
  _V10_Dpair_D1303.rest = VNULL;
  _V10_Dpair_D1302.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1302.rest = VEncodePointer(&_V10_Dpair_D1301, VPOINTER_PAIR);
  _V10_Dpair_D1301.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1301.rest = VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR);
  _V10_Dpair_D1299.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1299.rest = VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR);
  _V10_Dpair_D1298.first = VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR);
  _V10_Dpair_D1298.rest = VNULL;
  _V10_Dpair_D1297.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1297.rest = VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR);
  _V10_Dpair_D1296.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1296.rest = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1295.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1295.rest = VEncodePointer(&_V10_Dpair_D1293, VPOINTER_PAIR);
  _V10_Dpair_D1294.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1294.rest = VEncodePointer(&_V10_Dpair_D1293, VPOINTER_PAIR);
  _V10_Dpair_D1293.first = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1293.rest = VNULL;
  _V10_Dpair_D1292.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1292.rest = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D1291.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1291.rest = VEncodePointer(&_V10_Dpair_D1287, VPOINTER_PAIR);
  _V10_Dpair_D1290.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1290.rest = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D1289.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1289.rest = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D1288.first = VEncodePointer(&_V10_Dpair_D1287, VPOINTER_PAIR);
  _V10_Dpair_D1288.rest = VNULL;
  _V10_Dpair_D1287.first = VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR);
  _V10_Dpair_D1287.rest = VEncodePointer(&_V10_Dpair_D1286, VPOINTER_PAIR);
  _V10_Dpair_D1286.first = VEncodePointer(&_V10_Dpair_D1282, VPOINTER_PAIR);
  _V10_Dpair_D1286.rest = VEncodePointer(&_V10_Dpair_D1285, VPOINTER_PAIR);
  _V10_Dpair_D1285.first = VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR);
  _V10_Dpair_D1285.rest = VEncodePointer(&_V10_Dpair_D1284, VPOINTER_PAIR);
  _V10_Dpair_D1284.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1284.rest = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1283.first = _V0expr_D25;
  _V10_Dpair_D1283.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1282.first = _V0x;
  _V10_Dpair_D1282.rest = VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR);
  _V10_Dpair_D1281.first = _V0expr_D26;
  _V10_Dpair_D1281.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1280.first = _V0b;
  _V10_Dpair_D1280.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1279.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1279.rest = VEncodePointer(&_V10_Dpair_D1278, VPOINTER_PAIR);
  _V10_Dpair_D1278.first = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1278.rest = VNULL;
  _V10_Dpair_D1277.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1277.rest = VEncodePointer(&_V10_Dpair_D1276, VPOINTER_PAIR);
  _V10_Dpair_D1276.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1276.rest = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1275.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1275.rest = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1274.first = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1274.rest = VNULL;
  _V10_Dpair_D1273.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1273.rest = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1271.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1271.rest = VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR);
  _V10_Dpair_D1270.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1270.rest = VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR);
  _V10_Dpair_D1269.first = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1269.rest = VNULL;
  _V10_Dpair_D1268.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1268.rest = VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR);
  _V10_Dpair_D1267.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1267.rest = VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR);
  _V10_Dpair_D1266.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1266.rest = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1265.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1265.rest = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1264.first = VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR);
  _V10_Dpair_D1264.rest = VNULL;
  _V10_Dpair_D1263.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1263.rest = VEncodePointer(&_V10_Dpair_D1262, VPOINTER_PAIR);
  _V10_Dpair_D1262.first = VEncodePointer(&_V10_Dpair_D1260, VPOINTER_PAIR);
  _V10_Dpair_D1262.rest = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1261.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1261.rest = VEncodePointer(&_V10_Dpair_D1257, VPOINTER_PAIR);
  _V10_Dpair_D1260.first = _V0expr_D23;
  _V10_Dpair_D1260.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1259.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1259.rest = VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR);
  _V10_Dpair_D1258.first = VEncodePointer(&_V10_Dpair_D1257, VPOINTER_PAIR);
  _V10_Dpair_D1258.rest = VNULL;
  _V10_Dpair_D1257.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1257.rest = VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR);
  _V10_Dpair_D1256.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1256.rest = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1255.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1255.rest = VEncodePointer(&_V10_Dpair_D1254, VPOINTER_PAIR);
  _V10_Dpair_D1254.first = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1254.rest = VNULL;
  _V10_Dpair_D1253.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1253.rest = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1251.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1251.rest = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1250.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1250.rest = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1249.first = VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR);
  _V10_Dpair_D1249.rest = VNULL;
  _V10_Dpair_D1248.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1248.rest = VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR);
  _V10_Dpair_D1247.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1247.rest = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1246.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1246.rest = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1245.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1245.rest = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VNULL;
  _V10_Dpair_D1243.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1243.rest = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR);
  _V10_Dpair_D1240.first = _V0expr_D21;
  _V10_Dpair_D1240.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1239.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1239.rest = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1238.first = VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR);
  _V10_Dpair_D1238.rest = VNULL;
  _V10_Dpair_D1237.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1237.rest = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1236.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1236.rest = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1235.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1235.rest = VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR);
  _V10_Dpair_D1234.first = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1234.rest = VNULL;
  _V10_Dpair_D1233.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1233.rest = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1231.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1231.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1230.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1230.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1229.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1229.rest = VNULL;
  _V10_Dpair_D1228.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1228.rest = VEncodePointer(&_V10_Dpair_D1227, VPOINTER_PAIR);
  _V10_Dpair_D1227.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1227.rest = VEncodePointer(&_V10_Dpair_D1223, VPOINTER_PAIR);
  _V10_Dpair_D1226.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1226.rest = VEncodePointer(&_V10_Dpair_D1224, VPOINTER_PAIR);
  _V10_Dpair_D1225.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1225.rest = VEncodePointer(&_V10_Dpair_D1224, VPOINTER_PAIR);
  _V10_Dpair_D1224.first = VEncodePointer(&_V10_Dpair_D1223, VPOINTER_PAIR);
  _V10_Dpair_D1224.rest = VNULL;
  _V10_Dpair_D1223.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1223.rest = VEncodePointer(&_V10_Dpair_D1222, VPOINTER_PAIR);
  _V10_Dpair_D1222.first = VEncodePointer(&_V10_Dpair_D1220, VPOINTER_PAIR);
  _V10_Dpair_D1222.rest = VEncodePointer(&_V10_Dpair_D1221, VPOINTER_PAIR);
  _V10_Dpair_D1221.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1221.rest = VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR);
  _V10_Dpair_D1220.first = _V0expr_D19;
  _V10_Dpair_D1220.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1219.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1219.rest = VEncodePointer(&_V10_Dpair_D1218, VPOINTER_PAIR);
  _V10_Dpair_D1218.first = VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR);
  _V10_Dpair_D1218.rest = VNULL;
  _V10_Dpair_D1217.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1217.rest = VEncodePointer(&_V10_Dpair_D1216, VPOINTER_PAIR);
  _V10_Dpair_D1216.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1216.rest = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1215.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1215.rest = VEncodePointer(&_V10_Dpair_D1214, VPOINTER_PAIR);
  _V10_Dpair_D1214.first = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1214.rest = VNULL;
  _V10_Dpair_D1213.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1213.rest = VEncodePointer(&_V10_Dpair_D1198, VPOINTER_PAIR);
  _V10_Dpair_D1211.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1211.rest = VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR);
  _V10_Dpair_D1210.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1210.rest = VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR);
  _V10_Dpair_D1209.first = VEncodePointer(&_V10_Dpair_D1208, VPOINTER_PAIR);
  _V10_Dpair_D1209.rest = VNULL;
  _V10_Dpair_D1208.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1208.rest = VEncodePointer(&_V10_Dpair_D1207, VPOINTER_PAIR);
  _V10_Dpair_D1207.first = VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR);
  _V10_Dpair_D1207.rest = VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR);
  _V10_Dpair_D1206.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1206.rest = VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR);
  _V10_Dpair_D1205.first = _V0expr_D17;
  _V10_Dpair_D1205.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1204.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1204.rest = VEncodePointer(&_V10_Dpair_D1203, VPOINTER_PAIR);
  _V10_Dpair_D1203.first = VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR);
  _V10_Dpair_D1203.rest = VNULL;
  _V10_Dpair_D1202.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1202.rest = VEncodePointer(&_V10_Dpair_D1201, VPOINTER_PAIR);
  _V10_Dpair_D1201.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1201.rest = VEncodePointer(&_V10_Dpair_D1198, VPOINTER_PAIR);
  _V10_Dpair_D1200.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1200.rest = VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR);
  _V10_Dpair_D1199.first = VEncodePointer(&_V10_Dpair_D1198, VPOINTER_PAIR);
  _V10_Dpair_D1199.rest = VNULL;
  _V10_Dpair_D1198.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1198.rest = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1196.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1196.rest = VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR);
  _V10_Dpair_D1195.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1195.rest = VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR);
  _V10_Dpair_D1194.first = VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR);
  _V10_Dpair_D1194.rest = VNULL;
  _V10_Dpair_D1193.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1193.rest = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1192.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1192.rest = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1191.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1191.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1190.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1190.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1189.first = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1189.rest = VNULL;
  _V10_Dpair_D1188.first = VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR);
  _V10_Dpair_D1188.rest = VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR);
  _V10_Dpair_D1187.first = VEncodePointer(&_V10_Dpair_D1183, VPOINTER_PAIR);
  _V10_Dpair_D1187.rest = VEncodePointer(&_V10_Dpair_D1186, VPOINTER_PAIR);
  _V10_Dpair_D1186.first = VEncodePointer(&_V10_Dpair_D1184, VPOINTER_PAIR);
  _V10_Dpair_D1186.rest = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1185.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1185.rest = VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR);
  _V10_Dpair_D1184.first = _V0expr_D14;
  _V10_Dpair_D1184.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1183.first = _V0up;
  _V10_Dpair_D1183.rest = VEncodePointer(&_V10_Dpair_D1182, VPOINTER_PAIR);
  _V10_Dpair_D1182.first = _V0expr_D15;
  _V10_Dpair_D1182.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1181.first = _V0right;
  _V10_Dpair_D1181.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1180.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1180.rest = VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR);
  _V10_Dpair_D1179.first = VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR);
  _V10_Dpair_D1179.rest = VNULL;
  _V10_Dpair_D1178.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1178.rest = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1177.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1177.rest = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1176.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1176.rest = VEncodePointer(&_V10_Dpair_D1175, VPOINTER_PAIR);
  _V10_Dpair_D1175.first = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1175.rest = VNULL;
  _V10_Dpair_D1174.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1174.rest = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1172.first = VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR);
  _V10_Dpair_D1172.rest = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1171.first = VEncodeBool(false);
  _V10_Dpair_D1171.rest = VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR);
  _V10_Dpair_D1170.first = VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR);
  _V10_Dpair_D1170.rest = VNULL;
  _V10_Dpair_D1169.first = _V0x_D55;
  _V10_Dpair_D1169.rest = VNULL;
  _V10_Dpair_D1168.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1168.rest = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1167.first = VEncodePointer(&_V10_Dpair_D1166, VPOINTER_PAIR);
  _V10_Dpair_D1167.rest = VNULL;
  _V10_Dpair_D1166.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1166.rest = VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR);
  _V10_Dpair_D1165.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1165.rest = VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR);
  _V40VFunction3 = VEncodePointer(VLookupConstant("_V40VFunction3", &_VW_V40VFunction3), VPOINTER_CLOSURE);
  _V10_Dpair_D1164.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1164.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1163.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1163.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1162.first = VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR);
  _V10_Dpair_D1162.rest = VNULL;
  _V10_Dpair_D1161.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1161.rest = VEncodePointer(&_V10_Dpair_D1160, VPOINTER_PAIR);
  _V10_Dpair_D1160.first = VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR);
  _V10_Dpair_D1160.rest = VEncodePointer(&_V10_Dpair_D1159, VPOINTER_PAIR);
  _V10_Dpair_D1159.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1159.rest = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1158.first = _V0expr_D12;
  _V10_Dpair_D1158.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1157.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1157.rest = VEncodePointer(&_V10_Dpair_D1156, VPOINTER_PAIR);
  _V10_Dpair_D1156.first = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1156.rest = VNULL;
  _V10_Dpair_D1155.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1155.rest = VEncodePointer(&_V10_Dpair_D1154, VPOINTER_PAIR);
  _V10_Dpair_D1154.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1154.rest = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1153.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1153.rest = VEncodePointer(&_V10_Dpair_D1152, VPOINTER_PAIR);
  _V10_Dpair_D1152.first = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1152.rest = VNULL;
  _V10_Dpair_D1151.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1151.rest = VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR);
  _V10_Dpair_D1150.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1150.rest = VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR);
  _V10_Dpair_D1149.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1149.rest = VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR);
  _V10_Dpair_D1148.first = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1148.rest = VNULL;
  _V10_Dpair_D1147.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1147.rest = VEncodePointer(&_V10_Dpair_D1146, VPOINTER_PAIR);
  _V10_Dpair_D1146.first = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1146.rest = VEncodePointer(&_V10_Dpair_D1145, VPOINTER_PAIR);
  _V10_Dpair_D1145.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1145.rest = VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR);
  _V10_Dpair_D1144.first = _V0expr_D10;
  _V10_Dpair_D1144.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1143.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1143.rest = VEncodePointer(&_V10_Dpair_D1142, VPOINTER_PAIR);
  _V10_Dpair_D1142.first = VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR);
  _V10_Dpair_D1142.rest = VNULL;
  _V10_Dpair_D1141.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1141.rest = VEncodePointer(&_V10_Dpair_D1140, VPOINTER_PAIR);
  _V10_Dpair_D1140.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1140.rest = VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR);
  _V10_Dpair_D1139.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1139.rest = VEncodePointer(&_V10_Dpair_D1138, VPOINTER_PAIR);
  _V10_Dpair_D1138.first = VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR);
  _V10_Dpair_D1138.rest = VNULL;
  _V10_Dpair_D1137.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1137.rest = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1136.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1136.rest = VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR);
  _V10_Dpair_D1135.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1135.rest = VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR);
  _V10_Dpair_D1134.first = VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR);
  _V10_Dpair_D1134.rest = VNULL;
  _V10_Dpair_D1133.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1133.rest = VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR);
  _V10_Dpair_D1132.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1132.rest = VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR);
  _V10_Dpair_D1131.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1131.rest = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D1130.first = VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR);
  _V10_Dpair_D1130.rest = VNULL;
  _V10_Dpair_D1129.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1129.rest = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1128.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1128.rest = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1127.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1127.rest = VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR);
  _V10_Dpair_D1126.first = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1126.rest = VNULL;
  _V10_Dpair_D1125.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1125.rest = VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR);
  _V10_Dpair_D1124.first = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1124.rest = VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR);
  _V10_Dpair_D1123.first = VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR);
  _V10_Dpair_D1123.rest = VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR);
  _V10_Dpair_D1122.first = VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR);
  _V10_Dpair_D1122.rest = VNULL;
  _V10_Dpair_D1121.first = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1121.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1120.first = VEncodeBool(false);
  _V10_Dpair_D1120.rest = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1119.first = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1119.rest = VNULL;
  _V10_Dpair_D1118.first = _V0_Mk;
  _V10_Dpair_D1118.rest = VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR);
  _V10_Dpair_D1117.first = _V0kk_D6;
  _V10_Dpair_D1117.rest = VNULL;
  _V10_Dpair_D1116.first = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1116.rest = VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR);
  _V10_Dpair_D1115.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1115.rest = VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR);
  _V10_Dpair_D1114.first = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1114.rest = VNULL;
  _V10_Dpair_D1113.first = _V0_Mk;
  _V10_Dpair_D1113.rest = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1112.first = _V0expr;
  _V10_Dpair_D1112.rest = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1111.first = _V0vanity;
  _V10_Dpair_D1111.rest = VEncodePointer(&_V10_Dpair_D1110, VPOINTER_PAIR);
  _V10_Dpair_D1110.first = _V0bytecode;
  _V10_Dpair_D1110.rest = VEncodePointer(&_V10_Dpair_D1109, VPOINTER_PAIR);
  _V10_Dpair_D1109.first = _V0preprocess__vasm;
  _V10_Dpair_D1109.rest = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1108.first = _V10_Dpreprocess__expr_D124;
  _V10_Dpair_D1108.rest = VNULL;
  _V10_Dpair_D1106.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1106.rest = VEncodePointer(&_V10_Dpair_D1105, VPOINTER_PAIR);
  _V10_Dpair_D1105.first = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1105.rest = VNULL;
  _V10_Dpair_D1104.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1104.rest = VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR);
  _V10_Dpair_D1103.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1103.rest = VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR);
  _V10_Dpair_D1101.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1101.rest = VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR);
  _V10_Dpair_D1100.first = VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR);
  _V10_Dpair_D1100.rest = VNULL;
  _V10_Dpair_D1099.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1099.rest = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1098.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1098.rest = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1097.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1097.rest = VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR);
  _V10_Dpair_D1096.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1096.rest = VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR);
  _V10_Dpair_D1095.first = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1095.rest = VNULL;
  _V10_Dpair_D1094.first = VEncodePointer(&_V10_Dpair_D1087, VPOINTER_PAIR);
  _V10_Dpair_D1094.rest = VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR);
  _V10_Dpair_D1093.first = VEncodePointer(&_V10_Dpair_D1089, VPOINTER_PAIR);
  _V10_Dpair_D1093.rest = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1092.first = VEncodePointer(&_V10_Dpair_D1090, VPOINTER_PAIR);
  _V10_Dpair_D1092.rest = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1091.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1091.rest = VEncodePointer(&_V10_Dpair_D1084, VPOINTER_PAIR);
  _V10_Dpair_D1090.first = _V0expr_D4;
  _V10_Dpair_D1090.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1089.first = _V0label;
  _V10_Dpair_D1089.rest = VEncodePointer(&_V10_Dpair_D1088, VPOINTER_PAIR);
  _V10_Dpair_D1088.first = _V0expr_D5;
  _V10_Dpair_D1088.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1087.first = _V0expr;
  _V10_Dpair_D1087.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1086.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1086.rest = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1085.first = VEncodePointer(&_V10_Dpair_D1084, VPOINTER_PAIR);
  _V10_Dpair_D1085.rest = VNULL;
  _V10_Dpair_D1084.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1084.rest = VEncodePointer(&_V10_Dpair_D1083, VPOINTER_PAIR);
  _V10_Dpair_D1083.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1083.rest = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1082.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1082.rest = VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR);
  _V10_Dpair_D1081.first = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1081.rest = VNULL;
  _V10_Dpair_D1080.first = VEncodePointer(&_V10_Dpair_D1078, VPOINTER_PAIR);
  _V10_Dpair_D1080.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1079.first = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1079.rest = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1078.first = _V0input_D2;
  _V10_Dpair_D1078.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1077.first = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1077.rest = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1076.first = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1076.rest = VNULL;
  _V10_Dpair_D1075.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1075.rest = VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR);
  _V10_Dpair_D1074.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D1074.rest = VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR);
  _V10_Dpair_D1073.first = VEncodeBool(false);
  _V10_Dpair_D1073.rest = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1072.first = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1072.rest = VNULL;
  _V10_Dpair_D1071.first = _V0_Mk;
  _V10_Dpair_D1071.rest = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1070.first = _V0kk_D1;
  _V10_Dpair_D1070.rest = VNULL;
  _V10_Dpair_D1069.first = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1069.rest = VEncodePointer(&_V10_Dpair_D1068, VPOINTER_PAIR);
  _V10_Dpair_D1068.first = VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR);
  _V10_Dpair_D1068.rest = VNULL;
  _V10_Dpair_D1067.first = VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR);
  _V10_Dpair_D1067.rest = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1066.first = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1066.rest = VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR);
  _V10_Dpair_D1065.first = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D1065.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1064.first = _V0len;
  _V10_Dpair_D1064.rest = VNULL;
  _V10_Dpair_D1063.first = _V0peel__loop;
  _V10_Dpair_D1063.rest = VNULL;
  _V10_Dpair_D1062.first = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = _V0vanity;
  _V10_Dpair_D1061.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1060.first = _V0bytecode;
  _V10_Dpair_D1060.rest = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1059.first = _V0preprocess__vasm;
  _V10_Dpair_D1059.rest = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1058.first = _V10_Dpeel__labels_D123;
  _V10_Dpair_D1058.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1057.first = _V10_Dpeel__loop_D127;
  _V10_Dpair_D1057.rest = VNULL;
  _V10_Dpair_D1056.first = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1056.rest = VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR);
  _V10_Dpair_D1055.first = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1055.rest = VNULL;
  _V10_Dpair_D1054.first = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1054.rest = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D1053.first = _V0labels;
  _V10_Dpair_D1053.rest = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1052.first = _V0peel__labels;
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = _V0preprocess__expr;
  _V10_Dpair_D1051.rest = VNULL;
  _V10_Dpair_D1050.first = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1050.rest = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1049.first = _V0vanity;
  _V10_Dpair_D1049.rest = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1048.first = _V0bytecode;
  _V10_Dpair_D1048.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1047.first = _V0preprocess__vasm;
  _V10_Dpair_D1047.rest = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1046.first = _V10_Dpeel__labels_D123;
  _V10_Dpair_D1046.rest = VNULL;
  _V10_Dpair_D1045.first = VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR);
  _V10_Dpair_D1045.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1044.first = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = _V0vanity;
  _V10_Dpair_D1043.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1042.first = _V0bytecode;
  _V10_Dpair_D1042.rest = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D1041.first = VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR);
  _V10_Dpair_D1041.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1040.first = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1040.rest = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D1039.first = _V0vanity;
  _V10_Dpair_D1039.rest = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1038.first = _V0bytecode;
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR);
  _V10_Dpair_D1037.first = _V0find__declare;
  _V10_Dpair_D1037.rest = VNULL;
  _V10_Dpair_D1036.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR);
  _V10_Dpair_D1034.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1033.rest = VNULL;
  _V10_Dpair_D1032.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1031.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1030.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1029.rest = VNULL;
  _V10_Dpair_D1028.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1028.rest = VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR);
  _V10_Dpair_D1027.first = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1027.rest = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1026.first = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1026.rest = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1024.first = _V0expr_D65;
  _V10_Dpair_D1024.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1023.first = _V0name;
  _V10_Dpair_D1023.rest = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1022.first = _V0expr_D66;
  _V10_Dpair_D1022.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1021.first = _V0x;
  _V10_Dpair_D1021.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1020.first = _V0_Mx;
  _V10_Dpair_D1020.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1019.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1019.rest = VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR);
  _V10_Dpair_D1018.first = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1018.rest = VNULL;
  _V10_Dpair_D1017.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D1017.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1016.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = VEncodeBool(false);
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1014.rest = VNULL;
  _V10_Dpair_D1013.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1012.rest = VNULL;
  _V10_Dpair_D1011.first = VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR);
  _V10_Dpair_D1011.rest = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1010.first = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1010.rest = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1009.first = _V0input_D63;
  _V10_Dpair_D1009.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1008.first = _V0_Mp;
  _V10_Dpair_D1008.rest = VNULL;
  _V10_Dpair_D1007.first = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1007.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1006.first = VEncodeBool(false);
  _V10_Dpair_D1006.rest = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1005.first = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1005.rest = VNULL;
  _V10_Dpair_D1004.first = _V0_Mk;
  _V10_Dpair_D1004.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1003.first = _V0kk_D62;
  _V10_Dpair_D1003.rest = VNULL;
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VNULL;
  _V10_Dpair_D1000.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D1000.rest = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D998.rest = VNULL;
  _V10_Dpair_D997.first = VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR);
  _V10_Dpair_D997.rest = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D996.first = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D996.rest = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D995.first = _V0set__declare__loop;
  _V10_Dpair_D995.rest = VNULL;
  _V10_Dpair_D994.first = VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR);
  _V10_Dpair_D994.rest = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D993.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D993.rest = VNULL;
  _V10_Dpair_D992.first = _V0_Mk;
  _V10_Dpair_D992.rest = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D991.first = _V0pc;
  _V10_Dpair_D991.rest = VNULL;
  _V10_Dpair_D990.first = _V0vanity;
  _V10_Dpair_D990.rest = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D989.first = _V0bytecode;
  _V10_Dpair_D989.rest = VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR);
  _V10_Dpair_D988.first = _V0set__declares_B;
  _V10_Dpair_D988.rest = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D987.first = _V10_Dset__declare__loop_D109;
  _V10_Dpair_D987.rest = VNULL;
  _V10_Dpair_D986.first = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D986.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D985.first = VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR);
  _V10_Dpair_D985.rest = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D984.first = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D984.rest = VNULL;
  _V10_Dpair_D983.first = _V0_Mk;
  _V10_Dpair_D983.rest = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D982.first = _V0tape;
  _V10_Dpair_D982.rest = VNULL;
  _V10_Dpair_D981.first = _V0vanity;
  _V10_Dpair_D981.rest = VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR);
  _V10_Dpair_D980.first = _V0bytecode;
  _V10_Dpair_D980.rest = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D979.first = _V0set__declares_B;
  _V10_Dpair_D979.rest = VNULL;
  _V10_Dpair_D978.first = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D978.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D977.first = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D977.rest = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D976.first = VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR);
  _V10_Dpair_D976.rest = VNULL;
  _V10_Dpair_D975.first = _V0_Mk;
  _V10_Dpair_D975.rest = VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR);
  _V10_Dpair_D974.first = _V0tape;
  _V10_Dpair_D974.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D973.first = _V0program__counter;
  _V10_Dpair_D973.rest = VNULL;
  _V10_Dpair_D972.first = _V0vanity;
  _V10_Dpair_D972.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D971.first = _V0bytecode;
  _V10_Dpair_D971.rest = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D970.first = _V0find__toplevel;
  _V10_Dpair_D970.rest = VNULL;
  _V10_Dpair_D969.first = VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR);
  _V10_Dpair_D969.rest = VEncodePointer(&_V10_Dpair_D968, VPOINTER_PAIR);
  _V10_Dpair_D968.first = VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR);
  _V10_Dpair_D968.rest = VNULL;
  _V10_Dpair_D967.first = _V0unquote;
  _V10_Dpair_D967.rest = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D966.first = _V0unmangled__env;
  _V10_Dpair_D966.rest = VNULL;
  _V10_Dpair_D965.first = VEncodeBool(false);
  _V10_Dpair_D965.rest = VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR);
  _V10_Dpair_D964.first = _V0_U;
  _V10_Dpair_D964.rest = VNULL;
  _V10_Dpair_D963.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D963.rest = VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR);
  _V10_Dpair_D962.first = VEncodePointer(&_V10_Dpair_D961, VPOINTER_PAIR);
  _V10_Dpair_D962.rest = VNULL;
  _V10_Dpair_D961.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D961.rest = VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR);
  _V10_Dpair_D960.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D960.rest = VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR);
  _V10_Dpair_D959.first = VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR);
  _V10_Dpair_D959.rest = VNULL;
  _V10_Dpair_D958.first = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D958.rest = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D957.first = _V0_Mk;
  _V10_Dpair_D957.rest = VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR);
  _V10_Dpair_D956.first = _V0rets;
  _V10_Dpair_D956.rest = VNULL;
  _V10_Dpair_D955.first = VEncodePointer(&_V10_Dpair_D948, VPOINTER_PAIR);
  _V10_Dpair_D955.rest = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D954.first = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D954.rest = VNULL;
  _V10_Dpair_D953.first = VEncodePointer(&_V10_Dpair_D951, VPOINTER_PAIR);
  _V10_Dpair_D953.rest = VEncodePointer(&_V10_Dpair_D952, VPOINTER_PAIR);
  _V10_Dpair_D952.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D952.rest = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D951.first = _V0tape;
  _V10_Dpair_D951.rest = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D950.first = _V0program__counter;
  _V10_Dpair_D950.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D949.first = _V0eval__loop;
  _V10_Dpair_D949.rest = VNULL;
  _V10_Dpair_D948.first = VEncodePointer(&_V10_Dpair_D945, VPOINTER_PAIR);
  _V10_Dpair_D948.rest = VEncodePointer(&_V10_Dpair_D947, VPOINTER_PAIR);
  _V10_Dpair_D947.first = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D947.rest = VNULL;
  _V10_Dpair_D946.first = _V0_Mk;
  _V10_Dpair_D946.rest = _V0rets;
  _V10_Dpair_D945.first = _V0vanity;
  _V10_Dpair_D945.rest = VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR);
  _V10_Dpair_D944.first = _V0bytecode;
  _V10_Dpair_D944.rest = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D943.first = _V0eval__vasm;
  _V10_Dpair_D943.rest = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D942.first = _V10_Deval__loop_D104;
  _V10_Dpair_D942.rest = VNULL;
  _V10_Dpair_D941.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D941.rest = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D940.first = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D940.rest = VNULL;
  _V10_Dpair_D939.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D939.rest = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D938.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D938.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D937.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D937.rest = VNULL;
  _V10_Dpair_D936.first = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D936.rest = VEncodePointer(&_V10_Dpair_D935, VPOINTER_PAIR);
  _V10_Dpair_D935.first = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D935.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D934.first = _V0eval__vasm;
  _V10_Dpair_D934.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D933.first = _V0find__toplevel;
  _V10_Dpair_D933.rest = VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR);
  _V10_Dpair_D932.first = _V0set__declares_B;
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR);
  _V10_Dpair_D931.first = _V0eval__vasm__toplevel;
  _V10_Dpair_D931.rest = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D930.first = _V0make__vasm__lambda;
  _V10_Dpair_D930.rest = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D929.first = _V0find__declare;
  _V10_Dpair_D929.rest = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D928.first = _V0preprocess__vasm;
  _V10_Dpair_D928.rest = VNULL;
  _V10_Dpair_D927.first = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D927.rest = VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR);
  _V10_Dpair_D926.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D926.rest = VNULL;
  _V10_Dpair_D925.first = _V0_Mk;
  _V10_Dpair_D925.rest = VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR);
  _V10_Dpair_D924.first = _V0vasm;
  _V10_Dpair_D924.rest = VNULL;
  _V10_Dpair_D923.first = _V0vanity;
  _V10_Dpair_D923.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D922.first = _V0bytecode;
  _V10_Dpair_D922.rest = VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR);
  _V10_Dpair_D921.first = _V0eval__vasm;
  _V10_Dpair_D921.rest = VNULL;
  _V10_Dpair_D920.first = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D920.rest = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D919.first = VEncodeBool(false);
  _V10_Dpair_D919.rest = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D918.first = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D918.rest = VNULL;
  _V10_Dpair_D917.first = _V0_Mk;
  _V10_Dpair_D917.rest = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D916.first = _V0values;
  _V10_Dpair_D916.rest = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D915.first = _V0equal_Q;
  _V10_Dpair_D915.rest = VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR);
  _V10_Dpair_D914.first = _V0error;
  _V10_Dpair_D914.rest = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D913.first = _V0lookup__intrinsic;
  _V10_Dpair_D913.rest = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D912.first = _V0sprintf;
  _V10_Dpair_D912.rest = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D911.first = _V0reverse;
  _V10_Dpair_D911.rest = VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR);
  _V10_Dpair_D910.first = _V0assv;
  _V10_Dpair_D910.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D905.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D905.rest = VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR);
  _V10_Dpair_D904.first = VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR);
  _V10_Dpair_D904.rest = VNULL;
  _V10_Dpair_D903.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D903.rest = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D902.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D901.first = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D901.rest = VNULL;
  _V10_Dpair_D900.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D900.rest = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D899.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D899.rest = VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR);
  _V10_Dpair_D898.first = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D898.rest = VNULL;
  _V10_Dpair_D897.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D897.rest = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D896.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D896.rest = VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR);
  _V10_Dpair_D895.first = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D895.rest = VNULL;
  _V10_Dpair_D894.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D894.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D893.first = VEncodeBool(false);
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D892.rest = VNULL;
  _V10_Dpair_D891.first = _V0_Mx;
  _V10_Dpair_D891.rest = VNULL;
  _V10_Dpair_D890.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D890.rest = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D889.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D889.rest = VNULL;
  _V10_Dpair_D888.first = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D888.rest = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D887.first = VNULL;
  _V10_Dpair_D887.rest = VNULL;
  _V10_Dpair_D886.first = VEncodeBool(false);
  _V10_Dpair_D886.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D885.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D885.rest = VNULL;
  _V10_Dpair_D884.first = _V0_Mk;
  _V10_Dpair_D884.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k4, VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k3, VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k2, VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k1, VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k7, VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k6, VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0lambda4, VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104_V0k8, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D104, VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k9, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k5, VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm, VEncodePointer(&_V10_Dpair_D938, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k11, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k10, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k14, VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k15, VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda6, VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k13, VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k12, VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda7, VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0k16, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109_V0lambda5, VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D109, VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V0k17, VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B, VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k20, VEncodePointer(&_V10_Dpair_D1096, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k21, VEncodePointer(&_V10_Dpair_D1101, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k24, VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k27, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k26, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k25, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k23, VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k22, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda9, VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k19, VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k18, VEncodePointer(&_V10_Dpair_D1082, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda10, VEncodePointer(&_V10_Dpair_D1082, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0k28, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127_V0lambda8, VEncodePointer(&_V10_Dpair_D1077, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123_V10_Dpeel__loop_D127, VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D123, VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k31, VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda12, VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k30, VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k29, VEncodePointer(&_V10_Dpair_D1127, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k35, VEncodePointer(&_V10_Dpair_D1149, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda13, VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k34, VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k33, VEncodePointer(&_V10_Dpair_D1139, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k39, VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k40, VEncodePointer(&_V10_Dpair_D1168, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k41, VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda14, VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k38, VEncodePointer(&_V10_Dpair_D1157, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k37, VEncodePointer(&_V10_Dpair_D1153, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k45, VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k46, VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k47, VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda15, VEncodePointer(&_V10_Dpair_D1191, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k44, VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k43, VEncodePointer(&_V10_Dpair_D1176, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k51, VEncodePointer(&_V10_Dpair_D1210, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda16, VEncodePointer(&_V10_Dpair_D1211, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k50, VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k49, VEncodePointer(&_V10_Dpair_D1200, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k55, VEncodePointer(&_V10_Dpair_D1225, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k56, VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k57, VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda17, VEncodePointer(&_V10_Dpair_D1226, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k54, VEncodePointer(&_V10_Dpair_D1219, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k53, VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k61, VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k62, VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k63, VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda18, VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k60, VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k59, VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k67, VEncodePointer(&_V10_Dpair_D1265, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k68, VEncodePointer(&_V10_Dpair_D1270, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k69, VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda19, VEncodePointer(&_V10_Dpair_D1266, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k66, VEncodePointer(&_V10_Dpair_D1259, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k65, VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k73, VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k74, VEncodePointer(&_V10_Dpair_D1294, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k76, VEncodePointer(&_V10_Dpair_D1299, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k78, VEncodePointer(&_V10_Dpair_D1304, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k79, VEncodePointer(&_V10_Dpair_D1308, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k77, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k75, VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda20, VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k72, VEncodePointer(&_V10_Dpair_D1279, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k71, VEncodePointer(&_V10_Dpair_D1275, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k83, VEncodePointer(&_V10_Dpair_D1326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k84, VEncodePointer(&_V10_Dpair_D1331, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k86, VEncodePointer(&_V10_Dpair_D1336, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k88, VEncodePointer(&_V10_Dpair_D1341, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k89, VEncodePointer(&_V10_Dpair_D1345, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k87, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k85, VEncodePointer(&_V10_Dpair_D1332, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda21, VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k82, VEncodePointer(&_V10_Dpair_D1317, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k81, VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k93, VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda22, VEncodePointer(&_V10_Dpair_D1365, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k92, VEncodePointer(&_V10_Dpair_D1354, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k91, VEncodePointer(&_V10_Dpair_D1350, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k97, VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k99, VEncodePointer(&_V10_Dpair_D1389, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k100, VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k98, VEncodePointer(&_V10_Dpair_D1385, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k102, VEncodePointer(&_V10_Dpair_D1394, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k104, VEncodePointer(&_V10_Dpair_D1398, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k106, VEncodePointer(&_V10_Dpair_D1408, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k107, VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k105, VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k103, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k101, VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda23, VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k96, VEncodePointer(&_V10_Dpair_D1372, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k95, VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k111, VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k114, VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k116, VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k117, VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k115, VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k113, VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k112, VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda24, VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k110, VEncodePointer(&_V10_Dpair_D1417, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k109, VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k121, VEncodePointer(&_V10_Dpair_D1465, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k122, VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k124, VEncodePointer(&_V10_Dpair_D1482, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k125, VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k123, VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda25, VEncodePointer(&_V10_Dpair_D1466, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k120, VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k119, VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k130, VEncodePointer(&_V10_Dpair_D1534, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k129, VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k133, VEncodePointer(&_V10_Dpair_D1545, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k132, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda29, VEncodePointer(&_V10_Dpair_D1539, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0lambda28, VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213_V0k131, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V10_Dloop_D213, VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda27, VEncodePointer(&_V10_Dpair_D1512, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda26, VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k134, VEncodePointer(&_V10_Dpair_D1555, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda31, VEncodePointer(&_V10_Dpair_D1556, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda30, VEncodePointer(&_V10_Dpair_D1551, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k128, VEncodePointer(&_V10_Dpair_D1491, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k127, VEncodePointer(&_V10_Dpair_D1487, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k138, VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda32, VEncodePointer(&_V10_Dpair_D1568, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k137, VEncodePointer(&_V10_Dpair_D1563, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k136, VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k142, VEncodePointer(&_V10_Dpair_D1581, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k143, VEncodePointer(&_V10_Dpair_D1587, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k144, VEncodePointer(&_V10_Dpair_D1591, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda33, VEncodePointer(&_V10_Dpair_D1582, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k141, VEncodePointer(&_V10_Dpair_D1575, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k140, VEncodePointer(&_V10_Dpair_D1571, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k148, VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k149, VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k150, VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda34, VEncodePointer(&_V10_Dpair_D1607, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k147, VEncodePointer(&_V10_Dpair_D1600, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k146, VEncodePointer(&_V10_Dpair_D1596, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k154, VEncodePointer(&_V10_Dpair_D1624, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda35, VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k153, VEncodePointer(&_V10_Dpair_D1620, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k152, VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda36, VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k155, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k151, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k145, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k139, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k135, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k126, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k118, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k108, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k94, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k90, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k80, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k70, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k64, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k58, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k52, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k48, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k42, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k36, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0k32, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124_V0lambda11, VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D124, VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k157, VEncodePointer(&_V10_Dpair_D1652, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k158, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232_V0k156, VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D232, VEncodePointer(&_V10_Dpair_D1639, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k159, VEncodePointer(&_V10_Dpair_D1653, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm, VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k163, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k162, VEncodePointer(&_V10_Dpair_D1657, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k161, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0k160, VEncodePointer(&_V10_Dpair_D1654, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0bytecode_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR));
}
