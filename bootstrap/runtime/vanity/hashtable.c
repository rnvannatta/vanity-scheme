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

V_DECLARE_FUNC(VEqHash, _var0);
V_DECLARE_FUNC(VHashCombine, _var0, _var1);
V_DECLARE_FUNC_BASIC(VHashBlob, _var0);
V_DECLARE_FUNC(VMakeHashTableImpl, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
V_DECLARE_FUNC(VMakeWaybill, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
V_DECLARE_FUNC_BASIC(VClearinghousePoll, _var0);
V_DECLARE_FUNC_BASIC(VWaybillAddress, _var0);
V_DECLARE_FUNC_BASIC(VHashTableSlotSet, _var0, _var1, _var2);
V_DECLARE_FUNC(VWaybillUnpack, _var0, _var1);
V_DECLARE_FUNC_BASIC(VHashTableSlot, _var0, _var1);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0hashtable;

VWEAK VWORD _V40VEqHash;
VWEAK VClosure _VW_V40VEqHash = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqHash, NULL };
VWEAK VWORD _V40VHashCombine;
VWEAK VClosure _VW_V40VHashCombine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashCombine, NULL };
VWEAK VWORD _V40VHashBlob;
VWEAK VClosure _VW_V40VHashBlob = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashBlob, NULL };
VWEAK VWORD _V40VMakeHashTableImpl;
VWEAK VClosure _VW_V40VMakeHashTableImpl = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeHashTableImpl, NULL };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1619 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "only eq hash tables supported" };
static VPair _V10_Dpair_D1618 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1617 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1616 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1615 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1614 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1613 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1612 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1611 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1610 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1609 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
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
static VPair _V10_Dpair_D1597 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1596 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1595 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1593 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1592 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0equal;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0equal = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "equal" };
static VPair _V10_Dpair_D1588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1587 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1586 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1580 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40VMakeWaybill;
VWEAK VClosure _VW_V40VMakeWaybill = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeWaybill, NULL };
static VPair _V10_Dpair_D1579 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0h;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0h = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "h" };
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
static VPair _V10_Dpair_D1563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0a;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0a = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "a" };
static VPair _V10_Dpair_D1515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0d;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0d = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "d" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
VWEAK VWORD _V0b;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0b = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "b" };
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
static VPair _V10_Dpair_D1490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D2_D271;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10_Dfinalize_D2_D271 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##.finalize.2.271" };
static VPair _V10_Dpair_D1485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D15_D281;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10_Dfinalize_D15_D281 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##.finalize.15.281" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "robinhood critereon failed: key slotting later appears before" };
static VPair _V10_Dpair_D1477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0p_D25;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0p_D25 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "p.25" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "robinhood critereon failed: a gap" };
static VPair _V10_Dpair_D1466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0p_D24;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0p_D24 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "p.24" };
static VPair _V10_Dpair_D1459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0p_D23;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0p_D23 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "p.23" };
static VPair _V10_Dpair_D1452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0jpoverty;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0jpoverty = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "jpoverty" };
static VPair _V10_Dpair_D1445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0jslot;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0jslot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "jslot" };
static VPair _V10_Dpair_D1438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0jhash;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0jhash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "jhash" };
static VPair _V10_Dpair_D1431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1429 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0y;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0y = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "y" };
static VPair _V10_Dpair_D1426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0jdx;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0jdx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "jdx" };
static VPair _V10_Dpair_D1418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D14;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0loop_D14 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "loop.14" };
static VPair _V10_Dpair_D1413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0j;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0j = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "j" };
static VPair _V10_Dpair_D1409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D14_D282;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_Dloop_D14_D282 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.loop.14.282" };
static VPair _V10_Dpair_D1404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D15;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0finalize_D15 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "finalize.15" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1398 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "probe length is too long to validate" };
static VPair _V10_Dpair_D1397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1395 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0p_D12;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0p_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "p.12" };
static VPair _V10_Dpair_D1390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ipoverty;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0ipoverty = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "ipoverty" };
static VPair _V10_Dpair_D1383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0islot;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0islot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "islot" };
static VPair _V10_Dpair_D1376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ihash;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0ihash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "ihash" };
static VPair _V10_Dpair_D1369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D1363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D1;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0loop_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "loop.1" };
static VPair _V10_Dpair_D1358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i_D11;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0i_D11 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "i.11" };
static VPair _V10_Dpair_D1354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D1_D272;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10_Dloop_D1_D272 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##.loop.1.272" };
static VPair _V10_Dpair_D1350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D2;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0finalize_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "finalize.2" };
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
VWEAK VWORD _V0what__we__did;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0what__we__did = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "what-we-did" };
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
static VPair _V10_Dpair_D1319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D260;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D260 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.260" };
static VPair _V10_Dpair_D1304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D248;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D248 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.248" };
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
VWEAK VWORD _V10_Dloop_D237;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D237 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.237" };
static VPair _V10_Dpair_D1235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0oldidx;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0oldidx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "oldidx" };
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
static VPair _V10_Dpair_D1219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D229;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D229 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.229" };
static VPair _V10_Dpair_D1199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1183 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "swept in rummage" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1182 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "reinserted in rummage" };
static VPair _V10_Dpair_D1181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0new__waybill;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0new__waybill = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "new-waybill" };
static VPair _V10_Dpair_D1175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40VClearinghousePoll;
VWEAK VClosure _VW_V40VClearinghousePoll = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClearinghousePoll, NULL };
static VPair _V10_Dpair_D1165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0starting__occupancy;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0starting__occupancy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "starting-occupancy" };
static VPair _V10_Dpair_D1157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D1153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D214;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D214 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.214" };
static VPair _V10_Dpair_D1149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0wb__datum;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0wb__datum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "wb-datum" };
VWEAK VWORD _V0wb__key;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0wb__key = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "wb-key" };
VWEAK VWORD _V0wb__broken_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0wb__broken_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "wb-broken\?" };
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
VWEAK VWORD _V0broken_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0broken_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "broken\?" };
static VPair _V10_Dpair_D1124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1121 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1120 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1119 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1118 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1117 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1116 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1115 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0fallback__ref;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0fallback__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "fallback-ref" };
static VPair _V10_Dpair_D1109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfallback__ref_D197;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10_Dfallback__ref_D197 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##.fallback-ref.197" };
static VPair _V10_Dpair_D1104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1099 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1098 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1097 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1096 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "key not found in hash table" };
static VPair _V10_Dpair_D1095 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1094 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1093 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1092 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1091 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1090 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1089 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1088 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1087 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0thunk;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0thunk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "thunk" };
static VPair _V10_Dpair_D1086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1085 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1084 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1083 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1082 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1081 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1080 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1079 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D27_D181;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10_Dfinalize_D27_D181 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##.finalize.27.181" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1077 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "grew table" };
static VPair _V10_Dpair_D1076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D26;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0loop_D26 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "loop.26" };
static VPair _V10_Dpair_D1066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i_D36;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0i_D36 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "i.36" };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D26_D182;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_Dloop_D26_D182 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.loop.26.182" };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1054 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mr;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%r" };
static VPair _V10_Dpair_D1052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D27;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0finalize_D27 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "finalize.27" };
static VPair _V10_Dpair_D1049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0load__factor;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0load__factor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "load-factor" };
VWEAK VWORD _V0old__capacity;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0old__capacity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "old-capacity" };
VWEAK VWORD _V0old__vec;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0old__vec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "old-vec" };
static VPair _V10_Dpair_D1030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1021 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0vec__entry__poverty;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0vec__entry__poverty = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "vec-entry-poverty" };
static VPair _V10_Dpair_D1009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vec__entry;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0vec__entry = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "vec-entry" };
static VPair _V10_Dpair_D1004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0poverty;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0poverty = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "poverty" };
static VPair _V10_Dpair_D993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D166;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D166 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.166" };
static VPair _V10_Dpair_D989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D983 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D982 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0capacity;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0capacity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "capacity" };
VWEAK VWORD _V0occupancy;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0occupancy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "occupancy" };
VWEAK VWORD _V40VWaybillAddress;
VWEAK VClosure _VW_V40VWaybillAddress = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillAddress, NULL };
static VPair _V10_Dpair_D981 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D980 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D979 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D978 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D977 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D976 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D975 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D974 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D973 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D972 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "set a key" };
static VPair _V10_Dpair_D971 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D970 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D969 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D968 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0clearinghouse;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0clearinghouse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "clearinghouse" };
VWEAK VWORD _V0stability;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0stability = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "stability" };
VWEAK VWORD _V0weakness;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0weakness = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "weakness" };
VWEAK VWORD _V0weakness__stability;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0weakness__stability = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "weakness-stability" };
static VPair _V10_Dpair_D956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0entry;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0entry = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "entry" };
static VPair _V10_Dpair_D953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D947 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D945 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "deleted a rummaged key" };
static VPair _V10_Dpair_D944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D942 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D940 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D939 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rummaged__waybill;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0rummaged__waybill = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "rummaged-waybill" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D938 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "deleted a key" };
VWEAK VWORD _V40VHashTableSlotSet;
VWEAK VClosure _VW_V40VHashTableSlotSet = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSlotSet, NULL };
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
static VPair _V10_Dpair_D927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0idx;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0idx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "idx" };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0hash;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "hash" };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D910 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D909 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D908 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D907 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D906 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D905 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D904 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D903 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D902 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D901 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D900 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D899 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dfinalize_D39_D133;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10_Dfinalize_D39_D133 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##.finalize.39.133" };
static VPair _V10_Dpair_D898 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D897 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D896 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0broke_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0broke_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "broke\?" };
VWEAK VWORD _V40VWaybillUnpack;
VWEAK VClosure _VW_V40VWaybillUnpack = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillUnpack, NULL };
static VPair _V10_Dpair_D893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D891 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0waybill;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0waybill = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "waybill" };
static VPair _V10_Dpair_D882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop_D38;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0loop_D38 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "loop.38" };
static VPair _V10_Dpair_D877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i_D48;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0i_D48 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "i.48" };
static VPair _V10_Dpair_D873 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D38_D134;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_Dloop_D38_D134 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.loop.38.134" };
static VPair _V10_Dpair_D869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vec;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0vec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "vec" };
static VPair _V10_Dpair_D865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D863 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0finalize_D39;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0finalize_D39 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "finalize.39" };
VWEAK VWORD _V40VHashTableSlot;
VWEAK VClosure _VW_V40VHashTableSlot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSlot, NULL };
static VPair _V10_Dpair_D862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D855 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D845 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D844 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D843 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D842 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D841 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D840 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0acc;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0acc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "acc" };
static VPair _V10_Dpair_D834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0datum;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0datum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "datum" };
VWEAK VWORD _V0key;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0key = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "key" };
static VPair _V10_Dpair_D829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D826 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D823 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0seed;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0seed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "seed" };
VWEAK VWORD _V0f;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0f = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "f" };
static VPair _V10_Dpair_D817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D816 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
static VPair _V10_Dpair_D814 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D812 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D809 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D796 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D795 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D793 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D791 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0current__hash;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0current__hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "current-hash" };
VWEAK VWORD _V0hash__combine;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0hash__combine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "hash-combine" };
VWEAK VWORD _V0hash__blob;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0hash__blob = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "hash-blob" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0make__entry;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0make__entry = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "make-entry" };
VWEAK VWORD _V0hash__slot;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0hash__slot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "hash-slot" };
VWEAK VWORD _V0hash__poverty;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0hash__poverty = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "hash-poverty" };
VWEAK VWORD _V0waybill__key__matches_Q;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0waybill__key__matches_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "waybill-key-matches\?" };
VWEAK VWORD _V0sequence_L;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0sequence_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "sequence<" };
VWEAK VWORD _V0sequence_G;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0sequence_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "sequence>" };
VWEAK VWORD _V0hash__table__keyvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0hash__table__keyvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "hash-table-keyvector" };
VWEAK VWORD _V0validate__robinhood__impl;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0validate__robinhood__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "validate-robinhood-impl" };
VWEAK VWORD _V0validate__robinhood;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0validate__robinhood = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "validate-robinhood" };
VWEAK VWORD _V0hash__table__find__impl;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0hash__table__find__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "hash-table-find-impl" };
VWEAK VWORD _V0hash__table__reinsert_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0hash__table__reinsert_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "hash-table-reinsert!" };
VWEAK VWORD _V0robinhood__shuffle;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0robinhood__shuffle = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "robinhood-shuffle" };
VWEAK VWORD _V0hash__table__sweep;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0hash__table__sweep = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "hash-table-sweep" };
VWEAK VWORD _V0hash__table__rummage;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0hash__table__rummage = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "hash-table-rummage" };
VWEAK VWORD _V0hash__table__ref__impl;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0hash__table__ref__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "hash-table-ref-impl" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0hash__table__grow;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__grow = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-grow" };
VWEAK VWORD _V0hash__table__set__impl_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0hash__table__set__impl_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "hash-table-set-impl!" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__delete_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0hash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "hash-table-delete!" };
VWEAK VWORD _V0hash__table__size;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__size = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-size" };
VWEAK VWORD _V0hash__table__for__each;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0hash__table__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "hash-table-for-each" };
VWEAK VWORD _V0hash__table__map___Glist;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0hash__table__map___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "hash-table-map->list" };
VWEAK VWORD _V0hash__table__fold;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-fold" };
static VPair _V10_Dpair_D781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ht;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ht = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ht" };
static VPair _V10_Dpair_D777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0hash__table___Galist;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0hash__table___Galist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "hash-table->alist" };
VWEAK VWORD _V0hashtable;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0hashtable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "hashtable" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "_V0vanity_V0waybill_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0bitwise__and;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-and" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "_V0vanity_V0hashtable_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D760 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D746 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hashtable_V0make__hash__table);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0make__entry, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__slot, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__poverty, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0sequence_L, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0sequence_G, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__keyvector, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0validate__robinhood__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0validate__robinhood, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__find__impl, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0robinhood__shuffle, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__sweep, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__rummage, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__ref__impl, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hashtable_V0hash__table__ref);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__grow, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__set_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__delete_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__size, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__for__each, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__map___Glist, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table__fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hashtable_V0hash__table___Galist, _var0, _var1);
static void _V0vanity_V0hashtable_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.332 3 0) (##string ##.string.763) (bruijn ##.%x.333 0 0) 'bitwise-and 'error 'displayln 'vector-map 'equal?)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 8,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D763.sym, VPOINTER_OTHER),
      _var0,
      _V0bitwise__and,
      _V0error,
      _V0displayln,
      _V0vector__map,
      _V0equal_Q);
}
static void _V0vanity_V0hashtable_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0hashtable_V20_V0k3) (bruijn ##.%x.334 1 0) (bruijn ##.%x.335 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0hashtable_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0hashtable_V20_V0k2) (##string ##.string.764))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0hashtable_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0hashtable_V20_V0k1) (##string ##.string.765))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D765.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0hashtable_V0hash__table___Galist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table___Galist" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table___Galist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity hashtable hash-table-map->list) #t (bruijn ##.hash-table-map->list.90 1 2) (bruijn ##.%k.337 0 0) (##intrinsic ##vcore.cons) (bruijn ##.ht.117 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _V40_V10vcore_Dcons;
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__map___Glist(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__fold_V0k4(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.338 1 0) (bruijn ##.acc.121 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0hashtable_V0hash__table__fold_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__fold_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__fold_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.339 1 0) (bruijn ##.acc.121 2 0) (bruijn ##.%x.340 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0hashtable_V0hash__table__fold_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__fold_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__fold_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.118 2 1) (close _V50_V0vanity_V0hashtable_V0hash__table__fold_V0k5) (bruijn ##.key.122 0 1) (bruijn ##.datum.123 0 2) (bruijn ##.acc.121 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold_V0k5, self)))),
      _var1,
      _var2,
      statics->vars[0]);
}
void _V50_V0vanity_V0hashtable_V0hash__table__fold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__fold" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__fold, got ~D~N"
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
  // (letrec 1 ((bruijn ##.seed.119 1 2)) (##qualified-call (vanity hashtable hash-table-for-each) #t (bruijn ##.hash-table-for-each.91 2 3) (close _V50_V0vanity_V0hashtable_V0hash__table__fold_V0k4) (close _V50_V0vanity_V0hashtable_V0hash__table__fold_V0lambda4) (bruijn ##.ht.120 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[2];
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold_V0k4, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold_V0lambda4, self))));
    VWORD _arg2 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k6(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.341 1 0) (bruijn ##.acc.126 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.566) ((##vcore.cons (bruijn ##.%x.344 1 0) (bruijn ##.acc.126 3 0))) (set! (bruijn ##.%k.342 2 0) (bruijn ##.acc.126 3 0) (bruijn ##.%x.566 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->vars[0],
      VEncodeInt(3l), VEncodeInt(0l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.124 2 1) (close _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k7) (bruijn ##.key.127 0 1) (bruijn ##.datum.128 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k7, self)))),
      _var1,
      _var2);
}
void _V50_V0vanity_V0hashtable_V0hash__table__map___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__map___Glist" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__map___Glist, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ('()) (##qualified-call (vanity hashtable hash-table-for-each) #t (bruijn ##.hash-table-for-each.91 2 3) (close _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k6) (close _V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0lambda5) (bruijn ##.ht.125 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = VNULL;
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k6, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0lambda5, self))));
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VWaybillUnpack") (bruijn ##.%k.351 0 0) (bruijn ##.waybill.570 2 0))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda8, got ~D~N"
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
  // (basic-block 1 1 (##.%p.572) ((##vcore.not (bruijn ##.broke?.138 1 1))) (if (bruijn ##.%p.572 0 0) ((bruijn ##.f.129 9 1) (bruijn ##.%k.352 1 0) (bruijn ##.key.139 1 2) (bruijn ##.datum.140 1 3)) ((bruijn ##.%k.352 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.waybill.570 1 0) (##vcore.call-with-values (bruijn ##.%k.350 0 0) (close _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda7) (close _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda8)) ((bruijn ##.%k.350 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda7, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda8, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.571) ((##vcore.+ (bruijn ##.i.48.135 3 1) 1)) (##qualified-call (vanity hashtable hash-table-for-each ##.loop.38.134) #f (bruijn ##.loop.38.134 4 0) (bruijn ##.%k.347 3 0) (bruijn ##.%x.571 0 0)))
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
       _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.568 ##.%p.569) ((##vcore.vector-length (bruijn ##.vec.567 4 0)) (##vcore.< (bruijn ##.i.48.135 1 1) (bruijn ##.%x.568 0 0))) (if (bruijn ##.%p.569 0 1) (basic-block 1 1 (##.waybill.570) ((##vcore.vector-ref (bruijn ##.vec.567 5 0) (bruijn ##.i.48.135 2 1))) ((close _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k8) (close _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k9))) (##qualified-call (vanity hashtable hash-table-for-each ##.finalize.39.133) #f (bruijn ##.finalize.39.133 3 0) (bruijn ##.%k.347 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k8, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k9, self)))));
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
       _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__for__each_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V0lambda6" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134")) (##qualified-call (vanity hashtable hash-table-for-each ##.loop.38.134) #f (bruijn ##.loop.38.134 0 0) (bruijn ##.%k.345 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134, self))));
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
       _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.346 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
void _V50_V0vanity_V0hashtable_V0hash__table__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__for__each" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__for__each, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.vec.567) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.130 1 2) 3)) ((close _V50_V0vanity_V0hashtable_V0hash__table__for__each_V0lambda6) (close "_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[2],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V0lambda6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133, self)))));
    }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__size_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%r.574) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.141 2 1) 1)) ((bruijn ##.%k.355 2 0) (bruijn ##.%r.574 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__size(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__size" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__size, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.573) ((##vcore.cons '0 '0)) (##qualified-call (vanity hashtable hash-table-rummage) #t (bruijn ##.hash-table-rummage.99 2 11) (close _V50_V0vanity_V0hashtable_V0hash__table__size_V0k10) (bruijn ##.ht.141 1 1) (bruijn ##.%x.573 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(0l),
      VEncodeInt(0l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__size_V0k10, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.idx.146 1 0) (basic-block 1 1 (##.%r.579) ((##vcore.vector-ref (bruijn ##.vec.575 3 0) (bruijn ##.idx.146 2 0))) ((bruijn ##.%k.361 1 0) (bruijn ##.%r.579 0 0))) ((bruijn ##.%k.361 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable validate-robinhood) #t (bruijn ##.validate-robinhood.104 6 16) (bruijn ##.%k.357 5 0) (##string ##.string.938) (bruijn ##.ht.142 5 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D938.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 3 3 (##.%x.576 ##.%x.577 ##.%r.578) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.142 5 1) 1) (##vcore.- (bruijn ##.%x.576 0 0) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.142 5 1) 1 (bruijn ##.%x.577 0 1))) (##qualified-call (vanity hashtable robinhood-shuffle) #t (bruijn ##.robinhood-shuffle.101 6 13) (close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k16) (bruijn ##.ht.142 5 1) (bruijn ##.idx.146 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l),
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k16, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0robinhood__shuffle(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable validate-robinhood) #t (bruijn ##.validate-robinhood.104 6 16) (bruijn ##.%k.357 5 0) (##string ##.string.945) (bruijn ##.ht.142 5 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D945.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.rummaged-waybill.147 0 0) (##qualified-call (vanity hashtable hash-table-sweep) #t (bruijn ##.hash-table-sweep.100 6 12) (close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k18) (bruijn ##.ht.142 5 1) (bruijn ##.rummaged-waybill.147 0 0)) ((bruijn ##.%k.357 5 0) #void))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k18, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__sweep(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VVOID);
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.358 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k15) (bruijn ##.vec.575 2 0) (bruijn ##.idx.146 1 0) #f) (##qualified-call (vanity hashtable hash-table-rummage) #t (bruijn ##.hash-table-rummage.99 5 11) (close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k17) (bruijn ##.ht.142 4 1) (bruijn ##.key.143 4 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k15, self)))),
      statics->up->vars[0],
      statics->vars[0],
      VEncodeBool(false));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k17, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k13) (close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k14))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k14, self)))));
}
void _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.vec.575) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.142 2 1) 3)) (##qualified-call (vanity hashtable hash-table-find-impl) #t (bruijn ##.hash-table-find-impl.103 3 15) (close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k12) (bruijn ##.ht.142 2 1) (bruijn ##.key.143 2 2) (bruijn ##.hash.144 1 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(3l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k12, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__find__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__delete_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__delete_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__delete_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.current-hash.116 1 28) (close _V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k11) (bruijn ##.key.143 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k11, self)))),
      _var2);
}
void _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.rummaged-waybill.157 1 0) (##qualified-call (vanity hashtable hash-table-sweep) #t (bruijn ##.hash-table-sweep.100 6 12) (bruijn ##.%k.363 0 0) (bruijn ##.ht.148 5 1) (bruijn ##.rummaged-waybill.157 1 0)) ((bruijn ##.%k.363 0 0) #void))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__sweep(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable validate-robinhood) #t (bruijn ##.validate-robinhood.104 5 16) (bruijn ##.%k.362 4 0) (##string ##.string.972) (bruijn ##.ht.148 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D972.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable hash-table-set-impl!) #t (bruijn ##.hash-table-set-impl!.95 5 7) (close _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k24) (bruijn ##.ht.148 4 1) (bruijn ##.key.149 4 2) (bruijn ##.entry.155 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k24, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable hash-table-grow) #t (bruijn ##.hash-table-grow.96 5 8) (close _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k23) (bruijn ##.ht.148 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k23, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow, _V60_V0vanity_V0hashtable)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__grow(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k21) (close _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k22, self)))));
}
void _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.vec.584) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.148 3 1) 3)) (##qualified-call (vanity hashtable hash-table-rummage) #t (bruijn ##.hash-table-rummage.99 4 11) (close _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k20) (bruijn ##.ht.148 3 1) (bruijn ##.key.149 3 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(3l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k20, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set_B, got ~D~N"
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
  // (basic-block 4 4 (##.weakness-stability.580 ##.weakness.581 ##.stability.582 ##.clearinghouse.583) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.148 1 1) 0) (##vcore.car (bruijn ##.weakness-stability.580 0 0)) (##vcore.cdr (bruijn ##.weakness-stability.580 0 0)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.148 1 1) 6)) (##qualified-call (vanity hashtable make-entry) #t (bruijn ##.make-entry.112 2 24) (close _V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k19) (bruijn ##.weakness.581 0 1) (bruijn ##.stability.582 0 2) (bruijn ##.clearinghouse.583 0 3) (bruijn ##.key.149 1 2) (bruijn ##.datum.150 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      self->vars[0]);
    self->vars[3] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k19, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      self->vars[3];
    VWORD _arg4 = 
      statics->vars[2];
    VWORD _arg5 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__entry, _V60_V0vanity_V0hashtable)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0hashtable_V0make__entry(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.vec-entry.590 1 0) (basic-block 1 1 (##.%x.603) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.590 2 0))) (##qualified-call (vanity hashtable hash-poverty) #t (bruijn ##.hash-poverty.110 8 22) (bruijn ##.%k.381 1 0) (bruijn ##.%x.603 0 0) (bruijn ##.idx.168 3 2) (bruijn ##.capacity.588 6 3))) ((bruijn ##.%k.381 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.592 ##.%r.593) ((##vcore.+ (bruijn ##.occupancy.587 7 2) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.158 8 1) 1 (bruijn ##.%x.592 0 0))) ((bruijn ##.%k.365 4 0) (bruijn ##.%r.593 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.595 1 1) (##qualified-call (vanity hashtable waybill-key-matches?) #t (bruijn ##.waybill-key-matches?.109 10 21) (bruijn ##.%k.379 0 0) (bruijn ##.vec-entry.590 4 0) (bruijn ##.key.159 9 2)) ((bruijn ##.%k.379 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.599) ((##vcore.+ (bruijn ##.vec-entry-poverty.171 7 0) 1)) (##qualified-call (vanity hashtable hash-table-set-impl! ##.loop.166) #f (bruijn ##.loop.166 10 0) (bruijn ##.%k.365 9 0) (bruijn ##.vec-entry.590 8 0) (bruijn ##.%x.370 1 0) (bruijn ##.%x.599 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.597 ##.%x.598) ((##vcore.+ (bruijn ##.idx.168 7 2) 1) (##vcore.- (bruijn ##.capacity.588 10 3) 1)) ((bruijn ##.bitwise-and.50 13 1) (close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k32) (bruijn ##.%x.597 0 0) (bruijn ##.%x.598 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k32, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.602) ((##vcore.+ (bruijn ##.poverty.169 9 3) 1)) (##qualified-call (vanity hashtable hash-table-set-impl! ##.loop.166) #f (bruijn ##.loop.166 10 0) (bruijn ##.%k.365 9 0) (bruijn ##.entry.167 9 1) (bruijn ##.%x.374 1 0) (bruijn ##.%x.602 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 3),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.368 0 0) (##vcore.vector-set! (bruijn ##.%k.365 5 0) (bruijn ##.vec.586 8 1) (bruijn ##.idx.168 5 2) (bruijn ##.entry.167 5 1)) (basic-block 1 1 (##.%p.596) ((##vcore.> (bruijn ##.poverty.169 6 3) (bruijn ##.vec-entry-poverty.171 4 0))) (if (bruijn ##.%p.596 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k31) (bruijn ##.vec.586 9 1) (bruijn ##.idx.168 6 2) (bruijn ##.entry.167 6 1)) (basic-block 2 2 (##.%x.600 ##.%x.601) ((##vcore.+ (bruijn ##.idx.168 7 2) 1) (##vcore.- (bruijn ##.capacity.588 10 3) 1)) ((bruijn ##.bitwise-and.50 13 1) (close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k33) (bruijn ##.%x.600 0 0) (bruijn ##.%x.601 0 1))))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      VGetArg(statics, 6-1, 3),
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k31, self)))),
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 6-1, 2),
      VGetArg(statics, 6-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k33, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.591) ((##vcore.not (bruijn ##.vec-entry.590 2 0))) (if (bruijn ##.%p.591 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k28) (bruijn ##.vec.586 6 1) (bruijn ##.idx.168 3 2) (bruijn ##.entry.167 3 1)) (basic-block 2 2 (##.%x.594 ##.%p.595) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.590 3 0)) (##vcore.= (bruijn ##.%x.594 0 0) (bruijn ##.hash.585 7 0))) ((close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k29) (close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k30)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k28, self)))),
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[2],
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k30, self)))));
    }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166, got ~D~N"
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
  // (basic-block 1 1 (##.vec-entry.590) ((##vcore.vector-ref (bruijn ##.vec.586 4 1) (bruijn ##.idx.168 1 2))) ((close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k26) (close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k27, self)))));
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166")) (##qualified-call (vanity hashtable hash-table-set-impl! ##.loop.166) #f (bruijn ##.loop.166 0 0) (bruijn ##.%k.364 3 0) (bruijn ##.entry.160 3 3) (bruijn ##.idx.165 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[3];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B, got ~D~N"
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
  // (basic-block 5 5 (##.hash.585 ##.vec.586 ##.occupancy.587 ##.capacity.588 ##.%x.589) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.entry.160 1 3)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.158 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.158 1 1) 1) (##vcore.vector-length (bruijn ##.vec.586 0 1)) (##vcore.- (bruijn ##.capacity.588 0 3) 1)) ((bruijn ##.bitwise-and.50 3 1) (close _V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V0k25) (bruijn ##.hash.585 0 0) (bruijn ##.%x.589 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[3]);
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[2] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[3] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[1]);
    self->vars[4] = _VBasic_VSub2(runtime, NULL,
      self->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V0k25, self)))),
      self->vars[0],
      self->vars[4]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.611 1 0) ((bruijn ##.%k.393 0 0) 8) (basic-block 1 1 (##.%r.618) ((##vcore.* 2 (bruijn ##.old-capacity.607 3 3))) ((bruijn ##.%k.393 1 0) (bruijn ##.%r.618 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(8l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      VEncodeInt(2l),
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.entry.616 1 0) (##qualified-call (vanity hashtable hash-table-reinsert!) #t (bruijn ##.hash-table-reinsert!.102 12 14) (bruijn ##.%k.390 0 0) (bruijn ##.ht.172 11 1) (bruijn ##.entry.616 1 0)) ((bruijn ##.%k.390 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k38(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.617) ((##vcore.+ (bruijn ##.i.36.183 3 1) 1)) (##qualified-call (vanity hashtable hash-table-grow ##.loop.26.182) #f (bruijn ##.loop.26.182 4 0) (bruijn ##.%k.387 3 0) (bruijn ##.%x.617 0 0)))
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
       _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.614 ##.%p.615) ((##vcore.vector-length (bruijn ##.old-vec.604 8 0)) (##vcore.< (bruijn ##.i.36.183 1 1) (bruijn ##.%x.614 0 0))) (if (bruijn ##.%p.615 0 1) (basic-block 1 1 (##.entry.616) ((##vcore.vector-ref (bruijn ##.old-vec.604 9 0) (bruijn ##.i.36.183 2 1))) ((close _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k37) (close _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k38))) (##qualified-call (vanity hashtable hash-table-grow ##.finalize.27.181) #f (bruijn ##.finalize.27.181 3 0) (bruijn ##.%k.387 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k37, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k38, self)))));
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
       _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable validate-robinhood) #t (bruijn ##.validate-robinhood.104 8 16) (bruijn ##.%k.384 7 0) (##string ##.string.1077) (bruijn ##.ht.172 7 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1077.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow_V0lambda9" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182")) (##qualified-call (vanity hashtable hash-table-grow ##.loop.26.182) #f (bruijn ##.loop.26.182 0 0) (close _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k39) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k39, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.386 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%r.612 ##.%r.613) (((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.172 5 1) 1 0) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.172 5 1) 3 (bruijn ##.vec.179 1 0))) ((close _V50_V0vanity_V0hashtable_V0hash__table__grow_V0lambda9) (close "_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l),
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(3l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0lambda9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181, self)))));
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-vector (close _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k36) (bruijn ##.capacity.178 0 0) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k36, self)))),
      _var0,
      VEncodeBool(false));
}
void _V50_V0vanity_V0hashtable_V0hash__table__grow(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__grow" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__grow, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 7 7 (##.old-vec.604 ##.clearinghouse.605 ##.occupancy.606 ##.old-capacity.607 ##.load-factor.608 ##.%x.609 ##.%p.610) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.172 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.172 1 1) 6) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.172 1 1) 1) (##vcore.vector-length (bruijn ##.old-vec.604 0 0)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.172 1 1) 2) (##vcore.* (bruijn ##.load-factor.608 0 4) (bruijn ##.old-capacity.607 0 3)) (##vcore.>= (bruijn ##.occupancy.606 0 2) (bruijn ##.%x.609 0 5))) (if (bruijn ##.%p.610 0 6) (basic-block 1 1 (##.%p.611) ((##vcore.= (bruijn ##.old-capacity.607 1 3) 0)) ((close _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k34) (close _V50_V0vanity_V0hashtable_V0hash__table__grow_V0k35))) ((bruijn ##.%k.384 1 0) #void)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
    self->vars[2] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[3] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    self->vars[4] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(2l));
    self->vars[5] = _VBasic_VMul2(runtime, NULL,
      self->vars[4],
      self->vars[3]);
    self->vars[6] = _VBasic_VCmpGe(runtime, NULL,
      self->vars[2],
      self->vars[5]);
if(VDecodeBool(
self->vars[6])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[3],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k35, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
}
    }
}
static void _V10_Dhash__table__ref_D97_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dhash__table__ref_D97_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D97_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.51 3 2) (bruijn ##.%k.396 0 0) (##string ##.string.1096) (bruijn ##.ht.186 1 1) (bruijn ##.key.187 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1096.sym, VPOINTER_OTHER),
      statics->vars[1],
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hashtable_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hashtable_V0hash__table__ref" #t (##pair ##.pair.1094) (3 (##qualified-call (vanity hashtable hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.98 1 10) (bruijn ##.%k.395 0 0) (bruijn ##.ht.186 0 1) (bruijn ##.key.187 0 2) (close _V10_Dhash__table__ref_D97_V0lambda10))) (4 (##qualified-call (vanity hashtable hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.98 1 10) (bruijn ##.%k.397 0 0) (bruijn ##.ht.188 0 1) (bruijn ##.key.189 0 2) (bruijn ##.thunk.190 0 3))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hashtable_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0hashtable_V0hash__table__ref" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity hashtable hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.98 1 10) (bruijn ##.%k.395 0 0) (bruijn ##.ht.186 0 1) (bruijn ##.key.187 0 2) (close _V10_Dhash__table__ref_D97_V0lambda10))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dhash__table__ref_D97_V0lambda10, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__ref__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hashtable_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0hashtable_V0hash__table__ref" };
 VRecordCall2(runtime, &dbg);
  // (##qualified-call (vanity hashtable hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.98 1 10) (bruijn ##.%k.397 0 0) (bruijn ##.ht.188 0 1) (bruijn ##.key.189 0 2) (bruijn ##.thunk.190 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__ref__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0hashtable_V0hash__table__ref, @function\n"
#endif
".globl _V50_V0vanity_V0hashtable_V0hash__table__ref\n"
"_V50_V0vanity_V0hashtable_V0hash__table__ref:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0hashtable_V0hash__table__ref\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0hashtable_V0hash__table__ref\n"
"    jmp _V20CaseError__V50_V0vanity_V0hashtable_V0hash__table__ref\n"
);
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VWaybillUnpack") (bruijn ##.%k.400 0 0) (bruijn ##.waybill.198 1 0))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda12, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (if (bruijn ##.broken?.199 0 1) ((bruijn ##.thunk.193 6 3) (bruijn ##.%k.401 0 0)) ((bruijn ##.%k.401 0 0) (bruijn ##.datum.201 0 3)))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.waybill.198 0 0) (##vcore.call-with-values (bruijn ##.%k.399 1 0) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda11) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda12)) ((bruijn ##.thunk.193 5 3) (bruijn ##.%k.399 1 0)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda12, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 1,
      statics->vars[0]);
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity hashtable hash-table-rummage) #t (bruijn ##.hash-table-rummage.99 5 11) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0k41) (bruijn ##.ht.191 4 1) (bruijn ##.key.192 4 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0k41, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.idx.202 1 0) (basic-block 1 1 (##.%r.621) ((##vcore.vector-ref (bruijn ##.vec.619 4 0) (bruijn ##.idx.202 2 0))) ((bruijn ##.%k.404 1 0) (bruijn ##.%r.621 0 0))) ((bruijn ##.%k.404 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VWaybillUnpack") (bruijn ##.%k.402 0 0) (bruijn ##.waybill.203 1 0))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda14, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (if (bruijn ##.wb-broken?.204 0 1) ((bruijn ##.thunk.193 6 3) (bruijn ##.%k.403 0 0)) ((bruijn ##.%k.403 0 0) (bruijn ##.wb-datum.206 0 3)))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.waybill.203 0 0) (##vcore.call-with-values (bruijn ##.%k.398 5 0) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda13) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda14)) (##qualified-call (vanity hashtable hash-table-ref-impl ##.fallback-ref.197) #f (bruijn ##.fallback-ref.197 2 0) (bruijn ##.%k.398 5 0)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda14, self)))));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197(runtime, _closure_env, 1, _arg0);
    }
  }
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k43) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k44, self)))));
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.vec.619 ##.clearinghouse.620) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.191 2 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.191 2 1) 6)) (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197")) (##qualified-call (vanity hashtable hash-table-find-impl) #t (bruijn ##.hash-table-find-impl.103 4 15) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k42) (bruijn ##.ht.191 3 1) (bruijn ##.key.192 3 2) (bruijn ##.hash.194 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(6l));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k42, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__find__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__ref__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__ref__impl, got ~D~N"
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
  // ((bruijn ##.current-hash.116 1 28) (close _V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k40) (bruijn ##.key.192 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k40, self)))),
      _var2);
}
void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VWaybillUnpack") (bruijn ##.%k.410 0 0) (bruijn ##.waybill.628 2 0))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      _var0,
      statics->up->vars[0]);
}
static void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.631) ((##vcore.eq? (bruijn ##.key.208 9 2) (bruijn ##.wb-key.218 2 2))) (if (bruijn ##.%p.631 0 0) ((bruijn ##.%k.411 2 0) (bruijn ##.new-waybill.220 1 0)) (basic-block 1 1 (##.%x.632) ((##vcore.+ (bruijn ##.i.215 7 1) 1)) (##qualified-call (vanity hashtable hash-table-rummage ##.loop.214) #f (bruijn ##.loop.214 8 0) (bruijn ##.%k.411 3 0) (bruijn ##.%x.632 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable validate-robinhood) #t (bruijn ##.validate-robinhood.104 9 16) (close _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k49) (##string ##.string.1182) (bruijn ##.ht.207 8 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k49, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1182.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity hashtable hash-table-reinsert!) #t (bruijn ##.hash-table-reinsert!.102 9 14) (close _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k48) (bruijn ##.ht.207 8 1) (bruijn ##.new-waybill.220 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k48, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda16, got ~D~N"
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
  // (if (bruijn ##.wb-broken?.217 0 1) (basic-block 1 1 (##.%x.630) ((##vcore.+ (bruijn ##.i.215 5 1) 1)) (##qualified-call (vanity hashtable hash-table-rummage ##.loop.214) #f (bruijn ##.loop.214 6 0) (bruijn ##.%k.411 1 0) (bruijn ##.%x.630 0 0))) (##qualified-call (vanity hashtable make-entry) #t (bruijn ##.make-entry.112 8 24) (close _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k47) (bruijn ##.weakness.623 6 1) (bruijn ##.stability.624 6 2) (bruijn ##.clearinghouse.626 6 4) (bruijn ##.wb-key.218 0 2) (bruijn ##.wb-datum.219 0 3)))
if(VDecodeBool(
_var1)) {
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
       _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k47, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 4);
    VWORD _arg4 = 
      _var2;
    VWORD _arg5 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__entry, _V60_V0vanity_V0hashtable)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0hashtable_V0make__entry(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.406 3 0) (close _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda15) (close _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda16, self)))));
}
void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.409 0 0) (##qualified-call (vanity hashtable validate-robinhood) #t (bruijn ##.validate-robinhood.104 7 16) (close _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k46) (##string ##.string.1183) (bruijn ##.ht.207 6 1)) (##qualified-call (vanity hashtable hash-table-rummage ##.loop.214) #f (bruijn ##.loop.214 4 0) (bruijn ##.%k.406 3 0) (bruijn ##.i.215 3 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k46, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1183.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.627) ((##vcore.= (bruijn ##.i.215 1 1) (bruijn ##.starting-occupancy.625 3 3))) (if (bruijn ##.%p.627 0 0) ((bruijn ##.%k.406 1 0) #f) (basic-block 2 2 (##.waybill.628 ##.%p.629) (((##basic-intrinsic "VClearinghousePoll") (bruijn ##.clearinghouse.626 4 4)) (##vcore.not (bruijn ##.waybill.628 0 0))) (if (bruijn ##.%p.629 0 1) ((bruijn ##.%k.406 2 0) #f) (##qualified-call (vanity hashtable hash-table-sweep) #t (bruijn ##.hash-table-sweep.100 6 12) (close _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k45) (bruijn ##.ht.207 5 1) (bruijn ##.waybill.628 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VClearinghousePoll(runtime, NULL,
      statics->up->up->up->vars[4]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k45, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__sweep(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__rummage(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__rummage" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__rummage, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 5 5 (##.weakness-stability.622 ##.weakness.623 ##.stability.624 ##.starting-occupancy.625 ##.clearinghouse.626) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.207 1 1) 0) (##vcore.car (bruijn ##.weakness-stability.622 0 0)) (##vcore.cdr (bruijn ##.weakness-stability.622 0 0)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.207 1 1) 1) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.207 1 1) 6)) (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214")) (##qualified-call (vanity hashtable hash-table-rummage ##.loop.214) #f (bruijn ##.loop.214 0 0) (bruijn ##.%k.405 2 0) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      self->vars[0]);
    self->vars[3] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[4] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214, self))));
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
       _V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.642 1 1) (basic-block 1 1 (##.%r.650) ((##vcore.eq? (bruijn ##.entry.222 8 2) (bruijn ##.vec-entry.639 3 0))) ((bruijn ##.%k.428 1 0) (bruijn ##.%r.650 0 0))) ((bruijn ##.%k.428 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k54(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.416 4 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(true));
}
static void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k53(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.643 ##.%r.644) ((##vcore.- (bruijn ##.occupancy.635 7 2) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.221 8 1) 1 (bruijn ##.%x.643 0 0))) (##qualified-call (vanity hashtable robinhood-shuffle) #t (bruijn ##.robinhood-shuffle.101 9 13) (close _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k54) (bruijn ##.ht.221 8 1) (bruijn ##.idx.230 4 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l),
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k54, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0robinhood__shuffle(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.649) ((##vcore.+ (bruijn ##.poverty.231 9 2) 1)) (##qualified-call (vanity hashtable hash-table-sweep ##.loop.229) #f (bruijn ##.loop.229 10 0) (bruijn ##.%k.416 9 0) (bruijn ##.%x.421 1 0) (bruijn ##.%x.649 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.646) ((##vcore.> (bruijn ##.poverty.231 6 2) (bruijn ##.%x.425 1 0))) (if (bruijn ##.%p.646 0 0) ((bruijn ##.%k.416 6 0) #f) (basic-block 2 2 (##.%x.647 ##.%x.648) ((##vcore.+ (bruijn ##.idx.230 7 1) 1) (##vcore.- (bruijn ##.capacity.637 10 4) 1)) ((bruijn ##.bitwise-and.50 13 1) (close _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k56) (bruijn ##.%x.647 0 0) (bruijn ##.%x.648 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 4),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k56, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.418 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k53) (bruijn ##.vec.634 6 1) (bruijn ##.idx.230 3 1) #f) (basic-block 1 1 (##.%x.645) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.639 3 0))) (##qualified-call (vanity hashtable hash-poverty) #t (bruijn ##.hash-poverty.110 9 22) (close _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k55) (bruijn ##.%x.645 0 0) (bruijn ##.idx.230 4 1) (bruijn ##.capacity.637 7 4))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k53, self)))),
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1],
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k55, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.vec-entry.639 ##.%p.640) ((##vcore.vector-ref (bruijn ##.vec.634 4 1) (bruijn ##.idx.230 1 1)) (##vcore.not (bruijn ##.vec-entry.639 0 0))) (if (bruijn ##.%p.640 0 1) ((bruijn ##.%k.416 1 0) #f) (basic-block 2 2 (##.%x.641 ##.%p.642) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.639 1 0)) (##vcore.= (bruijn ##.%x.641 0 0) (bruijn ##.hash.633 5 0))) ((close _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k51) (close _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k52)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k52, self)))));
    }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__sweep_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__sweep_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__sweep_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229")) (##qualified-call (vanity hashtable hash-table-sweep ##.loop.229) #f (bruijn ##.loop.229 0 0) (bruijn ##.%k.415 3 0) (bruijn ##.idx.228 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__sweep(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__sweep" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__sweep, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 6 6 (##.hash.633 ##.vec.634 ##.occupancy.635 ##.clearinghouse.636 ##.capacity.637 ##.%x.638) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.entry.222 1 2)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.221 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.221 1 1) 1) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.221 1 1) 6) (##vcore.vector-length (bruijn ##.vec.634 0 1)) (##vcore.- (bruijn ##.capacity.637 0 4) 1)) ((bruijn ##.bitwise-and.50 3 1) (close _V50_V0vanity_V0hashtable_V0hash__table__sweep_V0k50) (bruijn ##.hash.633 0 0) (bruijn ##.%x.638 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[2] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[3] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
    self->vars[4] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[1]);
    self->vars[5] = _VBasic_VSub2(runtime, NULL,
      self->vars[4],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V0k50, self)))),
      self->vars[0],
      self->vars[5]);
    }
}
static void _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k61(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable robinhood-shuffle ##.loop.237) #f (bruijn ##.loop.237 9 0) (bruijn ##.%k.432 8 0) (bruijn ##.idx.239 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k61) (bruijn ##.vec.651 10 0) (bruijn ##.idx.239 5 0) #f)
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k61, self)))),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 5-1, 0),
      VEncodeBool(false));
}
void _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.434 1 0)) (basic-block 1 1 (##.%p.657) ((##vcore.= (bruijn ##.elem-poverty.241 1 0) 0)) (if (bruijn ##.%p.657 0 0) ((bruijn ##.%k.432 8 0) #void) (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k60) (bruijn ##.vec.651 10 0) (bruijn ##.oldidx.238 8 1) (bruijn ##.vec-entry.240 5 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VVOID);
} else {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k60, self)))),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 5-1, 1));
}
    }
    }
}
static void _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.vec-entry.240 1 1) (basic-block 1 1 (##.%x.656) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.240 2 1))) (##qualified-call (vanity hashtable hash-poverty) #t (bruijn ##.hash-poverty.110 9 22) (close _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k59) (bruijn ##.%x.656 0 0) (bruijn ##.idx.239 2 0) (bruijn ##.capacity.652 7 1))) ((bruijn ##.%k.432 4 0) #void))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k59, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VVOID);
}
}
void _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.433 1 0) #f) (basic-block 1 1 (##.%x.655) ((##vcore.vector-ref (bruijn ##.vec.651 6 0) (bruijn ##.idx.239 1 0))) (set! (close _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k58) (bruijn ##.vec-entry.240 1 1) (bruijn ##.%x.655 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k58, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[0]
    );
    }
    }
}
void _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.653 ##.%x.654) ((##vcore.+ (bruijn ##.oldidx.238 1 1) 1) (##vcore.- (bruijn ##.capacity.652 3 1) 1)) ((bruijn ##.bitwise-and.50 6 1) (close _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k57) (bruijn ##.%x.653 0 0) (bruijn ##.%x.654 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k57, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0robinhood__shuffle(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0robinhood__shuffle" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0robinhood__shuffle, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.vec.651 ##.capacity.652) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.233 1 1) 3) (##vcore.vector-length (bruijn ##.vec.651 0 0))) (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237")) (##qualified-call (vanity hashtable robinhood-shuffle ##.loop.237) #f (bruijn ##.loop.237 0 0) (bruijn ##.%k.431 2 0) (bruijn ##.oldidx.234 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.vec-entry.663 1 0) (basic-block 1 1 (##.%x.674) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.663 2 0))) (##qualified-call (vanity hashtable hash-poverty) #t (bruijn ##.hash-poverty.110 8 22) (bruijn ##.%k.453 1 0) (bruijn ##.%x.674 0 0) (bruijn ##.idx.250 3 2) (bruijn ##.capacity.660 6 2))) ((bruijn ##.%k.453 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.665 ##.%r.666) ((##vcore.+ (bruijn ##.occupancy.659 7 1) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.242 8 1) 1 (bruijn ##.%x.665 0 0))) ((bruijn ##.%k.441 4 0) (bruijn ##.%r.666 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.670) ((##vcore.+ (bruijn ##.vec-entry-poverty.253 5 0) 1)) (##qualified-call (vanity hashtable hash-table-reinsert! ##.loop.248) #f (bruijn ##.loop.248 8 0) (bruijn ##.%k.441 7 0) (bruijn ##.vec-entry.663 6 0) (bruijn ##.%x.445 1 0) (bruijn ##.%x.670 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.668 ##.%x.669) ((##vcore.+ (bruijn ##.idx.250 5 2) 1) (##vcore.- (bruijn ##.capacity.660 8 2) 1)) ((bruijn ##.bitwise-and.50 11 1) (close _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k67) (bruijn ##.%x.668 0 0) (bruijn ##.%x.669 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k67, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.673) ((##vcore.+ (bruijn ##.poverty.251 7 3) 1)) (##qualified-call (vanity hashtable hash-table-reinsert! ##.loop.248) #f (bruijn ##.loop.248 8 0) (bruijn ##.%k.441 7 0) (bruijn ##.entry.249 7 1) (bruijn ##.%x.449 1 0) (bruijn ##.%x.673 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 3),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.664) ((##vcore.not (bruijn ##.vec-entry.663 2 0))) (if (bruijn ##.%p.664 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k65) (bruijn ##.vec.658 6 0) (bruijn ##.idx.250 3 2) (bruijn ##.entry.249 3 1)) (basic-block 1 1 (##.%p.667) ((##vcore.> (bruijn ##.poverty.251 4 3) (bruijn ##.vec-entry-poverty.253 2 0))) (if (bruijn ##.%p.667 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k66) (bruijn ##.vec.658 7 0) (bruijn ##.idx.250 4 2) (bruijn ##.entry.249 4 1)) (basic-block 2 2 (##.%x.671 ##.%x.672) ((##vcore.+ (bruijn ##.idx.250 5 2) 1) (##vcore.- (bruijn ##.capacity.660 8 2) 1)) ((bruijn ##.bitwise-and.50 11 1) (close _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k68) (bruijn ##.%x.671 0 0) (bruijn ##.%x.672 0 1)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k65, self)))),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[2],
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->up->up->up->vars[3],
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k66, self)))),
      VGetArg(statics, 7-1, 0),
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k68, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248, got ~D~N"
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
  // (basic-block 1 1 (##.vec-entry.663) ((##vcore.vector-ref (bruijn ##.vec.658 4 0) (bruijn ##.idx.250 1 2))) ((close _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k63) (close _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k64, self)))));
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248")) (##qualified-call (vanity hashtable hash-table-reinsert! ##.loop.248) #f (bruijn ##.loop.248 0 0) (bruijn ##.%k.440 3 0) (bruijn ##.entry.243 3 2) (bruijn ##.idx.247 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 5 5 (##.vec.658 ##.occupancy.659 ##.capacity.660 ##.%x.661 ##.%x.662) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.242 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.242 1 1) 1) (##vcore.vector-length (bruijn ##.vec.658 0 0)) ((##basic-intrinsic "VWaybillAddress") (bruijn ##.entry.243 1 2)) (##vcore.- (bruijn ##.capacity.660 0 2) 1)) ((bruijn ##.bitwise-and.50 3 1) (close _V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V0k62) (bruijn ##.%x.661 0 3) (bruijn ##.%x.662 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    self->vars[3] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[2]);
    self->vars[4] = _VBasic_VSub2(runtime, NULL,
      self->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V0k62, self)))),
      self->vars[3],
      self->vars[4]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.681 1 1) (##qualified-call (vanity hashtable waybill-key-matches?) #t (bruijn ##.waybill-key-matches?.109 8 21) (bruijn ##.%k.469 0 0) (bruijn ##.vec-entry.678 2 0) (bruijn ##.key.255 7 2)) ((bruijn ##.%k.469 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.686) ((##vcore.+ (bruijn ##.poverty.262 9 2) 1)) (##qualified-call (vanity hashtable hash-table-find-impl ##.loop.260) #f (bruijn ##.loop.260 10 0) (bruijn ##.%k.458 9 0) (bruijn ##.%x.462 1 0) (bruijn ##.%x.686 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.683) ((##vcore.> (bruijn ##.poverty.262 6 2) (bruijn ##.%x.466 1 0))) (if (bruijn ##.%p.683 0 0) ((bruijn ##.%k.458 6 0) #f) (basic-block 2 2 (##.%x.684 ##.%x.685) ((##vcore.+ (bruijn ##.idx.261 7 1) 1) (##vcore.- (bruijn ##.capacity.676 10 1) 1)) ((bruijn ##.bitwise-and.50 13 1) (close _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k73) (bruijn ##.%x.684 0 0) (bruijn ##.%x.685 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k73, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.460 0 0) ((bruijn ##.%k.458 3 0) (bruijn ##.idx.261 3 1)) (basic-block 1 1 (##.%x.682) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.678 3 0))) (##qualified-call (vanity hashtable hash-poverty) #t (bruijn ##.hash-poverty.110 9 22) (close _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k72) (bruijn ##.%x.682 0 0) (bruijn ##.idx.261 4 1) (bruijn ##.capacity.676 7 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k72, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.vec-entry.678 ##.%p.679) ((##vcore.vector-ref (bruijn ##.vec.675 4 0) (bruijn ##.idx.261 1 1)) (##vcore.not (bruijn ##.vec-entry.678 0 0))) (if (bruijn ##.%p.679 0 1) ((bruijn ##.%k.458 1 0) (bruijn ##.idx.261 1 1)) (basic-block 2 2 (##.%x.680 ##.%p.681) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.678 1 0)) (##vcore.= (bruijn ##.%x.680 0 0) (bruijn ##.hash.256 6 3))) ((close _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k70) (close _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k71)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k70, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k71, self)))));
    }
}
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260")) (##qualified-call (vanity hashtable hash-table-find-impl ##.loop.260) #f (bruijn ##.loop.260 0 0) (bruijn ##.%k.457 3 0) (bruijn ##.idx.259 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__find__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__find__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__find__impl, got ~D~N"
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
  // (basic-block 3 3 (##.vec.675 ##.capacity.676 ##.%x.677) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.254 1 1) 3) (##vcore.vector-length (bruijn ##.vec.675 0 0)) (##vcore.- (bruijn ##.capacity.676 0 1) 1)) ((bruijn ##.bitwise-and.50 3 1) (close _V50_V0vanity_V0hashtable_V0hash__table__find__impl_V0k69) (bruijn ##.hash.256 1 3) (bruijn ##.%x.677 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VSub2(runtime, NULL,
      self->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V0k69, self)))),
      statics->vars[3],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.%k.472 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.691 1 0) (basic-block 1 1 (##.%r.705) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.x.691 2 0))) ((bruijn ##.%k.504 1 0) (bruijn ##.%r.705 0 0))) ((bruijn ##.%k.504 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.691 2 0) (##qualified-call (vanity hashtable hash-slot) #t (bruijn ##.hash-slot.111 11 23) (bruijn ##.%k.503 0 0) (bruijn ##.ihash.276 1 0) (bruijn ##.capacity.269 8 1)) ((bruijn ##.%k.503 0 0) #f))
if(VDecodeBool(
statics->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__slot, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__slot(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.691 3 0) (##qualified-call (vanity hashtable hash-poverty) #t (bruijn ##.hash-poverty.110 12 22) (bruijn ##.%k.502 0 0) (bruijn ##.ihash.276 2 0) (bruijn ##.idx.274 5 2) (bruijn ##.capacity.269 9 1)) ((bruijn ##.%k.502 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ipoverty.278 1 0) (basic-block 2 2 (##.%x.703 ##.%r.704) ((##vcore.quotient (bruijn ##.capacity.269 11 1) 2) (##vcore.>= (bruijn ##.ipoverty.278 2 0) (bruijn ##.%x.703 0 0))) ((bruijn ##.%k.500 1 0) (bruijn ##.%r.704 0 1))) ((bruijn ##.%k.500 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VQuot2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.12.279 1 0) ((bruijn ##.error.51 15 2) (bruijn ##.%k.499 0 0) (##string ##.string.1398) (bruijn ##.ipoverty.278 2 0)) ((bruijn ##.%k.499 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1398.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.y.697 1 0) (basic-block 1 1 (##.%r.702) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.y.697 2 0))) ((bruijn ##.%k.496 1 0) (bruijn ##.%r.702 0 0))) ((bruijn ##.%k.496 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.y.697 2 0) (##qualified-call (vanity hashtable hash-slot) #t (bruijn ##.hash-slot.111 23 23) (bruijn ##.%k.495 0 0) (bruijn ##.jhash.286 1 0) (bruijn ##.capacity.269 20 1)) ((bruijn ##.%k.495 0 0) #f))
if(VDecodeBool(
statics->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__slot, _V60_V0vanity_V0hashtable)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__slot(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.y.697 3 0) (##qualified-call (vanity hashtable hash-poverty) #t (bruijn ##.hash-poverty.110 24 22) (bruijn ##.%k.494 0 0) (bruijn ##.jhash.286 2 0) (bruijn ##.jdx.284 4 0) (bruijn ##.capacity.269 21 1)) ((bruijn ##.%k.494 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 21-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.jpoverty.288 1 0) (basic-block 2 2 (##.%x.700 ##.%r.701) ((##vcore.quotient (bruijn ##.capacity.269 23 1) 2) (##vcore.>= (bruijn ##.jpoverty.288 2 0) (bruijn ##.%x.700 0 0))) ((bruijn ##.%k.492 1 0) (bruijn ##.%r.701 0 1))) ((bruijn ##.%k.492 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VQuot2(runtime, NULL,
      VGetArg(statics, 23-1, 1),
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.23.289 1 0) ((bruijn ##.error.51 27 2) (bruijn ##.%k.491 0 0) (##string ##.string.1398) (bruijn ##.jpoverty.288 2 0)) ((bruijn ##.%k.491 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1398.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.52 29 3) (bruijn ##.%k.489 1 0) (bruijn ##.%x.490 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 3)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.24.698 1 0) (##qualified-call (vanity hashtable hash-table-keyvector) #t (bruijn ##.hash-table-keyvector.106 27 18) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k98) (bruijn ##.ht.267 26 2)) ((bruijn ##.%k.489 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k98, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector, _V60_V0vanity_V0hashtable)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__keyvector(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.24.698 1 0) ((bruijn ##.error.51 28 2) (bruijn ##.%k.488 0 0) (##string ##.string.1467) (bruijn ##.what-we-did.266 26 1) (bruijn ##.idx.274 20 2) (bruijn ##.ipoverty.278 15 0) (bruijn ##.jdx.284 7 0)) ((bruijn ##.%k.488 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 2)), 6,
      _var0,
      VEncodePointer(&_V10_Dstring_D1467.sym, VPOINTER_OTHER),
      VGetArg(statics, 26-1, 1),
      VGetArg(statics, 20-1, 2),
      VGetArg(statics, 15-1, 0),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.52 30 3) (bruijn ##.%k.486 1 0) (bruijn ##.%x.487 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 3)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.25.291 1 0) (##qualified-call (vanity hashtable hash-table-keyvector) #t (bruijn ##.hash-table-keyvector.106 28 18) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k104) (bruijn ##.ht.267 27 2)) ((bruijn ##.%k.486 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k104, self))));
    VWORD _arg1 = 
      VGetArg(statics, 27-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector, _V60_V0vanity_V0hashtable)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0hash__table__keyvector(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.25.291 1 0) ((bruijn ##.error.51 29 2) (bruijn ##.%k.485 0 0) (##string ##.string.1478) (bruijn ##.what-we-did.266 27 1) (bruijn ##.idx.274 21 2) (bruijn ##.ipoverty.278 16 0) (bruijn ##.jdx.284 8 0) (bruijn ##.jpoverty.288 4 0)) ((bruijn ##.%k.485 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 7,
      _var0,
      VEncodePointer(&_V10_Dstring_D1478.sym, VPOINTER_OTHER),
      VGetArg(statics, 27-1, 1),
      VGetArg(statics, 21-1, 2),
      VGetArg(statics, 16-1, 0),
      VGetArg(statics, 8-1, 0),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k107(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.699) ((##vcore.+ (bruijn ##.j.283 11 1) 1)) (##qualified-call (vanity hashtable validate-robinhood-impl ##.loop.1.272 ##.loop.14.282) #f (bruijn ##.loop.14.282 12 0) (bruijn ##.%k.482 11 0) (bruijn ##.%x.699 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k106) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k107, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k103) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k105))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k105, self)))));
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k101(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hashtable sequence>) #t (bruijn ##.sequence>.107 26 19) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k102) (bruijn ##.jslot.287 3 0) (bruijn ##.islot.277 15 0) (bruijn ##.capacity.269 23 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k102, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 0);
    VWORD _arg3 = 
      VGetArg(statics, 23-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0sequence_G, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0sequence_G(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k99(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k100) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k101))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k100, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k101, self)))));
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.p.24.698) ((##vcore.not (bruijn ##.y.697 5 0))) ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k97) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k99)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k99, self)))));
    }
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k95) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k96))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k96, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k93) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k94))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k94, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k91) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k92))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k92, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k89) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k90))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k90, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.y.697) ((##vcore.vector-ref (bruijn ##.vec.268 18 0) (bruijn ##.jdx.284 1 0))) ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k87) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 18-1, 0),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k87, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k88, self)))));
    }
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.694) ((##vcore.<= (bruijn ##.j.283 1 1) (bruijn ##.ipoverty.278 6 0))) (if (bruijn ##.%p.694 0 0) (basic-block 2 2 (##.%x.695 ##.%x.696) ((##vcore.- (bruijn ##.idx.274 12 2) (bruijn ##.j.283 2 1)) (##vcore.- (bruijn ##.capacity.269 16 1) 1)) ((bruijn ##.bitwise-and.50 20 1) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k86) (bruijn ##.%x.695 0 0) (bruijn ##.%x.696 0 1))) (##qualified-call (vanity hashtable validate-robinhood-impl ##.loop.1.272 ##.finalize.15.281) #f (bruijn ##.finalize.15.281 3 0) (bruijn ##.%k.482 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 12-1, 2),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k86, self)))),
      self->vars[0],
      self->vars[1]);
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
       _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0lambda18" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282")) (##qualified-call (vanity hashtable validate-robinhood-impl ##.loop.1.272 ##.loop.14.282) #f (bruijn ##.loop.14.282 0 0) (bruijn ##.%k.480 2 0) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282, self))));
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
       _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.481 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.691 5 0) ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0lambda18) (close "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281")) ((bruijn ##.%k.480 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 5-1, 0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0lambda18, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k108(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.692 ##.%x.693) ((##vcore.+ (bruijn ##.i.11.273 7 1) 1) (##vcore.+ (bruijn ##.idx.274 7 2) 1)) (##qualified-call (vanity hashtable validate-robinhood-impl ##.loop.1.272) #f (bruijn ##.loop.1.272 8 0) (bruijn ##.%k.476 7 0) (bruijn ##.%x.692 0 0) (bruijn ##.%x.693 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k85) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k108))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k85, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k108, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k83) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k84))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k83, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k84, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k81) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k82))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k82, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k79) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k80))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k80, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k77) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k78))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k77, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k78, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.689 ##.%p.690) ((##vcore.vector-length (bruijn ##.vec.268 5 0)) (##vcore.< (bruijn ##.i.11.273 1 1) (bruijn ##.%x.689 0 0))) (if (bruijn ##.%p.690 0 1) (basic-block 1 1 (##.x.691) ((##vcore.vector-ref (bruijn ##.vec.268 6 0) (bruijn ##.i.11.273 2 1))) ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k75) (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k76))) (##qualified-call (vanity hashtable validate-robinhood-impl ##.finalize.2.271) #f (bruijn ##.finalize.2.271 3 0) (bruijn ##.%k.476 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k76, self)))));
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
       _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0lambda17" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272")) (##qualified-call (vanity hashtable validate-robinhood-impl ##.loop.1.272) #f (bruijn ##.loop.1.272 0 0) (bruijn ##.%k.473 5 0) 0 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.475 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
static void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0lambda17) (close "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0lambda17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271, self)))));
}
void _V50_V0vanity_V0hashtable_V0validate__robinhood__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0validate__robinhood__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.687) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.267 1 2) 3)) (letrec 2 ((bruijn ##.%x.687 1 0) #f) (basic-block 1 1 (##.%x.688) ((##vcore.vector-length (bruijn ##.vec.268 1 0))) (set! (close _V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0k74) (bruijn ##.capacity.269 1 1) (bruijn ##.%x.688 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[2],
      VEncodeInt(3l));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0k74, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[0]
    );
    }
    }
    }
}
void _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VWaybillUnpack") (bruijn ##.%k.509 0 0) (bruijn ##.waybill.293 1 1))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      _var0,
      statics->vars[1]);
}
void _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda21, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // ((bruijn ##.%k.510 0 0) (bruijn ##.k.295 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
void _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.waybill.293 0 1) (##vcore.call-with-values (bruijn ##.%k.508 0 0) (close _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda20) (close _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda21)) ((bruijn ##.%k.508 0 0) #void))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda21, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
}
void _V50_V0vanity_V0hashtable_V0hash__table__keyvector(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__table__keyvector" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__table__keyvector, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.706) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.292 1 1) 3)) ((bruijn ##.vector-map.53 3 4) (bruijn ##.%k.507 1 0) (close _V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda19) (bruijn ##.%x.706 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda19, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hashtable_V0sequence_G(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0sequence_G" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0sequence_G, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (##qualified-call (vanity hashtable sequence<) #t (bruijn ##.sequence<.108 1 20) (bruijn ##.%k.512 0 0) (bruijn ##.b.298 0 2) (bruijn ##.a.297 0 1) (bruijn ##.capacity.299 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var2;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0sequence_L, _V60_V0vanity_V0hashtable)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hashtable_V0sequence_L(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0hashtable_V0sequence_L_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0sequence_L_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0sequence_L_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.709 ##.%r.710) ((##vcore.quotient (bruijn ##.capacity.302 3 3) 2) (##vcore.< 0 (bruijn ##.%x.514 1 0) (bruijn ##.%x.709 0 0))) ((bruijn ##.%k.513 3 0) (bruijn ##.%r.710 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VQuot2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      VEncodeInt(0l),
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0sequence_L(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0sequence_L" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0sequence_L, got ~D~N"
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
  // (basic-block 2 2 (##.%x.707 ##.%x.708) ((##vcore.- (bruijn ##.b.301 1 2) (bruijn ##.a.300 1 1)) (##vcore.- (bruijn ##.capacity.302 1 3) 1)) ((bruijn ##.bitwise-and.50 3 1) (close _V50_V0vanity_V0hashtable_V0sequence_L_V0k109) (bruijn ##.%x.707 0 0) (bruijn ##.%x.708 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0sequence_L_V0k109, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VWaybillUnpack") (bruijn ##.%k.519 0 0) (bruijn ##.waybill.303 1 1))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      _var0,
      statics->vars[1]);
}
void _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda23, got ~D~N"
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
  // (basic-block 1 1 (##.%p.711) ((##vcore.not (bruijn ##.wb-broken?.305 1 1))) (if (bruijn ##.%p.711 0 0) (basic-block 1 1 (##.%r.712) ((##vcore.eq? (bruijn ##.wb-key.306 2 2) (bruijn ##.key.304 3 2))) ((bruijn ##.%k.520 2 0) (bruijn ##.%r.712 0 0))) ((bruijn ##.%k.520 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[2],
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.%k.518 0 0) (close _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda22) (close _V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda23, self)))));
}
void _V50_V0vanity_V0hashtable_V0hash__poverty_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__poverty_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__poverty_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.714 ##.%x.715) ((##vcore.- (bruijn ##.idx.309 3 2) (bruijn ##.%x.525 1 0)) (##vcore.- (bruijn ##.capacity.310 3 3) 1)) ((bruijn ##.bitwise-and.50 5 1) (bruijn ##.%k.522 3 0) (bruijn ##.%x.714 0 0) (bruijn ##.%x.715 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__poverty(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__poverty" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__poverty, got ~D~N"
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
  // (basic-block 1 1 (##.%x.713) ((##vcore.- (bruijn ##.capacity.310 1 3) 1)) ((bruijn ##.bitwise-and.50 3 1) (close _V50_V0vanity_V0hashtable_V0hash__poverty_V0k110) (bruijn ##.hash.308 1 1) (bruijn ##.%x.713 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty_V0k110, self)))),
      statics->vars[1],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hashtable_V0hash__slot(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0hash__slot" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0hash__slot, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.716) ((##vcore.- (bruijn ##.capacity.312 1 2) 1)) ((bruijn ##.bitwise-and.50 3 1) (bruijn ##.%k.527 1 0) (bruijn ##.hash.311 1 1) (bruijn ##.%x.716 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[1],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hashtable_V0make__entry_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0make__entry_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0make__entry_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.717) ((##vcore.eq? (bruijn ##.h.318 3 0) (bruijn ##.%x.531 1 0))) (if (bruijn ##.%p.717 0 0) ((bruijn ##.%k.529 4 0) (bruijn ##.waybill.319 2 0)) (##qualified-call (vanity hashtable make-entry) #t (bruijn ##.make-entry.112 5 24) (bruijn ##.%k.529 4 0) (bruijn ##.weakness.313 4 1) (bruijn ##.stability.314 4 2) (bruijn ##.clearinghouse.315 4 3) (bruijn ##.key.316 4 4) (bruijn ##.datum.317 4 5))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    VWORD _arg4 = 
      statics->up->up->up->vars[4];
    VWORD _arg5 = 
      statics->up->up->up->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__entry, _V60_V0vanity_V0hashtable)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0hashtable_V0make__entry(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
    }
}
void _V50_V0vanity_V0hashtable_V0make__entry_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0make__entry_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0make__entry_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-hash.116 3 28) (close _V50_V0vanity_V0hashtable_V0make__entry_V0k113) (bruijn ##.key.316 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__entry_V0k113, self)))),
      statics->up->vars[4]);
}
void _V50_V0vanity_V0hashtable_V0make__entry_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0make__entry_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0make__entry_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMakeWaybill") (close _V50_V0vanity_V0hashtable_V0make__entry_V0k112) (bruijn ##.weakness.313 1 1) (bruijn ##.stability.314 1 2) (bruijn ##.clearinghouse.315 1 3) (bruijn ##.key.316 1 4) (bruijn ##.datum.317 1 5) (bruijn ##.h.318 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeWaybill, 7,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__entry_V0k112, self)))),
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4],
      statics->vars[5],
      _var0);
}
void _V50_V0vanity_V0hashtable_V0make__entry(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0hashtable_V0make__entry" };
 VRecordCall2(runtime, &dbg);
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0make__entry, got ~D~N"
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
  // ((bruijn ##.current-hash.116 1 28) (close _V50_V0vanity_V0hashtable_V0make__entry_V0k111) (bruijn ##.key.316 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__entry_V0k111, self)))),
      _var4);
}
static void _V10_Dmake__hash__table_D113_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__hash__table_D113_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D113_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.545 1 0) ((bruijn ##.equal?.54 4 5) (bruijn ##.%k.546 0 0) (bruijn ##.hash.327 2 2) (bruijn ##.current-hash.116 3 28)) ((bruijn ##.%k.546 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 3,
      _var0,
      statics->up->vars[2],
      statics->up->up->vars[28]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmake__hash__table_D113_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__hash__table_D113_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D113_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.543 1 0) ((bruijn ##.%k.544 0 0) #void) ((bruijn ##.error.51 5 2) (bruijn ##.%k.544 0 0) (##string ##.string.1619)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1619.sym, VPOINTER_OTHER));
}
}
static void _V10_Dmake__hash__table_D113_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VMakeHashTableImpl") (bruijn ##.%k.542 2 0) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.116 3 28) 16 (bruijn ##.weakness.328 2 3) (bruijn ##.stability.329 2 4) 0.8)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTableImpl, 7,
      statics->up->vars[0],
      _V40_V10vcore_Deq_Q,
      statics->up->up->vars[28],
      VEncodeInt(16l),
      statics->up->vars[3],
      statics->up->vars[4],
      VEncodeNumber(0.8));
}
static void _V10_Dmake__hash__table_D113_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__hash__table_D113_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D113_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmake__hash__table_D113_V0k117) (close _V10_Dmake__hash__table_D113_V0k118))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D113_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D113_V0k118, self)))));
}
static void _V10_Dmake__hash__table_D113_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__hash__table_D113_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D113_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmake__hash__table_D113_V0k115) (close _V10_Dmake__hash__table_D113_V0k116))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D113_V0k115, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D113_V0k116, self)))));
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hashtable_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hashtable_V0make__hash__table" #t (##pair ##.pair.1608) (1 (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 1 25) (bruijn ##.%k.532 0 0) (bruijn ##.equal?.54 2 5) #f #f #t)) (2 (basic-block 2 2 (##.%x.718 ##.%x.719) ((##vcore.eq? (bruijn ##.equal.320 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.718 0 0))) (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 2 25) (bruijn ##.%k.533 1 0) (bruijn ##.equal.320 1 1) #f #f (bruijn ##.%x.719 0 1)))) (3 (basic-block 2 2 (##.%x.720 ##.%x.721) ((##vcore.eq? (bruijn ##.equal.321 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.720 0 0))) (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 2 25) (bruijn ##.%k.536 1 0) (bruijn ##.equal.321 1 1) (bruijn ##.hash.322 1 2) #f (bruijn ##.%x.721 0 1)))) (4 (basic-block 2 2 (##.%x.722 ##.%x.723) ((##vcore.eq? (bruijn ##.equal.323 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.722 0 0))) (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 2 25) (bruijn ##.%k.539 1 0) (bruijn ##.equal.323 1 1) (bruijn ##.hash.324 1 2) (bruijn ##.weakness.325 1 3) (bruijn ##.%x.723 0 1)))) (5 ((bruijn ##.equal?.54 2 5) (close _V10_Dmake__hash__table_D113_V0k114) (bruijn ##.equal.326 0 1) (##intrinsic ##vcore.eq?))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hashtable_V0make__hash__table, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hashtable_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0hashtable_V0make__hash__table" };
 VRecordCall2(runtime, &dbg);
  // (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 1 25) (bruijn ##.%k.532 0 0) (bruijn ##.equal?.54 2 5) #f #f #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[5];
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__hash__table, _V60_V0vanity_V0hashtable)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hashtable_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hashtable_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0hashtable_V0make__hash__table" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.718 ##.%x.719) ((##vcore.eq? (bruijn ##.equal.320 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.718 0 0))) (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 2 25) (bruijn ##.%k.533 1 0) (bruijn ##.equal.320 1 1) #f #f (bruijn ##.%x.719 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V40_V10vcore_Deq_Q);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__hash__table, _V60_V0vanity_V0hashtable)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hashtable_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0hashtable_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V50_V0vanity_V0hashtable_V0make__hash__table" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.720 ##.%x.721) ((##vcore.eq? (bruijn ##.equal.321 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.720 0 0))) (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 2 25) (bruijn ##.%k.536 1 0) (bruijn ##.equal.321 1 1) (bruijn ##.hash.322 1 2) #f (bruijn ##.%x.721 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V40_V10vcore_Deq_Q);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__hash__table, _V60_V0vanity_V0hashtable)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hashtable_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0hashtable_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V50_V0vanity_V0hashtable_V0make__hash__table" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.%x.722 ##.%x.723) ((##vcore.eq? (bruijn ##.equal.323 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.722 0 0))) (##qualified-call (vanity hashtable make-hash-table) #t (bruijn ##.make-hash-table.113 2 25) (bruijn ##.%k.539 1 0) (bruijn ##.equal.323 1 1) (bruijn ##.hash.324 1 2) (bruijn ##.weakness.325 1 3) (bruijn ##.%x.723 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V40_V10vcore_Deq_Q);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hashtable;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__hash__table, _V60_V0vanity_V0hashtable)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hashtable_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0hashtable_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V50_V0vanity_V0hashtable_V0make__hash__table" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.equal?.54 2 5) (close _V10_Dmake__hash__table_D113_V0k114) (bruijn ##.equal.326 0 1) (##intrinsic ##vcore.eq?))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D113_V0k114, self)))),
      _var1,
      _V40_V10vcore_Deq_Q);
}
void _V50_V0vanity_V0hashtable_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0hashtable_V0make__hash__table, @function\n"
#endif
".globl _V50_V0vanity_V0hashtable_V0make__hash__table\n"
"_V50_V0vanity_V0hashtable_V0make__hash__table:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0hashtable_V0make__hash__table\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0hashtable_V0make__hash__table\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0hashtable_V0make__hash__table\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0hashtable_V0make__hash__table\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0hashtable_V0make__hash__table\n"
"    jmp _V20CaseError__V50_V0vanity_V0hashtable_V0make__hash__table\n"
);
static void _V0vanity_V0hashtable_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity hashtable) 29 ((close "_V50_V0vanity_V0hashtable_V0hash__table___Galist" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__fold" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__map___Glist" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__for__each" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__size" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__delete_B" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__set_B" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__grow" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__ref" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__ref__impl" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__rummage" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__sweep" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0robinhood__shuffle" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__find__impl" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0validate__robinhood" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0validate__robinhood__impl" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__table__keyvector" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0sequence_G" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0sequence_L" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__poverty" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0hash__slot" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0make__entry" (vanity hashtable)) (close "_V50_V0vanity_V0hashtable_V0make__hash__table" (vanity hashtable)) (##basic-intrinsic "VHashBlob") (##intrinsic "VHashCombine") (##intrinsic "VEqHash")) (basic-block 20 20 (##.%x.724 ##.%x.725 ##.%x.726 ##.%x.727 ##.%x.728 ##.%x.729 ##.%x.730 ##.%x.731 ##.%x.732 ##.%x.733 ##.%x.734 ##.%x.735 ##.%x.736 ##.%x.737 ##.%x.738 ##.%x.739 ##.%x.740 ##.%x.741 ##.%x.742 ##.%r.743) ((##vcore.cons 'current-hash (bruijn ##.current-hash.116 1 28)) (##vcore.cons 'make-hash-table (bruijn ##.make-hash-table.113 1 25)) (##vcore.cons 'hash-table-ref (bruijn ##.hash-table-ref.97 1 9)) (##vcore.cons 'hash-table-set! (bruijn ##.hash-table-set!.94 1 6)) (##vcore.cons 'hash-table-delete! (bruijn ##.hash-table-delete!.93 1 5)) (##vcore.cons 'hash-table-size (bruijn ##.hash-table-size.92 1 4)) (##vcore.cons 'hash-table-for-each (bruijn ##.hash-table-for-each.91 1 3)) (##vcore.cons 'hash-table-map->list (bruijn ##.hash-table-map->list.90 1 2)) (##vcore.cons 'hash-table-fold (bruijn ##.hash-table-fold.89 1 1)) (##vcore.cons 'hash-table->alist (bruijn ##.hash-table->alist.88 1 0)) (##vcore.cons (bruijn ##.%x.733 0 9) '()) (##vcore.cons (bruijn ##.%x.732 0 8) (bruijn ##.%x.734 0 10)) (##vcore.cons (bruijn ##.%x.731 0 7) (bruijn ##.%x.735 0 11)) (##vcore.cons (bruijn ##.%x.730 0 6) (bruijn ##.%x.736 0 12)) (##vcore.cons (bruijn ##.%x.729 0 5) (bruijn ##.%x.737 0 13)) (##vcore.cons (bruijn ##.%x.728 0 4) (bruijn ##.%x.738 0 14)) (##vcore.cons (bruijn ##.%x.727 0 3) (bruijn ##.%x.739 0 15)) (##vcore.cons (bruijn ##.%x.726 0 2) (bruijn ##.%x.740 0 16)) (##vcore.cons (bruijn ##.%x.725 0 1) (bruijn ##.%x.741 0 17)) (##vcore.cons (bruijn ##.%x.724 0 0) (bruijn ##.%x.742 0 18))) ((bruijn ##.%k.336 2 0) (bruijn ##.%r.743 0 19))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[29]; } container;
    self = &container.self;
    _V60_V0vanity_V0hashtable = self;
    VInitEnv(self, 29, 29, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table___Galist, _V60_V0vanity_V0hashtable))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold, _V60_V0vanity_V0hashtable))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist, _V60_V0vanity_V0hashtable))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each, _V60_V0vanity_V0hashtable))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__size, _V60_V0vanity_V0hashtable))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B, _V60_V0vanity_V0hashtable))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B, _V60_V0vanity_V0hashtable))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B, _V60_V0vanity_V0hashtable))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow, _V60_V0vanity_V0hashtable))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref, _V60_V0vanity_V0hashtable))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl, _V60_V0vanity_V0hashtable))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage, _V60_V0vanity_V0hashtable))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep, _V60_V0vanity_V0hashtable))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle, _V60_V0vanity_V0hashtable))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B, _V60_V0vanity_V0hashtable))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl, _V60_V0vanity_V0hashtable))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, _V60_V0vanity_V0hashtable))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl, _V60_V0vanity_V0hashtable))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector, _V60_V0vanity_V0hashtable))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0sequence_G, _V60_V0vanity_V0hashtable))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0sequence_L, _V60_V0vanity_V0hashtable))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q, _V60_V0vanity_V0hashtable))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, _V60_V0vanity_V0hashtable))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0hash__slot, _V60_V0vanity_V0hashtable))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__entry, _V60_V0vanity_V0hashtable))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hashtable_V0make__hash__table, _V60_V0vanity_V0hashtable))));
    self->vars[26] = _V40VHashBlob;
    self->vars[27] = _V40VHashCombine;
    self->vars[28] = _V40VEqHash;
    VRegisterStaticEnv("_V0vanity_V0hashtable_V20", &_V60_V0vanity_V0hashtable);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[20]; } container;
    self = &container.self;
    VInitEnv(self, 20, 20, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0current__hash,
      statics->vars[28]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0make__hash__table,
      statics->vars[25]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__ref,
      statics->vars[9]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__set_B,
      statics->vars[6]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__delete_B,
      statics->vars[5]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__size,
      statics->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__for__each,
      statics->vars[3]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__map___Glist,
      statics->vars[2]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__fold,
      statics->vars[1]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table___Galist,
      statics->vars[0]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      VNULL);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[18]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[19]);
    }
    }
}
static void _V0vanity_V0hashtable_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.331 0 0) (close _V0vanity_V0hashtable_V20_V0lambda2) (close _V0vanity_V0hashtable_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0hashtable_V20 = (VFunc)_V0vanity_V0hashtable_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0equal = VEncodePointer(VInternSymbol(-1649775154, &_VW_V0equal.sym), VPOINTER_OTHER);
  _V0h = VEncodePointer(VInternSymbol(-1202196209, &_VW_V0h.sym), VPOINTER_OTHER);
  _V0a = VEncodePointer(VInternSymbol(-1450414501, &_VW_V0a.sym), VPOINTER_OTHER);
  _V0d = VEncodePointer(VInternSymbol(-1870850844, &_VW_V0d.sym), VPOINTER_OTHER);
  _V0k = VEncodePointer(VInternSymbol(-989127837, &_VW_V0k.sym), VPOINTER_OTHER);
  _V0b = VEncodePointer(VInternSymbol(452173723, &_VW_V0b.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D2_D271 = VEncodePointer(VInternSymbol(-956294165, &_VW_V10_Dfinalize_D2_D271.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D15_D281 = VEncodePointer(VInternSymbol(-689664635, &_VW_V10_Dfinalize_D15_D281.sym), VPOINTER_OTHER);
  _V0p_D25 = VEncodePointer(VInternSymbol(880760847, &_VW_V0p_D25.sym), VPOINTER_OTHER);
  _V0p_D24 = VEncodePointer(VInternSymbol(-1330051346, &_VW_V0p_D24.sym), VPOINTER_OTHER);
  _V0p_D23 = VEncodePointer(VInternSymbol(915043731, &_VW_V0p_D23.sym), VPOINTER_OTHER);
  _V0jpoverty = VEncodePointer(VInternSymbol(1609474888, &_VW_V0jpoverty.sym), VPOINTER_OTHER);
  _V0jslot = VEncodePointer(VInternSymbol(-1102660262, &_VW_V0jslot.sym), VPOINTER_OTHER);
  _V0jhash = VEncodePointer(VInternSymbol(-708203551, &_VW_V0jhash.sym), VPOINTER_OTHER);
  _V0y = VEncodePointer(VInternSymbol(-1581629518, &_VW_V0y.sym), VPOINTER_OTHER);
  _V0jdx = VEncodePointer(VInternSymbol(-702838730, &_VW_V0jdx.sym), VPOINTER_OTHER);
  _V0loop_D14 = VEncodePointer(VInternSymbol(-753474745, &_VW_V0loop_D14.sym), VPOINTER_OTHER);
  _V0j = VEncodePointer(VInternSymbol(523840010, &_VW_V0j.sym), VPOINTER_OTHER);
  _V10_Dloop_D14_D282 = VEncodePointer(VInternSymbol(1263303913, &_VW_V10_Dloop_D14_D282.sym), VPOINTER_OTHER);
  _V0finalize_D15 = VEncodePointer(VInternSymbol(682581202, &_VW_V0finalize_D15.sym), VPOINTER_OTHER);
  _V0p_D12 = VEncodePointer(VInternSymbol(252023292, &_VW_V0p_D12.sym), VPOINTER_OTHER);
  _V0ipoverty = VEncodePointer(VInternSymbol(-1781080891, &_VW_V0ipoverty.sym), VPOINTER_OTHER);
  _V0islot = VEncodePointer(VInternSymbol(1483921298, &_VW_V0islot.sym), VPOINTER_OTHER);
  _V0ihash = VEncodePointer(VInternSymbol(-564899662, &_VW_V0ihash.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0loop_D1 = VEncodePointer(VInternSymbol(163867650, &_VW_V0loop_D1.sym), VPOINTER_OTHER);
  _V0i_D11 = VEncodePointer(VInternSymbol(63805177, &_VW_V0i_D11.sym), VPOINTER_OTHER);
  _V10_Dloop_D1_D272 = VEncodePointer(VInternSymbol(1837390098, &_VW_V10_Dloop_D1_D272.sym), VPOINTER_OTHER);
  _V0finalize_D2 = VEncodePointer(VInternSymbol(-624487110, &_VW_V0finalize_D2.sym), VPOINTER_OTHER);
  _V0what__we__did = VEncodePointer(VInternSymbol(-840314250, &_VW_V0what__we__did.sym), VPOINTER_OTHER);
  _V10_Dloop_D260 = VEncodePointer(VInternSymbol(-253809386, &_VW_V10_Dloop_D260.sym), VPOINTER_OTHER);
  _V10_Dloop_D248 = VEncodePointer(VInternSymbol(1987685019, &_VW_V10_Dloop_D248.sym), VPOINTER_OTHER);
  _V10_Dloop_D237 = VEncodePointer(VInternSymbol(1859183064, &_VW_V10_Dloop_D237.sym), VPOINTER_OTHER);
  _V0oldidx = VEncodePointer(VInternSymbol(-396043670, &_VW_V0oldidx.sym), VPOINTER_OTHER);
  _V10_Dloop_D229 = VEncodePointer(VInternSymbol(1074387962, &_VW_V10_Dloop_D229.sym), VPOINTER_OTHER);
  _V0new__waybill = VEncodePointer(VInternSymbol(-165056556, &_VW_V0new__waybill.sym), VPOINTER_OTHER);
  _V0starting__occupancy = VEncodePointer(VInternSymbol(-281725484, &_VW_V0starting__occupancy.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D214 = VEncodePointer(VInternSymbol(167607273, &_VW_V10_Dloop_D214.sym), VPOINTER_OTHER);
  _V0wb__datum = VEncodePointer(VInternSymbol(785154277, &_VW_V0wb__datum.sym), VPOINTER_OTHER);
  _V0wb__key = VEncodePointer(VInternSymbol(164657678, &_VW_V0wb__key.sym), VPOINTER_OTHER);
  _V0wb__broken_Q = VEncodePointer(VInternSymbol(1612916134, &_VW_V0wb__broken_Q.sym), VPOINTER_OTHER);
  _V0broken_Q = VEncodePointer(VInternSymbol(1060314822, &_VW_V0broken_Q.sym), VPOINTER_OTHER);
  _V0fallback__ref = VEncodePointer(VInternSymbol(206081570, &_VW_V0fallback__ref.sym), VPOINTER_OTHER);
  _V10_Dfallback__ref_D197 = VEncodePointer(VInternSymbol(-2092233842, &_VW_V10_Dfallback__ref_D197.sym), VPOINTER_OTHER);
  _V0thunk = VEncodePointer(VInternSymbol(447097569, &_VW_V0thunk.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D27_D181 = VEncodePointer(VInternSymbol(-2024118854, &_VW_V10_Dfinalize_D27_D181.sym), VPOINTER_OTHER);
  _V0loop_D26 = VEncodePointer(VInternSymbol(906589261, &_VW_V0loop_D26.sym), VPOINTER_OTHER);
  _V0i_D36 = VEncodePointer(VInternSymbol(1523595664, &_VW_V0i_D36.sym), VPOINTER_OTHER);
  _V10_Dloop_D26_D182 = VEncodePointer(VInternSymbol(1267770981, &_VW_V10_Dloop_D26_D182.sym), VPOINTER_OTHER);
  _V0_Mr = VEncodePointer(VInternSymbol(-1018178187, &_VW_V0_Mr.sym), VPOINTER_OTHER);
  _V0finalize_D27 = VEncodePointer(VInternSymbol(936109511, &_VW_V0finalize_D27.sym), VPOINTER_OTHER);
  _V0load__factor = VEncodePointer(VInternSymbol(-615653104, &_VW_V0load__factor.sym), VPOINTER_OTHER);
  _V0old__capacity = VEncodePointer(VInternSymbol(-1831790294, &_VW_V0old__capacity.sym), VPOINTER_OTHER);
  _V0old__vec = VEncodePointer(VInternSymbol(-217031581, &_VW_V0old__vec.sym), VPOINTER_OTHER);
  _V0vec__entry__poverty = VEncodePointer(VInternSymbol(-1223766403, &_VW_V0vec__entry__poverty.sym), VPOINTER_OTHER);
  _V0vec__entry = VEncodePointer(VInternSymbol(-1275506783, &_VW_V0vec__entry.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0poverty = VEncodePointer(VInternSymbol(1311027342, &_VW_V0poverty.sym), VPOINTER_OTHER);
  _V10_Dloop_D166 = VEncodePointer(VInternSymbol(323258740, &_VW_V10_Dloop_D166.sym), VPOINTER_OTHER);
  _V0capacity = VEncodePointer(VInternSymbol(-531690143, &_VW_V0capacity.sym), VPOINTER_OTHER);
  _V0occupancy = VEncodePointer(VInternSymbol(1973501850, &_VW_V0occupancy.sym), VPOINTER_OTHER);
  _V0clearinghouse = VEncodePointer(VInternSymbol(509450510, &_VW_V0clearinghouse.sym), VPOINTER_OTHER);
  _V0stability = VEncodePointer(VInternSymbol(-1147833212, &_VW_V0stability.sym), VPOINTER_OTHER);
  _V0weakness = VEncodePointer(VInternSymbol(362110420, &_VW_V0weakness.sym), VPOINTER_OTHER);
  _V0weakness__stability = VEncodePointer(VInternSymbol(179249394, &_VW_V0weakness__stability.sym), VPOINTER_OTHER);
  _V0entry = VEncodePointer(VInternSymbol(216197667, &_VW_V0entry.sym), VPOINTER_OTHER);
  _V0rummaged__waybill = VEncodePointer(VInternSymbol(420383001, &_VW_V0rummaged__waybill.sym), VPOINTER_OTHER);
  _V0idx = VEncodePointer(VInternSymbol(-651830179, &_VW_V0idx.sym), VPOINTER_OTHER);
  _V0hash = VEncodePointer(VInternSymbol(827081031, &_VW_V0hash.sym), VPOINTER_OTHER);
  _V10_Dfinalize_D39_D133 = VEncodePointer(VInternSymbol(-2135184952, &_VW_V10_Dfinalize_D39_D133.sym), VPOINTER_OTHER);
  _V0broke_Q = VEncodePointer(VInternSymbol(-292289739, &_VW_V0broke_Q.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0waybill = VEncodePointer(VInternSymbol(-187153022, &_VW_V0waybill.sym), VPOINTER_OTHER);
  _V0loop_D38 = VEncodePointer(VInternSymbol(884600928, &_VW_V0loop_D38.sym), VPOINTER_OTHER);
  _V0i_D48 = VEncodePointer(VInternSymbol(1176747614, &_VW_V0i_D48.sym), VPOINTER_OTHER);
  _V10_Dloop_D38_D134 = VEncodePointer(VInternSymbol(-749411504, &_VW_V10_Dloop_D38_D134.sym), VPOINTER_OTHER);
  _V0vec = VEncodePointer(VInternSymbol(1875852456, &_VW_V0vec.sym), VPOINTER_OTHER);
  _V0finalize_D39 = VEncodePointer(VInternSymbol(-842452232, &_VW_V0finalize_D39.sym), VPOINTER_OTHER);
  _V0acc = VEncodePointer(VInternSymbol(112110611, &_VW_V0acc.sym), VPOINTER_OTHER);
  _V0datum = VEncodePointer(VInternSymbol(-75001725, &_VW_V0datum.sym), VPOINTER_OTHER);
  _V0key = VEncodePointer(VInternSymbol(769737524, &_VW_V0key.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0seed = VEncodePointer(VInternSymbol(-1873337552, &_VW_V0seed.sym), VPOINTER_OTHER);
  _V0f = VEncodePointer(VInternSymbol(-265621939, &_VW_V0f.sym), VPOINTER_OTHER);
  _V0current__hash = VEncodePointer(VInternSymbol(-1388026837, &_VW_V0current__hash.sym), VPOINTER_OTHER);
  _V0hash__combine = VEncodePointer(VInternSymbol(-1675037197, &_VW_V0hash__combine.sym), VPOINTER_OTHER);
  _V0hash__blob = VEncodePointer(VInternSymbol(2063833725, &_VW_V0hash__blob.sym), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VInternSymbol(-2146525516, &_VW_V0make__hash__table.sym), VPOINTER_OTHER);
  _V0make__entry = VEncodePointer(VInternSymbol(1291817318, &_VW_V0make__entry.sym), VPOINTER_OTHER);
  _V0hash__slot = VEncodePointer(VInternSymbol(215194152, &_VW_V0hash__slot.sym), VPOINTER_OTHER);
  _V0hash__poverty = VEncodePointer(VInternSymbol(-996435922, &_VW_V0hash__poverty.sym), VPOINTER_OTHER);
  _V0waybill__key__matches_Q = VEncodePointer(VInternSymbol(1937296247, &_VW_V0waybill__key__matches_Q.sym), VPOINTER_OTHER);
  _V0sequence_L = VEncodePointer(VInternSymbol(-1150764458, &_VW_V0sequence_L.sym), VPOINTER_OTHER);
  _V0sequence_G = VEncodePointer(VInternSymbol(843317728, &_VW_V0sequence_G.sym), VPOINTER_OTHER);
  _V0hash__table__keyvector = VEncodePointer(VInternSymbol(1074803852, &_VW_V0hash__table__keyvector.sym), VPOINTER_OTHER);
  _V0validate__robinhood__impl = VEncodePointer(VInternSymbol(-2144947318, &_VW_V0validate__robinhood__impl.sym), VPOINTER_OTHER);
  _V0validate__robinhood = VEncodePointer(VInternSymbol(-2097262243, &_VW_V0validate__robinhood.sym), VPOINTER_OTHER);
  _V0hash__table__find__impl = VEncodePointer(VInternSymbol(-2079249859, &_VW_V0hash__table__find__impl.sym), VPOINTER_OTHER);
  _V0hash__table__reinsert_B = VEncodePointer(VInternSymbol(-2133668485, &_VW_V0hash__table__reinsert_B.sym), VPOINTER_OTHER);
  _V0robinhood__shuffle = VEncodePointer(VInternSymbol(-614364428, &_VW_V0robinhood__shuffle.sym), VPOINTER_OTHER);
  _V0hash__table__sweep = VEncodePointer(VInternSymbol(595503036, &_VW_V0hash__table__sweep.sym), VPOINTER_OTHER);
  _V0hash__table__rummage = VEncodePointer(VInternSymbol(1862988776, &_VW_V0hash__table__rummage.sym), VPOINTER_OTHER);
  _V0hash__table__ref__impl = VEncodePointer(VInternSymbol(-513220895, &_VW_V0hash__table__ref__impl.sym), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VInternSymbol(987278019, &_VW_V0hash__table__ref.sym), VPOINTER_OTHER);
  _V0hash__table__grow = VEncodePointer(VInternSymbol(-1569202071, &_VW_V0hash__table__grow.sym), VPOINTER_OTHER);
  _V0hash__table__set__impl_B = VEncodePointer(VInternSymbol(1880432210, &_VW_V0hash__table__set__impl_B.sym), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VInternSymbol(-799540310, &_VW_V0hash__table__set_B.sym), VPOINTER_OTHER);
  _V0hash__table__delete_B = VEncodePointer(VInternSymbol(1653184530, &_VW_V0hash__table__delete_B.sym), VPOINTER_OTHER);
  _V0hash__table__size = VEncodePointer(VInternSymbol(2129173623, &_VW_V0hash__table__size.sym), VPOINTER_OTHER);
  _V0hash__table__for__each = VEncodePointer(VInternSymbol(-188805111, &_VW_V0hash__table__for__each.sym), VPOINTER_OTHER);
  _V0hash__table__map___Glist = VEncodePointer(VInternSymbol(-793455360, &_VW_V0hash__table__map___Glist.sym), VPOINTER_OTHER);
  _V0hash__table__fold = VEncodePointer(VInternSymbol(-579030885, &_VW_V0hash__table__fold.sym), VPOINTER_OTHER);
  _V0ht = VEncodePointer(VInternSymbol(1200510951, &_VW_V0ht.sym), VPOINTER_OTHER);
  _V0hash__table___Galist = VEncodePointer(VInternSymbol(-586883858, &_VW_V0hash__table___Galist.sym), VPOINTER_OTHER);
  _V0hashtable = VEncodePointer(VInternSymbol(2012929375, &_VW_V0hashtable.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VInternSymbol(848807183, &_VW_V0vector__map.sym), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VInternSymbol(-298314537, &_VW_V0displayln.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0bitwise__and = VEncodePointer(VInternSymbol(1093359781, &_VW_V0bitwise__and.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V40VEqHash = VEncodePointer(VLookupConstant("_V40VEqHash", &_VW_V40VEqHash), VPOINTER_CLOSURE);
  _V40VHashCombine = VEncodePointer(VLookupConstant("_V40VHashCombine", &_VW_V40VHashCombine), VPOINTER_CLOSURE);
  _V40VHashBlob = VEncodePointer(VLookupConstant("_V40VHashBlob", &_VW_V40VHashBlob), VPOINTER_CLOSURE);
  _V40VMakeHashTableImpl = VEncodePointer(VLookupConstant("_V40VMakeHashTableImpl", &_VW_V40VMakeHashTableImpl), VPOINTER_CLOSURE);
  _V10_Dpair_D1618.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1618.rest = VEncodePointer(&_V10_Dpair_D1617, VPOINTER_PAIR);
  _V10_Dpair_D1617.first = VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR);
  _V10_Dpair_D1617.rest = VNULL;
  _V10_Dpair_D1616.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1616.rest = VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR);
  _V10_Dpair_D1615.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D1615.rest = VEncodePointer(&_V10_Dpair_D1613, VPOINTER_PAIR);
  _V10_Dpair_D1614.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1614.rest = VEncodePointer(&_V10_Dpair_D1613, VPOINTER_PAIR);
  _V10_Dpair_D1613.first = VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR);
  _V10_Dpair_D1613.rest = VNULL;
  _V10_Dpair_D1612.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1612.rest = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1611.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D1611.rest = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1610.first = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1610.rest = VNULL;
  _V10_Dpair_D1609.first = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1609.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V10_Dpair_D1608.first = VEncodePointer(&_V10_Dpair_D1607, VPOINTER_PAIR);
  _V10_Dpair_D1608.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1607.first = VEncodePointer(&_V10_Dpair_D1588, VPOINTER_PAIR);
  _V10_Dpair_D1607.rest = VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR);
  _V10_Dpair_D1606.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D1606.rest = VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR);
  _V10_Dpair_D1605.first = VEncodePointer(&_V10_Dpair_D1590, VPOINTER_PAIR);
  _V10_Dpair_D1605.rest = VEncodePointer(&_V10_Dpair_D1604, VPOINTER_PAIR);
  _V10_Dpair_D1604.first = VEncodePointer(&_V10_Dpair_D1592, VPOINTER_PAIR);
  _V10_Dpair_D1604.rest = VEncodePointer(&_V10_Dpair_D1603, VPOINTER_PAIR);
  _V10_Dpair_D1603.first = VEncodePointer(&_V10_Dpair_D1596, VPOINTER_PAIR);
  _V10_Dpair_D1603.rest = VEncodePointer(&_V10_Dpair_D1602, VPOINTER_PAIR);
  _V10_Dpair_D1602.first = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1602.rest = VNULL;
  _V10_Dpair_D1601.first = _V0_Mk;
  _V10_Dpair_D1601.rest = VEncodePointer(&_V10_Dpair_D1600, VPOINTER_PAIR);
  _V10_Dpair_D1600.first = _V0equal;
  _V10_Dpair_D1600.rest = VEncodePointer(&_V10_Dpair_D1599, VPOINTER_PAIR);
  _V10_Dpair_D1599.first = _V0hash;
  _V10_Dpair_D1599.rest = VEncodePointer(&_V10_Dpair_D1598, VPOINTER_PAIR);
  _V10_Dpair_D1598.first = _V0weakness;
  _V10_Dpair_D1598.rest = VEncodePointer(&_V10_Dpair_D1597, VPOINTER_PAIR);
  _V10_Dpair_D1597.first = _V0stability;
  _V10_Dpair_D1597.rest = VNULL;
  _V10_Dpair_D1596.first = _V0_Mk;
  _V10_Dpair_D1596.rest = VEncodePointer(&_V10_Dpair_D1595, VPOINTER_PAIR);
  _V10_Dpair_D1595.first = _V0equal;
  _V10_Dpair_D1595.rest = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1594.first = _V0hash;
  _V10_Dpair_D1594.rest = VEncodePointer(&_V10_Dpair_D1593, VPOINTER_PAIR);
  _V10_Dpair_D1593.first = _V0weakness;
  _V10_Dpair_D1593.rest = VNULL;
  _V10_Dpair_D1592.first = _V0_Mk;
  _V10_Dpair_D1592.rest = VEncodePointer(&_V10_Dpair_D1591, VPOINTER_PAIR);
  _V10_Dpair_D1591.first = _V0equal;
  _V10_Dpair_D1591.rest = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D1590.first = _V0_Mk;
  _V10_Dpair_D1590.rest = VEncodePointer(&_V10_Dpair_D1589, VPOINTER_PAIR);
  _V10_Dpair_D1589.first = _V0equal;
  _V10_Dpair_D1589.rest = VNULL;
  _V10_Dpair_D1588.first = _V0vanity;
  _V10_Dpair_D1588.rest = VEncodePointer(&_V10_Dpair_D1587, VPOINTER_PAIR);
  _V10_Dpair_D1587.first = _V0hashtable;
  _V10_Dpair_D1587.rest = VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR);
  _V10_Dpair_D1586.first = _V0make__hash__table;
  _V10_Dpair_D1586.rest = VNULL;
  _V10_Dpair_D1585.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1585.rest = VEncodePointer(&_V10_Dpair_D1584, VPOINTER_PAIR);
  _V10_Dpair_D1584.first = VEncodePointer(&_V10_Dpair_D1583, VPOINTER_PAIR);
  _V10_Dpair_D1584.rest = VNULL;
  _V10_Dpair_D1583.first = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D1583.rest = VEncodePointer(&_V10_Dpair_D1580, VPOINTER_PAIR);
  _V10_Dpair_D1582.first = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1582.rest = VEncodePointer(&_V10_Dpair_D1581, VPOINTER_PAIR);
  _V10_Dpair_D1581.first = VEncodePointer(&_V10_Dpair_D1580, VPOINTER_PAIR);
  _V10_Dpair_D1581.rest = VNULL;
  _V10_Dpair_D1580.first = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1580.rest = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V40VMakeWaybill = VEncodePointer(VLookupConstant("_V40VMakeWaybill", &_VW_V40VMakeWaybill), VPOINTER_CLOSURE);
  _V10_Dpair_D1579.first = VEncodePointer(&_V10_Dpair_D1576, VPOINTER_PAIR);
  _V10_Dpair_D1579.rest = VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR);
  _V10_Dpair_D1578.first = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V10_Dpair_D1578.rest = VNULL;
  _V10_Dpair_D1577.first = VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR);
  _V10_Dpair_D1577.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1576.first = VEncodeBool(false);
  _V10_Dpair_D1576.rest = VEncodePointer(&_V10_Dpair_D1575, VPOINTER_PAIR);
  _V10_Dpair_D1575.first = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1575.rest = VNULL;
  _V10_Dpair_D1574.first = _V0h;
  _V10_Dpair_D1574.rest = VNULL;
  _V10_Dpair_D1573.first = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1573.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1572.first = VEncodePointer(&_V10_Dpair_D1566, VPOINTER_PAIR);
  _V10_Dpair_D1572.rest = VEncodePointer(&_V10_Dpair_D1571, VPOINTER_PAIR);
  _V10_Dpair_D1571.first = VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR);
  _V10_Dpair_D1571.rest = VNULL;
  _V10_Dpair_D1570.first = _V0_Mk;
  _V10_Dpair_D1570.rest = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1569.first = _V0weakness;
  _V10_Dpair_D1569.rest = VEncodePointer(&_V10_Dpair_D1568, VPOINTER_PAIR);
  _V10_Dpair_D1568.first = _V0stability;
  _V10_Dpair_D1568.rest = VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR);
  _V10_Dpair_D1567.first = _V0clearinghouse;
  _V10_Dpair_D1567.rest = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V10_Dpair_D1566.first = _V0vanity;
  _V10_Dpair_D1566.rest = VEncodePointer(&_V10_Dpair_D1565, VPOINTER_PAIR);
  _V10_Dpair_D1565.first = _V0hashtable;
  _V10_Dpair_D1565.rest = VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR);
  _V10_Dpair_D1564.first = _V0make__entry;
  _V10_Dpair_D1564.rest = VNULL;
  _V10_Dpair_D1563.first = VEncodePointer(&_V10_Dpair_D1562, VPOINTER_PAIR);
  _V10_Dpair_D1563.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1562.first = VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR);
  _V10_Dpair_D1562.rest = VEncodePointer(&_V10_Dpair_D1561, VPOINTER_PAIR);
  _V10_Dpair_D1561.first = VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR);
  _V10_Dpair_D1561.rest = VNULL;
  _V10_Dpair_D1560.first = _V0_Mk;
  _V10_Dpair_D1560.rest = VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR);
  _V10_Dpair_D1559.first = _V0hash;
  _V10_Dpair_D1559.rest = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1558.first = _V0vanity;
  _V10_Dpair_D1558.rest = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1557.first = _V0hashtable;
  _V10_Dpair_D1557.rest = VEncodePointer(&_V10_Dpair_D1556, VPOINTER_PAIR);
  _V10_Dpair_D1556.first = _V0hash__slot;
  _V10_Dpair_D1556.rest = VNULL;
  _V10_Dpair_D1555.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1555.rest = VEncodePointer(&_V10_Dpair_D1554, VPOINTER_PAIR);
  _V10_Dpair_D1554.first = VEncodePointer(&_V10_Dpair_D1553, VPOINTER_PAIR);
  _V10_Dpair_D1554.rest = VNULL;
  _V10_Dpair_D1553.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1553.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1552.first = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1552.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1551.first = VEncodePointer(&_V10_Dpair_D1550, VPOINTER_PAIR);
  _V10_Dpair_D1551.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1550.first = VEncodePointer(&_V10_Dpair_D1545, VPOINTER_PAIR);
  _V10_Dpair_D1550.rest = VEncodePointer(&_V10_Dpair_D1549, VPOINTER_PAIR);
  _V10_Dpair_D1549.first = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1549.rest = VNULL;
  _V10_Dpair_D1548.first = _V0_Mk;
  _V10_Dpair_D1548.rest = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1547.first = _V0hash;
  _V10_Dpair_D1547.rest = VEncodePointer(&_V10_Dpair_D1546, VPOINTER_PAIR);
  _V10_Dpair_D1546.first = _V0idx;
  _V10_Dpair_D1546.rest = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1545.first = _V0vanity;
  _V10_Dpair_D1545.rest = VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR);
  _V10_Dpair_D1544.first = _V0hashtable;
  _V10_Dpair_D1544.rest = VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR);
  _V10_Dpair_D1543.first = _V0hash__poverty;
  _V10_Dpair_D1543.rest = VNULL;
  _V10_Dpair_D1542.first = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1542.rest = VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR);
  _V10_Dpair_D1541.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1541.rest = VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR);
  _V10_Dpair_D1540.first = VEncodePointer(&_V10_Dpair_D1539, VPOINTER_PAIR);
  _V10_Dpair_D1540.rest = VNULL;
  _V10_Dpair_D1539.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1539.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1538.first = VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR);
  _V10_Dpair_D1538.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1537.first = VEncodePointer(&_V10_Dpair_D1533, VPOINTER_PAIR);
  _V10_Dpair_D1537.rest = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1536.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1536.rest = VNULL;
  _V10_Dpair_D1535.first = _V0_Mk;
  _V10_Dpair_D1535.rest = VEncodePointer(&_V10_Dpair_D1534, VPOINTER_PAIR);
  _V10_Dpair_D1534.first = _V0waybill;
  _V10_Dpair_D1534.rest = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D1533.first = _V0vanity;
  _V10_Dpair_D1533.rest = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1532.first = _V0hashtable;
  _V10_Dpair_D1532.rest = VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR);
  _V10_Dpair_D1531.first = _V0waybill__key__matches_Q;
  _V10_Dpair_D1531.rest = VNULL;
  _V10_Dpair_D1530.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1530.rest = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1529.first = VEncodePointer(&_V10_Dpair_D1528, VPOINTER_PAIR);
  _V10_Dpair_D1529.rest = VNULL;
  _V10_Dpair_D1528.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1528.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1527.first = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1527.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1526.first = VEncodePointer(&_V10_Dpair_D1525, VPOINTER_PAIR);
  _V10_Dpair_D1526.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1525.first = VEncodePointer(&_V10_Dpair_D1524, VPOINTER_PAIR);
  _V10_Dpair_D1525.rest = VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR);
  _V10_Dpair_D1524.first = _V0vanity;
  _V10_Dpair_D1524.rest = VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR);
  _V10_Dpair_D1523.first = _V0hashtable;
  _V10_Dpair_D1523.rest = VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR);
  _V10_Dpair_D1522.first = _V0sequence_L;
  _V10_Dpair_D1522.rest = VNULL;
  _V10_Dpair_D1521.first = VEncodePointer(&_V10_Dpair_D1520, VPOINTER_PAIR);
  _V10_Dpair_D1521.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1520.first = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1520.rest = VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR);
  _V10_Dpair_D1519.first = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1519.rest = VNULL;
  _V10_Dpair_D1518.first = _V0_Mk;
  _V10_Dpair_D1518.rest = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1517.first = _V0a;
  _V10_Dpair_D1517.rest = VEncodePointer(&_V10_Dpair_D1516, VPOINTER_PAIR);
  _V10_Dpair_D1516.first = _V0b;
  _V10_Dpair_D1516.rest = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1515.first = _V0vanity;
  _V10_Dpair_D1515.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1514.first = _V0hashtable;
  _V10_Dpair_D1514.rest = VEncodePointer(&_V10_Dpair_D1513, VPOINTER_PAIR);
  _V10_Dpair_D1513.first = _V0sequence_G;
  _V10_Dpair_D1513.rest = VNULL;
  _V10_Dpair_D1512.first = VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR);
  _V10_Dpair_D1512.rest = VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR);
  _V10_Dpair_D1511.first = VEncodeBool(false);
  _V10_Dpair_D1511.rest = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1510.first = VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR);
  _V10_Dpair_D1510.rest = VNULL;
  _V10_Dpair_D1509.first = _V0_Mk;
  _V10_Dpair_D1509.rest = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1508.first = _V0b;
  _V10_Dpair_D1508.rest = VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR);
  _V10_Dpair_D1507.first = _V0k;
  _V10_Dpair_D1507.rest = VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR);
  _V10_Dpair_D1506.first = _V0d;
  _V10_Dpair_D1506.rest = VNULL;
  _V10_Dpair_D1505.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1505.rest = VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR);
  _V10_Dpair_D1504.first = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1504.rest = VNULL;
  _V10_Dpair_D1503.first = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1503.rest = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1502.first = VEncodePointer(&_V10_Dpair_D1499, VPOINTER_PAIR);
  _V10_Dpair_D1502.rest = VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR);
  _V10_Dpair_D1501.first = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1501.rest = VNULL;
  _V10_Dpair_D1500.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1500.rest = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1499.first = VEncodeBool(false);
  _V10_Dpair_D1499.rest = VEncodePointer(&_V10_Dpair_D1498, VPOINTER_PAIR);
  _V10_Dpair_D1498.first = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1498.rest = VNULL;
  _V10_Dpair_D1497.first = _V0_Mk;
  _V10_Dpair_D1497.rest = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D1496.first = VEncodePointer(&_V10_Dpair_D1495, VPOINTER_PAIR);
  _V10_Dpair_D1496.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1495.first = VEncodePointer(&_V10_Dpair_D1494, VPOINTER_PAIR);
  _V10_Dpair_D1495.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D1494.first = _V0vanity;
  _V10_Dpair_D1494.rest = VEncodePointer(&_V10_Dpair_D1493, VPOINTER_PAIR);
  _V10_Dpair_D1493.first = _V0hashtable;
  _V10_Dpair_D1493.rest = VEncodePointer(&_V10_Dpair_D1492, VPOINTER_PAIR);
  _V10_Dpair_D1492.first = _V0hash__table__keyvector;
  _V10_Dpair_D1492.rest = VNULL;
  _V10_Dpair_D1491.first = VEncodePointer(&_V10_Dpair_D1490, VPOINTER_PAIR);
  _V10_Dpair_D1491.rest = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1490.first = VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR);
  _V10_Dpair_D1490.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D1489.first = _V0vanity;
  _V10_Dpair_D1489.rest = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1488.first = _V0hashtable;
  _V10_Dpair_D1488.rest = VEncodePointer(&_V10_Dpair_D1487, VPOINTER_PAIR);
  _V10_Dpair_D1487.first = _V0validate__robinhood__impl;
  _V10_Dpair_D1487.rest = VEncodePointer(&_V10_Dpair_D1486, VPOINTER_PAIR);
  _V10_Dpair_D1486.first = _V10_Dfinalize_D2_D271;
  _V10_Dpair_D1486.rest = VNULL;
  _V10_Dpair_D1485.first = VEncodePointer(&_V10_Dpair_D1484, VPOINTER_PAIR);
  _V10_Dpair_D1485.rest = VEncodePointer(&_V10_Dpair_D1403, VPOINTER_PAIR);
  _V10_Dpair_D1484.first = VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR);
  _V10_Dpair_D1484.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D1483.first = _V0vanity;
  _V10_Dpair_D1483.rest = VEncodePointer(&_V10_Dpair_D1482, VPOINTER_PAIR);
  _V10_Dpair_D1482.first = _V0hashtable;
  _V10_Dpair_D1482.rest = VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR);
  _V10_Dpair_D1481.first = _V0validate__robinhood__impl;
  _V10_Dpair_D1481.rest = VEncodePointer(&_V10_Dpair_D1480, VPOINTER_PAIR);
  _V10_Dpair_D1480.first = _V10_Dloop_D1_D272;
  _V10_Dpair_D1480.rest = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1479.first = _V10_Dfinalize_D15_D281;
  _V10_Dpair_D1479.rest = VNULL;
  _V10_Dpair_D1477.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1477.rest = VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR);
  _V10_Dpair_D1476.first = VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR);
  _V10_Dpair_D1476.rest = VNULL;
  _V10_Dpair_D1475.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D1475.rest = VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR);
  _V10_Dpair_D1474.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1474.rest = VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR);
  _V10_Dpair_D1473.first = VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR);
  _V10_Dpair_D1473.rest = VNULL;
  _V10_Dpair_D1472.first = VEncodePointer(&_V10_Dpair_D1468, VPOINTER_PAIR);
  _V10_Dpair_D1472.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1471.first = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1471.rest = VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR);
  _V10_Dpair_D1470.first = VEncodeBool(false);
  _V10_Dpair_D1470.rest = VEncodePointer(&_V10_Dpair_D1469, VPOINTER_PAIR);
  _V10_Dpair_D1469.first = VEncodePointer(&_V10_Dpair_D1468, VPOINTER_PAIR);
  _V10_Dpair_D1469.rest = VNULL;
  _V10_Dpair_D1468.first = _V0p_D25;
  _V10_Dpair_D1468.rest = VNULL;
  _V10_Dpair_D1466.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1466.rest = VEncodePointer(&_V10_Dpair_D1465, VPOINTER_PAIR);
  _V10_Dpair_D1465.first = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1465.rest = VNULL;
  _V10_Dpair_D1464.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D1464.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1463.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1463.rest = VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR);
  _V10_Dpair_D1462.first = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1462.rest = VNULL;
  _V10_Dpair_D1461.first = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1461.rest = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1460.first = _V0p_D24;
  _V10_Dpair_D1460.rest = VNULL;
  _V10_Dpair_D1459.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1458.rest = VNULL;
  _V10_Dpair_D1457.first = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = VEncodeBool(false);
  _V10_Dpair_D1455.rest = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1454.first = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1454.rest = VNULL;
  _V10_Dpair_D1453.first = _V0p_D23;
  _V10_Dpair_D1453.rest = VNULL;
  _V10_Dpair_D1452.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1451.rest = VNULL;
  _V10_Dpair_D1450.first = VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR);
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR);
  _V10_Dpair_D1449.first = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1449.rest = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1448.first = VEncodeBool(false);
  _V10_Dpair_D1448.rest = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1447.first = VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR);
  _V10_Dpair_D1447.rest = VNULL;
  _V10_Dpair_D1446.first = _V0jpoverty;
  _V10_Dpair_D1446.rest = VNULL;
  _V10_Dpair_D1445.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1445.rest = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1444.first = VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR);
  _V10_Dpair_D1444.rest = VNULL;
  _V10_Dpair_D1443.first = VEncodePointer(&_V10_Dpair_D1439, VPOINTER_PAIR);
  _V10_Dpair_D1443.rest = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1442.first = VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR);
  _V10_Dpair_D1442.rest = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1441.first = VEncodeBool(false);
  _V10_Dpair_D1441.rest = VEncodePointer(&_V10_Dpair_D1440, VPOINTER_PAIR);
  _V10_Dpair_D1440.first = VEncodePointer(&_V10_Dpair_D1439, VPOINTER_PAIR);
  _V10_Dpair_D1440.rest = VNULL;
  _V10_Dpair_D1439.first = _V0jslot;
  _V10_Dpair_D1439.rest = VNULL;
  _V10_Dpair_D1438.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1438.rest = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1437.first = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1437.rest = VNULL;
  _V10_Dpair_D1436.first = VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR);
  _V10_Dpair_D1436.rest = VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR);
  _V10_Dpair_D1435.first = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1435.rest = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1434.first = VEncodeBool(false);
  _V10_Dpair_D1434.rest = VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR);
  _V10_Dpair_D1433.rest = VNULL;
  _V10_Dpair_D1432.first = _V0jhash;
  _V10_Dpair_D1432.rest = VNULL;
  _V10_Dpair_D1431.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1431.rest = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1430.first = VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR);
  _V10_Dpair_D1430.rest = VNULL;
  _V10_Dpair_D1429.first = VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR);
  _V10_Dpair_D1429.rest = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1428.first = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1428.rest = VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR);
  _V10_Dpair_D1427.first = _V0y;
  _V10_Dpair_D1427.rest = VNULL;
  _V10_Dpair_D1426.first = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1426.rest = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1425.first = VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR);
  _V10_Dpair_D1425.rest = VNULL;
  _V10_Dpair_D1424.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1424.rest = VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR);
  _V10_Dpair_D1423.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1423.rest = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1422.first = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1422.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1421.first = VEncodeBool(false);
  _V10_Dpair_D1421.rest = VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR);
  _V10_Dpair_D1420.first = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1420.rest = VNULL;
  _V10_Dpair_D1419.first = _V0jdx;
  _V10_Dpair_D1419.rest = VNULL;
  _V10_Dpair_D1418.first = VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR);
  _V10_Dpair_D1418.rest = VEncodePointer(&_V10_Dpair_D1417, VPOINTER_PAIR);
  _V10_Dpair_D1417.first = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1417.rest = VNULL;
  _V10_Dpair_D1416.first = VEncodePointer(&_V10_Dpair_D1414, VPOINTER_PAIR);
  _V10_Dpair_D1416.rest = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1415.first = VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR);
  _V10_Dpair_D1415.rest = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1414.first = _V0loop_D14;
  _V10_Dpair_D1414.rest = VNULL;
  _V10_Dpair_D1413.first = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1413.rest = VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR);
  _V10_Dpair_D1412.first = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1412.rest = VNULL;
  _V10_Dpair_D1411.first = _V0_Mk;
  _V10_Dpair_D1411.rest = VEncodePointer(&_V10_Dpair_D1410, VPOINTER_PAIR);
  _V10_Dpair_D1410.first = _V0j;
  _V10_Dpair_D1410.rest = VNULL;
  _V10_Dpair_D1409.first = _V0vanity;
  _V10_Dpair_D1409.rest = VEncodePointer(&_V10_Dpair_D1408, VPOINTER_PAIR);
  _V10_Dpair_D1408.first = _V0hashtable;
  _V10_Dpair_D1408.rest = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1407.first = _V0validate__robinhood__impl;
  _V10_Dpair_D1407.rest = VEncodePointer(&_V10_Dpair_D1406, VPOINTER_PAIR);
  _V10_Dpair_D1406.first = _V10_Dloop_D1_D272;
  _V10_Dpair_D1406.rest = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1405.first = _V10_Dloop_D14_D282;
  _V10_Dpair_D1405.rest = VNULL;
  _V10_Dpair_D1404.first = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1404.rest = VEncodePointer(&_V10_Dpair_D1403, VPOINTER_PAIR);
  _V10_Dpair_D1403.first = VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR);
  _V10_Dpair_D1403.rest = VNULL;
  _V10_Dpair_D1402.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D1402.rest = VEncodePointer(&_V10_Dpair_D1395, VPOINTER_PAIR);
  _V10_Dpair_D1401.first = VEncodeBool(false);
  _V10_Dpair_D1401.rest = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1400.first = VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR);
  _V10_Dpair_D1400.rest = VNULL;
  _V10_Dpair_D1399.first = _V0finalize_D15;
  _V10_Dpair_D1399.rest = VNULL;
  _V10_Dpair_D1397.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1397.rest = VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR);
  _V10_Dpair_D1396.first = VEncodePointer(&_V10_Dpair_D1395, VPOINTER_PAIR);
  _V10_Dpair_D1396.rest = VNULL;
  _V10_Dpair_D1395.first = VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR);
  _V10_Dpair_D1395.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1394.first = VEncodePointer(&_V10_Dpair_D1393, VPOINTER_PAIR);
  _V10_Dpair_D1394.rest = VEncodePointer(&_V10_Dpair_D1389, VPOINTER_PAIR);
  _V10_Dpair_D1393.first = VEncodeBool(false);
  _V10_Dpair_D1393.rest = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1392.first = VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR);
  _V10_Dpair_D1392.rest = VNULL;
  _V10_Dpair_D1391.first = _V0p_D12;
  _V10_Dpair_D1391.rest = VNULL;
  _V10_Dpair_D1390.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1390.rest = VEncodePointer(&_V10_Dpair_D1389, VPOINTER_PAIR);
  _V10_Dpair_D1389.first = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1389.rest = VNULL;
  _V10_Dpair_D1388.first = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1388.rest = VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR);
  _V10_Dpair_D1387.first = VEncodePointer(&_V10_Dpair_D1386, VPOINTER_PAIR);
  _V10_Dpair_D1387.rest = VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR);
  _V10_Dpair_D1386.first = VEncodeBool(false);
  _V10_Dpair_D1386.rest = VEncodePointer(&_V10_Dpair_D1385, VPOINTER_PAIR);
  _V10_Dpair_D1385.first = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1385.rest = VNULL;
  _V10_Dpair_D1384.first = _V0ipoverty;
  _V10_Dpair_D1384.rest = VNULL;
  _V10_Dpair_D1383.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1383.rest = VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR);
  _V10_Dpair_D1382.first = VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR);
  _V10_Dpair_D1382.rest = VNULL;
  _V10_Dpair_D1381.first = VEncodePointer(&_V10_Dpair_D1377, VPOINTER_PAIR);
  _V10_Dpair_D1381.rest = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1380.first = VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR);
  _V10_Dpair_D1380.rest = VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR);
  _V10_Dpair_D1379.first = VEncodeBool(false);
  _V10_Dpair_D1379.rest = VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR);
  _V10_Dpair_D1378.first = VEncodePointer(&_V10_Dpair_D1377, VPOINTER_PAIR);
  _V10_Dpair_D1378.rest = VNULL;
  _V10_Dpair_D1377.first = _V0islot;
  _V10_Dpair_D1377.rest = VNULL;
  _V10_Dpair_D1376.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1376.rest = VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR);
  _V10_Dpair_D1375.first = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1375.rest = VNULL;
  _V10_Dpair_D1374.first = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1374.rest = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1373.first = VEncodePointer(&_V10_Dpair_D1372, VPOINTER_PAIR);
  _V10_Dpair_D1373.rest = VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR);
  _V10_Dpair_D1372.first = VEncodeBool(false);
  _V10_Dpair_D1372.rest = VEncodePointer(&_V10_Dpair_D1371, VPOINTER_PAIR);
  _V10_Dpair_D1371.first = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1371.rest = VNULL;
  _V10_Dpair_D1370.first = _V0ihash;
  _V10_Dpair_D1370.rest = VNULL;
  _V10_Dpair_D1369.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1369.rest = VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR);
  _V10_Dpair_D1368.first = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1368.rest = VNULL;
  _V10_Dpair_D1367.first = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1367.rest = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1366.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D1366.rest = VEncodePointer(&_V10_Dpair_D1365, VPOINTER_PAIR);
  _V10_Dpair_D1365.first = VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR);
  _V10_Dpair_D1365.rest = VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR);
  _V10_Dpair_D1364.first = _V0x;
  _V10_Dpair_D1364.rest = VNULL;
  _V10_Dpair_D1363.first = VEncodePointer(&_V10_Dpair_D1358, VPOINTER_PAIR);
  _V10_Dpair_D1363.rest = VEncodePointer(&_V10_Dpair_D1362, VPOINTER_PAIR);
  _V10_Dpair_D1362.first = VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR);
  _V10_Dpair_D1362.rest = VNULL;
  _V10_Dpair_D1361.first = VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR);
  _V10_Dpair_D1361.rest = VEncodePointer(&_V10_Dpair_D1360, VPOINTER_PAIR);
  _V10_Dpair_D1360.first = VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR);
  _V10_Dpair_D1360.rest = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1359.first = _V0loop_D1;
  _V10_Dpair_D1359.rest = VNULL;
  _V10_Dpair_D1358.first = VEncodePointer(&_V10_Dpair_D1354, VPOINTER_PAIR);
  _V10_Dpair_D1358.rest = VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR);
  _V10_Dpair_D1357.first = VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR);
  _V10_Dpair_D1357.rest = VNULL;
  _V10_Dpair_D1356.first = _V0_Mk;
  _V10_Dpair_D1356.rest = VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR);
  _V10_Dpair_D1355.first = _V0i_D11;
  _V10_Dpair_D1355.rest = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D1354.first = _V0vanity;
  _V10_Dpair_D1354.rest = VEncodePointer(&_V10_Dpair_D1353, VPOINTER_PAIR);
  _V10_Dpair_D1353.first = _V0hashtable;
  _V10_Dpair_D1353.rest = VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR);
  _V10_Dpair_D1352.first = _V0validate__robinhood__impl;
  _V10_Dpair_D1352.rest = VEncodePointer(&_V10_Dpair_D1351, VPOINTER_PAIR);
  _V10_Dpair_D1351.first = _V10_Dloop_D1_D272;
  _V10_Dpair_D1351.rest = VNULL;
  _V10_Dpair_D1350.first = VEncodePointer(&_V10_Dpair_D1344, VPOINTER_PAIR);
  _V10_Dpair_D1350.rest = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1349.first = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1349.rest = VNULL;
  _V10_Dpair_D1348.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1348.rest = VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR);
  _V10_Dpair_D1347.first = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1347.rest = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1346.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1346.rest = VEncodePointer(&_V10_Dpair_D1345, VPOINTER_PAIR);
  _V10_Dpair_D1345.first = VEncodePointer(&_V10_Dpair_D1333, VPOINTER_PAIR);
  _V10_Dpair_D1345.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1344.first = VEncodeBool(false);
  _V10_Dpair_D1344.rest = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1343.first = VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR);
  _V10_Dpair_D1343.rest = VNULL;
  _V10_Dpair_D1342.first = _V0finalize_D2;
  _V10_Dpair_D1342.rest = VNULL;
  _V10_Dpair_D1341.first = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1341.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1340.first = VEncodePointer(&_V10_Dpair_D1339, VPOINTER_PAIR);
  _V10_Dpair_D1340.rest = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1339.first = _V0vanity;
  _V10_Dpair_D1339.rest = VEncodePointer(&_V10_Dpair_D1338, VPOINTER_PAIR);
  _V10_Dpair_D1338.first = _V0hashtable;
  _V10_Dpair_D1338.rest = VEncodePointer(&_V10_Dpair_D1337, VPOINTER_PAIR);
  _V10_Dpair_D1337.first = _V0validate__robinhood__impl;
  _V10_Dpair_D1337.rest = VNULL;
  _V10_Dpair_D1336.first = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1336.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1335.first = VEncodePointer(&_V10_Dpair_D1331, VPOINTER_PAIR);
  _V10_Dpair_D1335.rest = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1334.first = VEncodePointer(&_V10_Dpair_D1333, VPOINTER_PAIR);
  _V10_Dpair_D1334.rest = VNULL;
  _V10_Dpair_D1333.first = _V0_Mk;
  _V10_Dpair_D1333.rest = VEncodePointer(&_V10_Dpair_D1332, VPOINTER_PAIR);
  _V10_Dpair_D1332.first = _V0what__we__did;
  _V10_Dpair_D1332.rest = VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR);
  _V10_Dpair_D1331.first = _V0vanity;
  _V10_Dpair_D1331.rest = VEncodePointer(&_V10_Dpair_D1330, VPOINTER_PAIR);
  _V10_Dpair_D1330.first = _V0hashtable;
  _V10_Dpair_D1330.rest = VEncodePointer(&_V10_Dpair_D1329, VPOINTER_PAIR);
  _V10_Dpair_D1329.first = _V0validate__robinhood;
  _V10_Dpair_D1329.rest = VNULL;
  _V10_Dpair_D1328.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1328.rest = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1327.first = VEncodePointer(&_V10_Dpair_D1326, VPOINTER_PAIR);
  _V10_Dpair_D1327.rest = VNULL;
  _V10_Dpair_D1326.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1326.rest = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1325.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1325.rest = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1324.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1324.rest = VEncodePointer(&_V10_Dpair_D1321, VPOINTER_PAIR);
  _V10_Dpair_D1323.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1323.rest = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1322.first = VEncodePointer(&_V10_Dpair_D1321, VPOINTER_PAIR);
  _V10_Dpair_D1322.rest = VNULL;
  _V10_Dpair_D1321.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1321.rest = VEncodePointer(&_V10_Dpair_D1320, VPOINTER_PAIR);
  _V10_Dpair_D1320.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1320.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1319.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D1319.rest = VEncodePointer(&_V10_Dpair_D1317, VPOINTER_PAIR);
  _V10_Dpair_D1318.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1318.rest = VEncodePointer(&_V10_Dpair_D1317, VPOINTER_PAIR);
  _V10_Dpair_D1317.first = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1317.rest = VNULL;
  _V10_Dpair_D1316.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D1316.rest = VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR);
  _V10_Dpair_D1315.first = VEncodePointer(&_V10_Dpair_D1211, VPOINTER_PAIR);
  _V10_Dpair_D1315.rest = VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR);
  _V10_Dpair_D1314.first = VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR);
  _V10_Dpair_D1314.rest = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1313.first = VEncodePointer(&_V10_Dpair_D1309, VPOINTER_PAIR);
  _V10_Dpair_D1313.rest = VEncodePointer(&_V10_Dpair_D1312, VPOINTER_PAIR);
  _V10_Dpair_D1312.first = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1312.rest = VNULL;
  _V10_Dpair_D1311.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1311.rest = VEncodePointer(&_V10_Dpair_D1310, VPOINTER_PAIR);
  _V10_Dpair_D1310.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D1310.rest = VEncodePointer(&_V10_Dpair_D1302, VPOINTER_PAIR);
  _V10_Dpair_D1309.first = VEncodePointer(&_V10_Dpair_D1308, VPOINTER_PAIR);
  _V10_Dpair_D1309.rest = VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR);
  _V10_Dpair_D1308.first = _V0vanity;
  _V10_Dpair_D1308.rest = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D1307.first = _V0hashtable;
  _V10_Dpair_D1307.rest = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D1306.first = _V0hash__table__find__impl;
  _V10_Dpair_D1306.rest = VEncodePointer(&_V10_Dpair_D1305, VPOINTER_PAIR);
  _V10_Dpair_D1305.first = _V10_Dloop_D260;
  _V10_Dpair_D1305.rest = VNULL;
  _V10_Dpair_D1304.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D1304.rest = VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR);
  _V10_Dpair_D1303.first = VEncodePointer(&_V10_Dpair_D1302, VPOINTER_PAIR);
  _V10_Dpair_D1303.rest = VNULL;
  _V10_Dpair_D1302.first = VEncodePointer(&_V10_Dpair_D1300, VPOINTER_PAIR);
  _V10_Dpair_D1302.rest = VEncodePointer(&_V10_Dpair_D1301, VPOINTER_PAIR);
  _V10_Dpair_D1301.first = VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR);
  _V10_Dpair_D1301.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1300.first = _V0vec;
  _V10_Dpair_D1300.rest = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D1299.first = VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR);
  _V10_Dpair_D1299.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1298.first = VEncodePointer(&_V10_Dpair_D1293, VPOINTER_PAIR);
  _V10_Dpair_D1298.rest = VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR);
  _V10_Dpair_D1297.first = VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR);
  _V10_Dpair_D1297.rest = VNULL;
  _V10_Dpair_D1296.first = _V0_Mk;
  _V10_Dpair_D1296.rest = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1295.first = _V0ht;
  _V10_Dpair_D1295.rest = VEncodePointer(&_V10_Dpair_D1294, VPOINTER_PAIR);
  _V10_Dpair_D1294.first = _V0key;
  _V10_Dpair_D1294.rest = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D1293.first = _V0vanity;
  _V10_Dpair_D1293.rest = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1292.first = _V0hashtable;
  _V10_Dpair_D1292.rest = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D1291.first = _V0hash__table__find__impl;
  _V10_Dpair_D1291.rest = VNULL;
  _V10_Dpair_D1290.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1290.rest = VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR);
  _V10_Dpair_D1289.first = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D1289.rest = VNULL;
  _V10_Dpair_D1288.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1288.rest = VEncodePointer(&_V10_Dpair_D1287, VPOINTER_PAIR);
  _V10_Dpair_D1287.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1287.rest = VEncodePointer(&_V10_Dpair_D1286, VPOINTER_PAIR);
  _V10_Dpair_D1286.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1286.rest = VEncodePointer(&_V10_Dpair_D1285, VPOINTER_PAIR);
  _V10_Dpair_D1285.first = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1285.rest = VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR);
  _V10_Dpair_D1284.first = VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR);
  _V10_Dpair_D1284.rest = VEncodePointer(&_V10_Dpair_D1282, VPOINTER_PAIR);
  _V10_Dpair_D1283.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1283.rest = VEncodePointer(&_V10_Dpair_D1282, VPOINTER_PAIR);
  _V10_Dpair_D1282.first = VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR);
  _V10_Dpair_D1282.rest = VNULL;
  _V10_Dpair_D1281.first = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1281.rest = VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR);
  _V10_Dpair_D1280.first = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D1280.rest = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1279.first = VEncodePointer(&_V10_Dpair_D1275, VPOINTER_PAIR);
  _V10_Dpair_D1279.rest = VEncodePointer(&_V10_Dpair_D1278, VPOINTER_PAIR);
  _V10_Dpair_D1278.first = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1278.rest = VNULL;
  _V10_Dpair_D1277.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1277.rest = VEncodePointer(&_V10_Dpair_D1276, VPOINTER_PAIR);
  _V10_Dpair_D1276.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D1276.rest = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1275.first = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1275.rest = VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR);
  _V10_Dpair_D1274.first = _V0vanity;
  _V10_Dpair_D1274.rest = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1273.first = _V0hashtable;
  _V10_Dpair_D1273.rest = VEncodePointer(&_V10_Dpair_D1272, VPOINTER_PAIR);
  _V10_Dpair_D1272.first = _V0hash__table__reinsert_B;
  _V10_Dpair_D1272.rest = VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR);
  _V10_Dpair_D1271.first = _V10_Dloop_D248;
  _V10_Dpair_D1271.rest = VNULL;
  _V10_Dpair_D1270.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D1270.rest = VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR);
  _V10_Dpair_D1269.first = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1269.rest = VNULL;
  _V10_Dpair_D1268.first = VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR);
  _V10_Dpair_D1268.rest = VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR);
  _V10_Dpair_D1267.first = _V0vec;
  _V10_Dpair_D1267.rest = VEncodePointer(&_V10_Dpair_D1266, VPOINTER_PAIR);
  _V10_Dpair_D1266.first = _V0occupancy;
  _V10_Dpair_D1266.rest = VEncodePointer(&_V10_Dpair_D1265, VPOINTER_PAIR);
  _V10_Dpair_D1265.first = _V0capacity;
  _V10_Dpair_D1265.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1264.first = VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR);
  _V10_Dpair_D1264.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1263.first = VEncodePointer(&_V10_Dpair_D1262, VPOINTER_PAIR);
  _V10_Dpair_D1263.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1262.first = _V0vanity;
  _V10_Dpair_D1262.rest = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1261.first = _V0hashtable;
  _V10_Dpair_D1261.rest = VEncodePointer(&_V10_Dpair_D1260, VPOINTER_PAIR);
  _V10_Dpair_D1260.first = _V0hash__table__reinsert_B;
  _V10_Dpair_D1260.rest = VNULL;
  _V10_Dpair_D1259.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1259.rest = VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR);
  _V10_Dpair_D1258.first = VEncodePointer(&_V10_Dpair_D1257, VPOINTER_PAIR);
  _V10_Dpair_D1258.rest = VNULL;
  _V10_Dpair_D1257.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1257.rest = VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR);
  _V10_Dpair_D1256.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1256.rest = VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR);
  _V10_Dpair_D1255.first = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1255.rest = VEncodePointer(&_V10_Dpair_D1254, VPOINTER_PAIR);
  _V10_Dpair_D1254.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1254.rest = VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR);
  _V10_Dpair_D1253.first = _V0idx;
  _V10_Dpair_D1253.rest = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1252.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1252.rest = VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR);
  _V10_Dpair_D1251.first = VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR);
  _V10_Dpair_D1251.rest = VNULL;
  _V10_Dpair_D1250.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1250.rest = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1249.first = VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR);
  _V10_Dpair_D1249.rest = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1248.first = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1248.rest = VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR);
  _V10_Dpair_D1247.first = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1247.rest = VNULL;
  _V10_Dpair_D1246.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1246.rest = VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR);
  _V10_Dpair_D1245.first = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1245.rest = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1243.first = _V0vec;
  _V10_Dpair_D1243.rest = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR);
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VNULL;
  _V10_Dpair_D1240.first = _V0_Mk;
  _V10_Dpair_D1240.rest = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1239.first = _V0vanity;
  _V10_Dpair_D1239.rest = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1238.first = _V0hashtable;
  _V10_Dpair_D1238.rest = VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR);
  _V10_Dpair_D1237.first = _V0robinhood__shuffle;
  _V10_Dpair_D1237.rest = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1236.first = _V10_Dloop_D237;
  _V10_Dpair_D1236.rest = VNULL;
  _V10_Dpair_D1235.first = VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR);
  _V10_Dpair_D1235.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1234.first = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1234.rest = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1233.first = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1233.rest = VNULL;
  _V10_Dpair_D1232.first = _V0_Mk;
  _V10_Dpair_D1232.rest = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1231.first = _V0ht;
  _V10_Dpair_D1231.rest = VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR);
  _V10_Dpair_D1230.first = _V0oldidx;
  _V10_Dpair_D1230.rest = VNULL;
  _V10_Dpair_D1229.first = _V0vanity;
  _V10_Dpair_D1229.rest = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1228.first = _V0hashtable;
  _V10_Dpair_D1228.rest = VEncodePointer(&_V10_Dpair_D1227, VPOINTER_PAIR);
  _V10_Dpair_D1227.first = _V0robinhood__shuffle;
  _V10_Dpair_D1227.rest = VNULL;
  _V10_Dpair_D1226.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1226.rest = VEncodePointer(&_V10_Dpair_D1225, VPOINTER_PAIR);
  _V10_Dpair_D1225.first = VEncodePointer(&_V10_Dpair_D1224, VPOINTER_PAIR);
  _V10_Dpair_D1225.rest = VNULL;
  _V10_Dpair_D1224.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1224.rest = VEncodePointer(&_V10_Dpair_D1223, VPOINTER_PAIR);
  _V10_Dpair_D1223.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1223.rest = VEncodePointer(&_V10_Dpair_D1222, VPOINTER_PAIR);
  _V10_Dpair_D1222.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1222.rest = VEncodePointer(&_V10_Dpair_D1219, VPOINTER_PAIR);
  _V10_Dpair_D1221.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1221.rest = VEncodePointer(&_V10_Dpair_D1220, VPOINTER_PAIR);
  _V10_Dpair_D1220.first = VEncodePointer(&_V10_Dpair_D1219, VPOINTER_PAIR);
  _V10_Dpair_D1220.rest = VNULL;
  _V10_Dpair_D1219.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1219.rest = VEncodePointer(&_V10_Dpair_D1218, VPOINTER_PAIR);
  _V10_Dpair_D1218.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1218.rest = VEncodePointer(&_V10_Dpair_D1214, VPOINTER_PAIR);
  _V10_Dpair_D1217.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D1217.rest = VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR);
  _V10_Dpair_D1216.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1216.rest = VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR);
  _V10_Dpair_D1215.first = VEncodePointer(&_V10_Dpair_D1214, VPOINTER_PAIR);
  _V10_Dpair_D1215.rest = VNULL;
  _V10_Dpair_D1214.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D1214.rest = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1213.first = VEncodePointer(&_V10_Dpair_D1211, VPOINTER_PAIR);
  _V10_Dpair_D1213.rest = VEncodePointer(&_V10_Dpair_D1212, VPOINTER_PAIR);
  _V10_Dpair_D1212.first = VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR);
  _V10_Dpair_D1212.rest = VEncodePointer(&_V10_Dpair_D1208, VPOINTER_PAIR);
  _V10_Dpair_D1211.first = _V0vec__entry;
  _V10_Dpair_D1211.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1210.first = VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR);
  _V10_Dpair_D1210.rest = VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR);
  _V10_Dpair_D1209.first = VEncodePointer(&_V10_Dpair_D1208, VPOINTER_PAIR);
  _V10_Dpair_D1209.rest = VNULL;
  _V10_Dpair_D1208.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1208.rest = VEncodePointer(&_V10_Dpair_D1207, VPOINTER_PAIR);
  _V10_Dpair_D1207.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D1207.rest = VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR);
  _V10_Dpair_D1206.first = VEncodePointer(&_V10_Dpair_D1203, VPOINTER_PAIR);
  _V10_Dpair_D1206.rest = VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR);
  _V10_Dpair_D1205.first = VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR);
  _V10_Dpair_D1205.rest = VNULL;
  _V10_Dpair_D1204.first = _V0_Mk;
  _V10_Dpair_D1204.rest = VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR);
  _V10_Dpair_D1203.first = _V0vanity;
  _V10_Dpair_D1203.rest = VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR);
  _V10_Dpair_D1202.first = _V0hashtable;
  _V10_Dpair_D1202.rest = VEncodePointer(&_V10_Dpair_D1201, VPOINTER_PAIR);
  _V10_Dpair_D1201.first = _V0hash__table__sweep;
  _V10_Dpair_D1201.rest = VEncodePointer(&_V10_Dpair_D1200, VPOINTER_PAIR);
  _V10_Dpair_D1200.first = _V10_Dloop_D229;
  _V10_Dpair_D1200.rest = VNULL;
  _V10_Dpair_D1199.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D1199.rest = VEncodePointer(&_V10_Dpair_D1198, VPOINTER_PAIR);
  _V10_Dpair_D1198.first = VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR);
  _V10_Dpair_D1198.rest = VNULL;
  _V10_Dpair_D1197.first = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1197.rest = VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR);
  _V10_Dpair_D1196.first = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1196.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1195.first = _V0hash;
  _V10_Dpair_D1195.rest = VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR);
  _V10_Dpair_D1194.first = _V0vec;
  _V10_Dpair_D1194.rest = VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR);
  _V10_Dpair_D1193.first = _V0occupancy;
  _V10_Dpair_D1193.rest = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1192.first = _V0clearinghouse;
  _V10_Dpair_D1192.rest = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D1191.first = VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR);
  _V10_Dpair_D1191.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1190.first = VEncodePointer(&_V10_Dpair_D1186, VPOINTER_PAIR);
  _V10_Dpair_D1190.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1189.first = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1189.rest = VNULL;
  _V10_Dpair_D1188.first = _V0_Mk;
  _V10_Dpair_D1188.rest = VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR);
  _V10_Dpair_D1187.first = _V0ht;
  _V10_Dpair_D1187.rest = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D1186.first = _V0vanity;
  _V10_Dpair_D1186.rest = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1185.first = _V0hashtable;
  _V10_Dpair_D1185.rest = VEncodePointer(&_V10_Dpair_D1184, VPOINTER_PAIR);
  _V10_Dpair_D1184.first = _V0hash__table__sweep;
  _V10_Dpair_D1184.rest = VNULL;
  _V10_Dpair_D1181.first = VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR);
  _V10_Dpair_D1181.rest = VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR);
  _V10_Dpair_D1180.first = VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR);
  _V10_Dpair_D1180.rest = VNULL;
  _V10_Dpair_D1179.first = VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR);
  _V10_Dpair_D1179.rest = VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR);
  _V10_Dpair_D1178.first = VEncodeBool(false);
  _V10_Dpair_D1178.rest = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1177.first = VEncodePointer(&_V10_Dpair_D1176, VPOINTER_PAIR);
  _V10_Dpair_D1177.rest = VNULL;
  _V10_Dpair_D1176.first = _V0new__waybill;
  _V10_Dpair_D1176.rest = VNULL;
  _V10_Dpair_D1175.first = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1175.rest = VEncodePointer(&_V10_Dpair_D1173, VPOINTER_PAIR);
  _V10_Dpair_D1174.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1174.rest = VEncodePointer(&_V10_Dpair_D1173, VPOINTER_PAIR);
  _V10_Dpair_D1173.first = VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR);
  _V10_Dpair_D1173.rest = VNULL;
  _V10_Dpair_D1172.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1172.rest = VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR);
  _V10_Dpair_D1171.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D1171.rest = VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR);
  _V10_Dpair_D1170.first = VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR);
  _V10_Dpair_D1170.rest = VNULL;
  _V10_Dpair_D1169.first = VEncodePointer(&_V10_Dpair_D1166, VPOINTER_PAIR);
  _V10_Dpair_D1169.rest = VEncodePointer(&_V10_Dpair_D1168, VPOINTER_PAIR);
  _V10_Dpair_D1168.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1168.rest = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1167.first = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1167.rest = VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR);
  _V10_Dpair_D1166.first = _V0waybill;
  _V10_Dpair_D1166.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V40VClearinghousePoll = VEncodePointer(VLookupConstant("_V40VClearinghousePoll", &_VW_V40VClearinghousePoll), VPOINTER_CLOSURE);
  _V10_Dpair_D1165.first = VEncodePointer(&_V10_Dpair_D1157, VPOINTER_PAIR);
  _V10_Dpair_D1165.rest = VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR);
  _V10_Dpair_D1164.first = VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR);
  _V10_Dpair_D1164.rest = VNULL;
  _V10_Dpair_D1163.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1163.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1162.first = VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR);
  _V10_Dpair_D1162.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D1161.first = _V0weakness__stability;
  _V10_Dpair_D1161.rest = VEncodePointer(&_V10_Dpair_D1160, VPOINTER_PAIR);
  _V10_Dpair_D1160.first = _V0weakness;
  _V10_Dpair_D1160.rest = VEncodePointer(&_V10_Dpair_D1159, VPOINTER_PAIR);
  _V10_Dpair_D1159.first = _V0stability;
  _V10_Dpair_D1159.rest = VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR);
  _V10_Dpair_D1158.first = _V0starting__occupancy;
  _V10_Dpair_D1158.rest = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D1157.first = VEncodePointer(&_V10_Dpair_D1153, VPOINTER_PAIR);
  _V10_Dpair_D1157.rest = VEncodePointer(&_V10_Dpair_D1156, VPOINTER_PAIR);
  _V10_Dpair_D1156.first = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1156.rest = VNULL;
  _V10_Dpair_D1155.first = _V0_Mk;
  _V10_Dpair_D1155.rest = VEncodePointer(&_V10_Dpair_D1154, VPOINTER_PAIR);
  _V10_Dpair_D1154.first = _V0i;
  _V10_Dpair_D1154.rest = VNULL;
  _V10_Dpair_D1153.first = _V0vanity;
  _V10_Dpair_D1153.rest = VEncodePointer(&_V10_Dpair_D1152, VPOINTER_PAIR);
  _V10_Dpair_D1152.first = _V0hashtable;
  _V10_Dpair_D1152.rest = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1151.first = _V0hash__table__rummage;
  _V10_Dpair_D1151.rest = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1150.first = _V10_Dloop_D214;
  _V10_Dpair_D1150.rest = VNULL;
  _V10_Dpair_D1149.first = VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR);
  _V10_Dpair_D1149.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1148.first = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1148.rest = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D1147.first = _V0vanity;
  _V10_Dpair_D1147.rest = VEncodePointer(&_V10_Dpair_D1146, VPOINTER_PAIR);
  _V10_Dpair_D1146.first = _V0hashtable;
  _V10_Dpair_D1146.rest = VEncodePointer(&_V10_Dpair_D1145, VPOINTER_PAIR);
  _V10_Dpair_D1145.first = _V0hash__table__rummage;
  _V10_Dpair_D1145.rest = VNULL;
  _V10_Dpair_D1144.first = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1144.rest = VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR);
  _V10_Dpair_D1143.first = VEncodeBool(false);
  _V10_Dpair_D1143.rest = VEncodePointer(&_V10_Dpair_D1142, VPOINTER_PAIR);
  _V10_Dpair_D1142.first = VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR);
  _V10_Dpair_D1142.rest = VNULL;
  _V10_Dpair_D1141.first = _V0_Mk;
  _V10_Dpair_D1141.rest = VEncodePointer(&_V10_Dpair_D1140, VPOINTER_PAIR);
  _V10_Dpair_D1140.first = _V0wb__broken_Q;
  _V10_Dpair_D1140.rest = VEncodePointer(&_V10_Dpair_D1139, VPOINTER_PAIR);
  _V10_Dpair_D1139.first = _V0wb__key;
  _V10_Dpair_D1139.rest = VEncodePointer(&_V10_Dpair_D1138, VPOINTER_PAIR);
  _V10_Dpair_D1138.first = _V0wb__datum;
  _V10_Dpair_D1138.rest = VNULL;
  _V10_Dpair_D1137.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1137.rest = VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR);
  _V10_Dpair_D1136.first = VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR);
  _V10_Dpair_D1136.rest = VNULL;
  _V10_Dpair_D1135.first = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D1135.rest = VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR);
  _V10_Dpair_D1134.first = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1134.rest = VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR);
  _V10_Dpair_D1133.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1133.rest = VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR);
  _V10_Dpair_D1132.first = VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR);
  _V10_Dpair_D1132.rest = VNULL;
  _V10_Dpair_D1131.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D1131.rest = VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR);
  _V10_Dpair_D1130.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D1130.rest = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1129.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1129.rest = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1128.first = VEncodeBool(false);
  _V10_Dpair_D1128.rest = VEncodePointer(&_V10_Dpair_D1127, VPOINTER_PAIR);
  _V10_Dpair_D1127.first = VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR);
  _V10_Dpair_D1127.rest = VNULL;
  _V10_Dpair_D1126.first = _V0_Mk;
  _V10_Dpair_D1126.rest = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1125.first = _V0broken_Q;
  _V10_Dpair_D1125.rest = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V10_Dpair_D1124.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1124.rest = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1123.first = VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR);
  _V10_Dpair_D1123.rest = VNULL;
  _V10_Dpair_D1122.first = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D1122.rest = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1121.first = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1121.rest = VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR);
  _V10_Dpair_D1120.first = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1120.rest = VNULL;
  _V10_Dpair_D1119.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D1119.rest = VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR);
  _V10_Dpair_D1118.first = VEncodeBool(false);
  _V10_Dpair_D1118.rest = VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR);
  _V10_Dpair_D1117.first = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D1117.rest = VNULL;
  _V10_Dpair_D1116.first = VEncodePointer(&_V10_Dpair_D1109, VPOINTER_PAIR);
  _V10_Dpair_D1116.rest = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1115.first = VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR);
  _V10_Dpair_D1115.rest = VNULL;
  _V10_Dpair_D1114.first = VEncodePointer(&_V10_Dpair_D1110, VPOINTER_PAIR);
  _V10_Dpair_D1114.rest = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1113.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1113.rest = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1112.first = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D1112.rest = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1111.first = _V0vec;
  _V10_Dpair_D1111.rest = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D1110.first = _V0fallback__ref;
  _V10_Dpair_D1110.rest = VNULL;
  _V10_Dpair_D1109.first = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1109.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D1108.first = _V0vanity;
  _V10_Dpair_D1108.rest = VEncodePointer(&_V10_Dpair_D1107, VPOINTER_PAIR);
  _V10_Dpair_D1107.first = _V0hashtable;
  _V10_Dpair_D1107.rest = VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR);
  _V10_Dpair_D1106.first = _V0hash__table__ref__impl;
  _V10_Dpair_D1106.rest = VEncodePointer(&_V10_Dpair_D1105, VPOINTER_PAIR);
  _V10_Dpair_D1105.first = _V10_Dfallback__ref_D197;
  _V10_Dpair_D1105.rest = VNULL;
  _V10_Dpair_D1104.first = VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR);
  _V10_Dpair_D1104.rest = VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR);
  _V10_Dpair_D1103.first = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1103.rest = VNULL;
  _V10_Dpair_D1102.first = VEncodePointer(&_V10_Dpair_D1090, VPOINTER_PAIR);
  _V10_Dpair_D1102.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1101.first = VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR);
  _V10_Dpair_D1101.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1100.first = VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR);
  _V10_Dpair_D1100.rest = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1099.first = _V0vanity;
  _V10_Dpair_D1099.rest = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1098.first = _V0hashtable;
  _V10_Dpair_D1098.rest = VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR);
  _V10_Dpair_D1097.first = _V0hash__table__ref__impl;
  _V10_Dpair_D1097.rest = VNULL;
  _V10_Dpair_D1095.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1095.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D1094.first = VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR);
  _V10_Dpair_D1094.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1093.first = VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR);
  _V10_Dpair_D1093.rest = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1092.first = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D1092.rest = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1091.first = VEncodePointer(&_V10_Dpair_D1090, VPOINTER_PAIR);
  _V10_Dpair_D1091.rest = VNULL;
  _V10_Dpair_D1090.first = _V0_Mk;
  _V10_Dpair_D1090.rest = VEncodePointer(&_V10_Dpair_D1089, VPOINTER_PAIR);
  _V10_Dpair_D1089.first = _V0ht;
  _V10_Dpair_D1089.rest = VEncodePointer(&_V10_Dpair_D1088, VPOINTER_PAIR);
  _V10_Dpair_D1088.first = _V0key;
  _V10_Dpair_D1088.rest = VEncodePointer(&_V10_Dpair_D1087, VPOINTER_PAIR);
  _V10_Dpair_D1087.first = _V0thunk;
  _V10_Dpair_D1087.rest = VNULL;
  _V10_Dpair_D1086.first = _V0vanity;
  _V10_Dpair_D1086.rest = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1085.first = _V0hashtable;
  _V10_Dpair_D1085.rest = VEncodePointer(&_V10_Dpair_D1084, VPOINTER_PAIR);
  _V10_Dpair_D1084.first = _V0hash__table__ref;
  _V10_Dpair_D1084.rest = VNULL;
  _V10_Dpair_D1083.first = VEncodePointer(&_V10_Dpair_D1082, VPOINTER_PAIR);
  _V10_Dpair_D1083.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1082.first = VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR);
  _V10_Dpair_D1082.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D1081.first = _V0vanity;
  _V10_Dpair_D1081.rest = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1080.first = _V0hashtable;
  _V10_Dpair_D1080.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1079.first = _V0hash__table__grow;
  _V10_Dpair_D1079.rest = VEncodePointer(&_V10_Dpair_D1078, VPOINTER_PAIR);
  _V10_Dpair_D1078.first = _V10_Dfinalize_D27_D181;
  _V10_Dpair_D1078.rest = VNULL;
  _V10_Dpair_D1076.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1076.rest = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1075.first = VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR);
  _V10_Dpair_D1075.rest = VNULL;
  _V10_Dpair_D1074.first = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D1074.rest = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1073.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D1073.rest = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1072.first = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1072.rest = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1071.first = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1071.rest = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1070.first = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1070.rest = VNULL;
  _V10_Dpair_D1069.first = VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR);
  _V10_Dpair_D1069.rest = VEncodePointer(&_V10_Dpair_D1068, VPOINTER_PAIR);
  _V10_Dpair_D1068.first = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1068.rest = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1067.first = _V0loop_D26;
  _V10_Dpair_D1067.rest = VNULL;
  _V10_Dpair_D1066.first = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1066.rest = VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR);
  _V10_Dpair_D1065.first = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1065.rest = VNULL;
  _V10_Dpair_D1064.first = _V0_Mk;
  _V10_Dpair_D1064.rest = VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR);
  _V10_Dpair_D1063.first = _V0i_D36;
  _V10_Dpair_D1063.rest = VNULL;
  _V10_Dpair_D1062.first = _V0vanity;
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = _V0hashtable;
  _V10_Dpair_D1061.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1060.first = _V0hash__table__grow;
  _V10_Dpair_D1060.rest = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1059.first = _V10_Dloop_D26_D182;
  _V10_Dpair_D1059.rest = VNULL;
  _V10_Dpair_D1058.first = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1058.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1057.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1057.rest = VNULL;
  _V10_Dpair_D1056.first = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1056.rest = VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR);
  _V10_Dpair_D1055.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D1055.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1054.first = _V0_Mr;
  _V10_Dpair_D1054.rest = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1053.first = _V0_Mr;
  _V10_Dpair_D1053.rest = VNULL;
  _V10_Dpair_D1052.first = VEncodeBool(false);
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1051.rest = VNULL;
  _V10_Dpair_D1050.first = _V0finalize_D27;
  _V10_Dpair_D1050.rest = VNULL;
  _V10_Dpair_D1049.first = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1049.rest = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1048.first = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1048.rest = VNULL;
  _V10_Dpair_D1047.first = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1047.rest = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1046.first = VEncodeBool(false);
  _V10_Dpair_D1046.rest = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1045.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D1045.rest = VNULL;
  _V10_Dpair_D1044.first = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = VEncodeBool(false);
  _V10_Dpair_D1043.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1042.first = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1042.rest = VNULL;
  _V10_Dpair_D1041.first = _V0capacity;
  _V10_Dpair_D1041.rest = VNULL;
  _V10_Dpair_D1040.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1040.rest = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1039.first = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1039.rest = VNULL;
  _V10_Dpair_D1038.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR);
  _V10_Dpair_D1037.first = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1037.rest = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1036.first = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = _V0old__vec;
  _V10_Dpair_D1035.rest = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1034.first = _V0clearinghouse;
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = _V0occupancy;
  _V10_Dpair_D1033.rest = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1032.first = _V0old__capacity;
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = _V0load__factor;
  _V10_Dpair_D1031.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D1030.first = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1029.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D1028.first = _V0vanity;
  _V10_Dpair_D1028.rest = VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR);
  _V10_Dpair_D1027.first = _V0hashtable;
  _V10_Dpair_D1027.rest = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1026.first = _V0hash__table__grow;
  _V10_Dpair_D1026.rest = VNULL;
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1024.first = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1024.rest = VNULL;
  _V10_Dpair_D1023.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1023.rest = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1022.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1022.rest = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1021.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1021.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1020.first = _V0_Mx;
  _V10_Dpair_D1020.rest = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1019.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D1019.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1018.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1017.rest = VNULL;
  _V10_Dpair_D1016.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1014.rest = VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR);
  _V10_Dpair_D1013.first = VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR);
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = VEncodeBool(false);
  _V10_Dpair_D1012.rest = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1011.first = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1011.rest = VNULL;
  _V10_Dpair_D1010.first = _V0vec__entry__poverty;
  _V10_Dpair_D1010.rest = VNULL;
  _V10_Dpair_D1009.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1009.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1008.first = VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR);
  _V10_Dpair_D1008.rest = VNULL;
  _V10_Dpair_D1007.first = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1007.rest = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1006.first = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D1006.rest = VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR);
  _V10_Dpair_D1005.first = _V0vec__entry;
  _V10_Dpair_D1005.rest = VNULL;
  _V10_Dpair_D1004.first = VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR);
  _V10_Dpair_D1004.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1003.first = VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR);
  _V10_Dpair_D1003.rest = VNULL;
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D1000.first = _V0loop;
  _V10_Dpair_D1000.rest = VNULL;
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D998.rest = VNULL;
  _V10_Dpair_D997.first = _V0_Mk;
  _V10_Dpair_D997.rest = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D996.first = _V0entry;
  _V10_Dpair_D996.rest = VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR);
  _V10_Dpair_D995.first = _V0idx;
  _V10_Dpair_D995.rest = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D994.first = _V0poverty;
  _V10_Dpair_D994.rest = VNULL;
  _V10_Dpair_D993.first = _V0vanity;
  _V10_Dpair_D993.rest = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D992.first = _V0hashtable;
  _V10_Dpair_D992.rest = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D991.first = _V0hash__table__set__impl_B;
  _V10_Dpair_D991.rest = VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR);
  _V10_Dpair_D990.first = _V10_Dloop_D166;
  _V10_Dpair_D990.rest = VNULL;
  _V10_Dpair_D989.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D989.rest = VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR);
  _V10_Dpair_D988.first = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D988.rest = VNULL;
  _V10_Dpair_D987.first = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D987.rest = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D986.first = VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR);
  _V10_Dpair_D986.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D985.first = _V0hash;
  _V10_Dpair_D985.rest = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D984.first = _V0vec;
  _V10_Dpair_D984.rest = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D983.first = _V0occupancy;
  _V10_Dpair_D983.rest = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D982.first = _V0capacity;
  _V10_Dpair_D982.rest = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V40VWaybillAddress = VEncodePointer(VLookupConstant("_V40VWaybillAddress", &_VW_V40VWaybillAddress), VPOINTER_CLOSURE);
  _V10_Dpair_D981.first = VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR);
  _V10_Dpair_D981.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D980.first = VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR);
  _V10_Dpair_D980.rest = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D979.first = VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR);
  _V10_Dpair_D979.rest = VNULL;
  _V10_Dpair_D978.first = _V0_Mk;
  _V10_Dpair_D978.rest = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D977.first = _V0ht;
  _V10_Dpair_D977.rest = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D976.first = _V0key;
  _V10_Dpair_D976.rest = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D975.first = _V0vanity;
  _V10_Dpair_D975.rest = VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR);
  _V10_Dpair_D974.first = _V0hashtable;
  _V10_Dpair_D974.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D973.first = _V0hash__table__set__impl_B;
  _V10_Dpair_D973.rest = VNULL;
  _V10_Dpair_D971.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D971.rest = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D970.first = VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR);
  _V10_Dpair_D970.rest = VNULL;
  _V10_Dpair_D969.first = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D969.rest = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D968.first = VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR);
  _V10_Dpair_D968.rest = VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR);
  _V10_Dpair_D967.first = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D967.rest = VNULL;
  _V10_Dpair_D966.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D966.rest = VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR);
  _V10_Dpair_D965.first = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D965.rest = VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR);
  _V10_Dpair_D964.first = VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR);
  _V10_Dpair_D964.rest = VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR);
  _V10_Dpair_D963.first = VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR);
  _V10_Dpair_D963.rest = VNULL;
  _V10_Dpair_D962.first = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D962.rest = VEncodePointer(&_V10_Dpair_D961, VPOINTER_PAIR);
  _V10_Dpair_D961.first = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D961.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D960.first = _V0weakness__stability;
  _V10_Dpair_D960.rest = VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR);
  _V10_Dpair_D959.first = _V0weakness;
  _V10_Dpair_D959.rest = VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR);
  _V10_Dpair_D958.first = _V0stability;
  _V10_Dpair_D958.rest = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D957.first = _V0clearinghouse;
  _V10_Dpair_D957.rest = VNULL;
  _V10_Dpair_D956.first = VEncodeBool(false);
  _V10_Dpair_D956.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D955.first = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D955.rest = VNULL;
  _V10_Dpair_D954.first = _V0entry;
  _V10_Dpair_D954.rest = VNULL;
  _V10_Dpair_D953.first = VEncodePointer(&_V10_Dpair_D952, VPOINTER_PAIR);
  _V10_Dpair_D953.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D952.first = VEncodePointer(&_V10_Dpair_D948, VPOINTER_PAIR);
  _V10_Dpair_D952.rest = VEncodePointer(&_V10_Dpair_D951, VPOINTER_PAIR);
  _V10_Dpair_D951.first = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D951.rest = VNULL;
  _V10_Dpair_D950.first = _V0_Mk;
  _V10_Dpair_D950.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D949.first = _V0ht;
  _V10_Dpair_D949.rest = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V10_Dpair_D948.first = _V0vanity;
  _V10_Dpair_D948.rest = VEncodePointer(&_V10_Dpair_D947, VPOINTER_PAIR);
  _V10_Dpair_D947.first = _V0hashtable;
  _V10_Dpair_D947.rest = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D946.first = _V0hash__table__set_B;
  _V10_Dpair_D946.rest = VNULL;
  _V10_Dpair_D944.first = VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR);
  _V10_Dpair_D944.rest = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D943.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D943.rest = VNULL;
  _V10_Dpair_D942.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D942.rest = VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR);
  _V10_Dpair_D941.first = VEncodeBool(false);
  _V10_Dpair_D941.rest = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D940.first = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D940.rest = VNULL;
  _V10_Dpair_D939.first = _V0rummaged__waybill;
  _V10_Dpair_D939.rest = VNULL;
  _V40VHashTableSlotSet = VEncodePointer(VLookupConstant("_V40VHashTableSlotSet", &_VW_V40VHashTableSlotSet), VPOINTER_CLOSURE);
  _V10_Dpair_D937.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D937.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D936.first = VEncodeBool(false);
  _V10_Dpair_D936.rest = VEncodePointer(&_V10_Dpair_D935, VPOINTER_PAIR);
  _V10_Dpair_D935.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D935.rest = VNULL;
  _V10_Dpair_D934.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D934.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D933.first = VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR);
  _V10_Dpair_D933.rest = VNULL;
  _V10_Dpair_D932.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D931.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D931.rest = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D930.first = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D930.rest = VNULL;
  _V10_Dpair_D929.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D929.rest = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D928.first = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D928.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D927.first = VEncodeBool(false);
  _V10_Dpair_D927.rest = VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR);
  _V10_Dpair_D926.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D926.rest = VNULL;
  _V10_Dpair_D925.first = _V0idx;
  _V10_Dpair_D925.rest = VNULL;
  _V10_Dpair_D924.first = VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR);
  _V10_Dpair_D924.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D923.first = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D923.rest = VNULL;
  _V10_Dpair_D922.first = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D922.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D921.first = VEncodeBool(false);
  _V10_Dpair_D921.rest = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D920.first = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D920.rest = VNULL;
  _V10_Dpair_D919.first = _V0hash;
  _V10_Dpair_D919.rest = VNULL;
  _V10_Dpair_D918.first = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D918.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D917.first = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D917.rest = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D916.first = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D916.rest = VNULL;
  _V10_Dpair_D915.first = _V0_Mk;
  _V10_Dpair_D915.rest = VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR);
  _V10_Dpair_D914.first = _V0ht;
  _V10_Dpair_D914.rest = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D913.first = _V0key;
  _V10_Dpair_D913.rest = VNULL;
  _V10_Dpair_D912.first = _V0vanity;
  _V10_Dpair_D912.rest = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D911.first = _V0hashtable;
  _V10_Dpair_D911.rest = VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR);
  _V10_Dpair_D910.first = _V0hash__table__delete_B;
  _V10_Dpair_D910.rest = VNULL;
  _V10_Dpair_D909.first = VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR);
  _V10_Dpair_D909.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D908.first = VEncodePointer(&_V10_Dpair_D907, VPOINTER_PAIR);
  _V10_Dpair_D908.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D907.first = _V0vanity;
  _V10_Dpair_D907.rest = VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR);
  _V10_Dpair_D906.first = _V0hashtable;
  _V10_Dpair_D906.rest = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D905.first = _V0hash__table__size;
  _V10_Dpair_D905.rest = VNULL;
  _V10_Dpair_D904.first = VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR);
  _V10_Dpair_D904.rest = VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR);
  _V10_Dpair_D903.first = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D903.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D902.first = _V0vanity;
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D901.first = _V0hashtable;
  _V10_Dpair_D901.rest = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D900.first = _V0hash__table__for__each;
  _V10_Dpair_D900.rest = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D899.first = _V10_Dfinalize_D39_D133;
  _V10_Dpair_D899.rest = VNULL;
  _V10_Dpair_D898.first = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D898.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D897.first = VEncodeBool(false);
  _V10_Dpair_D897.rest = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D896.first = VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR);
  _V10_Dpair_D896.rest = VNULL;
  _V10_Dpair_D895.first = _V0_Mk;
  _V10_Dpair_D895.rest = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D894.first = _V0broke_Q;
  _V10_Dpair_D894.rest = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V40VWaybillUnpack = VEncodePointer(VLookupConstant("_V40VWaybillUnpack", &_VW_V40VWaybillUnpack), VPOINTER_CLOSURE);
  _V10_Dpair_D893.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D892.rest = VNULL;
  _V10_Dpair_D891.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D891.rest = VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR);
  _V10_Dpair_D890.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D890.rest = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D889.first = VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR);
  _V10_Dpair_D889.rest = VNULL;
  _V10_Dpair_D888.first = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D888.rest = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D887.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D887.rest = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D886.first = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D886.rest = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D885.first = _V0_Mx;
  _V10_Dpair_D885.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D884.first = _V0_Mp;
  _V10_Dpair_D884.rest = VNULL;
  _V10_Dpair_D883.first = _V0waybill;
  _V10_Dpair_D883.rest = VNULL;
  _V10_Dpair_D882.first = VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR);
  _V10_Dpair_D882.rest = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D881.first = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D881.rest = VNULL;
  _V10_Dpair_D880.first = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D880.rest = VEncodePointer(&_V10_Dpair_D879, VPOINTER_PAIR);
  _V10_Dpair_D879.first = VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR);
  _V10_Dpair_D879.rest = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D878.first = _V0loop_D38;
  _V10_Dpair_D878.rest = VNULL;
  _V10_Dpair_D877.first = VEncodePointer(&_V10_Dpair_D873, VPOINTER_PAIR);
  _V10_Dpair_D877.rest = VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR);
  _V10_Dpair_D876.first = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D876.rest = VNULL;
  _V10_Dpair_D875.first = _V0_Mk;
  _V10_Dpair_D875.rest = VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR);
  _V10_Dpair_D874.first = _V0i_D48;
  _V10_Dpair_D874.rest = VNULL;
  _V10_Dpair_D873.first = _V0vanity;
  _V10_Dpair_D873.rest = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D872.first = _V0hashtable;
  _V10_Dpair_D872.rest = VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR);
  _V10_Dpair_D871.first = _V0hash__table__for__each;
  _V10_Dpair_D871.rest = VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR);
  _V10_Dpair_D870.first = _V10_Dloop_D38_D134;
  _V10_Dpair_D870.rest = VNULL;
  _V10_Dpair_D869.first = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D869.rest = VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR);
  _V10_Dpair_D868.first = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D868.rest = VNULL;
  _V10_Dpair_D867.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D867.rest = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D866.first = _V0vec;
  _V10_Dpair_D866.rest = VNULL;
  _V10_Dpair_D865.first = VEncodeBool(false);
  _V10_Dpair_D865.rest = VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR);
  _V10_Dpair_D864.first = VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR);
  _V10_Dpair_D864.rest = VNULL;
  _V10_Dpair_D863.first = _V0finalize_D39;
  _V10_Dpair_D863.rest = VNULL;
  _V40VHashTableSlot = VEncodePointer(VLookupConstant("_V40VHashTableSlot", &_VW_V40VHashTableSlot), VPOINTER_CLOSURE);
  _V10_Dpair_D862.first = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D862.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D861.first = VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR);
  _V10_Dpair_D861.rest = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D860.first = _V0vanity;
  _V10_Dpair_D860.rest = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D859.first = _V0hashtable;
  _V10_Dpair_D859.rest = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D858.first = _V0hash__table__for__each;
  _V10_Dpair_D858.rest = VNULL;
  _V10_Dpair_D857.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D857.rest = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D856.first = VEncodePointer(&_V10_Dpair_D855, VPOINTER_PAIR);
  _V10_Dpair_D856.rest = VNULL;
  _V10_Dpair_D855.first = VEncodePointer(&_V10_Dpair_D832, VPOINTER_PAIR);
  _V10_Dpair_D855.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D854.first = VEncodePointer(&_V10_Dpair_D834, VPOINTER_PAIR);
  _V10_Dpair_D854.rest = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D853.first = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D853.rest = VNULL;
  _V10_Dpair_D852.first = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D852.rest = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D851.first = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D851.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D850.first = VEncodePointer(&_V10_Dpair_D849, VPOINTER_PAIR);
  _V10_Dpair_D850.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D849.first = VEncodePointer(&_V10_Dpair_D845, VPOINTER_PAIR);
  _V10_Dpair_D849.rest = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D848.first = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D848.rest = VNULL;
  _V10_Dpair_D847.first = _V0_Mk;
  _V10_Dpair_D847.rest = VEncodePointer(&_V10_Dpair_D846, VPOINTER_PAIR);
  _V10_Dpair_D846.first = _V0f;
  _V10_Dpair_D846.rest = VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR);
  _V10_Dpair_D845.first = _V0vanity;
  _V10_Dpair_D845.rest = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D844.first = _V0hashtable;
  _V10_Dpair_D844.rest = VEncodePointer(&_V10_Dpair_D843, VPOINTER_PAIR);
  _V10_Dpair_D843.first = _V0hash__table__map___Glist;
  _V10_Dpair_D843.rest = VNULL;
  _V10_Dpair_D842.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D842.rest = VEncodePointer(&_V10_Dpair_D841, VPOINTER_PAIR);
  _V10_Dpair_D841.first = VEncodePointer(&_V10_Dpair_D840, VPOINTER_PAIR);
  _V10_Dpair_D841.rest = VNULL;
  _V10_Dpair_D840.first = VEncodePointer(&_V10_Dpair_D832, VPOINTER_PAIR);
  _V10_Dpair_D840.rest = VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR);
  _V10_Dpair_D839.first = VEncodePointer(&_V10_Dpair_D834, VPOINTER_PAIR);
  _V10_Dpair_D839.rest = VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR);
  _V10_Dpair_D838.first = VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR);
  _V10_Dpair_D838.rest = VNULL;
  _V10_Dpair_D837.first = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D837.rest = VEncodePointer(&_V10_Dpair_D836, VPOINTER_PAIR);
  _V10_Dpair_D836.first = VEncodePointer(&_V10_Dpair_D820, VPOINTER_PAIR);
  _V10_Dpair_D836.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D835.first = _V0acc;
  _V10_Dpair_D835.rest = VNULL;
  _V10_Dpair_D834.first = VEncodeBool(false);
  _V10_Dpair_D834.rest = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D833.first = VEncodePointer(&_V10_Dpair_D832, VPOINTER_PAIR);
  _V10_Dpair_D833.rest = VNULL;
  _V10_Dpair_D832.first = _V0_Mk;
  _V10_Dpair_D832.rest = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V10_Dpair_D831.first = _V0key;
  _V10_Dpair_D831.rest = VEncodePointer(&_V10_Dpair_D830, VPOINTER_PAIR);
  _V10_Dpair_D830.first = _V0datum;
  _V10_Dpair_D830.rest = VNULL;
  _V10_Dpair_D829.first = VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR);
  _V10_Dpair_D829.rest = VEncodePointer(&_V10_Dpair_D828, VPOINTER_PAIR);
  _V10_Dpair_D828.first = VEncodePointer(&_V10_Dpair_D827, VPOINTER_PAIR);
  _V10_Dpair_D828.rest = VNULL;
  _V10_Dpair_D827.first = _V0unquote;
  _V10_Dpair_D827.rest = VEncodePointer(&_V10_Dpair_D826, VPOINTER_PAIR);
  _V10_Dpair_D826.first = _V0unmangled__env;
  _V10_Dpair_D826.rest = VNULL;
  _V10_Dpair_D825.first = VEncodeBool(false);
  _V10_Dpair_D825.rest = VEncodePointer(&_V10_Dpair_D824, VPOINTER_PAIR);
  _V10_Dpair_D824.first = _V0_U;
  _V10_Dpair_D824.rest = VNULL;
  _V10_Dpair_D823.first = VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR);
  _V10_Dpair_D823.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D822.first = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D822.rest = VEncodePointer(&_V10_Dpair_D821, VPOINTER_PAIR);
  _V10_Dpair_D821.first = VEncodePointer(&_V10_Dpair_D820, VPOINTER_PAIR);
  _V10_Dpair_D821.rest = VNULL;
  _V10_Dpair_D820.first = _V0_Mk;
  _V10_Dpair_D820.rest = VEncodePointer(&_V10_Dpair_D819, VPOINTER_PAIR);
  _V10_Dpair_D819.first = _V0f;
  _V10_Dpair_D819.rest = VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR);
  _V10_Dpair_D818.first = _V0seed;
  _V10_Dpair_D818.rest = VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR);
  _V10_Dpair_D817.first = _V0vanity;
  _V10_Dpair_D817.rest = VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR);
  _V10_Dpair_D816.first = _V0hashtable;
  _V10_Dpair_D816.rest = VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR);
  _V10_Dpair_D815.first = _V0hash__table__fold;
  _V10_Dpair_D815.rest = VNULL;
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V10_Dpair_D814.first = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D814.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D813.first = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D813.rest = VNULL;
  _V10_Dpair_D812.first = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D812.rest = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D811.first = VEncodePointer(&_V10_Dpair_D771, VPOINTER_PAIR);
  _V10_Dpair_D811.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D810.first = _V0hash__table___Galist;
  _V10_Dpair_D810.rest = VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR);
  _V10_Dpair_D809.first = _V0hash__table__fold;
  _V10_Dpair_D809.rest = VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR);
  _V10_Dpair_D808.first = _V0hash__table__map___Glist;
  _V10_Dpair_D808.rest = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D807.first = _V0hash__table__for__each;
  _V10_Dpair_D807.rest = VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR);
  _V10_Dpair_D806.first = _V0hash__table__size;
  _V10_Dpair_D806.rest = VEncodePointer(&_V10_Dpair_D805, VPOINTER_PAIR);
  _V10_Dpair_D805.first = _V0hash__table__delete_B;
  _V10_Dpair_D805.rest = VEncodePointer(&_V10_Dpair_D804, VPOINTER_PAIR);
  _V10_Dpair_D804.first = _V0hash__table__set_B;
  _V10_Dpair_D804.rest = VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR);
  _V10_Dpair_D803.first = _V0hash__table__set__impl_B;
  _V10_Dpair_D803.rest = VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR);
  _V10_Dpair_D802.first = _V0hash__table__grow;
  _V10_Dpair_D802.rest = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D801.first = _V0hash__table__ref;
  _V10_Dpair_D801.rest = VEncodePointer(&_V10_Dpair_D800, VPOINTER_PAIR);
  _V10_Dpair_D800.first = _V0hash__table__ref__impl;
  _V10_Dpair_D800.rest = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D799.first = _V0hash__table__rummage;
  _V10_Dpair_D799.rest = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D798.first = _V0hash__table__sweep;
  _V10_Dpair_D798.rest = VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR);
  _V10_Dpair_D797.first = _V0robinhood__shuffle;
  _V10_Dpair_D797.rest = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D796.first = _V0hash__table__reinsert_B;
  _V10_Dpair_D796.rest = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D795.first = _V0hash__table__find__impl;
  _V10_Dpair_D795.rest = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D794.first = _V0validate__robinhood;
  _V10_Dpair_D794.rest = VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR);
  _V10_Dpair_D793.first = _V0validate__robinhood__impl;
  _V10_Dpair_D793.rest = VEncodePointer(&_V10_Dpair_D792, VPOINTER_PAIR);
  _V10_Dpair_D792.first = _V0hash__table__keyvector;
  _V10_Dpair_D792.rest = VEncodePointer(&_V10_Dpair_D791, VPOINTER_PAIR);
  _V10_Dpair_D791.first = _V0sequence_G;
  _V10_Dpair_D791.rest = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D790.first = _V0sequence_L;
  _V10_Dpair_D790.rest = VEncodePointer(&_V10_Dpair_D789, VPOINTER_PAIR);
  _V10_Dpair_D789.first = _V0waybill__key__matches_Q;
  _V10_Dpair_D789.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D788.first = _V0hash__poverty;
  _V10_Dpair_D788.rest = VEncodePointer(&_V10_Dpair_D787, VPOINTER_PAIR);
  _V10_Dpair_D787.first = _V0hash__slot;
  _V10_Dpair_D787.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D786.first = _V0make__entry;
  _V10_Dpair_D786.rest = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D785.first = _V0make__hash__table;
  _V10_Dpair_D785.rest = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D784.first = _V0hash__blob;
  _V10_Dpair_D784.rest = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D783.first = _V0hash__combine;
  _V10_Dpair_D783.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D782.first = _V0current__hash;
  _V10_Dpair_D782.rest = VNULL;
  _V10_Dpair_D781.first = VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR);
  _V10_Dpair_D781.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D780.first = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D780.rest = VNULL;
  _V10_Dpair_D779.first = _V0_Mk;
  _V10_Dpair_D779.rest = VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR);
  _V10_Dpair_D778.first = _V0ht;
  _V10_Dpair_D778.rest = VNULL;
  _V10_Dpair_D777.first = _V0vanity;
  _V10_Dpair_D777.rest = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D776.first = _V0hashtable;
  _V10_Dpair_D776.rest = VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR);
  _V10_Dpair_D775.first = _V0hash__table___Galist;
  _V10_Dpair_D775.rest = VNULL;
  _V10_Dpair_D774.first = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D774.rest = VEncodePointer(&_V10_Dpair_D749, VPOINTER_PAIR);
  _V10_Dpair_D773.first = VEncodeBool(false);
  _V10_Dpair_D773.rest = VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR);
  _V10_Dpair_D772.first = VEncodePointer(&_V10_Dpair_D771, VPOINTER_PAIR);
  _V10_Dpair_D772.rest = VNULL;
  _V10_Dpair_D771.first = _V0_Mk;
  _V10_Dpair_D771.rest = VEncodePointer(&_V10_Dpair_D770, VPOINTER_PAIR);
  _V10_Dpair_D770.first = _V0bitwise__and;
  _V10_Dpair_D770.rest = VEncodePointer(&_V10_Dpair_D769, VPOINTER_PAIR);
  _V10_Dpair_D769.first = _V0error;
  _V10_Dpair_D769.rest = VEncodePointer(&_V10_Dpair_D768, VPOINTER_PAIR);
  _V10_Dpair_D768.first = _V0displayln;
  _V10_Dpair_D768.rest = VEncodePointer(&_V10_Dpair_D767, VPOINTER_PAIR);
  _V10_Dpair_D767.first = _V0vector__map;
  _V10_Dpair_D767.rest = VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR);
  _V10_Dpair_D766.first = _V0equal_Q;
  _V10_Dpair_D766.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D762.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D762.rest = VEncodePointer(&_V10_Dpair_D761, VPOINTER_PAIR);
  _V10_Dpair_D761.first = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D761.rest = VNULL;
  _V10_Dpair_D760.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D760.rest = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D759.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D759.rest = VEncodePointer(&_V10_Dpair_D758, VPOINTER_PAIR);
  _V10_Dpair_D758.first = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D758.rest = VNULL;
  _V10_Dpair_D757.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D757.rest = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D756.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D756.rest = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D755.first = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D755.rest = VNULL;
  _V10_Dpair_D754.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D754.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D753.first = VEncodeBool(false);
  _V10_Dpair_D753.rest = VEncodePointer(&_V10_Dpair_D752, VPOINTER_PAIR);
  _V10_Dpair_D752.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D752.rest = VNULL;
  _V10_Dpair_D751.first = _V0_Mx;
  _V10_Dpair_D751.rest = VNULL;
  _V10_Dpair_D750.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D750.rest = VEncodePointer(&_V10_Dpair_D749, VPOINTER_PAIR);
  _V10_Dpair_D749.first = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D749.rest = VNULL;
  _V10_Dpair_D748.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D748.rest = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D747.first = VNULL;
  _V10_Dpair_D747.rest = VNULL;
  _V10_Dpair_D746.first = VEncodeBool(false);
  _V10_Dpair_D746.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D745.first = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D745.rest = VNULL;
  _V10_Dpair_D744.first = _V0_Mk;
  _V10_Dpair_D744.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0k3, VEncodePointer(&_V10_Dpair_D762, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0k2, VEncodePointer(&_V10_Dpair_D759, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0k1, VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table___Galist, VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold_V0k4, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold_V0k5, VEncodePointer(&_V10_Dpair_D842, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold_V0lambda4, VEncodePointer(&_V10_Dpair_D839, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__fold, VEncodePointer(&_V10_Dpair_D823, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k6, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0k7, VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist_V0lambda5, VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__map___Glist, VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda7, VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0lambda8, VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k8, VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134_V0k9, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dloop_D38_D134, VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V0lambda6, VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each_V10_Dfinalize_D39_D133, VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__for__each, VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__size_V0k10, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__size, VEncodePointer(&_V10_Dpair_D909, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k13, VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k16, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k15, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k18, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k17, VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k14, VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k12, VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B_V0k11, VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__delete_B, VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k21, VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k24, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k23, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k22, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k20, VEncodePointer(&_V10_Dpair_D968, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B_V0k19, VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set_B, VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k26, VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k28, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k29, VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k32, VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k31, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k33, VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k30, VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166_V0k27, VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V10_Dloop_D166, VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B_V0k25, VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__set__impl_B, VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k34, VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k37, VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182_V0k38, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dloop_D26_D182, VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k39, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0lambda9, VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V10_Dfinalize_D27_D181, VEncodePointer(&_V10_Dpair_D1083, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k36, VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow_V0k35, VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__grow, VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dhash__table__ref_D97_V0lambda10, VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref, VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda11, VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0lambda12, VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197_V0k41, VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V10_Dfallback__ref_D197, VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k43, VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda13, VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0lambda14, VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k44, VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k42, VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl_V0k40, VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__ref__impl, VEncodePointer(&_V10_Dpair_D1101, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda15, VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k49, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k48, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k47, VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0lambda16, VEncodePointer(&_V10_Dpair_D1175, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k46, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214_V0k45, VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage_V10_Dloop_D214, VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__rummage, VEncodePointer(&_V10_Dpair_D1149, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k51, VEncodePointer(&_V10_Dpair_D1216, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k54, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k53, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k56, VEncodePointer(&_V10_Dpair_D1226, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k55, VEncodePointer(&_V10_Dpair_D1221, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229_V0k52, VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V10_Dloop_D229, VEncodePointer(&_V10_Dpair_D1210, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep_V0k50, VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__sweep, VEncodePointer(&_V10_Dpair_D1191, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k61, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k60, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k59, VEncodePointer(&_V10_Dpair_D1259, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k58, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237_V0k57, VEncodePointer(&_V10_Dpair_D1252, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle_V10_Dloop_D237, VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0robinhood__shuffle, VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k63, VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k65, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k67, VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k66, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k68, VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248_V0k64, VEncodePointer(&_V10_Dpair_D1284, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V10_Dloop_D248, VEncodePointer(&_V10_Dpair_D1279, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B_V0k62, VEncodePointer(&_V10_Dpair_D1270, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__reinsert_B, VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k70, VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k73, VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k72, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260_V0k71, VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V10_Dloop_D260, VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl_V0k69, VEncodePointer(&_V10_Dpair_D1304, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__find__impl, VEncodePointer(&_V10_Dpair_D1299, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood, VEncodePointer(&_V10_Dpair_D1336, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k75, VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k77, VEncodePointer(&_V10_Dpair_D1376, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k79, VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k81, VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k83, VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k87, VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k89, VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k91, VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k93, VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k95, VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k98, VEncodePointer(&_V10_Dpair_D1466, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k97, VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k100, VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k104, VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k103, VEncodePointer(&_V10_Dpair_D1474, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k106, VEncodePointer(&_V10_Dpair_D1474, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k107, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k105, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k102, VEncodePointer(&_V10_Dpair_D1471, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k101, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k99, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k96, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k94, VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k92, VEncodePointer(&_V10_Dpair_D1449, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k90, VEncodePointer(&_V10_Dpair_D1442, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k88, VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282_V0k86, VEncodePointer(&_V10_Dpair_D1426, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dloop_D14_D282, VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0lambda18, VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V10_Dfinalize_D15_D281, VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k85, VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k108, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k84, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k82, VEncodePointer(&_V10_Dpair_D1394, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k80, VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k78, VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272_V0k76, VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dloop_D1_D272, VEncodePointer(&_V10_Dpair_D1363, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0lambda17, VEncodePointer(&_V10_Dpair_D1350, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V10_Dfinalize_D2_D271, VEncodePointer(&_V10_Dpair_D1491, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl_V0k74, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0validate__robinhood__impl, VEncodePointer(&_V10_Dpair_D1341, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda20, VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda21, VEncodePointer(&_V10_Dpair_D1512, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector_V0lambda19, VEncodePointer(&_V10_Dpair_D1502, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__table__keyvector, VEncodePointer(&_V10_Dpair_D1496, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0sequence_G, VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0sequence_L_V0k109, VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0sequence_L, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda22, VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q_V0lambda23, VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0waybill__key__matches_Q, VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty_V0k110, VEncodePointer(&_V10_Dpair_D1555, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__poverty, VEncodePointer(&_V10_Dpair_D1551, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0hash__slot, VEncodePointer(&_V10_Dpair_D1563, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0make__entry_V0k113, VEncodePointer(&_V10_Dpair_D1585, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0make__entry_V0k112, VEncodePointer(&_V10_Dpair_D1582, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0make__entry_V0k111, VEncodePointer(&_V10_Dpair_D1579, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0make__entry, VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dmake__hash__table_D113_V0k115, VEncodePointer(&_V10_Dpair_D1614, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dmake__hash__table_D113_V0k117, VEncodePointer(&_V10_Dpair_D1618, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dmake__hash__table_D113_V0k118, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dmake__hash__table_D113_V0k116, VEncodePointer(&_V10_Dpair_D1615, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dmake__hash__table_D113_V0k114, VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hashtable_V0make__hash__table, VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR));
}
