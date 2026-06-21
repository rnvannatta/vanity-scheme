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

VEnv * _V60_V0vanity_V0compiler_V0library;

static VPair _V10_Dpair_D1467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "library header must only have one statement" };
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
VWEAK VWORD _V0parse;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0parse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "parse" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "unable to find library" };
static VPair _V10_Dpair_D1452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0fd;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0fd = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "fd" };
static VPair _V10_Dpair_D1443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0expr_D11;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D11 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.11" };
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
VWEAK VWORD _V0expr_D8;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D8 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.8" };
static VPair _V10_Dpair_D1391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D9;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D9 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.9" };
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
VWEAK VWORD _V0expr_D6;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D6 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.6" };
static VPair _V10_Dpair_D1375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0expr_D4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.4" };
static VPair _V10_Dpair_D1361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D1;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0kk_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "kk.1" };
static VPair _V10_Dpair_D1347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static VPair _V10_Dpair_D1336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
static VPair _V10_Dpair_D1330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D12;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.12" };
static VPair _V10_Dpair_D1326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0constant__export;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0constant__export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "constant-export" };
static VPair _V10_Dpair_D1320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D13;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D13 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.13" };
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
VWEAK VWORD _V0lib;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0lib = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "lib" };
static VPair _V10_Dpair_D1282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D47;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D47 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.47" };
static VPair _V10_Dpair_D1277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D48;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D48 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.48" };
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
static VPair _V10_Dpair_D1258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D45;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D45 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.45" };
static VPair _V10_Dpair_D1257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D46;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D46 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.46" };
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
VWEAK VWORD _V0kk_D42;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D42 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.42" };
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
VWEAK VWORD _V0expr_D24;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D24 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.24" };
static VPair _V10_Dpair_D1234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D40;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D40 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.40" };
static VPair _V10_Dpair_D1222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D41;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D41 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.41" };
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
VWEAK VWORD _V0stringfix;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0stringfix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "stringfix" };
static VPair _V10_Dpair_D1205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D38;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D38 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.38" };
static VPair _V10_Dpair_D1196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D39;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D39 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.39" };
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
VWEAK VWORD _V0kk_D35;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D35 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.35" };
static VPair _V10_Dpair_D1183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D21;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D21 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.21" };
static VPair _V10_Dpair_D1172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D22;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D22 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.22" };
static VPair _V10_Dpair_D1170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0except;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0except = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "except" };
static VPair _V10_Dpair_D1162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0expr_D33;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.33" };
static VPair _V10_Dpair_D1137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1136 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D34;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D34 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.34" };
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
VWEAK VWORD _V0kk_D30;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D30 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.30" };
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
VWEAK VWORD _V0expr_D19;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D19 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.19" };
static VPair _V10_Dpair_D1114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0only;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0only = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "only" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1107 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static VPair _V10_Dpair_D1106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1089 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D28;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D28 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.28" };
VWEAK VWORD _V0path;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "path" };
static VPair _V10_Dpair_D1088 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1087 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D29;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D29 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.29" };
VWEAK VWORD _V0imports;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0imports = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "imports" };
static VPair _V10_Dpair_D1086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0constant__imports;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0constant__imports = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "constant-imports" };
static VPair _V10_Dpair_D1085 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1084 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1083 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1082 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1081 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1080 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1079 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1077 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D25;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D25 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.25" };
static VPair _V10_Dpair_D1074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0resolved__import;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0resolved__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "resolved-import" };
static VPair _V10_Dpair_D1068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D17;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D17 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.17" };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0names;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0names = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "names" };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1054 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D14;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D14 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.14" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1046 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid export" };
static VPair _V10_Dpair_D1045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
static VPair _V10_Dpair_D1042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1041 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1040 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D53;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D53 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.53" };
static VPair _V10_Dpair_D1034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D54;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D54 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.54" };
static VPair _V10_Dpair_D1032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0kk_D50;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D50 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.50" };
static VPair _V10_Dpair_D1016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1013 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1012 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static VPair _V10_Dpair_D1011 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1010 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dprocess__export_D138;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10_Dprocess__export_D138 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##.process-export.138" };
static VPair _V10_Dpair_D1006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D49;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0x_D49 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "x.49" };
static VPair _V10_Dpair_D995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0renames;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0renames = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "renames" };
static VPair _V10_Dpair_D989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Drename__import_D137;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10_Drename__import_D137 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##.rename-import.137" };
static VPair _V10_Dpair_D984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D983 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D982 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D981 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D980 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D979 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0process__export;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0process__export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "process-export" };
VWEAK VWORD _V0rename__import;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0rename__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "rename-import" };
VWEAK VWORD _V0prefix__import;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0prefix__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "prefix-import" };
static VPair _V10_Dpair_D967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0prefix;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0prefix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "prefix" };
static VPair _V10_Dpair_D962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dprefix__import_D136;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10_Dprefix__import_D136 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##.prefix-import.136" };
static VPair _V10_Dpair_D957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
static VPair _V10_Dpair_D951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D947 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D945 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D942 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0c;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0c = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "c" };
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
static VPair _V10_Dpair_D927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0len;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0len = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "len" };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D130;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D130 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.130" };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0str;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0str = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "str" };
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
VWEAK VWORD _V0b;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0b = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "b" };
VWEAK VWORD _V0a;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0a = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "a" };
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
static VPair _V10_Dpair_D890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D873 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D870 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A.scmh" };
static VPair _V10_Dpair_D869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D863 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static VPair _V10_Dpair_D862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D855 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
static VPair _V10_Dpair_D854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
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
static VPair _V10_Dpair_D834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D59;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D59 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.59" };
static VPair _V10_Dpair_D831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0body;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0body = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "body" };
VWEAK VWORD _V0name;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "name" };
static VPair _V10_Dpair_D829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D826 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D823 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
static VPair _V10_Dpair_D816 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0libs;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0libs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "libs" };
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
VWEAK VWORD _V0input_D56;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0input_D56 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "input.56" };
static VPair _V10_Dpair_D792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D791 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D55;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D55 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.55" };
static VPair _V10_Dpair_D783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D764 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0library__interfaces;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0library__interfaces = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "library-interfaces" };
VWEAK VWORD _V0load__library__interface;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0load__library__interface = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "load-library-interface" };
VWEAK VWORD _V0library__exists_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0library__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "library-exists\?" };
VWEAK VWORD _V0register__library__interface_B;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0register__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "register-library-interface!" };
VWEAK VWORD _V0import__path;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0import__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "import-path" };
VWEAK VWORD _V0find__library__interface_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0find__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "find-library-interface!" };
VWEAK VWORD _V0extract__exports;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0extract__exports = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "extract-exports" };
VWEAK VWORD _V0extract__constants;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0extract__constants = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "extract-constants" };
VWEAK VWORD _V0process__import_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0process__import_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "process-import!" };
VWEAK VWORD _V0acceptable__char_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0acceptable__char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "acceptable-char\?" };
VWEAK VWORD _V0acceptable__characters_Q;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0acceptable__characters_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "acceptable-characters\?" };
VWEAK VWORD _V0andf;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0andf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "andf" };
VWEAK VWORD _V0valid__import__element_Q;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0valid__import__element_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "valid-import-element\?" };
VWEAK VWORD _V0valid__import_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0valid__import_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "valid-import\?" };
VWEAK VWORD _V0import___Gpath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0import___Gpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "import->path" };
VWEAK VWORD _V0import__basepath;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0import__basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "import-basepath" };
static VPair _V10_Dpair_D762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D760 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0statements;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0statements = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "statements" };
static VPair _V10_Dpair_D758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0gather__dependencies;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0gather__dependencies = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "gather-dependencies" };
VWEAK VWORD _V0library;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "library" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D746 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D742 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D741 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D740 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D739 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D738 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D737 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D736 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D735 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D734 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D733 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D732 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0resolve__file__path;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0resolve__file__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "resolve-file-path" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D726 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D725 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D724 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D723 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D722 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D721 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D720 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D719 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D718 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D717 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D716 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D715 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D714 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D713 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D712 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D711 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D710 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D709 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0library__exists_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import__path, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0extract__exports, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0extract__constants, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0andf, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import__basepath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _var0, _var1);
static void _V0vanity_V0compiler_V0library_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.252 4 0) (##string ##.string.728) (bruijn ##.%x.253 0 0) 'equal? 'append 'map 'sprintf 'fold 'memv 'list 'cadr 'error 'filter 'compiler-error 'assv 'string-append 'cddr 'assoc 'resolve-file-path 'close-port 'read-all 'search-open-input-file)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 22,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0append,
      _V0map,
      _V0sprintf,
      _V0fold,
      _V0memv,
      _V0list,
      _V0cadr,
      _V0error,
      _V0filter,
      _V0compiler__error,
      _V0assv,
      _V0string__append,
      _V0cddr,
      _V0assoc,
      _V0resolve__file__path,
      _V0close__port,
      _V0read__all,
      _V0search__open__input__file);
}
static void _V0vanity_V0compiler_V0library_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0library_V20_V0k4) (bruijn ##.%x.254 2 0) (bruijn ##.%x.255 1 0) (bruijn ##.%x.256 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k4, self)))),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0library_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k3) (##string ##.string.729))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D729.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k2) (##string ##.string.730))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D730.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k1) (##string ##.string.731))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D731.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.276 0 0) (bruijn ##.%k.274 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.61 13 2) (bruijn ##.%k.277 3 0) (bruijn ##.%x.278 2 0) (bruijn ##.%x.279 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.532) ((##vcore.cdr (bruijn ##.statements.113 10 1))) (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 11 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9) (bruijn ##.%x.532 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 10 3) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8) (bruijn ##.import-path.108 9 12) (bruijn ##.libs.531 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8, self)))),
      VGetArg(statics, 9-1, 12),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.275 0 0) (basic-block 1 1 (##.libs.531) ((##vcore.cdr (bruijn ##.input.56.520 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5) (bruijn ##.kk.55.114 5 1))) ((bruijn ##.%k.274 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5, self)))),
      VGetArg(statics, 5-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.521 1 1) (basic-block 1 1 (##.%x.530) ((##vcore.car (bruijn ##.input.56.520 2 0))) ((bruijn ##.equal?.60 7 1) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6) 'import (bruijn ##.%x.530 0 0))) ((bruijn ##.%k.274 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6, self)))),
      _V0import,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.267 0 0) (bruijn ##.%k.264 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.61 15 2) (bruijn ##.%k.268 3 0) (bruijn ##.%x.269 2 0) (bruijn ##.%x.270 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.529) ((##vcore.cdr (bruijn ##.statements.113 12 1))) (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 13 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15) (bruijn ##.%x.529 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 11 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14) (bruijn ##.body.528 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.265 0 0) (basic-block 2 2 (##.expr.59.525 ##.%p.526) ((##vcore.cdr (bruijn ##.input.56.520 5 0)) (##vcore.pair? (bruijn ##.expr.59.525 0 0))) (if (bruijn ##.%p.526 0 1) (basic-block 2 2 (##.name.527 ##.body.528) ((##vcore.car (bruijn ##.expr.59.525 1 0)) (##vcore.cdr (bruijn ##.expr.59.525 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6) (bruijn ##.kk.55.114 7 1))) ((bruijn ##.%k.264 3 0) #f))) ((bruijn ##.%k.264 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6, self)))),
      VGetArg(statics, 7-1, 1));
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
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.522 1 0) (basic-block 1 1 (##.%x.524) ((##vcore.car (bruijn ##.input.56.520 3 0))) ((bruijn ##.equal?.60 8 1) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12) 'define-library (bruijn ##.%x.524 0 0))) ((bruijn ##.%k.264 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12, self)))),
      _V0define__library,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.523) ((##vcore.cdr (bruijn ##.statements.113 6 1))) (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 7 0) (bruijn ##.%k.261 1 0) (bruijn ##.%x.523 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.260 2 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7) (bruijn ##.kk.55.114 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.522) ((##vcore.pair? (bruijn ##.input.56.520 1 0))) ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.56.520 ##.%p.521) ((##vcore.car (bruijn ##.statements.113 3 1)) (##vcore.pair? (bruijn ##.input.56.520 0 0))) ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.519) ((##vcore.null? (bruijn ##.statements.113 1 1))) (if (bruijn ##.%p.519 0 0) ((bruijn ##.%k.258 1 0) '()) (##vcore.call/cc (bruijn ##.%k.258 1 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4))))
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
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.63 5 4) (bruijn ##.%k.282 3 0) (##string ##.string.863) (bruijn ##.%x.535 1 0) (bruijn ##.%x.285 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D863.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0import__basepath(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__basepath" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__basepath, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.533 ##.%p.534) ((##vcore.cdr (bruijn ##.import.122 1 1)) (##vcore.null? (bruijn ##.%x.533 0 0))) (if (bruijn ##.%p.534 0 1) ((bruijn ##.%k.282 1 0) (##string ##.string.855)) (basic-block 2 2 (##.%x.535 ##.%x.536) ((##vcore.car (bruijn ##.import.122 2 1)) (##vcore.cdr (bruijn ##.import.122 2 1))) (##qualified-call (vanity compiler library import-basepath) #t (bruijn ##.import-basepath.97 3 1) (close _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17) (bruijn ##.%x.536 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D855.sym, VPOINTER_OTHER));
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
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__basepath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.63 5 4) (bruijn ##.%k.288 3 0) (##string ##.string.863) (bruijn ##.%x.540 1 0) (bruijn ##.%x.292 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D863.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0import___Gpath(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import___Gpath" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import___Gpath, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.537 ##.%p.538) ((##vcore.cdr (bruijn ##.import.123 1 1)) (##vcore.null? (bruijn ##.%x.537 0 0))) (if (bruijn ##.%p.538 0 1) (basic-block 1 1 (##.%x.539) ((##vcore.car (bruijn ##.import.123 2 1))) ((bruijn ##.sprintf.63 4 4) (bruijn ##.%k.288 2 0) (##string ##.string.870) (bruijn ##.%x.539 0 0))) (basic-block 2 2 (##.%x.540 ##.%x.541) ((##vcore.car (bruijn ##.import.123 2 1)) (##vcore.cdr (bruijn ##.import.123 2 1))) (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.98 3 2) (close _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18) (bruijn ##.%x.541 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D870.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
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
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.64 4 5) (bruijn ##.%k.295 2 0) (bruijn ##.andf.101 3 5) #t (bruijn ##.%x.297 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 4,
      statics->up->vars[0],
      statics->up->up->vars[5],
      VEncodeBool(true),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.542) ((##vcore.pair? (bruijn ##.import.124 1 1))) (if (bruijn ##.%p.542 0 0) ((bruijn ##.map.62 3 3) (close _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19) (bruijn ##.valid-import-element?.100 2 4) (bruijn ##.import.124 1 1)) ((bruijn ##.%k.295 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19, self)))),
      statics->up->vars[4],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library acceptable-characters?) #t (bruijn ##.acceptable-characters?.102 5 6) (bruijn ##.%k.298 4 0) (bruijn ##.%x.301 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.544 ##.%p.545) ((##vcore.string-length (bruijn ##.%x.303 1 0)) (##vcore.> (bruijn ##.%x.544 0 0) 0)) (if (bruijn ##.%p.545 0 1) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21) (bruijn ##.x.125 3 1)) ((bruijn ##.%k.298 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpGt(runtime, NULL,
      self->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.543) ((##vcore.symbol? (bruijn ##.x.125 1 1))) (if (bruijn ##.%p.543 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20) (bruijn ##.x.125 1 1)) ((bruijn ##.%k.298 1 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0andf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0andf" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0andf, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.a.126 0 1) ((bruijn ##.%k.304 0 0) (bruijn ##.b.127 0 2)) ((bruijn ##.%k.304 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.308 0 0) (basic-block 1 1 (##.%x.549) ((##vcore.+ (bruijn ##.i.131 4 1) 1)) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.130) #f (bruijn ##.loop.130 5 0) (bruijn ##.%k.306 4 0) (bruijn ##.%x.549 0 0))) ((bruijn ##.%k.306 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.547) ((##vcore.< (bruijn ##.i.131 1 1) (bruijn ##.len.546 3 0))) (if (bruijn ##.%p.547 0 0) (basic-block 1 1 (##.%x.548) ((##vcore.string-ref (bruijn ##.str.128 5 1) (bruijn ##.i.131 2 1))) (##qualified-call (vanity compiler library acceptable-char?) #t (bruijn ##.acceptable-char?.103 6 7) (close _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22) (bruijn ##.%x.548 0 0))) ((bruijn ##.%k.306 1 0) #t)))
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
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.len.546) ((##vcore.string-length (bruijn ##.str.128 1 1))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130")) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.130) #f (bruijn ##.loop.130 0 0) (bruijn ##.%k.305 2 0) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130, self))));
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
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 4 4 (##.i.550 ##.%x.551 ##.%x.552 ##.%p.553) ((##vcore.char-integer (bruijn ##.c.132 1 1)) (##vcore.char-integer #\a) (##vcore.char-integer #\z) (##vcore.<= (bruijn ##.%x.551 0 1) (bruijn ##.i.550 0 0) (bruijn ##.%x.552 0 2))) (if (bruijn ##.%p.553 0 3) ((bruijn ##.%k.311 1 0) (bruijn ##.%p.553 0 3)) (basic-block 3 3 (##.%x.554 ##.%x.555 ##.%p.556) ((##vcore.char-integer #\A) (##vcore.char-integer #\Z) (##vcore.<= (bruijn ##.%x.554 0 0) (bruijn ##.i.550 1 0) (bruijn ##.%x.555 0 1))) (if (bruijn ##.%p.556 0 2) ((bruijn ##.%k.311 2 0) (bruijn ##.%p.556 0 2)) (basic-block 3 3 (##.%x.557 ##.%x.558 ##.%p.559) ((##vcore.char-integer #\0) (##vcore.char-integer #\9) (##vcore.<= (bruijn ##.%x.557 0 0) (bruijn ##.i.550 2 0) (bruijn ##.%x.558 0 1))) (if (bruijn ##.%p.559 0 2) ((bruijn ##.%k.311 3 0) (bruijn ##.%p.559 0 2)) ((bruijn ##.memv.65 5 6) (bruijn ##.%k.311 3 0) (bruijn ##.c.132 3 1) '(##pair ##.pair.947))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('a'));
    self->vars[2] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('z'));
    self->vars[3] = _VBasic_VCmpLe(runtime, NULL,
      self->vars[1],
      self->vars[0],
      self->vars[2]);
if(VDecodeBool(
self->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('A'));
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('Z'));
    self->vars[2] = _VBasic_VCmpLe(runtime, NULL,
      self->vars[0],
      statics->vars[0],
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('0'));
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('9'));
    self->vars[2] = _VBasic_VCmpLe(runtime, NULL,
      self->vars[0],
      statics->up->vars[0],
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 6)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VEncodePointer(&_V10_Dpair_D947, VPOINTER_PAIR));
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.562) ((##vcore.cons (bruijn ##.%x.560 4 0) (bruijn ##.%x.324 1 0))) ((bruijn ##.%k.322 5 0) (bruijn ##.%r.562 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25) (bruijn ##.%x.325 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.string-append.72 6 13) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24) (bruijn ##.prefix.140 2 2) (bruijn ##.%x.326 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24, self)))),
      statics->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.560 ##.%x.561) ((##vcore.car (bruijn ##.import.139 1 1)) (##vcore.cdr (bruijn ##.import.139 1 1))) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23) (bruijn ##.%x.561 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23, self)))),
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.49.143 1 0) ((bruijn ##.cadr.67 7 8) (bruijn ##.%k.331 0 0) (bruijn ##.x.49.143 1 0)) (basic-block 1 1 (##.%r.566) ((##vcore.cdr (bruijn ##.import.141 4 1))) ((bruijn ##.%k.331 1 0) (bruijn ##.%r.566 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      _var0,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.565) ((##vcore.cons (bruijn ##.%x.563 3 0) (bruijn ##.%x.330 1 0))) ((bruijn ##.%k.328 4 0) (bruijn ##.%r.565 0 0)))
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.563 ##.%x.564) ((##vcore.car (bruijn ##.import.141 1 1)) (##vcore.cdr (bruijn ##.import.141 1 1))) ((bruijn ##.assv.71 5 12) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26) (bruijn ##.%x.564 0 1) (bruijn ##.renames.142 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26, self)))),
      self->vars[1],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.344 0 0) (bruijn ##.%k.339 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.579) ((##vcore.cons (bruijn ##.a.573 3 0) (bruijn ##.b.576 2 0))) ((bruijn ##.%k.345 1 0) (bruijn ##.%r.579 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.340 0 0) (basic-block 2 2 (##.expr.53.571 ##.%p.572) ((##vcore.cdr (bruijn ##.e.144 6 1)) (##vcore.pair? (bruijn ##.expr.53.571 0 0))) (if (bruijn ##.%p.572 0 1) (basic-block 3 3 (##.a.573 ##.expr.54.574 ##.%p.575) ((##vcore.car (bruijn ##.expr.53.571 1 0)) (##vcore.cdr (bruijn ##.expr.53.571 1 0)) (##vcore.pair? (bruijn ##.expr.54.574 0 1))) (if (bruijn ##.%p.575 0 2) (basic-block 3 3 (##.b.576 ##.%x.577 ##.%p.578) ((##vcore.car (bruijn ##.expr.54.574 1 1)) (##vcore.cdr (bruijn ##.expr.54.574 1 1)) (##vcore.null? (bruijn ##.%x.577 0 1))) (if (bruijn ##.%p.578 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9) (bruijn ##.kk.50.145 7 1)) ((bruijn ##.%k.339 5 0) #f))) ((bruijn ##.%k.339 4 0) #f))) ((bruijn ##.%k.339 3 0) #f))) ((bruijn ##.%k.339 2 0) #f))
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9, self)))),
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.567 1 0) (basic-block 1 1 (##.%x.570) ((##vcore.car (bruijn ##.e.144 4 1))) ((bruijn ##.equal?.60 8 1) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30) 'rename (bruijn ##.%x.570 0 0))) ((bruijn ##.%k.339 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.568 1 0) ((bruijn ##.%k.337 0 0) #void) ((bruijn ##.compiler-error.70 9 11) (bruijn ##.%k.337 0 0) (##string ##.string.1046) (bruijn ##.e.144 5 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1046.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%r.569) ((##vcore.cons (bruijn ##.e.144 5 1) (bruijn ##.e.144 5 1))) ((bruijn ##.%k.335 2 0) (bruijn ##.%r.569 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.568) ((##vcore.symbol? (bruijn ##.e.144 4 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k34)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k34, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.334 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda10) (bruijn ##.kk.50.145 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda10, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.567) ((##vcore.pair? (bruijn ##.e.144 2 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k32, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.333 0 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.428 0 0) (bruijn ##.%k.425 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.436 0 0) (bruijn ##.%k.432 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 21 7) (bruijn ##.%k.437 2 0) (bruijn ##.path.645 5 0) (bruijn ##.%x.438 1 0) (bruijn ##.%x.439 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 7)), 4,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.654) ((##vcore.cdr (bruijn ##.e.168 1 1))) ((bruijn ##.memv.65 22 6) (bruijn ##.%k.440 1 0) (bruijn ##.%x.654 0 0) (bruijn ##.names.643 12 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 6)), 3,
      statics->vars[0],
      self->vars[0],
      VGetArg(statics, 12-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 20 10) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15) (bruijn ##.constant-imports.651 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.655) ((##vcore.cdr (bruijn ##.e.167 1 1))) ((bruijn ##.memv.65 21 6) (bruijn ##.%k.442 1 0) (bruijn ##.%x.655 0 0) (bruijn ##.names.643 11 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 3,
      statics->vars[0],
      self->vars[0],
      VGetArg(statics, 11-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 19 10) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16) (bruijn ##.imports.648 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.644 1 0) (basic-block 3 3 (##.path.645 ##.expr.28.646 ##.%p.647) ((##vcore.car (bruijn ##.resolved-import.158 4 0)) (##vcore.cdr (bruijn ##.resolved-import.158 4 0)) (##vcore.pair? (bruijn ##.expr.28.646 0 1))) (if (bruijn ##.%p.647 0 2) (basic-block 3 3 (##.imports.648 ##.expr.29.649 ##.%p.650) ((##vcore.car (bruijn ##.expr.28.646 1 1)) (##vcore.cdr (bruijn ##.expr.28.646 1 1)) (##vcore.pair? (bruijn ##.expr.29.649 0 1))) (if (bruijn ##.%p.650 0 2) (basic-block 3 3 (##.constant-imports.651 ##.%x.652 ##.%p.653) ((##vcore.car (bruijn ##.expr.29.649 1 1)) (##vcore.cdr (bruijn ##.expr.29.649 1 1)) (##vcore.null? (bruijn ##.%x.652 0 1))) (if (bruijn ##.%p.653 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14) (bruijn ##.kk.25.159 5 1)) ((bruijn ##.%k.432 3 0) #f))) ((bruijn ##.%k.432 2 0) #f))) ((bruijn ##.%k.432 1 0) #f))) ((bruijn ##.%k.432 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14, self)))),
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
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k43(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 14 9) (bruijn ##.%k.430 1 0) (##string ##.string.1107))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1107.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.644) ((##vcore.pair? (bruijn ##.resolved-import.158 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k43)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k43, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.429 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 10 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38) (bruijn ##.import.642 1 0) (bruijn ##.paths.135 9 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.426 0 0) (basic-block 2 2 (##.expr.17.640 ##.%p.641) ((##vcore.cdr (bruijn ##.import.134 7 1)) (##vcore.pair? (bruijn ##.expr.17.640 0 0))) (if (bruijn ##.%p.641 0 1) (basic-block 2 2 (##.import.642 ##.names.643) ((##vcore.car (bruijn ##.expr.17.640 1 0)) (##vcore.cdr (bruijn ##.expr.17.640 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12) (bruijn ##.kk.14.152 6 1))) ((bruijn ##.%k.425 3 0) #f))) ((bruijn ##.%k.425 2 0) #f))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12, self)))),
      VGetArg(statics, 6-1, 1));
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.580 1 0) (basic-block 1 1 (##.%x.639) ((##vcore.car (bruijn ##.import.134 5 1))) ((bruijn ##.equal?.60 7 1) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36) 'only (bruijn ##.%x.639 0 0))) ((bruijn ##.%k.425 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36, self)))),
      _V0only,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.404 0 0) (bruijn ##.%k.401 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.412 0 0) (bruijn ##.%k.408 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 22 7) (bruijn ##.%k.413 2 0) (bruijn ##.path.626 5 0) (bruijn ##.%x.414 1 0) (bruijn ##.%x.415 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 7)), 4,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.636) ((##vcore.not (bruijn ##.%x.417 1 0))) ((bruijn ##.%k.416 3 0) (bruijn ##.%r.636 0 0)))
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.635) ((##vcore.cdr (bruijn ##.e.183 1 1))) ((bruijn ##.memv.65 23 6) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53) (bruijn ##.%x.635 0 0) (bruijn ##.names.624 12 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53, self)))),
      self->vars[0],
      VGetArg(statics, 12-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 21 10) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20) (bruijn ##.constant-imports.632 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.638) ((##vcore.not (bruijn ##.%x.420 1 0))) ((bruijn ##.%k.419 3 0) (bruijn ##.%r.638 0 0)))
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.637) ((##vcore.cdr (bruijn ##.e.182 1 1))) ((bruijn ##.memv.65 22 6) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54) (bruijn ##.%x.637 0 0) (bruijn ##.names.624 11 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54, self)))),
      self->vars[0],
      VGetArg(statics, 11-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 20 10) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21) (bruijn ##.imports.629 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.625 1 0) (basic-block 3 3 (##.path.626 ##.expr.33.627 ##.%p.628) ((##vcore.car (bruijn ##.resolved-import.173 4 0)) (##vcore.cdr (bruijn ##.resolved-import.173 4 0)) (##vcore.pair? (bruijn ##.expr.33.627 0 1))) (if (bruijn ##.%p.628 0 2) (basic-block 3 3 (##.imports.629 ##.expr.34.630 ##.%p.631) ((##vcore.car (bruijn ##.expr.33.627 1 1)) (##vcore.cdr (bruijn ##.expr.33.627 1 1)) (##vcore.pair? (bruijn ##.expr.34.630 0 1))) (if (bruijn ##.%p.631 0 2) (basic-block 3 3 (##.constant-imports.632 ##.%x.633 ##.%p.634) ((##vcore.car (bruijn ##.expr.34.630 1 1)) (##vcore.cdr (bruijn ##.expr.34.630 1 1)) (##vcore.null? (bruijn ##.%x.633 0 1))) (if (bruijn ##.%p.634 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19) (bruijn ##.kk.30.174 5 1)) ((bruijn ##.%k.408 3 0) #f))) ((bruijn ##.%k.408 2 0) #f))) ((bruijn ##.%k.408 1 0) #f))) ((bruijn ##.%k.408 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19, self)))),
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
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 15 9) (bruijn ##.%k.406 1 0) (##string ##.string.1107))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 9)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1107.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.625) ((##vcore.pair? (bruijn ##.resolved-import.173 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k55)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k55, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.405 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 11 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48) (bruijn ##.import.623 1 0) (bruijn ##.paths.135 10 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.402 0 0) (basic-block 2 2 (##.expr.19.621 ##.%p.622) ((##vcore.cdr (bruijn ##.import.134 8 1)) (##vcore.pair? (bruijn ##.expr.19.621 0 0))) (if (bruijn ##.%p.622 0 1) (basic-block 2 2 (##.import.623 ##.names.624) ((##vcore.car (bruijn ##.expr.19.621 1 0)) (##vcore.cdr (bruijn ##.expr.19.621 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17) (bruijn ##.kk.14.152 7 1))) ((bruijn ##.%k.401 3 0) #f))) ((bruijn ##.%k.401 2 0) #f))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17, self)))),
      VGetArg(statics, 7-1, 1));
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.581 1 0) (basic-block 1 1 (##.%x.620) ((##vcore.car (bruijn ##.import.134 6 1))) ((bruijn ##.equal?.60 8 1) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46) 'except (bruijn ##.%x.620 0 0))) ((bruijn ##.%k.401 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46, self)))),
      _V0except,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.383 0 0) (bruijn ##.%k.378 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.391 0 0) (bruijn ##.%k.387 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 25 7) (bruijn ##.%k.392 3 0) (bruijn ##.path.611 6 0) (bruijn ##.%x.393 1 0) (bruijn ##.%x.394 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 7)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.prefix-import.136) #f (bruijn ##.prefix-import.136 22 0) (bruijn ##.%k.395 0 0) (bruijn ##.x.41.200 0 1) (bruijn ##.stringfix.198 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 24 3) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25) (bruijn ##.constant-imports.617 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.prefix-import.136) #f (bruijn ##.prefix-import.136 21 0) (bruijn ##.%k.396 0 0) (bruijn ##.x.40.199 0 1) (bruijn ##.stringfix.198 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 23 3) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26) (bruijn ##.imports.614 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63) (bruijn ##.prefix.607 9 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.610 1 0) (basic-block 3 3 (##.path.611 ##.expr.38.612 ##.%p.613) ((##vcore.car (bruijn ##.resolved-import.189 4 0)) (##vcore.cdr (bruijn ##.resolved-import.189 4 0)) (##vcore.pair? (bruijn ##.expr.38.612 0 1))) (if (bruijn ##.%p.613 0 2) (basic-block 3 3 (##.imports.614 ##.expr.39.615 ##.%p.616) ((##vcore.car (bruijn ##.expr.38.612 1 1)) (##vcore.cdr (bruijn ##.expr.38.612 1 1)) (##vcore.pair? (bruijn ##.expr.39.615 0 1))) (if (bruijn ##.%p.616 0 2) (basic-block 3 3 (##.constant-imports.617 ##.%x.618 ##.%p.619) ((##vcore.car (bruijn ##.expr.39.615 1 1)) (##vcore.cdr (bruijn ##.expr.39.615 1 1)) (##vcore.null? (bruijn ##.%x.618 0 1))) (if (bruijn ##.%p.619 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24) (bruijn ##.kk.35.190 5 1)) ((bruijn ##.%k.387 3 0) #f))) ((bruijn ##.%k.387 2 0) #f))) ((bruijn ##.%k.387 1 0) #f))) ((bruijn ##.%k.387 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24, self)))),
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
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 17 9) (bruijn ##.%k.385 1 0) (##string ##.string.1107))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1107.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.610) ((##vcore.pair? (bruijn ##.resolved-import.189 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k66)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k66, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.384 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 13 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60) (bruijn ##.import.604 2 0) (bruijn ##.paths.135 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.379 0 0) (basic-block 2 2 (##.expr.21.602 ##.%p.603) ((##vcore.cdr (bruijn ##.import.134 9 1)) (##vcore.pair? (bruijn ##.expr.21.602 0 0))) (if (bruijn ##.%p.603 0 1) (basic-block 3 3 (##.import.604 ##.expr.22.605 ##.%p.606) ((##vcore.car (bruijn ##.expr.21.602 1 0)) (##vcore.cdr (bruijn ##.expr.21.602 1 0)) (##vcore.pair? (bruijn ##.expr.22.605 0 1))) (if (bruijn ##.%p.606 0 2) (basic-block 3 3 (##.prefix.607 ##.%x.608 ##.%p.609) ((##vcore.car (bruijn ##.expr.22.605 1 1)) (##vcore.cdr (bruijn ##.expr.22.605 1 1)) (##vcore.null? (bruijn ##.%x.608 0 1))) (if (bruijn ##.%p.609 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22) (bruijn ##.kk.14.152 9 1)) ((bruijn ##.%k.378 5 0) #f))) ((bruijn ##.%k.378 4 0) #f))) ((bruijn ##.%k.378 3 0) #f))) ((bruijn ##.%k.378 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22, self)))),
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.582 1 0) (basic-block 1 1 (##.%x.601) ((##vcore.car (bruijn ##.import.134 7 1))) ((bruijn ##.equal?.60 9 1) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58) 'prefix (bruijn ##.%x.601 0 0))) ((bruijn ##.%k.378 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58, self)))),
      _V0prefix,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.361 0 0) (bruijn ##.%k.358 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.369 0 0) (bruijn ##.%k.365 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 24 7) (bruijn ##.%k.370 2 0) (bruijn ##.path.592 5 0) (bruijn ##.%x.371 1 0) (bruijn ##.%x.372 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 7)), 4,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.rename-import.137) #f (bruijn ##.rename-import.137 21 1) (bruijn ##.%k.373 0 0) (bruijn ##.x.48.215 0 1) (bruijn ##.renames.590 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 23 3) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30) (bruijn ##.constant-imports.598 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.rename-import.137) #f (bruijn ##.rename-import.137 20 1) (bruijn ##.%k.374 0 0) (bruijn ##.x.47.214 0 1) (bruijn ##.renames.590 10 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 22 3) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31) (bruijn ##.imports.595 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.591 1 0) (basic-block 3 3 (##.path.592 ##.expr.45.593 ##.%p.594) ((##vcore.car (bruijn ##.resolved-import.205 4 0)) (##vcore.cdr (bruijn ##.resolved-import.205 4 0)) (##vcore.pair? (bruijn ##.expr.45.593 0 1))) (if (bruijn ##.%p.594 0 2) (basic-block 3 3 (##.imports.595 ##.expr.46.596 ##.%p.597) ((##vcore.car (bruijn ##.expr.45.593 1 1)) (##vcore.cdr (bruijn ##.expr.45.593 1 1)) (##vcore.pair? (bruijn ##.expr.46.596 0 1))) (if (bruijn ##.%p.597 0 2) (basic-block 3 3 (##.constant-imports.598 ##.%x.599 ##.%p.600) ((##vcore.car (bruijn ##.expr.46.596 1 1)) (##vcore.cdr (bruijn ##.expr.46.596 1 1)) (##vcore.null? (bruijn ##.%x.599 0 1))) (if (bruijn ##.%p.600 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29) (bruijn ##.kk.42.206 5 1)) ((bruijn ##.%k.365 3 0) #f))) ((bruijn ##.%k.365 2 0) #f))) ((bruijn ##.%k.365 1 0) #f))) ((bruijn ##.%k.365 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29, self)))),
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
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k76(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 17 9) (bruijn ##.%k.363 1 0) (##string ##.string.1107))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1107.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.591) ((##vcore.pair? (bruijn ##.resolved-import.205 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k76)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k76, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.362 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 13 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71) (bruijn ##.import.589 1 0) (bruijn ##.paths.135 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.359 0 0) (basic-block 2 2 (##.expr.24.587 ##.%p.588) ((##vcore.cdr (bruijn ##.import.134 10 1)) (##vcore.pair? (bruijn ##.expr.24.587 0 0))) (if (bruijn ##.%p.588 0 1) (basic-block 2 2 (##.import.589 ##.renames.590) ((##vcore.car (bruijn ##.expr.24.587 1 0)) (##vcore.cdr (bruijn ##.expr.24.587 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27) (bruijn ##.kk.14.152 9 1))) ((bruijn ##.%k.358 3 0) #f))) ((bruijn ##.%k.358 2 0) #f))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.583 1 0) (basic-block 1 1 (##.%x.586) ((##vcore.car (bruijn ##.import.134 8 1))) ((bruijn ##.equal?.60 10 1) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69) 'rename (bruijn ##.%x.586 0 0))) ((bruijn ##.%k.358 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 14 7) (bruijn ##.%k.349 5 0) (bruijn ##.import.134 12 1) (bruijn ##.%x.350 2 0) (bruijn ##.%x.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 7)), 4,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 12-1, 1),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.584 ##.%r.585) ((##vcore.car (bruijn ##.e.217 2 1)) (##vcore.cons (bruijn ##.%x.353 1 0) (bruijn ##.%x.584 0 0))) ((bruijn ##.%k.352 2 0) (bruijn ##.%r.585 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.67 14 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83) (bruijn ##.e.217 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 13 3) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda33) (bruijn ##.%x.355 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda33, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library extract-constants) #t (bruijn ##.extract-constants.105 11 9) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81) (bruijn ##.lib.216 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0extract__constants(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 11 3) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80) (bruijn ##.process-export.138 8 2) (bruijn ##.%x.356 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80, self)))),
      VGetArg(statics, 8-1, 2),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library extract-exports) #t (bruijn ##.extract-exports.106 9 10) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79) (bruijn ##.lib.216 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0extract__exports(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library find-library-interface!) #t (bruijn ##.find-library-interface!.107 8 11) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78) (bruijn ##.import.134 7 1) (bruijn ##.paths.135 7 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k77(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.348 4 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32) (bruijn ##.kk.14.152 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.583) ((##vcore.pair? (bruijn ##.import.134 6 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k77)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k77, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k56(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.582) ((##vcore.pair? (bruijn ##.import.134 5 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k67)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k67, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.581) ((##vcore.pair? (bruijn ##.import.134 4 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k56, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.580) ((##vcore.pair? (bruijn ##.import.134 3 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k44)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k44, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0process__import_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136") (close "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137") (close "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138")) (##vcore.call/cc (bruijn ##.%k.321 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.13.219 0 0) (basic-block 1 1 (##.%r.656) ((##vcore.cdr (bruijn ##.x.13.219 1 0))) ((bruijn ##.%k.446 3 0) (bruijn ##.%r.656 0 0))) ((bruijn ##.%k.446 2 0) '()))
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
      VNULL);
}
}
void _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 3 15) (close _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85) 'constant-export (bruijn ##.%x.447 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85, self)))),
      _V0constant__export,
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0extract__constants(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0extract__constants" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__constants, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cddr.73 2 14) (close _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84) (bruijn ##.lib.218 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.12.221 0 0) (basic-block 1 1 (##.%r.657) ((##vcore.cdr (bruijn ##.x.12.221 1 0))) ((bruijn ##.%k.448 3 0) (bruijn ##.%r.657 0 0))) ((bruijn ##.%k.448 2 0) '()))
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
      VNULL);
}
}
void _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 3 15) (close _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87) 'export (bruijn ##.%x.449 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87, self)))),
      _V0export,
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0extract__exports(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0extract__exports" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__exports, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cddr.73 2 14) (close _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86) (bruijn ##.lib.220 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.224 0 0) (basic-block 1 1 (##.%r.658) ((##vcore.cdr (bruijn ##.lookup.224 1 0))) ((bruijn ##.%k.450 2 0) (bruijn ##.%r.658 0 0))) (##qualified-call (vanity compiler library load-library-interface) #t (bruijn ##.load-library-interface.111 2 15) (bruijn ##.%k.450 1 0) (bruijn ##.import.222 1 1) (bruijn ##.paths.223 1 2)))
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
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0load__library__interface(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.assoc.74 2 15) (close _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88) (bruijn ##.import.222 0 1) (bruijn ##.library-interfaces.112 1 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[15]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88, self)))),
      _var1,
      statics->vars[16]);
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.482 0 0) (bruijn ##.%k.479 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 9 12) (bruijn ##.%k.483 0 0) (bruijn ##.import.683 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.480 0 0) (basic-block 2 2 (##.expr.4.681 ##.%p.682) ((##vcore.cdr (bruijn ##.import.225 6 1)) (##vcore.pair? (bruijn ##.expr.4.681 0 0))) (if (bruijn ##.%p.682 0 1) (basic-block 1 1 (##.import.683) ((##vcore.car (bruijn ##.expr.4.681 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k91) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35) (bruijn ##.kk.1.226 6 1))) ((bruijn ##.%k.479 3 0) #f))) ((bruijn ##.%k.479 2 0) #f))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k91, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35, self)))),
      VGetArg(statics, 6-1, 1));
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
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.659 1 0) (basic-block 1 1 (##.%x.680) ((##vcore.car (bruijn ##.import.225 4 1))) ((bruijn ##.equal?.60 6 1) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k90) 'only (bruijn ##.%x.680 0 0))) ((bruijn ##.%k.479 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k90, self)))),
      _V0only,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.475 0 0) (bruijn ##.%k.472 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 10 12) (bruijn ##.%k.476 0 0) (bruijn ##.import.679 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.473 0 0) (basic-block 2 2 (##.expr.6.677 ##.%p.678) ((##vcore.cdr (bruijn ##.import.225 7 1)) (##vcore.pair? (bruijn ##.expr.6.677 0 0))) (if (bruijn ##.%p.678 0 1) (basic-block 1 1 (##.import.679) ((##vcore.car (bruijn ##.expr.6.677 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k95) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36) (bruijn ##.kk.1.226 7 1))) ((bruijn ##.%k.472 3 0) #f))) ((bruijn ##.%k.472 2 0) #f))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k95, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36, self)))),
      VGetArg(statics, 7-1, 1));
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
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.660 1 0) (basic-block 1 1 (##.%x.676) ((##vcore.car (bruijn ##.import.225 5 1))) ((bruijn ##.equal?.60 7 1) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k94) 'except (bruijn ##.%x.676 0 0))) ((bruijn ##.%k.472 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k94, self)))),
      _V0except,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.467 0 0) (bruijn ##.%k.462 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 12 12) (bruijn ##.%k.468 0 0) (bruijn ##.import.670 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.463 0 0) (basic-block 2 2 (##.expr.8.668 ##.%p.669) ((##vcore.cdr (bruijn ##.import.225 8 1)) (##vcore.pair? (bruijn ##.expr.8.668 0 0))) (if (bruijn ##.%p.669 0 1) (basic-block 3 3 (##.import.670 ##.expr.9.671 ##.%p.672) ((##vcore.car (bruijn ##.expr.8.668 1 0)) (##vcore.cdr (bruijn ##.expr.8.668 1 0)) (##vcore.pair? (bruijn ##.expr.9.671 0 1))) (if (bruijn ##.%p.672 0 2) (basic-block 3 3 (##.prefix.673 ##.%x.674 ##.%p.675) ((##vcore.car (bruijn ##.expr.9.671 1 1)) (##vcore.cdr (bruijn ##.expr.9.671 1 1)) (##vcore.null? (bruijn ##.%x.674 0 1))) (if (bruijn ##.%p.675 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k99) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37) (bruijn ##.kk.1.226 9 1)) ((bruijn ##.%k.462 5 0) #f))) ((bruijn ##.%k.462 4 0) #f))) ((bruijn ##.%k.462 3 0) #f))) ((bruijn ##.%k.462 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k99, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37, self)))),
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
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.661 1 0) (basic-block 1 1 (##.%x.667) ((##vcore.car (bruijn ##.import.225 6 1))) ((bruijn ##.equal?.60 8 1) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k98) 'prefix (bruijn ##.%x.667 0 0))) ((bruijn ##.%k.462 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k98, self)))),
      _V0prefix,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.458 0 0) (bruijn ##.%k.455 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 12 12) (bruijn ##.%k.459 0 0) (bruijn ##.import.666 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.456 0 0) (basic-block 2 2 (##.expr.11.664 ##.%p.665) ((##vcore.cdr (bruijn ##.import.225 9 1)) (##vcore.pair? (bruijn ##.expr.11.664 0 0))) (if (bruijn ##.%p.665 0 1) (basic-block 1 1 (##.import.666) ((##vcore.car (bruijn ##.expr.11.664 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k103) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38) (bruijn ##.kk.1.226 9 1))) ((bruijn ##.%k.455 3 0) #f))) ((bruijn ##.%k.455 2 0) #f))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k103, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.662 1 0) (basic-block 1 1 (##.%x.663) ((##vcore.car (bruijn ##.import.225 7 1))) ((bruijn ##.equal?.60 9 1) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k102) 'rename (bruijn ##.%x.663 0 0))) ((bruijn ##.%k.455 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k102, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.453 0 0) (bruijn ##.import.225 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k104(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.452 4 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda39) (bruijn ##.kk.1.226 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda39, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.662) ((##vcore.pair? (bruijn ##.import.225 5 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k101) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k104)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k104, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.661) ((##vcore.pair? (bruijn ##.import.225 4 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k97) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k100, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.660) ((##vcore.pair? (bruijn ##.import.225 3 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k93) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k96)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k96, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.659) ((##vcore.pair? (bruijn ##.import.225 2 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k89) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k92)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k92, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__path" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.451 0 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.%k.485 4 0) (bruijn ##.%x.487 0 0) (bruijn ##.lib.242 4 1))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 5 15) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108) (bruijn ##.%x.488 0 0) (bruijn ##.library-interfaces.112 4 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108, self)))),
      _var0,
      statics->up->up->up->vars[16]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.684 ##.%x.685) ((##vcore.cons (bruijn ##.%x.491 1 0) (bruijn ##.lib.242 4 1)) (##vcore.cons (bruijn ##.%x.684 0 0) (bruijn ##.library-interfaces.112 5 16))) (set! (bruijn ##.%k.485 4 0) (bruijn ##.library-interfaces.112 5 16) (bruijn ##.%x.685 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 5-1, 16));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->up->up->vars[0],
      VEncodeInt(5l), VEncodeInt(16l),
      self->vars[1]
    );
    }
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.486 0 0) ((bruijn ##.cadr.67 4 8) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107) (bruijn ##.lib.242 2 1)) ((bruijn ##.cadr.67 4 8) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109) (bruijn ##.lib.242 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 3 15) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106) (bruijn ##.%x.492 0 0) (bruijn ##.library-interfaces.112 2 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106, self)))),
      _var0,
      statics->up->vars[16]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.67 2 8) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105) (bruijn ##.lib.242 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.resolve-file-path.75 4 16) (bruijn ##.%k.493 2 0) (bruijn ##.%x.495 0 0) (bruijn ##.paths.244 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[16]), 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.494 0 0) ((bruijn ##.%k.493 1 0) (bruijn ##.%p.494 0 0)) (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.98 2 2) (close _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111) (bruijn ##.import.243 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0library__exists_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0library__exists_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0library__exists_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.assoc.74 2 15) (close _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110) (bruijn ##.import.243 0 1) (bruijn ##.library-interfaces.112 1 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[15]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110, self)))),
      _var1,
      statics->vars[16]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.247 1 0) ((bruijn ##.read-all.77 5 18) (bruijn ##.%k.502 0 0) (bruijn ##.fd.247 1 0)) ((bruijn ##.compiler-error.70 5 11) (bruijn ##.%k.502 0 0) (##string ##.string.1453) (bruijn ##.import.245 3 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 18)), 2,
      _var0,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1453.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.686 1 0) (basic-block 2 2 (##.%x.688 ##.%r.689) ((##vcore.cdr (bruijn ##.parse.248 3 0)) (##vcore.null? (bruijn ##.%x.688 0 0))) ((bruijn ##.%k.500 1 0) (bruijn ##.%r.689 0 1))) ((bruijn ##.%k.500 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.497 1 0) (basic-block 1 1 (##.%r.687) ((##vcore.car (bruijn ##.parse.248 4 0))) ((bruijn ##.%k.498 1 0) (bruijn ##.%r.687 0 0))) ((bruijn ##.compiler-error.70 8 11) (bruijn ##.%k.498 0 0) (##string ##.string.1466)))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1466.sym, VPOINTER_OTHER));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k121(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.496 6 0) (bruijn ##.parse.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler library register-library-interface!) #t (bruijn ##.register-library-interface!.109 7 13) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k121) (bruijn ##.parse.249 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k121, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.76 8 17) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k120) (bruijn ##.fd.247 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k120, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.686) ((##vcore.pair? (bruijn ##.parse.248 1 0))) ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.search-open-input-file.78 3 19) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113) (bruijn ##.%x.503 0 0) (bruijn ##.paths.246 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[19]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113, self)))),
      _var0,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.98 1 2) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112) (bruijn ##.import.245 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0compiler_V0library_V20_V0k122(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 16 16 (##.%x.690 ##.%x.691 ##.%x.692 ##.%x.693 ##.%x.694 ##.%x.695 ##.%x.696 ##.%x.697 ##.%x.698 ##.%x.699 ##.%x.700 ##.%x.701 ##.%x.702 ##.%x.703 ##.%x.704 ##.%r.705) ((##vcore.cons 'process-import! (bruijn ##.process-import!.104 1 8)) (##vcore.cons 'library-exists? (bruijn ##.library-exists?.110 1 14)) (##vcore.cons 'register-library-interface! (bruijn ##.register-library-interface!.109 1 13)) (##vcore.cons 'import-path (bruijn ##.import-path.108 1 12)) (##vcore.cons 'valid-import? (bruijn ##.valid-import?.99 1 3)) (##vcore.cons 'import-basepath (bruijn ##.import-basepath.97 1 1)) (##vcore.cons 'import->path (bruijn ##.import->path.98 1 2)) (##vcore.cons 'gather-dependencies (bruijn ##.gather-dependencies.96 1 0)) (##vcore.cons (bruijn ##.%x.697 0 7) '()) (##vcore.cons (bruijn ##.%x.696 0 6) (bruijn ##.%x.698 0 8)) (##vcore.cons (bruijn ##.%x.695 0 5) (bruijn ##.%x.699 0 9)) (##vcore.cons (bruijn ##.%x.694 0 4) (bruijn ##.%x.700 0 10)) (##vcore.cons (bruijn ##.%x.693 0 3) (bruijn ##.%x.701 0 11)) (##vcore.cons (bruijn ##.%x.692 0 2) (bruijn ##.%x.702 0 12)) (##vcore.cons (bruijn ##.%x.691 0 1) (bruijn ##.%x.703 0 13)) (##vcore.cons (bruijn ##.%x.690 0 0) (bruijn ##.%x.704 0 14))) ((bruijn ##.%k.257 2 0) (bruijn ##.%r.705 0 15)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[16]; } container;
    self = &container.self;
    VInitEnv(self, 16, 16, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0process__import_B,
      statics->vars[8]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0library__exists_Q,
      statics->vars[14]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0register__library__interface_B,
      statics->vars[13]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0import__path,
      statics->vars[12]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0valid__import_Q,
      statics->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0import__basepath,
      statics->vars[1]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0import___Gpath,
      statics->vars[2]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0gather__dependencies,
      statics->vars[0]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[14]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[15]);
    }
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 20) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda3, got ~D~N"
  "-- expected 20~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[20]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 20, 20, statics);
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
  // (##letrec (vanity compiler library) 17 ((close "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0import__basepath" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0import___Gpath" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0andf" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0process__import_B" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0extract__constants" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0extract__exports" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0import__path" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0library__exists_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0load__library__interface" (vanity compiler library)) #f) (set! (close _V0vanity_V0compiler_V0library_V20_V0k122) (bruijn ##.library-interfaces.112 0 16) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[17]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0library = self;
    VInitEnv(self, 17, 17, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, _V60_V0vanity_V0compiler_V0library))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0andf, _V60_V0vanity_V0compiler_V0library))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants, _V60_V0vanity_V0compiler_V0library))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports, _V60_V0vanity_V0compiler_V0library))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _V60_V0vanity_V0compiler_V0library))));
    self->vars[16] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0library_V20", &_V60_V0vanity_V0compiler_V0library);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k122, self)))),
      VEncodeInt(0l), VEncodeInt(16l),
      VNULL
    );
    }
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.251 0 0) (close _V0vanity_V0compiler_V0library_V20_V0lambda2) (close _V0vanity_V0compiler_V0library_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0library_V20 = (VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0parse = VEncodePointer(VInternSymbol(-1180923125, &_VW_V0parse.sym), VPOINTER_OTHER);
  _V0fd = VEncodePointer(VInternSymbol(1106557157, &_VW_V0fd.sym), VPOINTER_OTHER);
  _V0expr_D11 = VEncodePointer(VInternSymbol(-2011557135, &_VW_V0expr_D11.sym), VPOINTER_OTHER);
  _V0expr_D8 = VEncodePointer(VInternSymbol(1024544539, &_VW_V0expr_D8.sym), VPOINTER_OTHER);
  _V0expr_D9 = VEncodePointer(VInternSymbol(388943303, &_VW_V0expr_D9.sym), VPOINTER_OTHER);
  _V0expr_D6 = VEncodePointer(VInternSymbol(1616899195, &_VW_V0expr_D6.sym), VPOINTER_OTHER);
  _V0expr_D4 = VEncodePointer(VInternSymbol(1998170004, &_VW_V0expr_D4.sym), VPOINTER_OTHER);
  _V0kk_D1 = VEncodePointer(VInternSymbol(-1164357159, &_VW_V0kk_D1.sym), VPOINTER_OTHER);
  _V0lookup = VEncodePointer(VInternSymbol(362294115, &_VW_V0lookup.sym), VPOINTER_OTHER);
  _V0export = VEncodePointer(VInternSymbol(1426862643, &_VW_V0export.sym), VPOINTER_OTHER);
  _V0x_D12 = VEncodePointer(VInternSymbol(-2061761957, &_VW_V0x_D12.sym), VPOINTER_OTHER);
  _V0constant__export = VEncodePointer(VInternSymbol(2123793904, &_VW_V0constant__export.sym), VPOINTER_OTHER);
  _V0x_D13 = VEncodePointer(VInternSymbol(-1640059270, &_VW_V0x_D13.sym), VPOINTER_OTHER);
  _V0lib = VEncodePointer(VInternSymbol(354676435, &_VW_V0lib.sym), VPOINTER_OTHER);
  _V0x_D47 = VEncodePointer(VInternSymbol(-1429654329, &_VW_V0x_D47.sym), VPOINTER_OTHER);
  _V0x_D48 = VEncodePointer(VInternSymbol(450847421, &_VW_V0x_D48.sym), VPOINTER_OTHER);
  _V0expr_D45 = VEncodePointer(VInternSymbol(281621129, &_VW_V0expr_D45.sym), VPOINTER_OTHER);
  _V0expr_D46 = VEncodePointer(VInternSymbol(1480209784, &_VW_V0expr_D46.sym), VPOINTER_OTHER);
  _V0kk_D42 = VEncodePointer(VInternSymbol(-1062466886, &_VW_V0kk_D42.sym), VPOINTER_OTHER);
  _V0expr_D24 = VEncodePointer(VInternSymbol(1205830416, &_VW_V0expr_D24.sym), VPOINTER_OTHER);
  _V0x_D40 = VEncodePointer(VInternSymbol(370013433, &_VW_V0x_D40.sym), VPOINTER_OTHER);
  _V0x_D41 = VEncodePointer(VInternSymbol(-205021800, &_VW_V0x_D41.sym), VPOINTER_OTHER);
  _V0stringfix = VEncodePointer(VInternSymbol(1693160344, &_VW_V0stringfix.sym), VPOINTER_OTHER);
  _V0expr_D38 = VEncodePointer(VInternSymbol(1190420271, &_VW_V0expr_D38.sym), VPOINTER_OTHER);
  _V0expr_D39 = VEncodePointer(VInternSymbol(-1813819538, &_VW_V0expr_D39.sym), VPOINTER_OTHER);
  _V0kk_D35 = VEncodePointer(VInternSymbol(-1829341220, &_VW_V0kk_D35.sym), VPOINTER_OTHER);
  _V0expr_D21 = VEncodePointer(VInternSymbol(1780795813, &_VW_V0expr_D21.sym), VPOINTER_OTHER);
  _V0expr_D22 = VEncodePointer(VInternSymbol(1175603173, &_VW_V0expr_D22.sym), VPOINTER_OTHER);
  _V0except = VEncodePointer(VInternSymbol(-444186265, &_VW_V0except.sym), VPOINTER_OTHER);
  _V0expr_D33 = VEncodePointer(VInternSymbol(-1255757878, &_VW_V0expr_D33.sym), VPOINTER_OTHER);
  _V0expr_D34 = VEncodePointer(VInternSymbol(2072463023, &_VW_V0expr_D34.sym), VPOINTER_OTHER);
  _V0kk_D30 = VEncodePointer(VInternSymbol(1126879348, &_VW_V0kk_D30.sym), VPOINTER_OTHER);
  _V0expr_D19 = VEncodePointer(VInternSymbol(-1944829827, &_VW_V0expr_D19.sym), VPOINTER_OTHER);
  _V0only = VEncodePointer(VInternSymbol(1014778380, &_VW_V0only.sym), VPOINTER_OTHER);
  _V0expr_D28 = VEncodePointer(VInternSymbol(-1579429271, &_VW_V0expr_D28.sym), VPOINTER_OTHER);
  _V0path = VEncodePointer(VInternSymbol(-1450499945, &_VW_V0path.sym), VPOINTER_OTHER);
  _V0expr_D29 = VEncodePointer(VInternSymbol(-206703007, &_VW_V0expr_D29.sym), VPOINTER_OTHER);
  _V0imports = VEncodePointer(VInternSymbol(1951791982, &_VW_V0imports.sym), VPOINTER_OTHER);
  _V0constant__imports = VEncodePointer(VInternSymbol(-263053148, &_VW_V0constant__imports.sym), VPOINTER_OTHER);
  _V0kk_D25 = VEncodePointer(VInternSymbol(-362167972, &_VW_V0kk_D25.sym), VPOINTER_OTHER);
  _V0resolved__import = VEncodePointer(VInternSymbol(-385694972, &_VW_V0resolved__import.sym), VPOINTER_OTHER);
  _V0expr_D17 = VEncodePointer(VInternSymbol(880016266, &_VW_V0expr_D17.sym), VPOINTER_OTHER);
  _V0names = VEncodePointer(VInternSymbol(-1517936888, &_VW_V0names.sym), VPOINTER_OTHER);
  _V0kk_D14 = VEncodePointer(VInternSymbol(-2105652819, &_VW_V0kk_D14.sym), VPOINTER_OTHER);
  _V0rename = VEncodePointer(VInternSymbol(1807760215, &_VW_V0rename.sym), VPOINTER_OTHER);
  _V0expr_D53 = VEncodePointer(VInternSymbol(85795106, &_VW_V0expr_D53.sym), VPOINTER_OTHER);
  _V0expr_D54 = VEncodePointer(VInternSymbol(-428344651, &_VW_V0expr_D54.sym), VPOINTER_OTHER);
  _V0kk_D50 = VEncodePointer(VInternSymbol(-262514153, &_VW_V0kk_D50.sym), VPOINTER_OTHER);
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V10_Dprocess__export_D138 = VEncodePointer(VInternSymbol(1545619873, &_VW_V10_Dprocess__export_D138.sym), VPOINTER_OTHER);
  _V0x_D49 = VEncodePointer(VInternSymbol(-234858758, &_VW_V0x_D49.sym), VPOINTER_OTHER);
  _V0renames = VEncodePointer(VInternSymbol(-496764428, &_VW_V0renames.sym), VPOINTER_OTHER);
  _V10_Drename__import_D137 = VEncodePointer(VInternSymbol(-1272838350, &_VW_V10_Drename__import_D137.sym), VPOINTER_OTHER);
  _V0process__export = VEncodePointer(VInternSymbol(-1154932387, &_VW_V0process__export.sym), VPOINTER_OTHER);
  _V0rename__import = VEncodePointer(VInternSymbol(-1424570721, &_VW_V0rename__import.sym), VPOINTER_OTHER);
  _V0prefix__import = VEncodePointer(VInternSymbol(891056732, &_VW_V0prefix__import.sym), VPOINTER_OTHER);
  _V0prefix = VEncodePointer(VInternSymbol(1117607804, &_VW_V0prefix.sym), VPOINTER_OTHER);
  _V10_Dprefix__import_D136 = VEncodePointer(VInternSymbol(1497019386, &_VW_V10_Dprefix__import_D136.sym), VPOINTER_OTHER);
  _V0paths = VEncodePointer(VInternSymbol(149126552, &_VW_V0paths.sym), VPOINTER_OTHER);
  _V0c = VEncodePointer(VInternSymbol(-1006217235, &_VW_V0c.sym), VPOINTER_OTHER);
  _V0len = VEncodePointer(VInternSymbol(-191740809, &_VW_V0len.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D130 = VEncodePointer(VInternSymbol(-1638549224, &_VW_V10_Dloop_D130.sym), VPOINTER_OTHER);
  _V0str = VEncodePointer(VInternSymbol(128699971, &_VW_V0str.sym), VPOINTER_OTHER);
  _V0b = VEncodePointer(VInternSymbol(452173723, &_VW_V0b.sym), VPOINTER_OTHER);
  _V0a = VEncodePointer(VInternSymbol(-1450414501, &_VW_V0a.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VInternSymbol(410494053, &_VW_V0define__library.sym), VPOINTER_OTHER);
  _V0expr_D59 = VEncodePointer(VInternSymbol(396530275, &_VW_V0expr_D59.sym), VPOINTER_OTHER);
  _V0body = VEncodePointer(VInternSymbol(826092815, &_VW_V0body.sym), VPOINTER_OTHER);
  _V0name = VEncodePointer(VInternSymbol(1249508717, &_VW_V0name.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0import = VEncodePointer(VInternSymbol(268366565, &_VW_V0import.sym), VPOINTER_OTHER);
  _V0libs = VEncodePointer(VInternSymbol(-626574006, &_VW_V0libs.sym), VPOINTER_OTHER);
  _V0input_D56 = VEncodePointer(VInternSymbol(-2008546207, &_VW_V0input_D56.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0kk_D55 = VEncodePointer(VInternSymbol(12460714, &_VW_V0kk_D55.sym), VPOINTER_OTHER);
  _V0library__interfaces = VEncodePointer(VInternSymbol(1076657972, &_VW_V0library__interfaces.sym), VPOINTER_OTHER);
  _V0load__library__interface = VEncodePointer(VInternSymbol(-120881352, &_VW_V0load__library__interface.sym), VPOINTER_OTHER);
  _V0library__exists_Q = VEncodePointer(VInternSymbol(2058153055, &_VW_V0library__exists_Q.sym), VPOINTER_OTHER);
  _V0register__library__interface_B = VEncodePointer(VInternSymbol(847975606, &_VW_V0register__library__interface_B.sym), VPOINTER_OTHER);
  _V0import__path = VEncodePointer(VInternSymbol(-195691845, &_VW_V0import__path.sym), VPOINTER_OTHER);
  _V0find__library__interface_B = VEncodePointer(VInternSymbol(-1961983799, &_VW_V0find__library__interface_B.sym), VPOINTER_OTHER);
  _V0extract__exports = VEncodePointer(VInternSymbol(1890713855, &_VW_V0extract__exports.sym), VPOINTER_OTHER);
  _V0extract__constants = VEncodePointer(VInternSymbol(1694215026, &_VW_V0extract__constants.sym), VPOINTER_OTHER);
  _V0process__import_B = VEncodePointer(VInternSymbol(-62344956, &_VW_V0process__import_B.sym), VPOINTER_OTHER);
  _V0acceptable__char_Q = VEncodePointer(VInternSymbol(-965328513, &_VW_V0acceptable__char_Q.sym), VPOINTER_OTHER);
  _V0acceptable__characters_Q = VEncodePointer(VInternSymbol(-1934263878, &_VW_V0acceptable__characters_Q.sym), VPOINTER_OTHER);
  _V0andf = VEncodePointer(VInternSymbol(-13350477, &_VW_V0andf.sym), VPOINTER_OTHER);
  _V0valid__import__element_Q = VEncodePointer(VInternSymbol(1049318535, &_VW_V0valid__import__element_Q.sym), VPOINTER_OTHER);
  _V0valid__import_Q = VEncodePointer(VInternSymbol(1339346449, &_VW_V0valid__import_Q.sym), VPOINTER_OTHER);
  _V0import___Gpath = VEncodePointer(VInternSymbol(1827680974, &_VW_V0import___Gpath.sym), VPOINTER_OTHER);
  _V0import__basepath = VEncodePointer(VInternSymbol(442654183, &_VW_V0import__basepath.sym), VPOINTER_OTHER);
  _V0statements = VEncodePointer(VInternSymbol(-1838529357, &_VW_V0statements.sym), VPOINTER_OTHER);
  _V0gather__dependencies = VEncodePointer(VInternSymbol(670285661, &_VW_V0gather__dependencies.sym), VPOINTER_OTHER);
  _V0library = VEncodePointer(VInternSymbol(-463546850, &_VW_V0library.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VInternSymbol(1642999496, &_VW_V0search__open__input__file.sym), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VInternSymbol(644502567, &_VW_V0read__all.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0resolve__file__path = VEncodePointer(VInternSymbol(1687182104, &_VW_V0resolve__file__path.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D1467.first = VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR);
  _V10_Dpair_D1467.rest = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1465.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1465.rest = VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR);
  _V10_Dpair_D1464.first = VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR);
  _V10_Dpair_D1464.rest = VNULL;
  _V10_Dpair_D1463.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1463.rest = VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR);
  _V10_Dpair_D1462.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1462.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1461.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1461.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1460.first = VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR);
  _V10_Dpair_D1460.rest = VNULL;
  _V10_Dpair_D1459.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1458.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1457.first = VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR);
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = VEncodeBool(false);
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1455.rest = VNULL;
  _V10_Dpair_D1454.first = _V0parse;
  _V10_Dpair_D1454.rest = VNULL;
  _V10_Dpair_D1452.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1451.rest = VNULL;
  _V10_Dpair_D1450.first = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1449.first = VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR);
  _V10_Dpair_D1449.rest = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1448.first = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1448.rest = VNULL;
  _V10_Dpair_D1447.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1447.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D1446.first = VEncodeBool(false);
  _V10_Dpair_D1446.rest = VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR);
  _V10_Dpair_D1445.first = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1445.rest = VNULL;
  _V10_Dpair_D1444.first = _V0fd;
  _V10_Dpair_D1444.rest = VNULL;
  _V10_Dpair_D1443.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1443.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1442.first = VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR);
  _V10_Dpair_D1442.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D1441.first = VEncodePointer(&_V10_Dpair_D1440, VPOINTER_PAIR);
  _V10_Dpair_D1441.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D1440.first = _V0vanity;
  _V10_Dpair_D1440.rest = VEncodePointer(&_V10_Dpair_D1439, VPOINTER_PAIR);
  _V10_Dpair_D1439.first = _V0compiler;
  _V10_Dpair_D1439.rest = VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR);
  _V10_Dpair_D1438.first = _V0library;
  _V10_Dpair_D1438.rest = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1437.first = _V0load__library__interface;
  _V10_Dpair_D1437.rest = VNULL;
  _V10_Dpair_D1436.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1436.rest = VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR);
  _V10_Dpair_D1435.first = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1435.rest = VNULL;
  _V10_Dpair_D1434.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1434.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1433.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1432.first = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1432.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D1431.first = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1431.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D1430.first = _V0vanity;
  _V10_Dpair_D1430.rest = VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR);
  _V10_Dpair_D1429.first = _V0compiler;
  _V10_Dpair_D1429.rest = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1428.first = _V0library;
  _V10_Dpair_D1428.rest = VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR);
  _V10_Dpair_D1427.first = _V0library__exists_Q;
  _V10_Dpair_D1427.rest = VNULL;
  _V10_Dpair_D1426.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1426.rest = VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR);
  _V10_Dpair_D1425.first = VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR);
  _V10_Dpair_D1425.rest = VNULL;
  _V10_Dpair_D1424.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1424.rest = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1423.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1423.rest = VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR);
  _V10_Dpair_D1422.first = VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR);
  _V10_Dpair_D1422.rest = VNULL;
  _V10_Dpair_D1421.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1421.rest = VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR);
  _V10_Dpair_D1420.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1420.rest = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1419.first = VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR);
  _V10_Dpair_D1419.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D1418.first = VEncodePointer(&_V10_Dpair_D1417, VPOINTER_PAIR);
  _V10_Dpair_D1418.rest = VEncodePointer(&_V10_Dpair_D1309, VPOINTER_PAIR);
  _V10_Dpair_D1417.first = _V0vanity;
  _V10_Dpair_D1417.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1416.first = _V0compiler;
  _V10_Dpair_D1416.rest = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1415.first = _V0library;
  _V10_Dpair_D1415.rest = VEncodePointer(&_V10_Dpair_D1414, VPOINTER_PAIR);
  _V10_Dpair_D1414.first = _V0register__library__interface_B;
  _V10_Dpair_D1414.rest = VNULL;
  _V10_Dpair_D1413.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1413.rest = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1412.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1412.rest = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1411.first = VEncodePointer(&_V10_Dpair_D1410, VPOINTER_PAIR);
  _V10_Dpair_D1411.rest = VNULL;
  _V10_Dpair_D1410.first = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D1410.rest = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1409.first = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1409.rest = VEncodePointer(&_V10_Dpair_D1408, VPOINTER_PAIR);
  _V10_Dpair_D1408.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1408.rest = VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR);
  _V10_Dpair_D1407.first = _V0expr_D11;
  _V10_Dpair_D1407.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1406.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1406.rest = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1405.first = VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR);
  _V10_Dpair_D1405.rest = VNULL;
  _V10_Dpair_D1404.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1404.rest = VEncodePointer(&_V10_Dpair_D1403, VPOINTER_PAIR);
  _V10_Dpair_D1403.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1403.rest = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1402.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1402.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1401.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1401.rest = VNULL;
  _V10_Dpair_D1400.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1400.rest = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1399.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1399.rest = VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR);
  _V10_Dpair_D1398.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1398.rest = VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR);
  _V10_Dpair_D1397.first = VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR);
  _V10_Dpair_D1397.rest = VNULL;
  _V10_Dpair_D1396.first = VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR);
  _V10_Dpair_D1396.rest = VEncodePointer(&_V10_Dpair_D1395, VPOINTER_PAIR);
  _V10_Dpair_D1395.first = VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR);
  _V10_Dpair_D1395.rest = VEncodePointer(&_V10_Dpair_D1394, VPOINTER_PAIR);
  _V10_Dpair_D1394.first = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1394.rest = VEncodePointer(&_V10_Dpair_D1393, VPOINTER_PAIR);
  _V10_Dpair_D1393.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1393.rest = VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR);
  _V10_Dpair_D1392.first = _V0expr_D8;
  _V10_Dpair_D1392.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1391.first = _V0import;
  _V10_Dpair_D1391.rest = VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR);
  _V10_Dpair_D1390.first = _V0expr_D9;
  _V10_Dpair_D1390.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1389.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1389.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1388.first = VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR);
  _V10_Dpair_D1388.rest = VNULL;
  _V10_Dpair_D1387.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1387.rest = VEncodePointer(&_V10_Dpair_D1386, VPOINTER_PAIR);
  _V10_Dpair_D1386.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1386.rest = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1385.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1385.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1384.first = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1384.rest = VNULL;
  _V10_Dpair_D1383.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1383.rest = VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR);
  _V10_Dpair_D1382.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1382.rest = VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR);
  _V10_Dpair_D1381.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1381.rest = VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR);
  _V10_Dpair_D1380.first = VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR);
  _V10_Dpair_D1380.rest = VNULL;
  _V10_Dpair_D1379.first = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D1379.rest = VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR);
  _V10_Dpair_D1378.first = VEncodePointer(&_V10_Dpair_D1376, VPOINTER_PAIR);
  _V10_Dpair_D1378.rest = VEncodePointer(&_V10_Dpair_D1377, VPOINTER_PAIR);
  _V10_Dpair_D1377.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1377.rest = VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR);
  _V10_Dpair_D1376.first = _V0expr_D6;
  _V10_Dpair_D1376.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1375.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1375.rest = VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR);
  _V10_Dpair_D1374.first = VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR);
  _V10_Dpair_D1374.rest = VNULL;
  _V10_Dpair_D1373.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1373.rest = VEncodePointer(&_V10_Dpair_D1372, VPOINTER_PAIR);
  _V10_Dpair_D1372.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1372.rest = VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR);
  _V10_Dpair_D1371.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1371.rest = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1370.first = VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR);
  _V10_Dpair_D1370.rest = VNULL;
  _V10_Dpair_D1369.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1369.rest = VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR);
  _V10_Dpair_D1368.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1368.rest = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1367.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1367.rest = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1366.first = VEncodePointer(&_V10_Dpair_D1365, VPOINTER_PAIR);
  _V10_Dpair_D1366.rest = VNULL;
  _V10_Dpair_D1365.first = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D1365.rest = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1364.first = VEncodePointer(&_V10_Dpair_D1362, VPOINTER_PAIR);
  _V10_Dpair_D1364.rest = VEncodePointer(&_V10_Dpair_D1363, VPOINTER_PAIR);
  _V10_Dpair_D1363.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1363.rest = VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR);
  _V10_Dpair_D1362.first = _V0expr_D4;
  _V10_Dpair_D1362.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1361.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1361.rest = VEncodePointer(&_V10_Dpair_D1360, VPOINTER_PAIR);
  _V10_Dpair_D1360.first = VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR);
  _V10_Dpair_D1360.rest = VNULL;
  _V10_Dpair_D1359.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1359.rest = VEncodePointer(&_V10_Dpair_D1358, VPOINTER_PAIR);
  _V10_Dpair_D1358.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1358.rest = VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR);
  _V10_Dpair_D1357.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1357.rest = VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR);
  _V10_Dpair_D1356.first = VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR);
  _V10_Dpair_D1356.rest = VNULL;
  _V10_Dpair_D1355.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1355.rest = VEncodePointer(&_V10_Dpair_D1354, VPOINTER_PAIR);
  _V10_Dpair_D1354.first = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1354.rest = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D1353.first = VEncodePointer(&_V10_Dpair_D1351, VPOINTER_PAIR);
  _V10_Dpair_D1353.rest = VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR);
  _V10_Dpair_D1352.first = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D1352.rest = VNULL;
  _V10_Dpair_D1351.first = VEncodeBool(false);
  _V10_Dpair_D1351.rest = VEncodePointer(&_V10_Dpair_D1350, VPOINTER_PAIR);
  _V10_Dpair_D1350.first = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1350.rest = VNULL;
  _V10_Dpair_D1349.first = _V0_Mk;
  _V10_Dpair_D1349.rest = VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR);
  _V10_Dpair_D1348.first = _V0kk_D1;
  _V10_Dpair_D1348.rest = VNULL;
  _V10_Dpair_D1347.first = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1347.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D1346.first = VEncodePointer(&_V10_Dpair_D1345, VPOINTER_PAIR);
  _V10_Dpair_D1346.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D1345.first = _V0vanity;
  _V10_Dpair_D1345.rest = VEncodePointer(&_V10_Dpair_D1344, VPOINTER_PAIR);
  _V10_Dpair_D1344.first = _V0compiler;
  _V10_Dpair_D1344.rest = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1343.first = _V0library;
  _V10_Dpair_D1343.rest = VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR);
  _V10_Dpair_D1342.first = _V0import__path;
  _V10_Dpair_D1342.rest = VNULL;
  _V10_Dpair_D1341.first = VEncodePointer(&_V10_Dpair_D1339, VPOINTER_PAIR);
  _V10_Dpair_D1341.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1340.first = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D1340.rest = VNULL;
  _V10_Dpair_D1339.first = VEncodeBool(false);
  _V10_Dpair_D1339.rest = VEncodePointer(&_V10_Dpair_D1338, VPOINTER_PAIR);
  _V10_Dpair_D1338.first = VEncodePointer(&_V10_Dpair_D1337, VPOINTER_PAIR);
  _V10_Dpair_D1338.rest = VNULL;
  _V10_Dpair_D1337.first = _V0lookup;
  _V10_Dpair_D1337.rest = VNULL;
  _V10_Dpair_D1336.first = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1336.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D1335.first = VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR);
  _V10_Dpair_D1335.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D1334.first = _V0vanity;
  _V10_Dpair_D1334.rest = VEncodePointer(&_V10_Dpair_D1333, VPOINTER_PAIR);
  _V10_Dpair_D1333.first = _V0compiler;
  _V10_Dpair_D1333.rest = VEncodePointer(&_V10_Dpair_D1332, VPOINTER_PAIR);
  _V10_Dpair_D1332.first = _V0library;
  _V10_Dpair_D1332.rest = VEncodePointer(&_V10_Dpair_D1331, VPOINTER_PAIR);
  _V10_Dpair_D1331.first = _V0find__library__interface_B;
  _V10_Dpair_D1331.rest = VNULL;
  _V10_Dpair_D1330.first = VEncodePointer(&_V10_Dpair_D1329, VPOINTER_PAIR);
  _V10_Dpair_D1330.rest = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1329.first = VEncodeBool(false);
  _V10_Dpair_D1329.rest = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1328.first = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1328.rest = VNULL;
  _V10_Dpair_D1327.first = _V0x_D12;
  _V10_Dpair_D1327.rest = VNULL;
  _V10_Dpair_D1326.first = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1326.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D1325.first = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1325.rest = VEncodePointer(&_V10_Dpair_D1309, VPOINTER_PAIR);
  _V10_Dpair_D1324.first = _V0vanity;
  _V10_Dpair_D1324.rest = VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR);
  _V10_Dpair_D1323.first = _V0compiler;
  _V10_Dpair_D1323.rest = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1322.first = _V0library;
  _V10_Dpair_D1322.rest = VEncodePointer(&_V10_Dpair_D1321, VPOINTER_PAIR);
  _V10_Dpair_D1321.first = _V0extract__exports;
  _V10_Dpair_D1321.rest = VNULL;
  _V10_Dpair_D1320.first = VEncodePointer(&_V10_Dpair_D1317, VPOINTER_PAIR);
  _V10_Dpair_D1320.rest = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1319.first = VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR);
  _V10_Dpair_D1319.rest = VNULL;
  _V10_Dpair_D1318.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1318.rest = VEncodePointer(&_V10_Dpair_D1312, VPOINTER_PAIR);
  _V10_Dpair_D1317.first = VEncodeBool(false);
  _V10_Dpair_D1317.rest = VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR);
  _V10_Dpair_D1316.first = VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR);
  _V10_Dpair_D1316.rest = VNULL;
  _V10_Dpair_D1315.first = _V0x_D13;
  _V10_Dpair_D1315.rest = VNULL;
  _V10_Dpair_D1314.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1314.rest = VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR);
  _V10_Dpair_D1313.first = VEncodePointer(&_V10_Dpair_D1312, VPOINTER_PAIR);
  _V10_Dpair_D1313.rest = VNULL;
  _V10_Dpair_D1312.first = VEncodePointer(&_V10_Dpair_D1308, VPOINTER_PAIR);
  _V10_Dpair_D1312.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D1311.first = VEncodePointer(&_V10_Dpair_D1310, VPOINTER_PAIR);
  _V10_Dpair_D1311.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D1310.first = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D1310.rest = VEncodePointer(&_V10_Dpair_D1309, VPOINTER_PAIR);
  _V10_Dpair_D1309.first = VEncodePointer(&_V10_Dpair_D1308, VPOINTER_PAIR);
  _V10_Dpair_D1309.rest = VNULL;
  _V10_Dpair_D1308.first = _V0_Mk;
  _V10_Dpair_D1308.rest = VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR);
  _V10_Dpair_D1307.first = _V0vanity;
  _V10_Dpair_D1307.rest = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D1306.first = _V0compiler;
  _V10_Dpair_D1306.rest = VEncodePointer(&_V10_Dpair_D1305, VPOINTER_PAIR);
  _V10_Dpair_D1305.first = _V0library;
  _V10_Dpair_D1305.rest = VEncodePointer(&_V10_Dpair_D1304, VPOINTER_PAIR);
  _V10_Dpair_D1304.first = _V0extract__constants;
  _V10_Dpair_D1304.rest = VNULL;
  _V10_Dpair_D1303.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1303.rest = VEncodePointer(&_V10_Dpair_D1302, VPOINTER_PAIR);
  _V10_Dpair_D1302.first = VEncodePointer(&_V10_Dpair_D1301, VPOINTER_PAIR);
  _V10_Dpair_D1302.rest = VNULL;
  _V10_Dpair_D1301.first = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1301.rest = VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR);
  _V10_Dpair_D1300.first = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1300.rest = VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR);
  _V10_Dpair_D1299.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1299.rest = VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR);
  _V10_Dpair_D1298.first = VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR);
  _V10_Dpair_D1298.rest = VNULL;
  _V10_Dpair_D1297.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1297.rest = VEncodePointer(&_V10_Dpair_D1294, VPOINTER_PAIR);
  _V10_Dpair_D1296.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1296.rest = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1295.first = VEncodePointer(&_V10_Dpair_D1294, VPOINTER_PAIR);
  _V10_Dpair_D1295.rest = VNULL;
  _V10_Dpair_D1294.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1294.rest = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D1293.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1293.rest = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1292.first = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D1292.rest = VNULL;
  _V10_Dpair_D1291.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1291.rest = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D1290.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1290.rest = VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR);
  _V10_Dpair_D1289.first = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D1289.rest = VNULL;
  _V10_Dpair_D1288.first = VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR);
  _V10_Dpair_D1288.rest = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1287.first = VEncodePointer(&_V10_Dpair_D1285, VPOINTER_PAIR);
  _V10_Dpair_D1287.rest = VEncodePointer(&_V10_Dpair_D1286, VPOINTER_PAIR);
  _V10_Dpair_D1286.first = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1286.rest = VNULL;
  _V10_Dpair_D1285.first = VEncodeBool(false);
  _V10_Dpair_D1285.rest = VEncodePointer(&_V10_Dpair_D1284, VPOINTER_PAIR);
  _V10_Dpair_D1284.first = VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR);
  _V10_Dpair_D1284.rest = VNULL;
  _V10_Dpair_D1283.first = _V0lib;
  _V10_Dpair_D1283.rest = VNULL;
  _V10_Dpair_D1282.first = VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR);
  _V10_Dpair_D1282.rest = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1281.first = VEncodeBool(false);
  _V10_Dpair_D1281.rest = VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR);
  _V10_Dpair_D1280.first = VEncodePointer(&_V10_Dpair_D1279, VPOINTER_PAIR);
  _V10_Dpair_D1280.rest = VNULL;
  _V10_Dpair_D1279.first = _V0_Mk;
  _V10_Dpair_D1279.rest = VEncodePointer(&_V10_Dpair_D1278, VPOINTER_PAIR);
  _V10_Dpair_D1278.first = _V0x_D47;
  _V10_Dpair_D1278.rest = VNULL;
  _V10_Dpair_D1277.first = VEncodePointer(&_V10_Dpair_D1276, VPOINTER_PAIR);
  _V10_Dpair_D1277.rest = VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR);
  _V10_Dpair_D1276.first = VEncodeBool(false);
  _V10_Dpair_D1276.rest = VEncodePointer(&_V10_Dpair_D1275, VPOINTER_PAIR);
  _V10_Dpair_D1275.first = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1275.rest = VNULL;
  _V10_Dpair_D1274.first = _V0_Mk;
  _V10_Dpair_D1274.rest = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1273.first = _V0x_D48;
  _V10_Dpair_D1273.rest = VNULL;
  _V10_Dpair_D1272.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1272.rest = VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR);
  _V10_Dpair_D1271.first = VEncodePointer(&_V10_Dpair_D1270, VPOINTER_PAIR);
  _V10_Dpair_D1271.rest = VNULL;
  _V10_Dpair_D1270.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1270.rest = VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR);
  _V10_Dpair_D1269.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1269.rest = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1268.first = VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR);
  _V10_Dpair_D1268.rest = VNULL;
  _V10_Dpair_D1267.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1267.rest = VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR);
  _V10_Dpair_D1266.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1266.rest = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1265.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1265.rest = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1264.first = VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR);
  _V10_Dpair_D1264.rest = VNULL;
  _V10_Dpair_D1263.first = VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR);
  _V10_Dpair_D1263.rest = VEncodePointer(&_V10_Dpair_D1262, VPOINTER_PAIR);
  _V10_Dpair_D1262.first = VEncodePointer(&_V10_Dpair_D1257, VPOINTER_PAIR);
  _V10_Dpair_D1262.rest = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1261.first = VEncodePointer(&_V10_Dpair_D1259, VPOINTER_PAIR);
  _V10_Dpair_D1261.rest = VEncodePointer(&_V10_Dpair_D1260, VPOINTER_PAIR);
  _V10_Dpair_D1260.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1260.rest = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1259.first = _V0path;
  _V10_Dpair_D1259.rest = VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR);
  _V10_Dpair_D1258.first = _V0expr_D45;
  _V10_Dpair_D1258.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1257.first = _V0imports;
  _V10_Dpair_D1257.rest = VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR);
  _V10_Dpair_D1256.first = _V0expr_D46;
  _V10_Dpair_D1256.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1255.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1255.rest = VEncodePointer(&_V10_Dpair_D1254, VPOINTER_PAIR);
  _V10_Dpair_D1254.first = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1254.rest = VNULL;
  _V10_Dpair_D1253.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1253.rest = VEncodePointer(&_V10_Dpair_D1252, VPOINTER_PAIR);
  _V10_Dpair_D1252.first = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1252.rest = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1251.first = VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR);
  _V10_Dpair_D1251.rest = VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR);
  _V10_Dpair_D1250.first = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1250.rest = VNULL;
  _V10_Dpair_D1249.first = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1249.rest = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1248.first = VEncodeBool(false);
  _V10_Dpair_D1248.rest = VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR);
  _V10_Dpair_D1247.first = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1247.rest = VNULL;
  _V10_Dpair_D1246.first = _V0_Mk;
  _V10_Dpair_D1246.rest = VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR);
  _V10_Dpair_D1245.first = _V0kk_D42;
  _V10_Dpair_D1245.rest = VNULL;
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1243.first = VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR);
  _V10_Dpair_D1243.rest = VNULL;
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1240.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1240.rest = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1239.first = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1239.rest = VNULL;
  _V10_Dpair_D1238.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1238.rest = VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR);
  _V10_Dpair_D1237.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1237.rest = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1236.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1236.rest = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1235.first = _V0expr_D24;
  _V10_Dpair_D1235.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1234.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1234.rest = VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR);
  _V10_Dpair_D1233.first = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1233.rest = VNULL;
  _V10_Dpair_D1232.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1232.rest = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1231.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1231.rest = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1230.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1230.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1229.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1229.rest = VNULL;
  _V10_Dpair_D1228.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1228.rest = VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR);
  _V10_Dpair_D1227.first = VEncodePointer(&_V10_Dpair_D1226, VPOINTER_PAIR);
  _V10_Dpair_D1227.rest = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1226.first = VEncodeBool(false);
  _V10_Dpair_D1226.rest = VEncodePointer(&_V10_Dpair_D1225, VPOINTER_PAIR);
  _V10_Dpair_D1225.first = VEncodePointer(&_V10_Dpair_D1224, VPOINTER_PAIR);
  _V10_Dpair_D1225.rest = VNULL;
  _V10_Dpair_D1224.first = _V0_Mk;
  _V10_Dpair_D1224.rest = VEncodePointer(&_V10_Dpair_D1223, VPOINTER_PAIR);
  _V10_Dpair_D1223.first = _V0x_D40;
  _V10_Dpair_D1223.rest = VNULL;
  _V10_Dpair_D1222.first = VEncodePointer(&_V10_Dpair_D1221, VPOINTER_PAIR);
  _V10_Dpair_D1222.rest = VEncodePointer(&_V10_Dpair_D1216, VPOINTER_PAIR);
  _V10_Dpair_D1221.first = VEncodeBool(false);
  _V10_Dpair_D1221.rest = VEncodePointer(&_V10_Dpair_D1220, VPOINTER_PAIR);
  _V10_Dpair_D1220.first = VEncodePointer(&_V10_Dpair_D1219, VPOINTER_PAIR);
  _V10_Dpair_D1220.rest = VNULL;
  _V10_Dpair_D1219.first = _V0_Mk;
  _V10_Dpair_D1219.rest = VEncodePointer(&_V10_Dpair_D1218, VPOINTER_PAIR);
  _V10_Dpair_D1218.first = _V0x_D41;
  _V10_Dpair_D1218.rest = VNULL;
  _V10_Dpair_D1217.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1217.rest = VEncodePointer(&_V10_Dpair_D1216, VPOINTER_PAIR);
  _V10_Dpair_D1216.first = VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR);
  _V10_Dpair_D1216.rest = VNULL;
  _V10_Dpair_D1215.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1215.rest = VEncodePointer(&_V10_Dpair_D1212, VPOINTER_PAIR);
  _V10_Dpair_D1214.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1214.rest = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1213.first = VEncodePointer(&_V10_Dpair_D1212, VPOINTER_PAIR);
  _V10_Dpair_D1213.rest = VNULL;
  _V10_Dpair_D1212.first = VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR);
  _V10_Dpair_D1212.rest = VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR);
  _V10_Dpair_D1211.first = VEncodePointer(&_V10_Dpair_D1208, VPOINTER_PAIR);
  _V10_Dpair_D1211.rest = VEncodePointer(&_V10_Dpair_D1210, VPOINTER_PAIR);
  _V10_Dpair_D1210.first = VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR);
  _V10_Dpair_D1210.rest = VNULL;
  _V10_Dpair_D1209.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1209.rest = VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR);
  _V10_Dpair_D1208.first = VEncodeBool(false);
  _V10_Dpair_D1208.rest = VEncodePointer(&_V10_Dpair_D1207, VPOINTER_PAIR);
  _V10_Dpair_D1207.first = VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR);
  _V10_Dpair_D1207.rest = VNULL;
  _V10_Dpair_D1206.first = _V0stringfix;
  _V10_Dpair_D1206.rest = VNULL;
  _V10_Dpair_D1205.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1205.rest = VEncodePointer(&_V10_Dpair_D1203, VPOINTER_PAIR);
  _V10_Dpair_D1204.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1204.rest = VEncodePointer(&_V10_Dpair_D1203, VPOINTER_PAIR);
  _V10_Dpair_D1203.first = VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR);
  _V10_Dpair_D1203.rest = VNULL;
  _V10_Dpair_D1202.first = VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR);
  _V10_Dpair_D1202.rest = VEncodePointer(&_V10_Dpair_D1201, VPOINTER_PAIR);
  _V10_Dpair_D1201.first = VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR);
  _V10_Dpair_D1201.rest = VEncodePointer(&_V10_Dpair_D1200, VPOINTER_PAIR);
  _V10_Dpair_D1200.first = VEncodePointer(&_V10_Dpair_D1198, VPOINTER_PAIR);
  _V10_Dpair_D1200.rest = VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR);
  _V10_Dpair_D1199.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1199.rest = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1198.first = _V0path;
  _V10_Dpair_D1198.rest = VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR);
  _V10_Dpair_D1197.first = _V0expr_D38;
  _V10_Dpair_D1197.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1196.first = _V0imports;
  _V10_Dpair_D1196.rest = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1195.first = _V0expr_D39;
  _V10_Dpair_D1195.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1194.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1194.rest = VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR);
  _V10_Dpair_D1193.first = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1193.rest = VNULL;
  _V10_Dpair_D1192.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1192.rest = VEncodePointer(&_V10_Dpair_D1191, VPOINTER_PAIR);
  _V10_Dpair_D1191.first = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1191.rest = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1190.first = VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR);
  _V10_Dpair_D1190.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1189.first = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1189.rest = VNULL;
  _V10_Dpair_D1188.first = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1188.rest = VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR);
  _V10_Dpair_D1187.first = VEncodeBool(false);
  _V10_Dpair_D1187.rest = VEncodePointer(&_V10_Dpair_D1186, VPOINTER_PAIR);
  _V10_Dpair_D1186.first = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1186.rest = VNULL;
  _V10_Dpair_D1185.first = _V0_Mk;
  _V10_Dpair_D1185.rest = VEncodePointer(&_V10_Dpair_D1184, VPOINTER_PAIR);
  _V10_Dpair_D1184.first = _V0kk_D35;
  _V10_Dpair_D1184.rest = VNULL;
  _V10_Dpair_D1183.first = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1183.rest = VEncodePointer(&_V10_Dpair_D1182, VPOINTER_PAIR);
  _V10_Dpair_D1182.first = VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR);
  _V10_Dpair_D1182.rest = VNULL;
  _V10_Dpair_D1181.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1181.rest = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1180.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1180.rest = VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR);
  _V10_Dpair_D1179.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1179.rest = VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR);
  _V10_Dpair_D1178.first = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1178.rest = VNULL;
  _V10_Dpair_D1177.first = VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR);
  _V10_Dpair_D1177.rest = VEncodePointer(&_V10_Dpair_D1176, VPOINTER_PAIR);
  _V10_Dpair_D1176.first = VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR);
  _V10_Dpair_D1176.rest = VEncodePointer(&_V10_Dpair_D1175, VPOINTER_PAIR);
  _V10_Dpair_D1175.first = VEncodePointer(&_V10_Dpair_D1173, VPOINTER_PAIR);
  _V10_Dpair_D1175.rest = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1174.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1174.rest = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1173.first = _V0expr_D21;
  _V10_Dpair_D1173.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1172.first = _V0import;
  _V10_Dpair_D1172.rest = VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR);
  _V10_Dpair_D1171.first = _V0expr_D22;
  _V10_Dpair_D1171.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1170.first = _V0prefix;
  _V10_Dpair_D1170.rest = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D1169.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1169.rest = VEncodePointer(&_V10_Dpair_D1168, VPOINTER_PAIR);
  _V10_Dpair_D1168.first = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1168.rest = VNULL;
  _V10_Dpair_D1167.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1167.rest = VEncodePointer(&_V10_Dpair_D1166, VPOINTER_PAIR);
  _V10_Dpair_D1166.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1166.rest = VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR);
  _V10_Dpair_D1165.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1165.rest = VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR);
  _V10_Dpair_D1164.first = VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR);
  _V10_Dpair_D1164.rest = VNULL;
  _V10_Dpair_D1163.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1163.rest = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1162.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1162.rest = VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR);
  _V10_Dpair_D1161.first = VEncodePointer(&_V10_Dpair_D1160, VPOINTER_PAIR);
  _V10_Dpair_D1161.rest = VNULL;
  _V10_Dpair_D1160.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1160.rest = VEncodePointer(&_V10_Dpair_D1159, VPOINTER_PAIR);
  _V10_Dpair_D1159.first = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1159.rest = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1158.first = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1158.rest = VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR);
  _V10_Dpair_D1157.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1157.rest = VEncodePointer(&_V10_Dpair_D1156, VPOINTER_PAIR);
  _V10_Dpair_D1156.first = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1156.rest = VNULL;
  _V10_Dpair_D1155.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1155.rest = VEncodePointer(&_V10_Dpair_D1154, VPOINTER_PAIR);
  _V10_Dpair_D1154.first = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1154.rest = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1153.first = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1153.rest = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1152.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1152.rest = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1151.first = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1151.rest = VNULL;
  _V10_Dpair_D1150.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1150.rest = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1149.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1149.rest = VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR);
  _V10_Dpair_D1148.first = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1148.rest = VNULL;
  _V10_Dpair_D1147.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1147.rest = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1146.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1146.rest = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1145.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1145.rest = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1144.first = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1144.rest = VNULL;
  _V10_Dpair_D1143.first = VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR);
  _V10_Dpair_D1143.rest = VEncodePointer(&_V10_Dpair_D1142, VPOINTER_PAIR);
  _V10_Dpair_D1142.first = VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR);
  _V10_Dpair_D1142.rest = VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR);
  _V10_Dpair_D1141.first = VEncodePointer(&_V10_Dpair_D1139, VPOINTER_PAIR);
  _V10_Dpair_D1141.rest = VEncodePointer(&_V10_Dpair_D1140, VPOINTER_PAIR);
  _V10_Dpair_D1140.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1140.rest = VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR);
  _V10_Dpair_D1139.first = _V0path;
  _V10_Dpair_D1139.rest = VEncodePointer(&_V10_Dpair_D1138, VPOINTER_PAIR);
  _V10_Dpair_D1138.first = _V0expr_D33;
  _V10_Dpair_D1138.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1137.first = _V0imports;
  _V10_Dpair_D1137.rest = VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR);
  _V10_Dpair_D1136.first = _V0expr_D34;
  _V10_Dpair_D1136.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1135.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1135.rest = VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR);
  _V10_Dpair_D1134.first = VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR);
  _V10_Dpair_D1134.rest = VNULL;
  _V10_Dpair_D1133.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1133.rest = VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR);
  _V10_Dpair_D1132.first = VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR);
  _V10_Dpair_D1132.rest = VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR);
  _V10_Dpair_D1131.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1131.rest = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D1130.first = VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR);
  _V10_Dpair_D1130.rest = VNULL;
  _V10_Dpair_D1129.first = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1129.rest = VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR);
  _V10_Dpair_D1128.first = VEncodeBool(false);
  _V10_Dpair_D1128.rest = VEncodePointer(&_V10_Dpair_D1127, VPOINTER_PAIR);
  _V10_Dpair_D1127.first = VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR);
  _V10_Dpair_D1127.rest = VNULL;
  _V10_Dpair_D1126.first = _V0_Mk;
  _V10_Dpair_D1126.rest = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1125.first = _V0kk_D30;
  _V10_Dpair_D1125.rest = VNULL;
  _V10_Dpair_D1124.first = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1124.rest = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1123.first = VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR);
  _V10_Dpair_D1123.rest = VNULL;
  _V10_Dpair_D1122.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1122.rest = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1121.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1121.rest = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1120.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1120.rest = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1119.first = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1119.rest = VNULL;
  _V10_Dpair_D1118.first = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1118.rest = VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR);
  _V10_Dpair_D1117.first = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1117.rest = VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR);
  _V10_Dpair_D1116.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1116.rest = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1115.first = _V0expr_D19;
  _V10_Dpair_D1115.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1114.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1114.rest = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1113.first = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1113.rest = VNULL;
  _V10_Dpair_D1112.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1112.rest = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1111.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1111.rest = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1110.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1110.rest = VEncodePointer(&_V10_Dpair_D1109, VPOINTER_PAIR);
  _V10_Dpair_D1109.first = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1109.rest = VNULL;
  _V10_Dpair_D1108.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1108.rest = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1106.first = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1106.rest = VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR);
  _V10_Dpair_D1105.first = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1105.rest = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1104.first = VEncodeBool(false);
  _V10_Dpair_D1104.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1103.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1103.rest = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1102.first = VEncodePointer(&_V10_Dpair_D1101, VPOINTER_PAIR);
  _V10_Dpair_D1102.rest = VNULL;
  _V10_Dpair_D1101.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1101.rest = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1100.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1100.rest = VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR);
  _V10_Dpair_D1099.first = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1099.rest = VNULL;
  _V10_Dpair_D1098.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1098.rest = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1097.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1097.rest = VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR);
  _V10_Dpair_D1096.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1096.rest = VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR);
  _V10_Dpair_D1095.first = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1095.rest = VNULL;
  _V10_Dpair_D1094.first = VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR);
  _V10_Dpair_D1094.rest = VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR);
  _V10_Dpair_D1093.first = VEncodePointer(&_V10_Dpair_D1088, VPOINTER_PAIR);
  _V10_Dpair_D1093.rest = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1092.first = VEncodePointer(&_V10_Dpair_D1090, VPOINTER_PAIR);
  _V10_Dpair_D1092.rest = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1091.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1091.rest = VEncodePointer(&_V10_Dpair_D1083, VPOINTER_PAIR);
  _V10_Dpair_D1090.first = _V0path;
  _V10_Dpair_D1090.rest = VEncodePointer(&_V10_Dpair_D1089, VPOINTER_PAIR);
  _V10_Dpair_D1089.first = _V0expr_D28;
  _V10_Dpair_D1089.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1088.first = _V0imports;
  _V10_Dpair_D1088.rest = VEncodePointer(&_V10_Dpair_D1087, VPOINTER_PAIR);
  _V10_Dpair_D1087.first = _V0expr_D29;
  _V10_Dpair_D1087.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1086.first = _V0constant__imports;
  _V10_Dpair_D1086.rest = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D1085.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1085.rest = VEncodePointer(&_V10_Dpair_D1084, VPOINTER_PAIR);
  _V10_Dpair_D1084.first = VEncodePointer(&_V10_Dpair_D1083, VPOINTER_PAIR);
  _V10_Dpair_D1084.rest = VNULL;
  _V10_Dpair_D1083.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1083.rest = VEncodePointer(&_V10_Dpair_D1082, VPOINTER_PAIR);
  _V10_Dpair_D1082.first = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1082.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1081.first = VEncodePointer(&_V10_Dpair_D1078, VPOINTER_PAIR);
  _V10_Dpair_D1081.rest = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1080.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1080.rest = VNULL;
  _V10_Dpair_D1079.first = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1079.rest = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1078.first = VEncodeBool(false);
  _V10_Dpair_D1078.rest = VEncodePointer(&_V10_Dpair_D1077, VPOINTER_PAIR);
  _V10_Dpair_D1077.first = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1077.rest = VNULL;
  _V10_Dpair_D1076.first = _V0_Mk;
  _V10_Dpair_D1076.rest = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1075.first = _V0kk_D25;
  _V10_Dpair_D1075.rest = VNULL;
  _V10_Dpair_D1074.first = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1074.rest = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1073.first = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1073.rest = VNULL;
  _V10_Dpair_D1072.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1072.rest = VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR);
  _V10_Dpair_D1071.first = VEncodeBool(false);
  _V10_Dpair_D1071.rest = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1070.first = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1070.rest = VNULL;
  _V10_Dpair_D1069.first = _V0resolved__import;
  _V10_Dpair_D1069.rest = VNULL;
  _V10_Dpair_D1068.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1068.rest = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1067.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1067.rest = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1066.first = VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR);
  _V10_Dpair_D1066.rest = VNULL;
  _V10_Dpair_D1065.first = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1065.rest = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1064.first = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1064.rest = VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR);
  _V10_Dpair_D1063.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1063.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1062.first = _V0expr_D17;
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = _V0import;
  _V10_Dpair_D1061.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1060.first = _V0names;
  _V10_Dpair_D1060.rest = VNULL;
  _V10_Dpair_D1059.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1059.rest = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1058.first = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1058.rest = VNULL;
  _V10_Dpair_D1057.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1057.rest = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1056.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1056.rest = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1055.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1055.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1054.first = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1054.rest = VNULL;
  _V10_Dpair_D1053.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1053.rest = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1052.first = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1051.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D1050.first = VEncodeBool(false);
  _V10_Dpair_D1050.rest = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1049.first = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1049.rest = VNULL;
  _V10_Dpair_D1048.first = _V0_Mk;
  _V10_Dpair_D1048.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1047.first = _V0kk_D14;
  _V10_Dpair_D1047.rest = VNULL;
  _V10_Dpair_D1045.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1045.rest = VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR);
  _V10_Dpair_D1044.first = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1044.rest = VNULL;
  _V10_Dpair_D1043.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1043.rest = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1042.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1042.rest = VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR);
  _V10_Dpair_D1041.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1041.rest = VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR);
  _V10_Dpair_D1040.first = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1040.rest = VNULL;
  _V10_Dpair_D1039.first = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1039.rest = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1038.first = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR);
  _V10_Dpair_D1037.first = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1037.rest = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1036.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = _V0expr_D53;
  _V10_Dpair_D1035.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1034.first = _V0a;
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = _V0expr_D54;
  _V10_Dpair_D1033.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1032.first = _V0b;
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D1031.rest = VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR);
  _V10_Dpair_D1030.first = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1030.rest = VNULL;
  _V10_Dpair_D1029.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D1029.rest = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1028.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D1028.rest = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1027.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1027.rest = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1026.first = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1026.rest = VNULL;
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1024.first = VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR);
  _V10_Dpair_D1024.rest = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1023.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1023.rest = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1022.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1022.rest = VNULL;
  _V10_Dpair_D1021.first = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1021.rest = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D1020.first = VEncodeBool(false);
  _V10_Dpair_D1020.rest = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1019.first = VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR);
  _V10_Dpair_D1019.rest = VNULL;
  _V10_Dpair_D1018.first = _V0_Mk;
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = _V0kk_D50;
  _V10_Dpair_D1017.rest = VNULL;
  _V10_Dpair_D1016.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1014.rest = VNULL;
  _V10_Dpair_D1013.first = _V0_Mk;
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = _V0e;
  _V10_Dpair_D1012.rest = VNULL;
  _V10_Dpair_D1011.first = _V0vanity;
  _V10_Dpair_D1011.rest = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1010.first = _V0compiler;
  _V10_Dpair_D1010.rest = VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR);
  _V10_Dpair_D1009.first = _V0library;
  _V10_Dpair_D1009.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1008.first = _V0process__import_B;
  _V10_Dpair_D1008.rest = VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR);
  _V10_Dpair_D1007.first = _V10_Dprocess__export_D138;
  _V10_Dpair_D1007.rest = VNULL;
  _V10_Dpair_D1006.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D1006.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1005.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D1005.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1004.first = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1004.rest = VNULL;
  _V10_Dpair_D1003.first = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D1003.rest = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VNULL;
  _V10_Dpair_D1000.first = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D1000.rest = VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR);
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodeBool(false);
  _V10_Dpair_D998.rest = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D997.first = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D997.rest = VNULL;
  _V10_Dpair_D996.first = _V0x_D49;
  _V10_Dpair_D996.rest = VNULL;
  _V10_Dpair_D995.first = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D995.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D994.first = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D994.rest = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D993.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D993.rest = VNULL;
  _V10_Dpair_D992.first = _V0_Mk;
  _V10_Dpair_D992.rest = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D991.first = _V0import;
  _V10_Dpair_D991.rest = VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR);
  _V10_Dpair_D990.first = _V0renames;
  _V10_Dpair_D990.rest = VNULL;
  _V10_Dpair_D989.first = _V0vanity;
  _V10_Dpair_D989.rest = VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR);
  _V10_Dpair_D988.first = _V0compiler;
  _V10_Dpair_D988.rest = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D987.first = _V0library;
  _V10_Dpair_D987.rest = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D986.first = _V0process__import_B;
  _V10_Dpair_D986.rest = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D985.first = _V10_Drename__import_D137;
  _V10_Dpair_D985.rest = VNULL;
  _V10_Dpair_D984.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D984.rest = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D983.first = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D983.rest = VNULL;
  _V10_Dpair_D982.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D982.rest = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D981.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D981.rest = VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR);
  _V10_Dpair_D980.first = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D980.rest = VNULL;
  _V10_Dpair_D979.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D979.rest = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D978.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D978.rest = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D977.first = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D977.rest = VNULL;
  _V10_Dpair_D976.first = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D976.rest = VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR);
  _V10_Dpair_D975.first = VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR);
  _V10_Dpair_D975.rest = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D974.first = VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR);
  _V10_Dpair_D974.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D973.first = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D973.rest = VNULL;
  _V10_Dpair_D972.first = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D972.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D971.first = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D971.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D970.first = _V0prefix__import;
  _V10_Dpair_D970.rest = VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR);
  _V10_Dpair_D969.first = _V0rename__import;
  _V10_Dpair_D969.rest = VEncodePointer(&_V10_Dpair_D968, VPOINTER_PAIR);
  _V10_Dpair_D968.first = _V0process__export;
  _V10_Dpair_D968.rest = VNULL;
  _V10_Dpair_D967.first = VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR);
  _V10_Dpair_D967.rest = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D966.first = VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR);
  _V10_Dpair_D966.rest = VNULL;
  _V10_Dpair_D965.first = _V0_Mk;
  _V10_Dpair_D965.rest = VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR);
  _V10_Dpair_D964.first = _V0import;
  _V10_Dpair_D964.rest = VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR);
  _V10_Dpair_D963.first = _V0prefix;
  _V10_Dpair_D963.rest = VNULL;
  _V10_Dpair_D962.first = _V0vanity;
  _V10_Dpair_D962.rest = VEncodePointer(&_V10_Dpair_D961, VPOINTER_PAIR);
  _V10_Dpair_D961.first = _V0compiler;
  _V10_Dpair_D961.rest = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D960.first = _V0library;
  _V10_Dpair_D960.rest = VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR);
  _V10_Dpair_D959.first = _V0process__import_B;
  _V10_Dpair_D959.rest = VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR);
  _V10_Dpair_D958.first = _V10_Dprefix__import_D136;
  _V10_Dpair_D958.rest = VNULL;
  _V10_Dpair_D957.first = VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR);
  _V10_Dpair_D957.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D956.first = VEncodePointer(&_V10_Dpair_D951, VPOINTER_PAIR);
  _V10_Dpair_D956.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D955.first = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D955.rest = VNULL;
  _V10_Dpair_D954.first = _V0_Mk;
  _V10_Dpair_D954.rest = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D953.first = _V0import;
  _V10_Dpair_D953.rest = VEncodePointer(&_V10_Dpair_D952, VPOINTER_PAIR);
  _V10_Dpair_D952.first = _V0paths;
  _V10_Dpair_D952.rest = VNULL;
  _V10_Dpair_D951.first = _V0vanity;
  _V10_Dpair_D951.rest = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D950.first = _V0compiler;
  _V10_Dpair_D950.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D949.first = _V0library;
  _V10_Dpair_D949.rest = VEncodePointer(&_V10_Dpair_D948, VPOINTER_PAIR);
  _V10_Dpair_D948.first = _V0process__import_B;
  _V10_Dpair_D948.rest = VNULL;
  _V10_Dpair_D947.first = VEncodeChar('-');
  _V10_Dpair_D947.rest = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D946.first = VEncodeChar('_');
  _V10_Dpair_D946.rest = VNULL;
  _V10_Dpair_D945.first = VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR);
  _V10_Dpair_D945.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D944.first = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D944.rest = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D943.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D943.rest = VNULL;
  _V10_Dpair_D942.first = _V0_Mk;
  _V10_Dpair_D942.rest = VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR);
  _V10_Dpair_D941.first = _V0c;
  _V10_Dpair_D941.rest = VNULL;
  _V10_Dpair_D940.first = _V0vanity;
  _V10_Dpair_D940.rest = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D939.first = _V0compiler;
  _V10_Dpair_D939.rest = VEncodePointer(&_V10_Dpair_D938, VPOINTER_PAIR);
  _V10_Dpair_D938.first = _V0library;
  _V10_Dpair_D938.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D937.first = _V0acceptable__char_Q;
  _V10_Dpair_D937.rest = VNULL;
  _V10_Dpair_D936.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D936.rest = VEncodePointer(&_V10_Dpair_D935, VPOINTER_PAIR);
  _V10_Dpair_D935.first = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D935.rest = VNULL;
  _V10_Dpair_D934.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D934.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D933.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D933.rest = VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR);
  _V10_Dpair_D932.first = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D931.first = VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR);
  _V10_Dpair_D931.rest = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D930.first = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D930.rest = VNULL;
  _V10_Dpair_D929.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D929.rest = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D928.first = VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR);
  _V10_Dpair_D928.rest = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D927.first = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D927.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D926.first = _V0len;
  _V10_Dpair_D926.rest = VNULL;
  _V10_Dpair_D925.first = _V0loop;
  _V10_Dpair_D925.rest = VNULL;
  _V10_Dpair_D924.first = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D924.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D923.first = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D923.rest = VNULL;
  _V10_Dpair_D922.first = _V0_Mk;
  _V10_Dpair_D922.rest = VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR);
  _V10_Dpair_D921.first = _V0i;
  _V10_Dpair_D921.rest = VNULL;
  _V10_Dpair_D920.first = _V0vanity;
  _V10_Dpair_D920.rest = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D919.first = _V0compiler;
  _V10_Dpair_D919.rest = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D918.first = _V0library;
  _V10_Dpair_D918.rest = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D917.first = _V0acceptable__characters_Q;
  _V10_Dpair_D917.rest = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D916.first = _V10_Dloop_D130;
  _V10_Dpair_D916.rest = VNULL;
  _V10_Dpair_D915.first = VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR);
  _V10_Dpair_D915.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D914.first = VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR);
  _V10_Dpair_D914.rest = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D913.first = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D913.rest = VNULL;
  _V10_Dpair_D912.first = _V0_Mk;
  _V10_Dpair_D912.rest = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D911.first = _V0str;
  _V10_Dpair_D911.rest = VNULL;
  _V10_Dpair_D910.first = _V0vanity;
  _V10_Dpair_D910.rest = VEncodePointer(&_V10_Dpair_D909, VPOINTER_PAIR);
  _V10_Dpair_D909.first = _V0compiler;
  _V10_Dpair_D909.rest = VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR);
  _V10_Dpair_D908.first = _V0library;
  _V10_Dpair_D908.rest = VEncodePointer(&_V10_Dpair_D907, VPOINTER_PAIR);
  _V10_Dpair_D907.first = _V0acceptable__characters_Q;
  _V10_Dpair_D907.rest = VNULL;
  _V10_Dpair_D906.first = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D906.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D905.first = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D905.rest = VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR);
  _V10_Dpair_D904.first = VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR);
  _V10_Dpair_D904.rest = VNULL;
  _V10_Dpair_D903.first = _V0_Mk;
  _V10_Dpair_D903.rest = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D902.first = _V0a;
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D901.first = _V0b;
  _V10_Dpair_D901.rest = VNULL;
  _V10_Dpair_D900.first = _V0vanity;
  _V10_Dpair_D900.rest = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D899.first = _V0compiler;
  _V10_Dpair_D899.rest = VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR);
  _V10_Dpair_D898.first = _V0library;
  _V10_Dpair_D898.rest = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D897.first = _V0andf;
  _V10_Dpair_D897.rest = VNULL;
  _V10_Dpair_D896.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D896.rest = VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR);
  _V10_Dpair_D895.first = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D895.rest = VNULL;
  _V10_Dpair_D894.first = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D894.rest = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D893.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D892.rest = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D891.first = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D891.rest = VNULL;
  _V10_Dpair_D890.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D890.rest = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D889.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D889.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D888.first = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D888.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D887.first = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D887.rest = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D886.first = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D886.rest = VNULL;
  _V10_Dpair_D885.first = _V0_Mk;
  _V10_Dpair_D885.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D884.first = _V0x;
  _V10_Dpair_D884.rest = VNULL;
  _V10_Dpair_D883.first = _V0vanity;
  _V10_Dpair_D883.rest = VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR);
  _V10_Dpair_D882.first = _V0compiler;
  _V10_Dpair_D882.rest = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D881.first = _V0library;
  _V10_Dpair_D881.rest = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D880.first = _V0valid__import__element_Q;
  _V10_Dpair_D880.rest = VNULL;
  _V10_Dpair_D879.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D879.rest = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D878.first = VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR);
  _V10_Dpair_D878.rest = VNULL;
  _V10_Dpair_D877.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D877.rest = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D876.first = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D876.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D875.first = VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR);
  _V10_Dpair_D875.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D874.first = _V0vanity;
  _V10_Dpair_D874.rest = VEncodePointer(&_V10_Dpair_D873, VPOINTER_PAIR);
  _V10_Dpair_D873.first = _V0compiler;
  _V10_Dpair_D873.rest = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D872.first = _V0library;
  _V10_Dpair_D872.rest = VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR);
  _V10_Dpair_D871.first = _V0valid__import_Q;
  _V10_Dpair_D871.rest = VNULL;
  _V10_Dpair_D869.first = VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR);
  _V10_Dpair_D869.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D868.first = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D868.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D867.first = _V0vanity;
  _V10_Dpair_D867.rest = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D866.first = _V0compiler;
  _V10_Dpair_D866.rest = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D865.first = _V0library;
  _V10_Dpair_D865.rest = VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR);
  _V10_Dpair_D864.first = _V0import___Gpath;
  _V10_Dpair_D864.rest = VNULL;
  _V10_Dpair_D862.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D862.rest = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D861.first = VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR);
  _V10_Dpair_D861.rest = VNULL;
  _V10_Dpair_D860.first = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D860.rest = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D859.first = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D859.rest = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D858.first = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D858.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D857.first = _V0_Mx;
  _V10_Dpair_D857.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D856.first = _V0_Mx;
  _V10_Dpair_D856.rest = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D854.first = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D854.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D853.first = VEncodePointer(&_V10_Dpair_D849, VPOINTER_PAIR);
  _V10_Dpair_D853.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D852.first = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D852.rest = VNULL;
  _V10_Dpair_D851.first = _V0_Mk;
  _V10_Dpair_D851.rest = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D850.first = _V0import;
  _V10_Dpair_D850.rest = VNULL;
  _V10_Dpair_D849.first = _V0vanity;
  _V10_Dpair_D849.rest = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D848.first = _V0compiler;
  _V10_Dpair_D848.rest = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D847.first = _V0library;
  _V10_Dpair_D847.rest = VEncodePointer(&_V10_Dpair_D846, VPOINTER_PAIR);
  _V10_Dpair_D846.first = _V0import__basepath;
  _V10_Dpair_D846.rest = VNULL;
  _V10_Dpair_D845.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D845.rest = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D844.first = VEncodePointer(&_V10_Dpair_D843, VPOINTER_PAIR);
  _V10_Dpair_D844.rest = VNULL;
  _V10_Dpair_D843.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D843.rest = VEncodePointer(&_V10_Dpair_D842, VPOINTER_PAIR);
  _V10_Dpair_D842.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D842.rest = VEncodePointer(&_V10_Dpair_D839, VPOINTER_PAIR);
  _V10_Dpair_D841.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D841.rest = VEncodePointer(&_V10_Dpair_D840, VPOINTER_PAIR);
  _V10_Dpair_D840.first = VEncodePointer(&_V10_Dpair_D839, VPOINTER_PAIR);
  _V10_Dpair_D840.rest = VNULL;
  _V10_Dpair_D839.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D839.rest = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D838.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D838.rest = VEncodePointer(&_V10_Dpair_D836, VPOINTER_PAIR);
  _V10_Dpair_D837.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D837.rest = VEncodePointer(&_V10_Dpair_D836, VPOINTER_PAIR);
  _V10_Dpair_D836.first = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D836.rest = VNULL;
  _V10_Dpair_D835.first = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V10_Dpair_D835.rest = VEncodePointer(&_V10_Dpair_D834, VPOINTER_PAIR);
  _V10_Dpair_D834.first = VEncodePointer(&_V10_Dpair_D832, VPOINTER_PAIR);
  _V10_Dpair_D834.rest = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D833.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D833.rest = VEncodePointer(&_V10_Dpair_D827, VPOINTER_PAIR);
  _V10_Dpair_D832.first = _V0expr_D59;
  _V10_Dpair_D832.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D831.first = _V0name;
  _V10_Dpair_D831.rest = VEncodePointer(&_V10_Dpair_D830, VPOINTER_PAIR);
  _V10_Dpair_D830.first = _V0body;
  _V10_Dpair_D830.rest = VNULL;
  _V10_Dpair_D829.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D829.rest = VEncodePointer(&_V10_Dpair_D828, VPOINTER_PAIR);
  _V10_Dpair_D828.first = VEncodePointer(&_V10_Dpair_D827, VPOINTER_PAIR);
  _V10_Dpair_D828.rest = VNULL;
  _V10_Dpair_D827.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D827.rest = VEncodePointer(&_V10_Dpair_D826, VPOINTER_PAIR);
  _V10_Dpair_D826.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D826.rest = VEncodePointer(&_V10_Dpair_D823, VPOINTER_PAIR);
  _V10_Dpair_D825.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D825.rest = VEncodePointer(&_V10_Dpair_D824, VPOINTER_PAIR);
  _V10_Dpair_D824.first = VEncodePointer(&_V10_Dpair_D823, VPOINTER_PAIR);
  _V10_Dpair_D824.rest = VNULL;
  _V10_Dpair_D823.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D823.rest = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D822.first = VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR);
  _V10_Dpair_D822.rest = VEncodePointer(&_V10_Dpair_D821, VPOINTER_PAIR);
  _V10_Dpair_D821.first = VEncodePointer(&_V10_Dpair_D820, VPOINTER_PAIR);
  _V10_Dpair_D821.rest = VNULL;
  _V10_Dpair_D820.first = _V0unquote;
  _V10_Dpair_D820.rest = VEncodePointer(&_V10_Dpair_D819, VPOINTER_PAIR);
  _V10_Dpair_D819.first = _V0unmangled__env;
  _V10_Dpair_D819.rest = VNULL;
  _V10_Dpair_D818.first = VEncodeBool(false);
  _V10_Dpair_D818.rest = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D817.first = _V0_U;
  _V10_Dpair_D817.rest = VNULL;
  _V10_Dpair_D816.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D816.rest = VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR);
  _V10_Dpair_D815.first = VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR);
  _V10_Dpair_D815.rest = VNULL;
  _V10_Dpair_D814.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D814.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D813.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D813.rest = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D812.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D812.rest = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D811.first = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D811.rest = VNULL;
  _V10_Dpair_D810.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D810.rest = VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR);
  _V10_Dpair_D809.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D809.rest = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D808.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D808.rest = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D807.first = VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR);
  _V10_Dpair_D807.rest = VNULL;
  _V10_Dpair_D806.first = VEncodePointer(&_V10_Dpair_D804, VPOINTER_PAIR);
  _V10_Dpair_D806.rest = VEncodePointer(&_V10_Dpair_D805, VPOINTER_PAIR);
  _V10_Dpair_D805.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D805.rest = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D804.first = _V0libs;
  _V10_Dpair_D804.rest = VNULL;
  _V10_Dpair_D803.first = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D803.rest = VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR);
  _V10_Dpair_D802.first = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D802.rest = VNULL;
  _V10_Dpair_D801.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D801.rest = VEncodePointer(&_V10_Dpair_D800, VPOINTER_PAIR);
  _V10_Dpair_D800.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D800.rest = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D799.first = VEncodeBool(false);
  _V10_Dpair_D799.rest = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D798.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D798.rest = VNULL;
  _V10_Dpair_D797.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D797.rest = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D796.first = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D796.rest = VNULL;
  _V10_Dpair_D795.first = VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR);
  _V10_Dpair_D795.rest = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D794.first = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D794.rest = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D793.first = _V0input_D56;
  _V10_Dpair_D793.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D792.first = VEncodePointer(&_V10_Dpair_D787, VPOINTER_PAIR);
  _V10_Dpair_D792.rest = VEncodePointer(&_V10_Dpair_D791, VPOINTER_PAIR);
  _V10_Dpair_D791.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D791.rest = VNULL;
  _V10_Dpair_D790.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D790.rest = VEncodePointer(&_V10_Dpair_D789, VPOINTER_PAIR);
  _V10_Dpair_D789.first = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D789.rest = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D788.first = _V0_Mp;
  _V10_Dpair_D788.rest = VNULL;
  _V10_Dpair_D787.first = VEncodeBool(false);
  _V10_Dpair_D787.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D786.first = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D786.rest = VNULL;
  _V10_Dpair_D785.first = _V0_Mk;
  _V10_Dpair_D785.rest = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D784.first = _V0kk_D55;
  _V10_Dpair_D784.rest = VNULL;
  _V10_Dpair_D783.first = VEncodePointer(&_V10_Dpair_D762, VPOINTER_PAIR);
  _V10_Dpair_D783.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D782.first = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D782.rest = VNULL;
  _V10_Dpair_D781.first = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D781.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D780.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D780.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D779.first = _V0gather__dependencies;
  _V10_Dpair_D779.rest = VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR);
  _V10_Dpair_D778.first = _V0import__basepath;
  _V10_Dpair_D778.rest = VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR);
  _V10_Dpair_D777.first = _V0import___Gpath;
  _V10_Dpair_D777.rest = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D776.first = _V0valid__import_Q;
  _V10_Dpair_D776.rest = VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR);
  _V10_Dpair_D775.first = _V0valid__import__element_Q;
  _V10_Dpair_D775.rest = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D774.first = _V0andf;
  _V10_Dpair_D774.rest = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D773.first = _V0acceptable__characters_Q;
  _V10_Dpair_D773.rest = VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR);
  _V10_Dpair_D772.first = _V0acceptable__char_Q;
  _V10_Dpair_D772.rest = VEncodePointer(&_V10_Dpair_D771, VPOINTER_PAIR);
  _V10_Dpair_D771.first = _V0process__import_B;
  _V10_Dpair_D771.rest = VEncodePointer(&_V10_Dpair_D770, VPOINTER_PAIR);
  _V10_Dpair_D770.first = _V0extract__constants;
  _V10_Dpair_D770.rest = VEncodePointer(&_V10_Dpair_D769, VPOINTER_PAIR);
  _V10_Dpair_D769.first = _V0extract__exports;
  _V10_Dpair_D769.rest = VEncodePointer(&_V10_Dpair_D768, VPOINTER_PAIR);
  _V10_Dpair_D768.first = _V0find__library__interface_B;
  _V10_Dpair_D768.rest = VEncodePointer(&_V10_Dpair_D767, VPOINTER_PAIR);
  _V10_Dpair_D767.first = _V0import__path;
  _V10_Dpair_D767.rest = VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR);
  _V10_Dpair_D766.first = _V0register__library__interface_B;
  _V10_Dpair_D766.rest = VEncodePointer(&_V10_Dpair_D765, VPOINTER_PAIR);
  _V10_Dpair_D765.first = _V0library__exists_Q;
  _V10_Dpair_D765.rest = VEncodePointer(&_V10_Dpair_D764, VPOINTER_PAIR);
  _V10_Dpair_D764.first = _V0load__library__interface;
  _V10_Dpair_D764.rest = VEncodePointer(&_V10_Dpair_D763, VPOINTER_PAIR);
  _V10_Dpair_D763.first = _V0library__interfaces;
  _V10_Dpair_D763.rest = VNULL;
  _V10_Dpair_D762.first = VEncodePointer(&_V10_Dpair_D758, VPOINTER_PAIR);
  _V10_Dpair_D762.rest = VEncodePointer(&_V10_Dpair_D761, VPOINTER_PAIR);
  _V10_Dpair_D761.first = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D761.rest = VNULL;
  _V10_Dpair_D760.first = _V0_Mk;
  _V10_Dpair_D760.rest = VEncodePointer(&_V10_Dpair_D759, VPOINTER_PAIR);
  _V10_Dpair_D759.first = _V0statements;
  _V10_Dpair_D759.rest = VNULL;
  _V10_Dpair_D758.first = _V0vanity;
  _V10_Dpair_D758.rest = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D757.first = _V0compiler;
  _V10_Dpair_D757.rest = VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR);
  _V10_Dpair_D756.first = _V0library;
  _V10_Dpair_D756.rest = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D755.first = _V0gather__dependencies;
  _V10_Dpair_D755.rest = VNULL;
  _V10_Dpair_D754.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D754.rest = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D753.first = VEncodeBool(false);
  _V10_Dpair_D753.rest = VEncodePointer(&_V10_Dpair_D752, VPOINTER_PAIR);
  _V10_Dpair_D752.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D752.rest = VNULL;
  _V10_Dpair_D751.first = _V0_Mk;
  _V10_Dpair_D751.rest = VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR);
  _V10_Dpair_D750.first = _V0equal_Q;
  _V10_Dpair_D750.rest = VEncodePointer(&_V10_Dpair_D749, VPOINTER_PAIR);
  _V10_Dpair_D749.first = _V0append;
  _V10_Dpair_D749.rest = VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR);
  _V10_Dpair_D748.first = _V0map;
  _V10_Dpair_D748.rest = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D747.first = _V0sprintf;
  _V10_Dpair_D747.rest = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D746.first = _V0fold;
  _V10_Dpair_D746.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D745.first = _V0memv;
  _V10_Dpair_D745.rest = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D744.first = _V0list;
  _V10_Dpair_D744.rest = VEncodePointer(&_V10_Dpair_D743, VPOINTER_PAIR);
  _V10_Dpair_D743.first = _V0cadr;
  _V10_Dpair_D743.rest = VEncodePointer(&_V10_Dpair_D742, VPOINTER_PAIR);
  _V10_Dpair_D742.first = _V0error;
  _V10_Dpair_D742.rest = VEncodePointer(&_V10_Dpair_D741, VPOINTER_PAIR);
  _V10_Dpair_D741.first = _V0filter;
  _V10_Dpair_D741.rest = VEncodePointer(&_V10_Dpair_D740, VPOINTER_PAIR);
  _V10_Dpair_D740.first = _V0compiler__error;
  _V10_Dpair_D740.rest = VEncodePointer(&_V10_Dpair_D739, VPOINTER_PAIR);
  _V10_Dpair_D739.first = _V0assv;
  _V10_Dpair_D739.rest = VEncodePointer(&_V10_Dpair_D738, VPOINTER_PAIR);
  _V10_Dpair_D738.first = _V0string__append;
  _V10_Dpair_D738.rest = VEncodePointer(&_V10_Dpair_D737, VPOINTER_PAIR);
  _V10_Dpair_D737.first = _V0cddr;
  _V10_Dpair_D737.rest = VEncodePointer(&_V10_Dpair_D736, VPOINTER_PAIR);
  _V10_Dpair_D736.first = _V0assoc;
  _V10_Dpair_D736.rest = VEncodePointer(&_V10_Dpair_D735, VPOINTER_PAIR);
  _V10_Dpair_D735.first = _V0resolve__file__path;
  _V10_Dpair_D735.rest = VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR);
  _V10_Dpair_D734.first = _V0close__port;
  _V10_Dpair_D734.rest = VEncodePointer(&_V10_Dpair_D733, VPOINTER_PAIR);
  _V10_Dpair_D733.first = _V0read__all;
  _V10_Dpair_D733.rest = VEncodePointer(&_V10_Dpair_D732, VPOINTER_PAIR);
  _V10_Dpair_D732.first = _V0search__open__input__file;
  _V10_Dpair_D732.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D727.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D727.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D726.first = VEncodePointer(&_V10_Dpair_D725, VPOINTER_PAIR);
  _V10_Dpair_D726.rest = VNULL;
  _V10_Dpair_D725.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D725.rest = VEncodePointer(&_V10_Dpair_D722, VPOINTER_PAIR);
  _V10_Dpair_D724.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D724.rest = VEncodePointer(&_V10_Dpair_D723, VPOINTER_PAIR);
  _V10_Dpair_D723.first = VEncodePointer(&_V10_Dpair_D722, VPOINTER_PAIR);
  _V10_Dpair_D723.rest = VNULL;
  _V10_Dpair_D722.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D722.rest = VEncodePointer(&_V10_Dpair_D719, VPOINTER_PAIR);
  _V10_Dpair_D721.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D721.rest = VEncodePointer(&_V10_Dpair_D720, VPOINTER_PAIR);
  _V10_Dpair_D720.first = VEncodePointer(&_V10_Dpair_D719, VPOINTER_PAIR);
  _V10_Dpair_D720.rest = VNULL;
  _V10_Dpair_D719.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D719.rest = VEncodePointer(&_V10_Dpair_D716, VPOINTER_PAIR);
  _V10_Dpair_D718.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D718.rest = VEncodePointer(&_V10_Dpair_D717, VPOINTER_PAIR);
  _V10_Dpair_D717.first = VEncodePointer(&_V10_Dpair_D716, VPOINTER_PAIR);
  _V10_Dpair_D717.rest = VNULL;
  _V10_Dpair_D716.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D716.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D715.first = VEncodeBool(false);
  _V10_Dpair_D715.rest = VEncodePointer(&_V10_Dpair_D714, VPOINTER_PAIR);
  _V10_Dpair_D714.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D714.rest = VNULL;
  _V10_Dpair_D713.first = _V0_Mx;
  _V10_Dpair_D713.rest = VNULL;
  _V10_Dpair_D712.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D712.rest = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D711.first = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D711.rest = VNULL;
  _V10_Dpair_D710.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D710.rest = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D709.first = VNULL;
  _V10_Dpair_D709.rest = VNULL;
  _V10_Dpair_D708.first = VEncodeBool(false);
  _V10_Dpair_D708.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D707.first = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D707.rest = VNULL;
  _V10_Dpair_D706.first = _V0_Mk;
  _V10_Dpair_D706.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0k4, VEncodePointer(&_V10_Dpair_D727, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0k3, VEncodePointer(&_V10_Dpair_D724, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0k2, VEncodePointer(&_V10_Dpair_D721, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0k1, VEncodePointer(&_V10_Dpair_D718, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D712, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7, VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9, VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8, VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5, VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6, VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5, VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13, VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15, VEncodePointer(&_V10_Dpair_D845, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14, VEncodePointer(&_V10_Dpair_D841, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6, VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12, VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11, VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7, VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4, VEncodePointer(&_V10_Dpair_D792, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17, VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18, VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19, VEncodePointer(&_V10_Dpair_D879, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21, VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20, VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0andf, VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22, VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130, VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, VEncodePointer(&_V10_Dpair_D945, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25, VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24, VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23, VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136, VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27, VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28, VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137, VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31, VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9, VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30, VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29, VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33, VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k34, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda10, VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k32, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8, VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138, VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37, VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40, VEncodePointer(&_V10_Dpair_D1096, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42, VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15, VEncodePointer(&_V10_Dpair_D1105, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41, VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16, VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14, VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39, VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k43, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13, VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38, VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12, VEncodePointer(&_V10_Dpair_D1068, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36, VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35, VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47, VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50, VEncodePointer(&_V10_Dpair_D1145, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52, VEncodePointer(&_V10_Dpair_D1152, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53, VEncodePointer(&_V10_Dpair_D1157, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20, VEncodePointer(&_V10_Dpair_D1153, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51, VEncodePointer(&_V10_Dpair_D1149, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54, VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21, VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19, VEncodePointer(&_V10_Dpair_D1146, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49, VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k55, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18, VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48, VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17, VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46, VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45, VEncodePointer(&_V10_Dpair_D1110, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59, VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62, VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65, VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25, VEncodePointer(&_V10_Dpair_D1222, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64, VEncodePointer(&_V10_Dpair_D1214, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26, VEncodePointer(&_V10_Dpair_D1227, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63, VEncodePointer(&_V10_Dpair_D1211, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24, VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61, VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k66, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23, VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60, VEncodePointer(&_V10_Dpair_D1183, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22, VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58, VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57, VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70, VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73, VEncodePointer(&_V10_Dpair_D1265, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75, VEncodePointer(&_V10_Dpair_D1272, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30, VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74, VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31, VEncodePointer(&_V10_Dpair_D1282, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29, VEncodePointer(&_V10_Dpair_D1266, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72, VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k76, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28, VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71, VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27, VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69, VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68, VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82, VEncodePointer(&_V10_Dpair_D1299, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83, VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda33, VEncodePointer(&_V10_Dpair_D1300, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81, VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80, VEncodePointer(&_V10_Dpair_D1293, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79, VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78, VEncodePointer(&_V10_Dpair_D1287, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32, VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k77, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k67, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k56, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k44, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11, VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85, VEncodePointer(&_V10_Dpair_D1320, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84, VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants, VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87, VEncodePointer(&_V10_Dpair_D1330, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86, VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports, VEncodePointer(&_V10_Dpair_D1326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88, VEncodePointer(&_V10_Dpair_D1341, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, VEncodePointer(&_V10_Dpair_D1336, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k91, VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35, VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k90, VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k89, VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k95, VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36, VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k94, VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k93, VEncodePointer(&_V10_Dpair_D1371, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k99, VEncodePointer(&_V10_Dpair_D1398, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37, VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k98, VEncodePointer(&_V10_Dpair_D1389, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k97, VEncodePointer(&_V10_Dpair_D1385, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k103, VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38, VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k102, VEncodePointer(&_V10_Dpair_D1406, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k101, VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda39, VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k104, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k100, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k96, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k92, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34, VEncodePointer(&_V10_Dpair_D1353, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108, VEncodePointer(&_V10_Dpair_D1426, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107, VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109, VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106, VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105, VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111, VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110, VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q, VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114, VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116, VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118, VEncodePointer(&_V10_Dpair_D1465, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k121, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k120, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119, VEncodePointer(&_V10_Dpair_D1467, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117, VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115, VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113, VEncodePointer(&_V10_Dpair_D1449, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112, VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface, VEncodePointer(&_V10_Dpair_D1442, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0k122, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D710, VPOINTER_PAIR));
}
