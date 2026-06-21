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

V_DECLARE_FUNC(VAppend, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0intrinsics;

static VPair _V10_Dpair_D1344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1340 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBitCount" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1339 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VArithmeticShift" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1338 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1337 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseOrC1" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1336 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1335 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VBitwiseAndC1" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1334 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1333 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseNand" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1332 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VBitwiseXnor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1331 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseAnd" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1330 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseXor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1329 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseIor" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1328 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VBitwiseNot" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1327 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VJiffiesPerSecond" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1326 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCurrentJiffy" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1325 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAccess" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1324 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1323 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRealpath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1322 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAwait" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1321 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAsync" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1320 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VFiberForkList" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1319 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRandomAdvance" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1318 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VRandomSampleFloat" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1317 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VRandomSampleBounded" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1316 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VRandomSample" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1315 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRandomCopy" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1314 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeRandom" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1313 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VRegisterSigint" };
VWEAK VWORD _V10vcore_Dregister__sigint;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dregister__sigint = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.register-sigint" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1312 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1311 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1310 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1309 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1308 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VYieldToHostMajor" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1307 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VYieldToHost" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1306 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VGarbageCollect" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1305 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VFinalize" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1304 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHasFinalizer" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1303 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VSetFinalizer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1302 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VNewlineStdout" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1301 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VWriteStdout" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1300 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VDisplayStdout" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1299 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1298 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1297 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1296 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1295 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine3" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1294 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1293 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1292 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1291 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1290 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1289 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VTtyPortP" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1288 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1287 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1286 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1285 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStderrPort" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1284 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStdoutPort" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1283 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStdinPort" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1282 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VIntChar" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1281 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1280 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VGensym" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1279 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1278 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1277 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1276 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1275 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1274 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1273 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1272 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1271 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1270 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableDelete" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1269 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1268 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableRef" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1267 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableVector" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1266 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VHashTableHashFunc" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1265 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VHashTableEqvFunc" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1264 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeHashTable" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1263 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRecordLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1262 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1261 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRecordRef2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1260 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VCreateRecord2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1259 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VReadU8Vector" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1258 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VS8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1257 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1256 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VS8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1255 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListS8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1254 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeS8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1253 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS8VectorP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1252 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VS8Vector" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1251 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VU8VectorLength" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1250 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorSet" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1249 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VU8VectorRef" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1248 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VListU8Vector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1247 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMakeU8Vector" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1246 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VU8VectorP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1245 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VU8Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1244 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1243 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1242 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1241 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1240 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1239 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS16VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1238 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS16Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1237 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VU16VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1236 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1235 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VU16VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1234 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListU16Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1233 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeU16Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VU16VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1231 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VU16Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1230 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VS32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1229 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1228 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VS32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1227 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListS32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1226 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeS32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1225 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VS32VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1224 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VS32Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF32VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF32VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF32Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF32Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1218 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF32VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1217 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VF32Vector" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1216 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VF64VectorLength" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1215 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorSet" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1214 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VF64VectorRef" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1213 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VListF64Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1212 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeF64Vector" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1211 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VF64VectorP" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1210 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VF64Vector" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1209 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1208 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1207 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1206 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1205 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeVector" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1204 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCreateVector" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1203 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAppend" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1202 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1201 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1200 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1199 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1198 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCons2" };
static VPair _V10_Dpair_D1197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1194 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VUnloadLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1193 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1192 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1191 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1190 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1189 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSetDeclare" };
VWEAK VWORD _V10vcore_Dset__declare_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dset__declare_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.set-declare!" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1188 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction3" };
VWEAK VWORD _V10vcore_Dfunction3;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dfunction3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.function3" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1187 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1186 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSetGlobalVar2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1185 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1184 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1183 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1182 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VApplyCps" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1181 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1180 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1179 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1178 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1177 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRaise" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1176 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VPopExceptionHandler" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1175 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VPushExceptionHandler" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1174 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VGetExceptionHandler" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1173 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VPopDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1172 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VPushDynamic" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1171 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VGetDynamics" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1170 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1169 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1168 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1167 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1166 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VForeignPointerP2" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1165 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VNullptrP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1164 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VVoidP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1163 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1162 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1161 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1160 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1159 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1158 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1157 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1156 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VHashTableP" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1155 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1154 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VRecordP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1153 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1152 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1151 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1150 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1149 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpGt" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1148 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpGe" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1147 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpEq" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1146 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpLt" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1145 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCmpLe" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1144 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1143 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1142 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1141 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1140 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VAdd2" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1139 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExact" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1138 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VInexact" };
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
VWEAK VWORD _V40_V10vcore_Dbit__count;
VWEAK VClosure _VW_V40_V10vcore_Dbit__count = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitCount, NULL };
VWEAK VWORD _V10vcore_Dbit__count;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dbit__count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.bit-count" };
VWEAK VWORD _V40_V10vcore_Darithmetic__shift;
VWEAK VClosure _VW_V40_V10vcore_Darithmetic__shift = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VArithmeticShift, NULL };
VWEAK VWORD _V10vcore_Darithmetic__shift;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Darithmetic__shift = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.arithmetic-shift" };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc2;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC2, NULL };
VWEAK VWORD _V10vcore_Dbitwise__orc2;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__orc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-orc2" };
VWEAK VWORD _V40_V10vcore_Dbitwise__orc1;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__orc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseOrC1, NULL };
VWEAK VWORD _V10vcore_Dbitwise__orc1;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__orc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-orc1" };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc2;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC2, NULL };
VWEAK VWORD _V10vcore_Dbitwise__andc2;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dbitwise__andc2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.bitwise-andc2" };
VWEAK VWORD _V40_V10vcore_Dbitwise__andc1;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__andc1 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAndC1, NULL };
VWEAK VWORD _V10vcore_Dbitwise__andc1;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dbitwise__andc1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.bitwise-andc1" };
VWEAK VWORD _V40_V10vcore_Dbitwise__nor;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__nor;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__nor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-nor" };
VWEAK VWORD _V40_V10vcore_Dbitwise__nand;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__nand = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNand, NULL };
VWEAK VWORD _V10vcore_Dbitwise__nand;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__nand = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-nand" };
VWEAK VWORD _V40_V10vcore_Dbitwise__xnor;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__xnor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseXnor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__xnor;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dbitwise__xnor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.bitwise-xnor" };
VWEAK VWORD _V40_V10vcore_Dbitwise__and;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__and = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseAnd, NULL };
VWEAK VWORD _V10vcore_Dbitwise__and;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-and" };
VWEAK VWORD _V40_V10vcore_Dbitwise__xor;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__xor = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseXor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__xor;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-xor" };
VWEAK VWORD _V40_V10vcore_Dbitwise__ior;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__ior = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseIor, NULL };
VWEAK VWORD _V10vcore_Dbitwise__ior;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__ior = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-ior" };
VWEAK VWORD _V40_V10vcore_Dbitwise__not;
VWEAK VClosure _VW_V40_V10vcore_Dbitwise__not = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBitwiseNot, NULL };
VWEAK VWORD _V10vcore_Dbitwise__not;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dbitwise__not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.bitwise-not" };
VWEAK VWORD _V40_V10vcore_Djiffies__per__second;
VWEAK VClosure _VW_V40_V10vcore_Djiffies__per__second = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VJiffiesPerSecond, NULL };
VWEAK VWORD _V10vcore_Djiffies__per__second;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Djiffies__per__second = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.jiffies-per-second" };
VWEAK VWORD _V40_V10vcore_Dcurrent__jiffy;
VWEAK VClosure _VW_V40_V10vcore_Dcurrent__jiffy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCurrentJiffy, NULL };
VWEAK VWORD _V10vcore_Dcurrent__jiffy;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dcurrent__jiffy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.current-jiffy" };
VWEAK VWORD _V40_V10vcore_Daccess;
VWEAK VClosure _VW_V40_V10vcore_Daccess = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAccess, NULL };
VWEAK VWORD _V10vcore_Daccess;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Daccess = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.access" };
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;
VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V10vcore_Dmake__temporary__file;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dmake__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.make-temporary-file" };
VWEAK VWORD _V40_V10vcore_Drealpath;
VWEAK VClosure _VW_V40_V10vcore_Drealpath = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRealpath, NULL };
VWEAK VWORD _V10vcore_Drealpath;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Drealpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.realpath" };
VWEAK VWORD _V40_V10vcore_Dawait;
VWEAK VClosure _VW_V40_V10vcore_Dawait = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAwait, NULL };
VWEAK VWORD _V10vcore_Dawait;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dawait = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.await" };
VWEAK VWORD _V40_V10vcore_Dasync;
VWEAK VClosure _VW_V40_V10vcore_Dasync = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAsync, NULL };
VWEAK VWORD _V10vcore_Dasync;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dasync = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.async" };
VWEAK VWORD _V40_V10vcore_Dfiber__fork__list;
VWEAK VClosure _VW_V40_V10vcore_Dfiber__fork__list = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFiberForkList, NULL };
VWEAK VWORD _V10vcore_Dfiber__fork__list;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dfiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.fiber-fork-list" };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomAdvance, NULL };
VWEAK VWORD _V10vcore_Drandom__advance_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Drandom__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.random-advance!" };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V10vcore_Drandom__sample__float_B;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V10vcore_Drandom__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 29 }, "##vcore.random-sample-float!" };
VWEAK VWORD _V40_V10vcore_Drandom__sample__bounded_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__bounded_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleBounded, NULL };
VWEAK VWORD _V10vcore_Drandom__sample__bounded_B;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Drandom__sample__bounded_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.random-sample-bounded!" };
VWEAK VWORD _V40_V10vcore_Drandom__sample_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSample, NULL };
VWEAK VWORD _V10vcore_Drandom__sample_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Drandom__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.random-sample!" };
VWEAK VWORD _V40_V10vcore_Drandom__copy;
VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomCopy, NULL };
VWEAK VWORD _V10vcore_Drandom__copy;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drandom__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.random-copy" };
VWEAK VWORD _V40_V10vcore_Dmake__random;
VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeRandom, NULL };
VWEAK VWORD _V10vcore_Dmake__random;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-random" };
VWEAK VWORD _V40_V10vcore_Dcommand__line;
VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V10vcore_Dcommand__line;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dcommand__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.command-line" };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;
VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V10vcore_Dopen__output__process;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dopen__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.open-output-process" };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;
VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V10vcore_Dopen__input__process;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-input-process" };
VWEAK VWORD _V40_V10vcore_Dsystem;
VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V10vcore_Dsystem;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsystem = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.system" };
VWEAK VWORD _V40_V10vcore_Dyield__to__host__major;
VWEAK VClosure _VW_V40_V10vcore_Dyield__to__host__major = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VYieldToHostMajor, NULL };
VWEAK VWORD _V10vcore_Dyield__to__host__major;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V10vcore_Dyield__to__host__major = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "##vcore.yield-to-host-major" };
VWEAK VWORD _V40_V10vcore_Dyield__to__host;
VWEAK VClosure _VW_V40_V10vcore_Dyield__to__host = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VYieldToHost, NULL };
VWEAK VWORD _V10vcore_Dyield__to__host;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dyield__to__host = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.yield-to-host" };
VWEAK VWORD _V40_V10vcore_Dgarbage__collect;
VWEAK VClosure _VW_V40_V10vcore_Dgarbage__collect = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGarbageCollect, NULL };
VWEAK VWORD _V10vcore_Dgarbage__collect;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dgarbage__collect = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.garbage-collect" };
VWEAK VWORD _V40_V10vcore_Dfinalize_B;
VWEAK VClosure _VW_V40_V10vcore_Dfinalize_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFinalize, NULL };
VWEAK VWORD _V10vcore_Dfinalize_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dfinalize_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.finalize!" };
VWEAK VWORD _V40_V10vcore_Dhas__finalizer_Q;
VWEAK VClosure _VW_V40_V10vcore_Dhas__finalizer_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHasFinalizer, NULL };
VWEAK VWORD _V10vcore_Dhas__finalizer_Q;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhas__finalizer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.has-finalizer\?" };
VWEAK VWORD _V40_V10vcore_Dset__finalizer_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__finalizer_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetFinalizer, NULL };
VWEAK VWORD _V10vcore_Dset__finalizer_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dset__finalizer_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.set-finalizer!" };
VWEAK VWORD _V40_V10vcore_Dnewline__stdout;
VWEAK VClosure _VW_V40_V10vcore_Dnewline__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNewlineStdout, NULL };
VWEAK VWORD _V10vcore_Dnewline__stdout;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dnewline__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.newline-stdout" };
VWEAK VWORD _V40_V10vcore_Dwrite__stdout;
VWEAK VClosure _VW_V40_V10vcore_Dwrite__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWriteStdout, NULL };
VWEAK VWORD _V10vcore_Dwrite__stdout;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dwrite__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.write-stdout" };
VWEAK VWORD _V40_V10vcore_Ddisplay__stdout;
VWEAK VClosure _VW_V40_V10vcore_Ddisplay__stdout = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDisplayStdout, NULL };
VWEAK VWORD _V10vcore_Ddisplay__stdout;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ddisplay__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.display-stdout" };
VWEAK VWORD _V40_V10vcore_Dnewline;
VWEAK VClosure _VW_V40_V10vcore_Dnewline = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNewline2, NULL };
VWEAK VWORD _V10vcore_Dnewline;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dnewline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.newline" };
VWEAK VWORD _V40_V10vcore_Dwrite;
VWEAK VClosure _VW_V40_V10vcore_Dwrite = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWrite2, NULL };
VWEAK VWORD _V10vcore_Dwrite;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dwrite = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.write" };
VWEAK VWORD _V40_V10vcore_Ddisplay__word;
VWEAK VClosure _VW_V40_V10vcore_Ddisplay__word = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDisplay2, NULL };
VWEAK VWORD _V10vcore_Ddisplay__word;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Ddisplay__word = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.display-word" };
VWEAK VWORD _V40_V10vcore_Dread;
VWEAK VClosure _VW_V40_V10vcore_Dread = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRead2, NULL };
VWEAK VWORD _V10vcore_Dread;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dread = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.read" };
VWEAK VWORD _V40_V10vcore_Dread__line2;
VWEAK VClosure _VW_V40_V10vcore_Dread__line2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadLine3, NULL };
VWEAK VWORD _V10vcore_Dread__line2;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dread__line2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.read-line2" };
VWEAK VWORD _V40_V10vcore_Dread__line;
VWEAK VClosure _VW_V40_V10vcore_Dread__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadLine2, NULL };
VWEAK VWORD _V10vcore_Dread__line;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dread__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.read-line" };
VWEAK VWORD _V40_V10vcore_Dread__char;
VWEAK VClosure _VW_V40_V10vcore_Dread__char = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadChar2, NULL };
VWEAK VWORD _V10vcore_Dread__char;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dread__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.read-char" };
VWEAK VWORD _V40_V10vcore_Deof__object_Q;
VWEAK VClosure _VW_V40_V10vcore_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V10vcore_Deof__object_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Deof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.eof-object\?" };
VWEAK VWORD _V40_V10vcore_Dget__output__string;
VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
VWEAK VWORD _V10vcore_Dget__output__string;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dget__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.get-output-string" };
VWEAK VWORD _V40_V10vcore_Dopen__output__string;
VWEAK VClosure _VW_V40_V10vcore_Dopen__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputString2, NULL };
VWEAK VWORD _V10vcore_Dopen__output__string;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-output-string" };
VWEAK VWORD _V40_V10vcore_Dtty__port_Q;
VWEAK VClosure _VW_V40_V10vcore_Dtty__port_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VTtyPortP, NULL };
VWEAK VWORD _V10vcore_Dtty__port_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dtty__port_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.tty-port\?" };
VWEAK VWORD _V40_V10vcore_Dclose__stream;
VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
VWEAK VWORD _V10vcore_Dclose__stream;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dclose__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.close-stream" };
VWEAK VWORD _V40_V10vcore_Dopen__output__stream;
VWEAK VClosure _VW_V40_V10vcore_Dopen__output__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputStream2, NULL };
VWEAK VWORD _V10vcore_Dopen__output__stream;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dopen__output__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.open-output-stream" };
VWEAK VWORD _V40_V10vcore_Dopen__input__stream;
VWEAK VClosure _VW_V40_V10vcore_Dopen__input__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputStream2, NULL };
VWEAK VWORD _V10vcore_Dopen__input__stream;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dopen__input__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.open-input-stream" };
VWEAK VWORD _V40_V10vcore_Dstderr___Gport;
VWEAK VClosure _VW_V40_V10vcore_Dstderr___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStderrPort, NULL };
VWEAK VWORD _V10vcore_Dstderr___Gport;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstderr___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.stderr->port" };
VWEAK VWORD _V40_V10vcore_Dstdout___Gport;
VWEAK VClosure _VW_V40_V10vcore_Dstdout___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStdoutPort, NULL };
VWEAK VWORD _V10vcore_Dstdout___Gport;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstdout___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.stdout->port" };
VWEAK VWORD _V40_V10vcore_Dstdin___Gport;
VWEAK VClosure _VW_V40_V10vcore_Dstdin___Gport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStdinPort, NULL };
VWEAK VWORD _V10vcore_Dstdin___Gport;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dstdin___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.stdin->port" };
VWEAK VWORD _V40_V10vcore_Dinteger___Gchar;
VWEAK VClosure _VW_V40_V10vcore_Dinteger___Gchar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntChar, NULL };
VWEAK VWORD _V10vcore_Dinteger___Gchar;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dinteger___Gchar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.integer->char" };
VWEAK VWORD _V40_V10vcore_Dchar__integer;
VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V10vcore_Dchar__integer;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dchar__integer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.char-integer" };
VWEAK VWORD _V40_V10vcore_Dgensym;
VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
VWEAK VWORD _V10vcore_Dgensym;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dgensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.gensym" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
VWEAK VWORD _V10vcore_Dsymbol___Gstring;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dsymbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.symbol->string" };
VWEAK VWORD _V40_V10vcore_Dstring___Gnumber;
VWEAK VClosure _VW_V40_V10vcore_Dstring___Gnumber = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringNumber2, NULL };
VWEAK VWORD _V10vcore_Dstring___Gnumber;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dstring___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.string->number" };
VWEAK VWORD _V40_V10vcore_Dstring___Gsymbol;
VWEAK VClosure _VW_V40_V10vcore_Dstring___Gsymbol = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSymbol2, NULL };
VWEAK VWORD _V10vcore_Dstring___Gsymbol;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dstring___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.string->symbol" };
VWEAK VWORD _V40_V10vcore_Dstring__length;
VWEAK VClosure _VW_V40_V10vcore_Dstring__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringLength2, NULL };
VWEAK VWORD _V10vcore_Dstring__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dstring__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.string-length" };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V10vcore_Dstring__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dstring__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.string-set!" };
VWEAK VWORD _V40_V10vcore_Dstring__ref;
VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V10vcore_Dstring__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dstring__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.string-ref" };
VWEAK VWORD _V40_V10vcore_Dstring__copy_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__copy_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringCopy2, NULL };
VWEAK VWORD _V10vcore_Dstring__copy_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dstring__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.string-copy!" };
VWEAK VWORD _V40_V10vcore_Dsubstring;
VWEAK VClosure _VW_V40_V10vcore_Dsubstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSubstring2, NULL };
VWEAK VWORD _V10vcore_Dsubstring;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dsubstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.substring" };
VWEAK VWORD _V40_V10vcore_Dmake__string;
VWEAK VClosure _VW_V40_V10vcore_Dmake__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeString2, NULL };
VWEAK VWORD _V10vcore_Dmake__string;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-string" };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
VWEAK VWORD _V10vcore_Dhash__table__delete_B;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dhash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.hash-table-delete!" };
VWEAK VWORD _V40_V10vcore_Dhash__table__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSet, NULL };
VWEAK VWORD _V10vcore_Dhash__table__set_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dhash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.hash-table-set!" };
VWEAK VWORD _V40_V10vcore_Dhash__table__ref;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableRef, NULL };
VWEAK VWORD _V10vcore_Dhash__table__ref;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.hash-table-ref" };
VWEAK VWORD _V40_V10vcore_Dhash__table__vector;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableVector, NULL };
VWEAK VWORD _V10vcore_Dhash__table__vector;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10vcore_Dhash__table__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##vcore.hash-table-vector" };
VWEAK VWORD _V40_V10vcore_Dhash__table__hash__function;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__hash__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableHashFunc, NULL };
VWEAK VWORD _V10vcore_Dhash__table__hash__function;VWEAK struct { VBlob sym; char bytes[33]; } _VW_V10vcore_Dhash__table__hash__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 33 }, "##vcore.hash-table-hash-function" };
VWEAK VWORD _V40_V10vcore_Dhash__table__equivalence__function;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table__equivalence__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableEqvFunc, NULL };
VWEAK VWORD _V10vcore_Dhash__table__equivalence__function;VWEAK struct { VBlob sym; char bytes[40]; } _VW_V10vcore_Dhash__table__equivalence__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 40 }, "##vcore.hash-table-equivalence-function" };
VWEAK VWORD _V40_V10vcore_Dmake__hash__table;
VWEAK VClosure _VW_V40_V10vcore_Dmake__hash__table = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeHashTable, NULL };
VWEAK VWORD _V10vcore_Dmake__hash__table;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dmake__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.make-hash-table" };
VWEAK VWORD _V40_V10vcore_Dread__u8vector;
VWEAK VClosure _VW_V40_V10vcore_Dread__u8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VReadU8Vector, NULL };
VWEAK VWORD _V10vcore_Dread__u8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dread__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.read-u8vector" };
VWEAK VWORD _V40_V10vcore_Ds8vector__length;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorLength, NULL };
VWEAK VWORD _V10vcore_Ds8vector__length;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Ds8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.s8vector-length" };
VWEAK VWORD _V40_V10vcore_Ds8vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorSet, NULL };
VWEAK VWORD _V10vcore_Ds8vector__set_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s8vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds8vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorRef, NULL };
VWEAK VWORD _V10vcore_Ds8vector__ref;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Ds8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.s8vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs8vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS8Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gs8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gs8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->s8vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s8vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__s8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS8Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__s8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dmake__s8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.make-s8vector" };
VWEAK VWORD _V40_V10vcore_Ds8vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8VectorP, NULL };
VWEAK VWORD _V10vcore_Ds8vector_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ds8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.s8vector\?" };
VWEAK VWORD _V40_V10vcore_Ds8vector;
VWEAK VClosure _VW_V40_V10vcore_Ds8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS8Vector, NULL };
VWEAK VWORD _V10vcore_Ds8vector;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Ds8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.s8vector" };
VWEAK VWORD _V40_V10vcore_Du8vector__length;
VWEAK VClosure _VW_V40_V10vcore_Du8vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorLength, NULL };
VWEAK VWORD _V10vcore_Du8vector__length;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Du8vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.u8vector-length" };
VWEAK VWORD _V40_V10vcore_Du8vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Du8vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorSet, NULL };
VWEAK VWORD _V10vcore_Du8vector__set_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Du8vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.u8vector-set!" };
VWEAK VWORD _V40_V10vcore_Du8vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Du8vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorRef, NULL };
VWEAK VWORD _V10vcore_Du8vector__ref;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Du8vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.u8vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gu8vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU8Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gu8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->u8vector" };
VWEAK VWORD _V40_V10vcore_Dmake__u8vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__u8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU8Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__u8vector;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dmake__u8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.make-u8vector" };
VWEAK VWORD _V40_V10vcore_Du8vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Du8vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8VectorP, NULL };
VWEAK VWORD _V10vcore_Du8vector_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Du8vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.u8vector\?" };
VWEAK VWORD _V40_V10vcore_Du8vector;
VWEAK VClosure _VW_V40_V10vcore_Du8vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU8Vector, NULL };
VWEAK VWORD _V10vcore_Du8vector;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Du8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.u8vector" };
VWEAK VWORD _V40_V10vcore_Ds16vector__length;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorLength, NULL };
VWEAK VWORD _V10vcore_Ds16vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ds16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.s16vector-length" };
VWEAK VWORD _V40_V10vcore_Ds16vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorSet, NULL };
VWEAK VWORD _V10vcore_Ds16vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ds16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.s16vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds16vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorRef, NULL };
VWEAK VWORD _V10vcore_Ds16vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s16vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs16vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS16Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gs16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s16vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s16vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__s16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS16Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__s16vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__s16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-s16vector" };
VWEAK VWORD _V40_V10vcore_Ds16vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16VectorP, NULL };
VWEAK VWORD _V10vcore_Ds16vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ds16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.s16vector\?" };
VWEAK VWORD _V40_V10vcore_Ds16vector;
VWEAK VClosure _VW_V40_V10vcore_Ds16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS16Vector, NULL };
VWEAK VWORD _V10vcore_Ds16vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ds16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.s16vector" };
VWEAK VWORD _V40_V10vcore_Du16vector__length;
VWEAK VClosure _VW_V40_V10vcore_Du16vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorLength, NULL };
VWEAK VWORD _V10vcore_Du16vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Du16vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.u16vector-length" };
VWEAK VWORD _V40_V10vcore_Du16vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Du16vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorSet, NULL };
VWEAK VWORD _V10vcore_Du16vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Du16vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.u16vector-set!" };
VWEAK VWORD _V40_V10vcore_Du16vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Du16vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorRef, NULL };
VWEAK VWORD _V10vcore_Du16vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Du16vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.u16vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gu16vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gu16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListU16Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gu16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gu16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->u16vector" };
VWEAK VWORD _V40_V10vcore_Dmake__u16vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__u16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeU16Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__u16vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__u16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-u16vector" };
VWEAK VWORD _V40_V10vcore_Du16vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Du16vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16VectorP, NULL };
VWEAK VWORD _V10vcore_Du16vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Du16vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.u16vector\?" };
VWEAK VWORD _V40_V10vcore_Du16vector;
VWEAK VClosure _VW_V40_V10vcore_Du16vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VU16Vector, NULL };
VWEAK VWORD _V10vcore_Du16vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Du16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.u16vector" };
VWEAK VWORD _V40_V10vcore_Ds32vector__length;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorLength, NULL };
VWEAK VWORD _V10vcore_Ds32vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ds32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.s32vector-length" };
VWEAK VWORD _V40_V10vcore_Ds32vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorSet, NULL };
VWEAK VWORD _V10vcore_Ds32vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Ds32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.s32vector-set!" };
VWEAK VWORD _V40_V10vcore_Ds32vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorRef, NULL };
VWEAK VWORD _V10vcore_Ds32vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ds32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.s32vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gs32vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gs32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListS32Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gs32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s32vector" };
VWEAK VWORD _V40_V10vcore_Dmake__s32vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__s32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeS32Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__s32vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__s32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-s32vector" };
VWEAK VWORD _V40_V10vcore_Ds32vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32VectorP, NULL };
VWEAK VWORD _V10vcore_Ds32vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Ds32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.s32vector\?" };
VWEAK VWORD _V40_V10vcore_Ds32vector;
VWEAK VClosure _VW_V40_V10vcore_Ds32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VS32Vector, NULL };
VWEAK VWORD _V10vcore_Ds32vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Ds32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.s32vector" };
VWEAK VWORD _V40_V10vcore_Df32vector__length;
VWEAK VClosure _VW_V40_V10vcore_Df32vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorLength, NULL };
VWEAK VWORD _V10vcore_Df32vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Df32vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.f32vector-length" };
VWEAK VWORD _V40_V10vcore_Df32vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Df32vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorSet, NULL };
VWEAK VWORD _V10vcore_Df32vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Df32vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.f32vector-set!" };
VWEAK VWORD _V40_V10vcore_Df32vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Df32vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorRef, NULL };
VWEAK VWORD _V10vcore_Df32vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Df32vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.f32vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gf32vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF32Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gf32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f32vector" };
VWEAK VWORD _V40_V10vcore_Dmake__f32vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__f32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF32Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__f32vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__f32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-f32vector" };
VWEAK VWORD _V40_V10vcore_Df32vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Df32vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32VectorP, NULL };
VWEAK VWORD _V10vcore_Df32vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Df32vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.f32vector\?" };
VWEAK VWORD _V40_V10vcore_Df32vector;
VWEAK VClosure _VW_V40_V10vcore_Df32vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF32Vector, NULL };
VWEAK VWORD _V10vcore_Df32vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Df32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.f32vector" };
VWEAK VWORD _V40_V10vcore_Df64vector__length;
VWEAK VClosure _VW_V40_V10vcore_Df64vector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorLength, NULL };
VWEAK VWORD _V10vcore_Df64vector__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Df64vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.f64vector-length" };
VWEAK VWORD _V40_V10vcore_Df64vector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Df64vector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorSet, NULL };
VWEAK VWORD _V10vcore_Df64vector__set_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Df64vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.f64vector-set!" };
VWEAK VWORD _V40_V10vcore_Df64vector__ref;
VWEAK VClosure _VW_V40_V10vcore_Df64vector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorRef, NULL };
VWEAK VWORD _V10vcore_Df64vector__ref;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Df64vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.f64vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gf64vector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gf64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListF64Vector, NULL };
VWEAK VWORD _V10vcore_Dlist___Gf64vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f64vector" };
VWEAK VWORD _V40_V10vcore_Dmake__f64vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__f64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeF64Vector, NULL };
VWEAK VWORD _V10vcore_Dmake__f64vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dmake__f64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.make-f64vector" };
VWEAK VWORD _V40_V10vcore_Df64vector_Q;
VWEAK VClosure _VW_V40_V10vcore_Df64vector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64VectorP, NULL };
VWEAK VWORD _V10vcore_Df64vector_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Df64vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.f64vector\?" };
VWEAK VWORD _V40_V10vcore_Df64vector;
VWEAK VClosure _VW_V40_V10vcore_Df64vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VF64Vector, NULL };
VWEAK VWORD _V10vcore_Df64vector;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Df64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.f64vector" };
VWEAK VWORD _V40_V10vcore_Dvector__length;
VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V10vcore_Dvector__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Dvector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.vector-length" };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V10vcore_Dvector__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dvector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.vector-set!" };
VWEAK VWORD _V40_V10vcore_Dvector__ref;
VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V10vcore_Dvector__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dvector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.vector-ref" };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
VWEAK VWORD _V10vcore_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.list->vector" };
VWEAK VWORD _V40_V10vcore_Dmake__vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeVector, NULL };
VWEAK VWORD _V10vcore_Dmake__vector;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-vector" };
VWEAK VWORD _V40_V10vcore_Dvector;
VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V10vcore_Dvector;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.vector" };
VWEAK VWORD _V40VAppend;
VWEAK VClosure _VW_V40VAppend = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAppend, NULL };
VWEAK VWORD _V10vcore_Dappend;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dappend = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.append" };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V10vcore_Dset__cdr_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-cdr!" };
VWEAK VWORD _V40_V10vcore_Dset__car_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V10vcore_Dset__car_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dset__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.set-car!" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
static VPair _V10_Dpair_D1124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dqcons;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dqcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.qcons" };
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
static VPair _V10_Dpair_D1109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1088 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1087 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V40_V10vcore_Dunload__library;
VWEAK VClosure _VW_V40_V10vcore_Dunload__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VUnloadLibrary2, NULL };
VWEAK VWORD _V10vcore_Dunload__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dunload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.unload-library" };
VWEAK VWORD _V40_V10vcore_Dload__library;
VWEAK VClosure _VW_V40_V10vcore_Dload__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VLoadLibrary2, NULL };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V40_V10vcore_Dmake__import;
VWEAK VClosure _VW_V40_V10vcore_Dmake__import = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeImport2, NULL };
VWEAK VWORD _V10vcore_Dmake__import;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-import" };
VWEAK VWORD _V40_V10vcore_Dlookup__library;
VWEAK VClosure _VW_V40_V10vcore_Dlookup__library = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VLookupLibrary2, NULL };
VWEAK VWORD _V10vcore_Dlookup__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlookup__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.lookup-library" };
VWEAK VWORD _V40_V10vcore_Dmultidefine;
VWEAK VClosure _VW_V40_V10vcore_Dmultidefine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiDefine2, NULL };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V40_V10vcore_Ddefine;
VWEAK VClosure _VW_V40_V10vcore_Ddefine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDefineGlobalVar2, NULL };
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.define" };
VWEAK VWORD _V40_V10vcore_Dfunction;
VWEAK VClosure _VW_V40_V10vcore_Dfunction = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction2, NULL };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.function" };
VWEAK VWORD _V40_V10vcore_Drecord__length;
VWEAK VClosure _VW_V40_V10vcore_Drecord__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordLength2, NULL };
VWEAK VWORD _V10vcore_Drecord__length;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Drecord__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.record-length" };
VWEAK VWORD _V40_V10vcore_Drecord__set_B;
VWEAK VClosure _VW_V40_V10vcore_Drecord__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordSet2, NULL };
VWEAK VWORD _V10vcore_Drecord__set_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drecord__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.record-set!" };
VWEAK VWORD _V40_V10vcore_Drecord__ref;
VWEAK VClosure _VW_V40_V10vcore_Drecord__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordRef2, NULL };
VWEAK VWORD _V10vcore_Drecord__ref;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Drecord__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.record-ref" };
VWEAK VWORD _V40_V10vcore_Drecord;
VWEAK VClosure _VW_V40_V10vcore_Drecord = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateRecord2, NULL };
VWEAK VWORD _V10vcore_Drecord;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Drecord = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.record" };
VWEAK VWORD _V40_V10vcore_Dset__global_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__global_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetGlobalVar2, NULL };
VWEAK VWORD _V10vcore_Dset__global_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dset__global_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.set-global!" };
VWEAK VWORD _V40_V10vcore_Ddefine__global;
VWEAK VClosure _VW_V40_V10vcore_Ddefine__global = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDefineGlobalVar2, NULL };
VWEAK VWORD _V10vcore_Ddefine__global;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10vcore_Ddefine__global = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##vcore.define-global" };
VWEAK VWORD _V40_V10vcore_Dexit;
VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V10vcore_Dexit;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dexit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.exit" };
VWEAK VWORD _V40_V10vcore_Dabort;
VWEAK VClosure _VW_V40_V10vcore_Dabort = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAbort2, NULL };
VWEAK VWORD _V10vcore_Dabort;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dabort = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.abort" };
VWEAK VWORD _V40_V10vcore_Dapply__cps;
VWEAK VClosure _VW_V40_V10vcore_Dapply__cps = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApplyCps, NULL };
VWEAK VWORD _V10vcore_Dapply__cps;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dapply__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.apply-cps" };
VWEAK VWORD _V40_V10vcore_Dapply;
VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V10vcore_Dapply;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dapply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.apply" };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;
VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;
VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
VWEAK VWORD _V10vcore_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.call/cc" };
VWEAK VWORD _V40_V10vcore_Dnext;
VWEAK VClosure _VW_V40_V10vcore_Dnext = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNext2, NULL };
VWEAK VWORD _V10vcore_Dnext;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dnext = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.next" };
VWEAK VWORD _V40_V10vcore_Draise;
VWEAK VClosure _VW_V40_V10vcore_Draise = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRaise, NULL };
VWEAK VWORD _V10vcore_Draise;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Draise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.raise" };
VWEAK VWORD _V40_V10vcore_Dpop__exception__handler;
VWEAK VClosure _VW_V40_V10vcore_Dpop__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPopExceptionHandler, NULL };
VWEAK VWORD _V10vcore_Dpop__exception__handler;VWEAK struct { VBlob sym; char bytes[30]; } _VW_V10vcore_Dpop__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 30 }, "##vcore.pop-exception-handler" };
VWEAK VWORD _V40_V10vcore_Dpush__exception__handler;
VWEAK VClosure _VW_V40_V10vcore_Dpush__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPushExceptionHandler, NULL };
VWEAK VWORD _V10vcore_Dpush__exception__handler;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Dpush__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.push-exception-handler" };
VWEAK VWORD _V40_V10vcore_Dget__exception__handler;
VWEAK VClosure _VW_V40_V10vcore_Dget__exception__handler = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetExceptionHandler, NULL };
VWEAK VWORD _V10vcore_Dget__exception__handler;VWEAK struct { VBlob sym; char bytes[30]; } _VW_V10vcore_Dget__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 30 }, "##vcore.get-exception-handler" };
VWEAK VWORD _V40_V10vcore_Dpop__dynamic;
VWEAK VClosure _VW_V40_V10vcore_Dpop__dynamic = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPopDynamic, NULL };
VWEAK VWORD _V10vcore_Dpop__dynamic;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dpop__dynamic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.pop-dynamic" };
VWEAK VWORD _V40_V10vcore_Dpush__dynamic;
VWEAK VClosure _VW_V40_V10vcore_Dpush__dynamic = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPushDynamic, NULL };
VWEAK VWORD _V10vcore_Dpush__dynamic;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dpush__dynamic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.push-dynamic" };
VWEAK VWORD _V40_V10vcore_Dget__dynamics;
VWEAK VClosure _VW_V40_V10vcore_Dget__dynamics = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetDynamics, NULL };
VWEAK VWORD _V10vcore_Dget__dynamics;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dget__dynamics = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.get-dynamics" };
VWEAK VWORD _V40_V10vcore_Dnot;
VWEAK VClosure _VW_V40_V10vcore_Dnot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNot2, NULL };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V10vcore_Deqv_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Deqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.eqv\?" };
VWEAK VWORD _V40_V10vcore_Dblob_E_Q;
VWEAK VClosure _VW_V40_V10vcore_Dblob_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobEqv2, NULL };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V40_V10vcore_Dsymbol_E_Q;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolEqv2, NULL };
VWEAK VWORD _V10vcore_Dsymbol_E_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dsymbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.symbol=\?" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V40_V10vcore_Dforeign__pointer_Q;
VWEAK VClosure _VW_V40_V10vcore_Dforeign__pointer_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VForeignPointerP2, NULL };
VWEAK VWORD _V10vcore_Dforeign__pointer_Q;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dforeign__pointer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.foreign-pointer\?" };
VWEAK VWORD _V40_V10vcore_Dnullptr_Q;
VWEAK VClosure _VW_V40_V10vcore_Dnullptr_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullptrP2, NULL };
VWEAK VWORD _V10vcore_Dnullptr_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dnullptr_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.nullptr\?" };
VWEAK VWORD _V40_V10vcore_Dvoid_Q;
VWEAK VClosure _VW_V40_V10vcore_Dvoid_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVoidP2, NULL };
VWEAK VWORD _V10vcore_Dvoid_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dvoid_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.void\?" };
VWEAK VWORD _V40_V10vcore_Dchar_Q;
VWEAK VClosure _VW_V40_V10vcore_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V10vcore_Dchar_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dchar_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.char\?" };
VWEAK VWORD _V40_V10vcore_Ddouble_Q;
VWEAK VClosure _VW_V40_V10vcore_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V10vcore_Ddouble_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddouble_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.double\?" };
VWEAK VWORD _V40_V10vcore_Dint_Q;
VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
VWEAK VWORD _V10vcore_Dint_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dint_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.int\?" };
VWEAK VWORD _V40_V10vcore_Dstring_Q;
VWEAK VClosure _VW_V40_V10vcore_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V40_V10vcore_Dsymbol_Q;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V10vcore_Dsymbol_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dsymbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.symbol\?" };
VWEAK VWORD _V40_V10vcore_Dblob_Q;
VWEAK VClosure _VW_V40_V10vcore_Dblob_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VBlobP2, NULL };
VWEAK VWORD _V10vcore_Dblob_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dblob_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.blob\?" };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;
VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V10vcore_Dprocedure_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dprocedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.procedure\?" };
VWEAK VWORD _V40_V10vcore_Drecord_Q;
VWEAK VClosure _VW_V40_V10vcore_Drecord_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordP2, NULL };
VWEAK VWORD _V10vcore_Drecord_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Drecord_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.record\?" };
VWEAK VWORD _V40_V10vcore_Dhash__table_Q;
VWEAK VClosure _VW_V40_V10vcore_Dhash__table_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableP, NULL };
VWEAK VWORD _V10vcore_Dhash__table_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dhash__table_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.hash-table\?" };
VWEAK VWORD _V40_V10vcore_Dvector_Q;
VWEAK VClosure _VW_V40_V10vcore_Dvector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorP2, NULL };
VWEAK VWORD _V10vcore_Dvector_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dvector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.vector\?" };
VWEAK VWORD _V40_V10vcore_Dpair_Q;
VWEAK VClosure _VW_V40_V10vcore_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V40_V10vcore_Dnull_Q;
VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
VWEAK VWORD _V40_V10vcore_Dremainder;
VWEAK VClosure _VW_V40_V10vcore_Dremainder = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRem2, NULL };
VWEAK VWORD _V10vcore_Dremainder;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dremainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.remainder" };
VWEAK VWORD _V40_V10vcore_Dquotient;
VWEAK VClosure _VW_V40_V10vcore_Dquotient = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VQuot2, NULL };
VWEAK VWORD _V10vcore_Dquotient;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dquotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.quotient" };
VWEAK VWORD _V40_V10vcore_D_G;
VWEAK VClosure _VW_V40_V10vcore_D_G = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGt, NULL };
VWEAK VWORD _V10vcore_D_G;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.>" };
VWEAK VWORD _V40_V10vcore_D_G_E;
VWEAK VClosure _VW_V40_V10vcore_D_G_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGe, NULL };
VWEAK VWORD _V10vcore_D_G_E;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10vcore_D_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##vcore.>=" };
VWEAK VWORD _V40_V10vcore_D_E;
VWEAK VClosure _VW_V40_V10vcore_D_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpEq, NULL };
VWEAK VWORD _V10vcore_D_E;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.=" };
VWEAK VWORD _V40_V10vcore_D_L;
VWEAK VClosure _VW_V40_V10vcore_D_L = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLt, NULL };
VWEAK VWORD _V10vcore_D_L;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.<" };
VWEAK VWORD _V40_V10vcore_D_L_E;
VWEAK VClosure _VW_V40_V10vcore_D_L_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLe, NULL };
VWEAK VWORD _V10vcore_D_L_E;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10vcore_D_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##vcore.<=" };
VWEAK VWORD _V40_V10vcore_Dcmp;
VWEAK VClosure _VW_V40_V10vcore_Dcmp = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmp2, NULL };
VWEAK VWORD _V10vcore_Dcmp;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cmp" };
VWEAK VWORD _V40_V10vcore_D_W;
VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V10vcore_D_W;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore./" };
VWEAK VWORD _V40_V10vcore_D_S;
VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V10vcore_D_S;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.*" };
VWEAK VWORD _V40_V10vcore_D__;
VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V10vcore_D__;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.-" };
VWEAK VWORD _V40_V10vcore_D_P;
VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V10vcore_D_P;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.+" };
VWEAK VWORD _V40_V10vcore_Dexact;
VWEAK VClosure _VW_V40_V10vcore_Dexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExact, NULL };
VWEAK VWORD _V10vcore_Dexact;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.exact" };
VWEAK VWORD _V40_V10vcore_Dinexact;
VWEAK VClosure _VW_V40_V10vcore_Dinexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VInexact, NULL };
VWEAK VWORD _V10vcore_Dinexact;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dinexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.inexact" };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1054 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0is__basic__intrinsic_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0is__basic__intrinsic_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "is-basic-intrinsic\?" };
static VPair _V10_Dpair_D1048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0sym;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0sym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "sym" };
static VPair _V10_Dpair_D1044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0intrinsics;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0intrinsics = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "intrinsics" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1041 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1040 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D1039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D1030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__inline__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0intrinsics_V0lookup__intrinsic, _var0, _var1);
static void _V0vanity_V0intrinsics_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.18 2 0) (##string ##.string.1040) (bruijn ##.%x.19 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1040.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0intrinsics_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0intrinsics_V20_V0k2) (bruijn ##.%x.20 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0intrinsics_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0intrinsics_V20_V0k1) (##string ##.string.1041))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1041.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.587 1 0) ((bruijn ##.%k.227 0 0) (bruijn ##.%p.587 1 0)) (basic-block 1 1 (##.%r.729) ((##vcore.eq? (bruijn ##.sym.9 64 1) '##vcore.qcons)) ((bruijn ##.%k.227 1 0) (bruijn ##.%r.729 0 0))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dqcons);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.84 0 0) ((bruijn ##.%k.22 63 0) (##intrinsic ##vcore.cons)) (basic-block 1 1 (##.%p.588) ((##vcore.eq? (bruijn ##.sym.9 64 1) '##vcore.car)) (if (bruijn ##.%p.588 0 0) ((bruijn ##.%k.22 64 0) (##intrinsic ##vcore.car)) (basic-block 1 1 (##.%p.589) ((##vcore.eq? (bruijn ##.sym.9 65 1) '##vcore.cdr)) (if (bruijn ##.%p.589 0 0) ((bruijn ##.%k.22 65 0) (##intrinsic ##vcore.cdr)) (basic-block 1 1 (##.%p.590) ((##vcore.eq? (bruijn ##.sym.9 66 1) '##vcore.set-car!)) (if (bruijn ##.%p.590 0 0) ((bruijn ##.%k.22 66 0) (##intrinsic ##vcore.set-car!)) (basic-block 1 1 (##.%p.591) ((##vcore.eq? (bruijn ##.sym.9 67 1) '##vcore.set-cdr!)) (if (bruijn ##.%p.591 0 0) ((bruijn ##.%k.22 67 0) (##intrinsic ##vcore.set-cdr!)) (basic-block 1 1 (##.%p.592) ((##vcore.eq? (bruijn ##.sym.9 68 1) '##vcore.append)) (if (bruijn ##.%p.592 0 0) ((bruijn ##.%k.22 68 0) (##intrinsic "VAppend")) (basic-block 1 1 (##.%p.593) ((##vcore.eq? (bruijn ##.sym.9 69 1) '##vcore.vector)) (if (bruijn ##.%p.593 0 0) ((bruijn ##.%k.22 69 0) (##intrinsic ##vcore.vector)) (basic-block 1 1 (##.%p.594) ((##vcore.eq? (bruijn ##.sym.9 70 1) '##vcore.make-vector)) (if (bruijn ##.%p.594 0 0) ((bruijn ##.%k.22 70 0) (##intrinsic ##vcore.make-vector)) (basic-block 1 1 (##.%p.595) ((##vcore.eq? (bruijn ##.sym.9 71 1) '##vcore.list->vector)) (if (bruijn ##.%p.595 0 0) ((bruijn ##.%k.22 71 0) (##intrinsic ##vcore.list->vector)) (basic-block 1 1 (##.%p.596) ((##vcore.eq? (bruijn ##.sym.9 72 1) '##vcore.vector-ref)) (if (bruijn ##.%p.596 0 0) ((bruijn ##.%k.22 72 0) (##intrinsic ##vcore.vector-ref)) (basic-block 1 1 (##.%p.597) ((##vcore.eq? (bruijn ##.sym.9 73 1) '##vcore.vector-set!)) (if (bruijn ##.%p.597 0 0) ((bruijn ##.%k.22 73 0) (##intrinsic ##vcore.vector-set!)) (basic-block 1 1 (##.%p.598) ((##vcore.eq? (bruijn ##.sym.9 74 1) '##vcore.vector-length)) (if (bruijn ##.%p.598 0 0) ((bruijn ##.%k.22 74 0) (##intrinsic ##vcore.vector-length)) (basic-block 1 1 (##.%p.599) ((##vcore.eq? (bruijn ##.sym.9 75 1) '##vcore.f64vector)) (if (bruijn ##.%p.599 0 0) ((bruijn ##.%k.22 75 0) (##intrinsic ##vcore.f64vector)) (basic-block 1 1 (##.%p.600) ((##vcore.eq? (bruijn ##.sym.9 76 1) '##vcore.f64vector?)) (if (bruijn ##.%p.600 0 0) ((bruijn ##.%k.22 76 0) (##intrinsic ##vcore.f64vector?)) (basic-block 1 1 (##.%p.601) ((##vcore.eq? (bruijn ##.sym.9 77 1) '##vcore.make-f64vector)) (if (bruijn ##.%p.601 0 0) ((bruijn ##.%k.22 77 0) (##intrinsic ##vcore.make-f64vector)) (basic-block 1 1 (##.%p.602) ((##vcore.eq? (bruijn ##.sym.9 78 1) '##vcore.list->f64vector)) (if (bruijn ##.%p.602 0 0) ((bruijn ##.%k.22 78 0) (##intrinsic ##vcore.list->f64vector)) (basic-block 1 1 (##.%p.603) ((##vcore.eq? (bruijn ##.sym.9 79 1) '##vcore.f64vector-ref)) (if (bruijn ##.%p.603 0 0) ((bruijn ##.%k.22 79 0) (##intrinsic ##vcore.f64vector-ref)) (basic-block 1 1 (##.%p.604) ((##vcore.eq? (bruijn ##.sym.9 80 1) '##vcore.f64vector-set!)) (if (bruijn ##.%p.604 0 0) ((bruijn ##.%k.22 80 0) (##intrinsic ##vcore.f64vector-set!)) (basic-block 1 1 (##.%p.605) ((##vcore.eq? (bruijn ##.sym.9 81 1) '##vcore.f64vector-length)) (if (bruijn ##.%p.605 0 0) ((bruijn ##.%k.22 81 0) (##intrinsic ##vcore.f64vector-length)) (basic-block 1 1 (##.%p.606) ((##vcore.eq? (bruijn ##.sym.9 82 1) '##vcore.f32vector)) (if (bruijn ##.%p.606 0 0) ((bruijn ##.%k.22 82 0) (##intrinsic ##vcore.f32vector)) (basic-block 1 1 (##.%p.607) ((##vcore.eq? (bruijn ##.sym.9 83 1) '##vcore.f32vector?)) (if (bruijn ##.%p.607 0 0) ((bruijn ##.%k.22 83 0) (##intrinsic ##vcore.f32vector?)) (basic-block 1 1 (##.%p.608) ((##vcore.eq? (bruijn ##.sym.9 84 1) '##vcore.make-f32vector)) (if (bruijn ##.%p.608 0 0) ((bruijn ##.%k.22 84 0) (##intrinsic ##vcore.make-f32vector)) (basic-block 1 1 (##.%p.609) ((##vcore.eq? (bruijn ##.sym.9 85 1) '##vcore.list->f32vector)) (if (bruijn ##.%p.609 0 0) ((bruijn ##.%k.22 85 0) (##intrinsic ##vcore.list->f32vector)) (basic-block 1 1 (##.%p.610) ((##vcore.eq? (bruijn ##.sym.9 86 1) '##vcore.f32vector-ref)) (if (bruijn ##.%p.610 0 0) ((bruijn ##.%k.22 86 0) (##intrinsic ##vcore.f32vector-ref)) (basic-block 1 1 (##.%p.611) ((##vcore.eq? (bruijn ##.sym.9 87 1) '##vcore.f32vector-set!)) (if (bruijn ##.%p.611 0 0) ((bruijn ##.%k.22 87 0) (##intrinsic ##vcore.f32vector-set!)) (basic-block 1 1 (##.%p.612) ((##vcore.eq? (bruijn ##.sym.9 88 1) '##vcore.f32vector-length)) (if (bruijn ##.%p.612 0 0) ((bruijn ##.%k.22 88 0) (##intrinsic ##vcore.f32vector-length)) (basic-block 1 1 (##.%p.613) ((##vcore.eq? (bruijn ##.sym.9 89 1) '##vcore.s32vector)) (if (bruijn ##.%p.613 0 0) ((bruijn ##.%k.22 89 0) (##intrinsic ##vcore.s32vector)) (basic-block 1 1 (##.%p.614) ((##vcore.eq? (bruijn ##.sym.9 90 1) '##vcore.s32vector?)) (if (bruijn ##.%p.614 0 0) ((bruijn ##.%k.22 90 0) (##intrinsic ##vcore.s32vector?)) (basic-block 1 1 (##.%p.615) ((##vcore.eq? (bruijn ##.sym.9 91 1) '##vcore.make-s32vector)) (if (bruijn ##.%p.615 0 0) ((bruijn ##.%k.22 91 0) (##intrinsic ##vcore.make-s32vector)) (basic-block 1 1 (##.%p.616) ((##vcore.eq? (bruijn ##.sym.9 92 1) '##vcore.list->s32vector)) (if (bruijn ##.%p.616 0 0) ((bruijn ##.%k.22 92 0) (##intrinsic ##vcore.list->s32vector)) (basic-block 1 1 (##.%p.617) ((##vcore.eq? (bruijn ##.sym.9 93 1) '##vcore.s32vector-ref)) (if (bruijn ##.%p.617 0 0) ((bruijn ##.%k.22 93 0) (##intrinsic ##vcore.s32vector-ref)) (basic-block 1 1 (##.%p.618) ((##vcore.eq? (bruijn ##.sym.9 94 1) '##vcore.s32vector-set!)) (if (bruijn ##.%p.618 0 0) ((bruijn ##.%k.22 94 0) (##intrinsic ##vcore.s32vector-set!)) (basic-block 1 1 (##.%p.619) ((##vcore.eq? (bruijn ##.sym.9 95 1) '##vcore.s32vector-length)) (if (bruijn ##.%p.619 0 0) ((bruijn ##.%k.22 95 0) (##intrinsic ##vcore.s32vector-length)) (basic-block 1 1 (##.%p.620) ((##vcore.eq? (bruijn ##.sym.9 96 1) '##vcore.u16vector)) (if (bruijn ##.%p.620 0 0) ((bruijn ##.%k.22 96 0) (##intrinsic ##vcore.u16vector)) (basic-block 1 1 (##.%p.621) ((##vcore.eq? (bruijn ##.sym.9 97 1) '##vcore.u16vector?)) (if (bruijn ##.%p.621 0 0) ((bruijn ##.%k.22 97 0) (##intrinsic ##vcore.u16vector?)) (basic-block 1 1 (##.%p.622) ((##vcore.eq? (bruijn ##.sym.9 98 1) '##vcore.make-u16vector)) (if (bruijn ##.%p.622 0 0) ((bruijn ##.%k.22 98 0) (##intrinsic ##vcore.make-u16vector)) (basic-block 1 1 (##.%p.623) ((##vcore.eq? (bruijn ##.sym.9 99 1) '##vcore.list->u16vector)) (if (bruijn ##.%p.623 0 0) ((bruijn ##.%k.22 99 0) (##intrinsic ##vcore.list->u16vector)) (basic-block 1 1 (##.%p.624) ((##vcore.eq? (bruijn ##.sym.9 100 1) '##vcore.u16vector-ref)) (if (bruijn ##.%p.624 0 0) ((bruijn ##.%k.22 100 0) (##intrinsic ##vcore.u16vector-ref)) (basic-block 1 1 (##.%p.625) ((##vcore.eq? (bruijn ##.sym.9 101 1) '##vcore.u16vector-set!)) (if (bruijn ##.%p.625 0 0) ((bruijn ##.%k.22 101 0) (##intrinsic ##vcore.u16vector-set!)) (basic-block 1 1 (##.%p.626) ((##vcore.eq? (bruijn ##.sym.9 102 1) '##vcore.u16vector-length)) (if (bruijn ##.%p.626 0 0) ((bruijn ##.%k.22 102 0) (##intrinsic ##vcore.u16vector-length)) (basic-block 1 1 (##.%p.627) ((##vcore.eq? (bruijn ##.sym.9 103 1) '##vcore.s16vector)) (if (bruijn ##.%p.627 0 0) ((bruijn ##.%k.22 103 0) (##intrinsic ##vcore.s16vector)) (basic-block 1 1 (##.%p.628) ((##vcore.eq? (bruijn ##.sym.9 104 1) '##vcore.s16vector?)) (if (bruijn ##.%p.628 0 0) ((bruijn ##.%k.22 104 0) (##intrinsic ##vcore.s16vector?)) (basic-block 1 1 (##.%p.629) ((##vcore.eq? (bruijn ##.sym.9 105 1) '##vcore.make-s16vector)) (if (bruijn ##.%p.629 0 0) ((bruijn ##.%k.22 105 0) (##intrinsic ##vcore.make-s16vector)) (basic-block 1 1 (##.%p.630) ((##vcore.eq? (bruijn ##.sym.9 106 1) '##vcore.list->s16vector)) (if (bruijn ##.%p.630 0 0) ((bruijn ##.%k.22 106 0) (##intrinsic ##vcore.list->s16vector)) (basic-block 1 1 (##.%p.631) ((##vcore.eq? (bruijn ##.sym.9 107 1) '##vcore.s16vector-ref)) (if (bruijn ##.%p.631 0 0) ((bruijn ##.%k.22 107 0) (##intrinsic ##vcore.s16vector-ref)) (basic-block 1 1 (##.%p.632) ((##vcore.eq? (bruijn ##.sym.9 108 1) '##vcore.s16vector-set!)) (if (bruijn ##.%p.632 0 0) ((bruijn ##.%k.22 108 0) (##intrinsic ##vcore.s16vector-set!)) (basic-block 1 1 (##.%p.633) ((##vcore.eq? (bruijn ##.sym.9 109 1) '##vcore.s16vector-length)) (if (bruijn ##.%p.633 0 0) ((bruijn ##.%k.22 109 0) (##intrinsic ##vcore.s16vector-length)) (basic-block 1 1 (##.%p.634) ((##vcore.eq? (bruijn ##.sym.9 110 1) '##vcore.u8vector)) (if (bruijn ##.%p.634 0 0) ((bruijn ##.%k.22 110 0) (##intrinsic ##vcore.u8vector)) (basic-block 1 1 (##.%p.635) ((##vcore.eq? (bruijn ##.sym.9 111 1) '##vcore.u8vector?)) (if (bruijn ##.%p.635 0 0) ((bruijn ##.%k.22 111 0) (##intrinsic ##vcore.u8vector?)) (basic-block 1 1 (##.%p.636) ((##vcore.eq? (bruijn ##.sym.9 112 1) '##vcore.make-u8vector)) (if (bruijn ##.%p.636 0 0) ((bruijn ##.%k.22 112 0) (##intrinsic ##vcore.make-u8vector)) (basic-block 1 1 (##.%p.637) ((##vcore.eq? (bruijn ##.sym.9 113 1) '##vcore.list->u8vector)) (if (bruijn ##.%p.637 0 0) ((bruijn ##.%k.22 113 0) (##intrinsic ##vcore.list->u8vector)) (basic-block 1 1 (##.%p.638) ((##vcore.eq? (bruijn ##.sym.9 114 1) '##vcore.u8vector-ref)) (if (bruijn ##.%p.638 0 0) ((bruijn ##.%k.22 114 0) (##intrinsic ##vcore.u8vector-ref)) (basic-block 1 1 (##.%p.639) ((##vcore.eq? (bruijn ##.sym.9 115 1) '##vcore.u8vector-set!)) (if (bruijn ##.%p.639 0 0) ((bruijn ##.%k.22 115 0) (##intrinsic ##vcore.u8vector-set!)) (basic-block 1 1 (##.%p.640) ((##vcore.eq? (bruijn ##.sym.9 116 1) '##vcore.u8vector-length)) (if (bruijn ##.%p.640 0 0) ((bruijn ##.%k.22 116 0) (##intrinsic ##vcore.u8vector-length)) (basic-block 1 1 (##.%p.641) ((##vcore.eq? (bruijn ##.sym.9 117 1) '##vcore.s8vector)) (if (bruijn ##.%p.641 0 0) ((bruijn ##.%k.22 117 0) (##intrinsic ##vcore.s8vector)) (basic-block 1 1 (##.%p.642) ((##vcore.eq? (bruijn ##.sym.9 118 1) '##vcore.s8vector?)) (if (bruijn ##.%p.642 0 0) ((bruijn ##.%k.22 118 0) (##intrinsic ##vcore.s8vector?)) (basic-block 1 1 (##.%p.643) ((##vcore.eq? (bruijn ##.sym.9 119 1) '##vcore.make-s8vector)) (if (bruijn ##.%p.643 0 0) ((bruijn ##.%k.22 119 0) (##intrinsic ##vcore.make-s8vector)) (basic-block 1 1 (##.%p.644) ((##vcore.eq? (bruijn ##.sym.9 120 1) '##vcore.list->s8vector)) (if (bruijn ##.%p.644 0 0) ((bruijn ##.%k.22 120 0) (##intrinsic ##vcore.list->s8vector)) (basic-block 1 1 (##.%p.645) ((##vcore.eq? (bruijn ##.sym.9 121 1) '##vcore.s8vector-ref)) (if (bruijn ##.%p.645 0 0) ((bruijn ##.%k.22 121 0) (##intrinsic ##vcore.s8vector-ref)) (basic-block 1 1 (##.%p.646) ((##vcore.eq? (bruijn ##.sym.9 122 1) '##vcore.s8vector-set!)) (if (bruijn ##.%p.646 0 0) ((bruijn ##.%k.22 122 0) (##intrinsic ##vcore.s8vector-set!)) (basic-block 1 1 (##.%p.647) ((##vcore.eq? (bruijn ##.sym.9 123 1) '##vcore.s8vector-length)) (if (bruijn ##.%p.647 0 0) ((bruijn ##.%k.22 123 0) (##intrinsic ##vcore.s8vector-length)) (basic-block 1 1 (##.%p.648) ((##vcore.eq? (bruijn ##.sym.9 124 1) '##vcore.read-u8vector)) (if (bruijn ##.%p.648 0 0) ((bruijn ##.%k.22 124 0) (##intrinsic ##vcore.read-u8vector)) (basic-block 1 1 (##.%p.649) ((##vcore.eq? (bruijn ##.sym.9 125 1) '##vcore.record)) (if (bruijn ##.%p.649 0 0) ((bruijn ##.%k.22 125 0) (##intrinsic ##vcore.record)) (basic-block 1 1 (##.%p.650) ((##vcore.eq? (bruijn ##.sym.9 126 1) '##vcore.record-ref)) (if (bruijn ##.%p.650 0 0) ((bruijn ##.%k.22 126 0) (##intrinsic ##vcore.record-ref)) (basic-block 1 1 (##.%p.651) ((##vcore.eq? (bruijn ##.sym.9 127 1) '##vcore.record-set!)) (if (bruijn ##.%p.651 0 0) ((bruijn ##.%k.22 127 0) (##intrinsic ##vcore.record-set!)) (basic-block 1 1 (##.%p.652) ((##vcore.eq? (bruijn ##.sym.9 128 1) '##vcore.record-length)) (if (bruijn ##.%p.652 0 0) ((bruijn ##.%k.22 128 0) (##intrinsic ##vcore.record-length)) (basic-block 1 1 (##.%p.653) ((##vcore.eq? (bruijn ##.sym.9 129 1) '##vcore.make-hash-table)) (if (bruijn ##.%p.653 0 0) ((bruijn ##.%k.22 129 0) (##intrinsic ##vcore.make-hash-table)) (basic-block 1 1 (##.%p.654) ((##vcore.eq? (bruijn ##.sym.9 130 1) '##vcore.hash-table-equivalence-function)) (if (bruijn ##.%p.654 0 0) ((bruijn ##.%k.22 130 0) (##intrinsic ##vcore.hash-table-equivalence-function)) (basic-block 1 1 (##.%p.655) ((##vcore.eq? (bruijn ##.sym.9 131 1) '##vcore.hash-table-hash-function)) (if (bruijn ##.%p.655 0 0) ((bruijn ##.%k.22 131 0) (##intrinsic ##vcore.hash-table-hash-function)) (basic-block 1 1 (##.%p.656) ((##vcore.eq? (bruijn ##.sym.9 132 1) '##vcore.hash-table-vector)) (if (bruijn ##.%p.656 0 0) ((bruijn ##.%k.22 132 0) (##intrinsic ##vcore.hash-table-vector)) (basic-block 1 1 (##.%p.657) ((##vcore.eq? (bruijn ##.sym.9 133 1) '##vcore.hash-table-ref)) (if (bruijn ##.%p.657 0 0) ((bruijn ##.%k.22 133 0) (##intrinsic ##vcore.hash-table-ref)) (basic-block 1 1 (##.%p.658) ((##vcore.eq? (bruijn ##.sym.9 134 1) '##vcore.hash-table-set!)) (if (bruijn ##.%p.658 0 0) ((bruijn ##.%k.22 134 0) (##intrinsic ##vcore.hash-table-set!)) (basic-block 1 1 (##.%p.659) ((##vcore.eq? (bruijn ##.sym.9 135 1) '##vcore.hash-table-delete!)) (if (bruijn ##.%p.659 0 0) ((bruijn ##.%k.22 135 0) (##intrinsic ##vcore.hash-table-delete!)) (basic-block 1 1 (##.%p.660) ((##vcore.eq? (bruijn ##.sym.9 136 1) '##vcore.make-string)) (if (bruijn ##.%p.660 0 0) ((bruijn ##.%k.22 136 0) (##intrinsic ##vcore.make-string)) (basic-block 1 1 (##.%p.661) ((##vcore.eq? (bruijn ##.sym.9 137 1) '##vcore.substring)) (if (bruijn ##.%p.661 0 0) ((bruijn ##.%k.22 137 0) (##intrinsic ##vcore.substring)) (basic-block 1 1 (##.%p.662) ((##vcore.eq? (bruijn ##.sym.9 138 1) '##vcore.string-copy!)) (if (bruijn ##.%p.662 0 0) ((bruijn ##.%k.22 138 0) (##intrinsic ##vcore.string-copy!)) (basic-block 1 1 (##.%p.663) ((##vcore.eq? (bruijn ##.sym.9 139 1) '##vcore.string-ref)) (if (bruijn ##.%p.663 0 0) ((bruijn ##.%k.22 139 0) (##intrinsic ##vcore.string-ref)) (basic-block 1 1 (##.%p.664) ((##vcore.eq? (bruijn ##.sym.9 140 1) '##vcore.string-set!)) (if (bruijn ##.%p.664 0 0) ((bruijn ##.%k.22 140 0) (##intrinsic ##vcore.string-set!)) (basic-block 1 1 (##.%p.665) ((##vcore.eq? (bruijn ##.sym.9 141 1) '##vcore.string-length)) (if (bruijn ##.%p.665 0 0) ((bruijn ##.%k.22 141 0) (##intrinsic ##vcore.string-length)) (basic-block 1 1 (##.%p.666) ((##vcore.eq? (bruijn ##.sym.9 142 1) '##vcore.string->symbol)) (if (bruijn ##.%p.666 0 0) ((bruijn ##.%k.22 142 0) (##intrinsic ##vcore.string->symbol)) (basic-block 1 1 (##.%p.667) ((##vcore.eq? (bruijn ##.sym.9 143 1) '##vcore.string->number)) (if (bruijn ##.%p.667 0 0) ((bruijn ##.%k.22 143 0) (##intrinsic ##vcore.string->number)) (basic-block 1 1 (##.%p.668) ((##vcore.eq? (bruijn ##.sym.9 144 1) '##vcore.symbol->string)) (if (bruijn ##.%p.668 0 0) ((bruijn ##.%k.22 144 0) (##intrinsic ##vcore.symbol->string)) (basic-block 1 1 (##.%p.669) ((##vcore.eq? (bruijn ##.sym.9 145 1) '##vcore.gensym)) (if (bruijn ##.%p.669 0 0) ((bruijn ##.%k.22 145 0) (##intrinsic ##vcore.gensym)) (basic-block 1 1 (##.%p.670) ((##vcore.eq? (bruijn ##.sym.9 146 1) '##vcore.char-integer)) (if (bruijn ##.%p.670 0 0) ((bruijn ##.%k.22 146 0) (##intrinsic ##vcore.char-integer)) (basic-block 1 1 (##.%p.671) ((##vcore.eq? (bruijn ##.sym.9 147 1) '##vcore.integer->char)) (if (bruijn ##.%p.671 0 0) ((bruijn ##.%k.22 147 0) (##intrinsic ##vcore.integer->char)) (basic-block 1 1 (##.%p.672) ((##vcore.eq? (bruijn ##.sym.9 148 1) '##vcore.stdin->port)) (if (bruijn ##.%p.672 0 0) ((bruijn ##.%k.22 148 0) (##intrinsic ##vcore.stdin->port)) (basic-block 1 1 (##.%p.673) ((##vcore.eq? (bruijn ##.sym.9 149 1) '##vcore.stdout->port)) (if (bruijn ##.%p.673 0 0) ((bruijn ##.%k.22 149 0) (##intrinsic ##vcore.stdout->port)) (basic-block 1 1 (##.%p.674) ((##vcore.eq? (bruijn ##.sym.9 150 1) '##vcore.stderr->port)) (if (bruijn ##.%p.674 0 0) ((bruijn ##.%k.22 150 0) (##intrinsic ##vcore.stderr->port)) (basic-block 1 1 (##.%p.675) ((##vcore.eq? (bruijn ##.sym.9 151 1) '##vcore.open-input-stream)) (if (bruijn ##.%p.675 0 0) ((bruijn ##.%k.22 151 0) (##intrinsic ##vcore.open-input-stream)) (basic-block 1 1 (##.%p.676) ((##vcore.eq? (bruijn ##.sym.9 152 1) '##vcore.open-output-stream)) (if (bruijn ##.%p.676 0 0) ((bruijn ##.%k.22 152 0) (##intrinsic ##vcore.open-output-stream)) (basic-block 1 1 (##.%p.677) ((##vcore.eq? (bruijn ##.sym.9 153 1) '##vcore.close-stream)) (if (bruijn ##.%p.677 0 0) ((bruijn ##.%k.22 153 0) (##intrinsic ##vcore.close-stream)) (basic-block 1 1 (##.%p.678) ((##vcore.eq? (bruijn ##.sym.9 154 1) '##vcore.tty-port?)) (if (bruijn ##.%p.678 0 0) ((bruijn ##.%k.22 154 0) (##intrinsic ##vcore.tty-port?)) (basic-block 1 1 (##.%p.679) ((##vcore.eq? (bruijn ##.sym.9 155 1) '##vcore.open-output-string)) (if (bruijn ##.%p.679 0 0) ((bruijn ##.%k.22 155 0) (##intrinsic ##vcore.open-output-string)) (basic-block 1 1 (##.%p.680) ((##vcore.eq? (bruijn ##.sym.9 156 1) '##vcore.get-output-string)) (if (bruijn ##.%p.680 0 0) ((bruijn ##.%k.22 156 0) (##intrinsic ##vcore.get-output-string)) (basic-block 1 1 (##.%p.681) ((##vcore.eq? (bruijn ##.sym.9 157 1) '##vcore.eof-object?)) (if (bruijn ##.%p.681 0 0) ((bruijn ##.%k.22 157 0) (##intrinsic ##vcore.eof-object?)) (basic-block 1 1 (##.%p.682) ((##vcore.eq? (bruijn ##.sym.9 158 1) '##vcore.read-char)) (if (bruijn ##.%p.682 0 0) ((bruijn ##.%k.22 158 0) (##intrinsic ##vcore.read-char)) (basic-block 1 1 (##.%p.683) ((##vcore.eq? (bruijn ##.sym.9 159 1) '##vcore.read-line)) (if (bruijn ##.%p.683 0 0) ((bruijn ##.%k.22 159 0) (##intrinsic ##vcore.read-line)) (basic-block 1 1 (##.%p.684) ((##vcore.eq? (bruijn ##.sym.9 160 1) '##vcore.read-line2)) (if (bruijn ##.%p.684 0 0) ((bruijn ##.%k.22 160 0) (##intrinsic ##vcore.read-line2)) (basic-block 1 1 (##.%p.685) ((##vcore.eq? (bruijn ##.sym.9 161 1) '##vcore.read)) (if (bruijn ##.%p.685 0 0) ((bruijn ##.%k.22 161 0) (##intrinsic ##vcore.read)) (basic-block 1 1 (##.%p.686) ((##vcore.eq? (bruijn ##.sym.9 162 1) '##vcore.display-word)) (if (bruijn ##.%p.686 0 0) ((bruijn ##.%k.22 162 0) (##intrinsic ##vcore.display-word)) (basic-block 1 1 (##.%p.687) ((##vcore.eq? (bruijn ##.sym.9 163 1) '##vcore.write)) (if (bruijn ##.%p.687 0 0) ((bruijn ##.%k.22 163 0) (##intrinsic ##vcore.write)) (basic-block 1 1 (##.%p.688) ((##vcore.eq? (bruijn ##.sym.9 164 1) '##vcore.newline)) (if (bruijn ##.%p.688 0 0) ((bruijn ##.%k.22 164 0) (##intrinsic ##vcore.newline)) (basic-block 1 1 (##.%p.689) ((##vcore.eq? (bruijn ##.sym.9 165 1) '##vcore.display-stdout)) (if (bruijn ##.%p.689 0 0) ((bruijn ##.%k.22 165 0) (##intrinsic ##vcore.display-stdout)) (basic-block 1 1 (##.%p.690) ((##vcore.eq? (bruijn ##.sym.9 166 1) '##vcore.write-stdout)) (if (bruijn ##.%p.690 0 0) ((bruijn ##.%k.22 166 0) (##intrinsic ##vcore.write-stdout)) (basic-block 1 1 (##.%p.691) ((##vcore.eq? (bruijn ##.sym.9 167 1) '##vcore.newline-stdout)) (if (bruijn ##.%p.691 0 0) ((bruijn ##.%k.22 167 0) (##intrinsic ##vcore.newline-stdout)) (basic-block 1 1 (##.%p.692) ((##vcore.eq? (bruijn ##.sym.9 168 1) '##vcore.set-finalizer!)) (if (bruijn ##.%p.692 0 0) ((bruijn ##.%k.22 168 0) (##intrinsic ##vcore.set-finalizer!)) (basic-block 1 1 (##.%p.693) ((##vcore.eq? (bruijn ##.sym.9 169 1) '##vcore.has-finalizer?)) (if (bruijn ##.%p.693 0 0) ((bruijn ##.%k.22 169 0) (##intrinsic ##vcore.has-finalizer?)) (basic-block 1 1 (##.%p.694) ((##vcore.eq? (bruijn ##.sym.9 170 1) '##vcore.finalize!)) (if (bruijn ##.%p.694 0 0) ((bruijn ##.%k.22 170 0) (##intrinsic ##vcore.finalize!)) (basic-block 1 1 (##.%p.695) ((##vcore.eq? (bruijn ##.sym.9 171 1) '##vcore.garbage-collect)) (if (bruijn ##.%p.695 0 0) ((bruijn ##.%k.22 171 0) (##intrinsic ##vcore.garbage-collect)) (basic-block 1 1 (##.%p.696) ((##vcore.eq? (bruijn ##.sym.9 172 1) '##vcore.yield-to-host)) (if (bruijn ##.%p.696 0 0) ((bruijn ##.%k.22 172 0) (##intrinsic ##vcore.yield-to-host)) (basic-block 1 1 (##.%p.697) ((##vcore.eq? (bruijn ##.sym.9 173 1) '##vcore.yield-to-host-major)) (if (bruijn ##.%p.697 0 0) ((bruijn ##.%k.22 173 0) (##intrinsic ##vcore.yield-to-host-major)) (basic-block 1 1 (##.%p.698) ((##vcore.eq? (bruijn ##.sym.9 174 1) '##vcore.system)) (if (bruijn ##.%p.698 0 0) ((bruijn ##.%k.22 174 0) (##intrinsic ##vcore.system)) (basic-block 1 1 (##.%p.699) ((##vcore.eq? (bruijn ##.sym.9 175 1) '##vcore.open-input-process)) (if (bruijn ##.%p.699 0 0) ((bruijn ##.%k.22 175 0) (##intrinsic ##vcore.open-input-process)) (basic-block 1 1 (##.%p.700) ((##vcore.eq? (bruijn ##.sym.9 176 1) '##vcore.open-output-process)) (if (bruijn ##.%p.700 0 0) ((bruijn ##.%k.22 176 0) (##intrinsic ##vcore.open-output-process)) (basic-block 1 1 (##.%p.701) ((##vcore.eq? (bruijn ##.sym.9 177 1) '##vcore.command-line)) (if (bruijn ##.%p.701 0 0) ((bruijn ##.%k.22 177 0) (##intrinsic ##vcore.command-line)) (basic-block 1 1 (##.%p.702) ((##vcore.eq? (bruijn ##.sym.9 178 1) '##vcore.make-random)) (if (bruijn ##.%p.702 0 0) ((bruijn ##.%k.22 178 0) (##intrinsic ##vcore.make-random)) (basic-block 1 1 (##.%p.703) ((##vcore.eq? (bruijn ##.sym.9 179 1) '##vcore.random-copy)) (if (bruijn ##.%p.703 0 0) ((bruijn ##.%k.22 179 0) (##intrinsic ##vcore.random-copy)) (basic-block 1 1 (##.%p.704) ((##vcore.eq? (bruijn ##.sym.9 180 1) '##vcore.random-sample!)) (if (bruijn ##.%p.704 0 0) ((bruijn ##.%k.22 180 0) (##intrinsic ##vcore.random-sample!)) (basic-block 1 1 (##.%p.705) ((##vcore.eq? (bruijn ##.sym.9 181 1) '##vcore.random-sample-bounded!)) (if (bruijn ##.%p.705 0 0) ((bruijn ##.%k.22 181 0) (##intrinsic ##vcore.random-sample-bounded!)) (basic-block 1 1 (##.%p.706) ((##vcore.eq? (bruijn ##.sym.9 182 1) '##vcore.random-sample-float!)) (if (bruijn ##.%p.706 0 0) ((bruijn ##.%k.22 182 0) (##intrinsic ##vcore.random-sample-float!)) (basic-block 1 1 (##.%p.707) ((##vcore.eq? (bruijn ##.sym.9 183 1) '##vcore.random-advance!)) (if (bruijn ##.%p.707 0 0) ((bruijn ##.%k.22 183 0) (##intrinsic ##vcore.random-advance!)) (basic-block 1 1 (##.%p.708) ((##vcore.eq? (bruijn ##.sym.9 184 1) '##vcore.fiber-fork-list)) (if (bruijn ##.%p.708 0 0) ((bruijn ##.%k.22 184 0) (##intrinsic ##vcore.fiber-fork-list)) (basic-block 1 1 (##.%p.709) ((##vcore.eq? (bruijn ##.sym.9 185 1) '##vcore.async)) (if (bruijn ##.%p.709 0 0) ((bruijn ##.%k.22 185 0) (##intrinsic ##vcore.async)) (basic-block 1 1 (##.%p.710) ((##vcore.eq? (bruijn ##.sym.9 186 1) '##vcore.await)) (if (bruijn ##.%p.710 0 0) ((bruijn ##.%k.22 186 0) (##intrinsic ##vcore.await)) (basic-block 1 1 (##.%p.711) ((##vcore.eq? (bruijn ##.sym.9 187 1) '##vcore.realpath)) (if (bruijn ##.%p.711 0 0) ((bruijn ##.%k.22 187 0) (##intrinsic ##vcore.realpath)) (basic-block 1 1 (##.%p.712) ((##vcore.eq? (bruijn ##.sym.9 188 1) '##vcore.make-temporary-file)) (if (bruijn ##.%p.712 0 0) ((bruijn ##.%k.22 188 0) (##intrinsic ##vcore.make-temporary-file)) (basic-block 1 1 (##.%p.713) ((##vcore.eq? (bruijn ##.sym.9 189 1) '##vcore.access)) (if (bruijn ##.%p.713 0 0) ((bruijn ##.%k.22 189 0) (##intrinsic ##vcore.access)) (basic-block 1 1 (##.%p.714) ((##vcore.eq? (bruijn ##.sym.9 190 1) '##vcore.current-jiffy)) (if (bruijn ##.%p.714 0 0) ((bruijn ##.%k.22 190 0) (##intrinsic ##vcore.current-jiffy)) (basic-block 1 1 (##.%p.715) ((##vcore.eq? (bruijn ##.sym.9 191 1) '##vcore.jiffies-per-second)) (if (bruijn ##.%p.715 0 0) ((bruijn ##.%k.22 191 0) (##intrinsic ##vcore.jiffies-per-second)) (basic-block 1 1 (##.%p.716) ((##vcore.eq? (bruijn ##.sym.9 192 1) '##vcore.bitwise-not)) (if (bruijn ##.%p.716 0 0) ((bruijn ##.%k.22 192 0) (##intrinsic ##vcore.bitwise-not)) (basic-block 1 1 (##.%p.717) ((##vcore.eq? (bruijn ##.sym.9 193 1) '##vcore.bitwise-ior)) (if (bruijn ##.%p.717 0 0) ((bruijn ##.%k.22 193 0) (##intrinsic ##vcore.bitwise-ior)) (basic-block 1 1 (##.%p.718) ((##vcore.eq? (bruijn ##.sym.9 194 1) '##vcore.bitwise-xor)) (if (bruijn ##.%p.718 0 0) ((bruijn ##.%k.22 194 0) (##intrinsic ##vcore.bitwise-xor)) (basic-block 1 1 (##.%p.719) ((##vcore.eq? (bruijn ##.sym.9 195 1) '##vcore.bitwise-and)) (if (bruijn ##.%p.719 0 0) ((bruijn ##.%k.22 195 0) (##intrinsic ##vcore.bitwise-and)) (basic-block 1 1 (##.%p.720) ((##vcore.eq? (bruijn ##.sym.9 196 1) '##vcore.bitwise-xnor)) (if (bruijn ##.%p.720 0 0) ((bruijn ##.%k.22 196 0) (##intrinsic ##vcore.bitwise-xnor)) (basic-block 1 1 (##.%p.721) ((##vcore.eq? (bruijn ##.sym.9 197 1) '##vcore.bitwise-nand)) (if (bruijn ##.%p.721 0 0) ((bruijn ##.%k.22 197 0) (##intrinsic ##vcore.bitwise-nand)) (basic-block 1 1 (##.%p.722) ((##vcore.eq? (bruijn ##.sym.9 198 1) '##vcore.bitwise-nor)) (if (bruijn ##.%p.722 0 0) ((bruijn ##.%k.22 198 0) (##intrinsic ##vcore.bitwise-nor)) (basic-block 1 1 (##.%p.723) ((##vcore.eq? (bruijn ##.sym.9 199 1) '##vcore.bitwise-andc1)) (if (bruijn ##.%p.723 0 0) ((bruijn ##.%k.22 199 0) (##intrinsic ##vcore.bitwise-andc1)) (basic-block 1 1 (##.%p.724) ((##vcore.eq? (bruijn ##.sym.9 200 1) '##vcore.bitwise-andc2)) (if (bruijn ##.%p.724 0 0) ((bruijn ##.%k.22 200 0) (##intrinsic ##vcore.bitwise-andc2)) (basic-block 1 1 (##.%p.725) ((##vcore.eq? (bruijn ##.sym.9 201 1) '##vcore.bitwise-orc1)) (if (bruijn ##.%p.725 0 0) ((bruijn ##.%k.22 201 0) (##intrinsic ##vcore.bitwise-orc1)) (basic-block 1 1 (##.%p.726) ((##vcore.eq? (bruijn ##.sym.9 202 1) '##vcore.bitwise-orc2)) (if (bruijn ##.%p.726 0 0) ((bruijn ##.%k.22 202 0) (##intrinsic ##vcore.bitwise-orc2)) (basic-block 1 1 (##.%p.727) ((##vcore.eq? (bruijn ##.sym.9 203 1) '##vcore.arithmetic-shift)) (if (bruijn ##.%p.727 0 0) ((bruijn ##.%k.22 203 0) (##intrinsic ##vcore.arithmetic-shift)) (basic-block 1 1 (##.%p.728) ((##vcore.eq? (bruijn ##.sym.9 204 1) '##vcore.bit-count)) (if (bruijn ##.%p.728 0 0) ((bruijn ##.%k.22 204 0) (##intrinsic ##vcore.bit-count)) ((bruijn ##.%k.22 204 0) #f))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      _V40_V10vcore_Dcons);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dcar);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      _V40_V10vcore_Dcar);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 65-1, 1),
      _V10vcore_Dcdr);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      _V40_V10vcore_Dcdr);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 66-1, 1),
      _V10vcore_Dset__car_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 1,
      _V40_V10vcore_Dset__car_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 67-1, 1),
      _V10vcore_Dset__cdr_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 1,
      _V40_V10vcore_Dset__cdr_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 68-1, 1),
      _V10vcore_Dappend);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 1,
      _V40VAppend);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 69-1, 1),
      _V10vcore_Dvector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 1,
      _V40_V10vcore_Dvector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 70-1, 1),
      _V10vcore_Dmake__vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 1,
      _V40_V10vcore_Dmake__vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 71-1, 1),
      _V10vcore_Dlist___Gvector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 1,
      _V40_V10vcore_Dlist___Gvector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 72-1, 1),
      _V10vcore_Dvector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 1,
      _V40_V10vcore_Dvector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 73-1, 1),
      _V10vcore_Dvector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 1,
      _V40_V10vcore_Dvector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 74-1, 1),
      _V10vcore_Dvector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 1,
      _V40_V10vcore_Dvector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 75-1, 1),
      _V10vcore_Df64vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 1,
      _V40_V10vcore_Df64vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 76-1, 1),
      _V10vcore_Df64vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 1,
      _V40_V10vcore_Df64vector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 77-1, 1),
      _V10vcore_Dmake__f64vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 1,
      _V40_V10vcore_Dmake__f64vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 78-1, 1),
      _V10vcore_Dlist___Gf64vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 1,
      _V40_V10vcore_Dlist___Gf64vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 79-1, 1),
      _V10vcore_Df64vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 1,
      _V40_V10vcore_Df64vector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 80-1, 1),
      _V10vcore_Df64vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 1,
      _V40_V10vcore_Df64vector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 81-1, 1),
      _V10vcore_Df64vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 1,
      _V40_V10vcore_Df64vector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 82-1, 1),
      _V10vcore_Df32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      _V40_V10vcore_Df32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 83-1, 1),
      _V10vcore_Df32vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 1,
      _V40_V10vcore_Df32vector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 84-1, 1),
      _V10vcore_Dmake__f32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 1,
      _V40_V10vcore_Dmake__f32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 85-1, 1),
      _V10vcore_Dlist___Gf32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 1,
      _V40_V10vcore_Dlist___Gf32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 86-1, 1),
      _V10vcore_Df32vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 1,
      _V40_V10vcore_Df32vector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 87-1, 1),
      _V10vcore_Df32vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 1,
      _V40_V10vcore_Df32vector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 88-1, 1),
      _V10vcore_Df32vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 1,
      _V40_V10vcore_Df32vector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 89-1, 1),
      _V10vcore_Ds32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 1,
      _V40_V10vcore_Ds32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 90-1, 1),
      _V10vcore_Ds32vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 1,
      _V40_V10vcore_Ds32vector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 91-1, 1),
      _V10vcore_Dmake__s32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 1,
      _V40_V10vcore_Dmake__s32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 92-1, 1),
      _V10vcore_Dlist___Gs32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 93-1, 1),
      _V10vcore_Ds32vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 1,
      _V40_V10vcore_Ds32vector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 94-1, 1),
      _V10vcore_Ds32vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 1,
      _V40_V10vcore_Ds32vector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 95-1, 1),
      _V10vcore_Ds32vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 1,
      _V40_V10vcore_Ds32vector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 96-1, 1),
      _V10vcore_Du16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 1,
      _V40_V10vcore_Du16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 97-1, 1),
      _V10vcore_Du16vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 1,
      _V40_V10vcore_Du16vector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 98-1, 1),
      _V10vcore_Dmake__u16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 1,
      _V40_V10vcore_Dmake__u16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 99-1, 1),
      _V10vcore_Dlist___Gu16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 1,
      _V40_V10vcore_Dlist___Gu16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 100-1, 1),
      _V10vcore_Du16vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 1,
      _V40_V10vcore_Du16vector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 101-1, 1),
      _V10vcore_Du16vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 1,
      _V40_V10vcore_Du16vector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 102-1, 1),
      _V10vcore_Du16vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 1,
      _V40_V10vcore_Du16vector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 103-1, 1),
      _V10vcore_Ds16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 1,
      _V40_V10vcore_Ds16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 104-1, 1),
      _V10vcore_Ds16vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 1,
      _V40_V10vcore_Ds16vector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 105-1, 1),
      _V10vcore_Dmake__s16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 1,
      _V40_V10vcore_Dmake__s16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 106-1, 1),
      _V10vcore_Dlist___Gs16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 107-1, 1),
      _V10vcore_Ds16vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 1,
      _V40_V10vcore_Ds16vector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 108-1, 1),
      _V10vcore_Ds16vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 1,
      _V40_V10vcore_Ds16vector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 109-1, 1),
      _V10vcore_Ds16vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 1,
      _V40_V10vcore_Ds16vector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 110-1, 1),
      _V10vcore_Du8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 1,
      _V40_V10vcore_Du8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 111-1, 1),
      _V10vcore_Du8vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 1,
      _V40_V10vcore_Du8vector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 112-1, 1),
      _V10vcore_Dmake__u8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 1,
      _V40_V10vcore_Dmake__u8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 113-1, 1),
      _V10vcore_Dlist___Gu8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 1,
      _V40_V10vcore_Dlist___Gu8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 114-1, 1),
      _V10vcore_Du8vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 1,
      _V40_V10vcore_Du8vector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 115-1, 1),
      _V10vcore_Du8vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 1,
      _V40_V10vcore_Du8vector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 116-1, 1),
      _V10vcore_Du8vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 1,
      _V40_V10vcore_Du8vector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 117-1, 1),
      _V10vcore_Ds8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 1,
      _V40_V10vcore_Ds8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 118-1, 1),
      _V10vcore_Ds8vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 1,
      _V40_V10vcore_Ds8vector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 119-1, 1),
      _V10vcore_Dmake__s8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 1,
      _V40_V10vcore_Dmake__s8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 120-1, 1),
      _V10vcore_Dlist___Gs8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 1,
      _V40_V10vcore_Dlist___Gs8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 121-1, 1),
      _V10vcore_Ds8vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 1,
      _V40_V10vcore_Ds8vector__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 122-1, 1),
      _V10vcore_Ds8vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 1,
      _V40_V10vcore_Ds8vector__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 123-1, 1),
      _V10vcore_Ds8vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 1,
      _V40_V10vcore_Ds8vector__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 124-1, 1),
      _V10vcore_Dread__u8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 1,
      _V40_V10vcore_Dread__u8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 125-1, 1),
      _V10vcore_Drecord);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 1,
      _V40_V10vcore_Drecord);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 126-1, 1),
      _V10vcore_Drecord__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 1,
      _V40_V10vcore_Drecord__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 127-1, 1),
      _V10vcore_Drecord__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 128-1, 1),
      _V10vcore_Drecord__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 1,
      _V40_V10vcore_Drecord__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 129-1, 1),
      _V10vcore_Dmake__hash__table);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 1,
      _V40_V10vcore_Dmake__hash__table);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 130-1, 1),
      _V10vcore_Dhash__table__equivalence__function);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 1,
      _V40_V10vcore_Dhash__table__equivalence__function);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 131-1, 1),
      _V10vcore_Dhash__table__hash__function);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 1,
      _V40_V10vcore_Dhash__table__hash__function);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 132-1, 1),
      _V10vcore_Dhash__table__vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 1,
      _V40_V10vcore_Dhash__table__vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 133-1, 1),
      _V10vcore_Dhash__table__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 1,
      _V40_V10vcore_Dhash__table__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 134-1, 1),
      _V10vcore_Dhash__table__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 1,
      _V40_V10vcore_Dhash__table__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 135-1, 1),
      _V10vcore_Dhash__table__delete_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 1,
      _V40_V10vcore_Dhash__table__delete_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 136-1, 1),
      _V10vcore_Dmake__string);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 1,
      _V40_V10vcore_Dmake__string);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 137-1, 1),
      _V10vcore_Dsubstring);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 1,
      _V40_V10vcore_Dsubstring);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 138-1, 1),
      _V10vcore_Dstring__copy_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 1,
      _V40_V10vcore_Dstring__copy_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 139-1, 1),
      _V10vcore_Dstring__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 1,
      _V40_V10vcore_Dstring__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 140-1, 1),
      _V10vcore_Dstring__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 1,
      _V40_V10vcore_Dstring__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 141-1, 1),
      _V10vcore_Dstring__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 1,
      _V40_V10vcore_Dstring__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 142-1, 1),
      _V10vcore_Dstring___Gsymbol);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 1,
      _V40_V10vcore_Dstring___Gsymbol);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 143-1, 1),
      _V10vcore_Dstring___Gnumber);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 1,
      _V40_V10vcore_Dstring___Gnumber);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 144-1, 1),
      _V10vcore_Dsymbol___Gstring);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 1,
      _V40_V10vcore_Dsymbol___Gstring);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 145-1, 1),
      _V10vcore_Dgensym);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 1,
      _V40_V10vcore_Dgensym);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 146-1, 1),
      _V10vcore_Dchar__integer);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 1,
      _V40_V10vcore_Dchar__integer);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 147-1, 1),
      _V10vcore_Dinteger___Gchar);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 1,
      _V40_V10vcore_Dinteger___Gchar);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 148-1, 1),
      _V10vcore_Dstdin___Gport);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 1,
      _V40_V10vcore_Dstdin___Gport);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 149-1, 1),
      _V10vcore_Dstdout___Gport);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 1,
      _V40_V10vcore_Dstdout___Gport);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 150-1, 1),
      _V10vcore_Dstderr___Gport);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 1,
      _V40_V10vcore_Dstderr___Gport);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 151-1, 1),
      _V10vcore_Dopen__input__stream);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 1,
      _V40_V10vcore_Dopen__input__stream);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 152-1, 1),
      _V10vcore_Dopen__output__stream);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 1,
      _V40_V10vcore_Dopen__output__stream);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 153-1, 1),
      _V10vcore_Dclose__stream);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 1,
      _V40_V10vcore_Dclose__stream);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 154-1, 1),
      _V10vcore_Dtty__port_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 1,
      _V40_V10vcore_Dtty__port_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 155-1, 1),
      _V10vcore_Dopen__output__string);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 1,
      _V40_V10vcore_Dopen__output__string);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 156-1, 1),
      _V10vcore_Dget__output__string);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 1,
      _V40_V10vcore_Dget__output__string);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 157-1, 1),
      _V10vcore_Deof__object_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 1,
      _V40_V10vcore_Deof__object_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 158-1, 1),
      _V10vcore_Dread__char);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 1,
      _V40_V10vcore_Dread__char);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 159-1, 1),
      _V10vcore_Dread__line);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 1,
      _V40_V10vcore_Dread__line);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 160-1, 1),
      _V10vcore_Dread__line2);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 1,
      _V40_V10vcore_Dread__line2);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 161-1, 1),
      _V10vcore_Dread);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 1,
      _V40_V10vcore_Dread);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 162-1, 1),
      _V10vcore_Ddisplay__word);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 1,
      _V40_V10vcore_Ddisplay__word);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 163-1, 1),
      _V10vcore_Dwrite);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 1,
      _V40_V10vcore_Dwrite);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 164-1, 1),
      _V10vcore_Dnewline);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 1,
      _V40_V10vcore_Dnewline);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 165-1, 1),
      _V10vcore_Ddisplay__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 1,
      _V40_V10vcore_Ddisplay__stdout);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 166-1, 1),
      _V10vcore_Dwrite__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 1,
      _V40_V10vcore_Dwrite__stdout);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 167-1, 1),
      _V10vcore_Dnewline__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 1,
      _V40_V10vcore_Dnewline__stdout);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 168-1, 1),
      _V10vcore_Dset__finalizer_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 1,
      _V40_V10vcore_Dset__finalizer_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 169-1, 1),
      _V10vcore_Dhas__finalizer_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 1,
      _V40_V10vcore_Dhas__finalizer_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 170-1, 1),
      _V10vcore_Dfinalize_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 1,
      _V40_V10vcore_Dfinalize_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 171-1, 1),
      _V10vcore_Dgarbage__collect);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 1,
      _V40_V10vcore_Dgarbage__collect);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 172-1, 1),
      _V10vcore_Dyield__to__host);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 1,
      _V40_V10vcore_Dyield__to__host);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 173-1, 1),
      _V10vcore_Dyield__to__host__major);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 1,
      _V40_V10vcore_Dyield__to__host__major);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 174-1, 1),
      _V10vcore_Dsystem);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 1,
      _V40_V10vcore_Dsystem);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 175-1, 1),
      _V10vcore_Dopen__input__process);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 1,
      _V40_V10vcore_Dopen__input__process);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 176-1, 1),
      _V10vcore_Dopen__output__process);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 1,
      _V40_V10vcore_Dopen__output__process);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 177-1, 1),
      _V10vcore_Dcommand__line);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 1,
      _V40_V10vcore_Dcommand__line);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 178-1, 1),
      _V10vcore_Dmake__random);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 1,
      _V40_V10vcore_Dmake__random);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 179-1, 1),
      _V10vcore_Drandom__copy);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 1,
      _V40_V10vcore_Drandom__copy);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 180-1, 1),
      _V10vcore_Drandom__sample_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 1,
      _V40_V10vcore_Drandom__sample_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 181-1, 1),
      _V10vcore_Drandom__sample__bounded_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 1,
      _V40_V10vcore_Drandom__sample__bounded_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 182-1, 1),
      _V10vcore_Drandom__sample__float_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 1,
      _V40_V10vcore_Drandom__sample__float_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 183-1, 1),
      _V10vcore_Drandom__advance_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 1,
      _V40_V10vcore_Drandom__advance_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 184-1, 1),
      _V10vcore_Dfiber__fork__list);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 1,
      _V40_V10vcore_Dfiber__fork__list);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 185-1, 1),
      _V10vcore_Dasync);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 1,
      _V40_V10vcore_Dasync);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 186-1, 1),
      _V10vcore_Dawait);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 1,
      _V40_V10vcore_Dawait);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 187-1, 1),
      _V10vcore_Drealpath);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 1,
      _V40_V10vcore_Drealpath);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 188-1, 1),
      _V10vcore_Dmake__temporary__file);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 1,
      _V40_V10vcore_Dmake__temporary__file);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 189-1, 1),
      _V10vcore_Daccess);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 1,
      _V40_V10vcore_Daccess);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 190-1, 1),
      _V10vcore_Dcurrent__jiffy);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 190-1, 0)), 1,
      _V40_V10vcore_Dcurrent__jiffy);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 191-1, 1),
      _V10vcore_Djiffies__per__second);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 191-1, 0)), 1,
      _V40_V10vcore_Djiffies__per__second);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 192-1, 1),
      _V10vcore_Dbitwise__not);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 192-1, 0)), 1,
      _V40_V10vcore_Dbitwise__not);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 193-1, 1),
      _V10vcore_Dbitwise__ior);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 193-1, 0)), 1,
      _V40_V10vcore_Dbitwise__ior);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 194-1, 1),
      _V10vcore_Dbitwise__xor);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 194-1, 0)), 1,
      _V40_V10vcore_Dbitwise__xor);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 195-1, 1),
      _V10vcore_Dbitwise__and);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 195-1, 0)), 1,
      _V40_V10vcore_Dbitwise__and);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 196-1, 1),
      _V10vcore_Dbitwise__xnor);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 196-1, 0)), 1,
      _V40_V10vcore_Dbitwise__xnor);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 197-1, 1),
      _V10vcore_Dbitwise__nand);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 197-1, 0)), 1,
      _V40_V10vcore_Dbitwise__nand);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 198-1, 1),
      _V10vcore_Dbitwise__nor);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 198-1, 0)), 1,
      _V40_V10vcore_Dbitwise__nor);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 199-1, 1),
      _V10vcore_Dbitwise__andc1);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 199-1, 0)), 1,
      _V40_V10vcore_Dbitwise__andc1);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 200-1, 1),
      _V10vcore_Dbitwise__andc2);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 200-1, 0)), 1,
      _V40_V10vcore_Dbitwise__andc2);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 201-1, 1),
      _V10vcore_Dbitwise__orc1);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 201-1, 0)), 1,
      _V40_V10vcore_Dbitwise__orc1);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 202-1, 1),
      _V10vcore_Dbitwise__orc2);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 202-1, 0)), 1,
      _V40_V10vcore_Dbitwise__orc2);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 203-1, 1),
      _V10vcore_Darithmetic__shift);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 203-1, 0)), 1,
      _V40_V10vcore_Darithmetic__shift);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 204-1, 1),
      _V10vcore_Dbit__count);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 204-1, 0)), 1,
      _V40_V10vcore_Dbit__count);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 204-1, 0)), 1,
      VEncodeBool(false));
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
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.526) ((##vcore.eq? (bruijn ##.sym.9 1 1) '##vcore.inexact)) (if (bruijn ##.%p.526 0 0) ((bruijn ##.%k.22 1 0) (##intrinsic ##vcore.inexact)) (basic-block 1 1 (##.%p.527) ((##vcore.eq? (bruijn ##.sym.9 2 1) '##vcore.exact)) (if (bruijn ##.%p.527 0 0) ((bruijn ##.%k.22 2 0) (##intrinsic ##vcore.exact)) (basic-block 1 1 (##.%p.528) ((##vcore.eq? (bruijn ##.sym.9 3 1) '##vcore.+)) (if (bruijn ##.%p.528 0 0) ((bruijn ##.%k.22 3 0) (##intrinsic ##vcore.+)) (basic-block 1 1 (##.%p.529) ((##vcore.eq? (bruijn ##.sym.9 4 1) '##vcore.-)) (if (bruijn ##.%p.529 0 0) ((bruijn ##.%k.22 4 0) (##intrinsic ##vcore.-)) (basic-block 1 1 (##.%p.530) ((##vcore.eq? (bruijn ##.sym.9 5 1) '##vcore.*)) (if (bruijn ##.%p.530 0 0) ((bruijn ##.%k.22 5 0) (##intrinsic ##vcore.*)) (basic-block 1 1 (##.%p.531) ((##vcore.eq? (bruijn ##.sym.9 6 1) '##vcore./)) (if (bruijn ##.%p.531 0 0) ((bruijn ##.%k.22 6 0) (##intrinsic ##vcore./)) (basic-block 1 1 (##.%p.532) ((##vcore.eq? (bruijn ##.sym.9 7 1) '##vcore.cmp)) (if (bruijn ##.%p.532 0 0) ((bruijn ##.%k.22 7 0) (##intrinsic ##vcore.cmp)) (basic-block 1 1 (##.%p.533) ((##vcore.eq? (bruijn ##.sym.9 8 1) '##vcore.<=)) (if (bruijn ##.%p.533 0 0) ((bruijn ##.%k.22 8 0) (##intrinsic ##vcore.<=)) (basic-block 1 1 (##.%p.534) ((##vcore.eq? (bruijn ##.sym.9 9 1) '##vcore.<)) (if (bruijn ##.%p.534 0 0) ((bruijn ##.%k.22 9 0) (##intrinsic ##vcore.<)) (basic-block 1 1 (##.%p.535) ((##vcore.eq? (bruijn ##.sym.9 10 1) '##vcore.=)) (if (bruijn ##.%p.535 0 0) ((bruijn ##.%k.22 10 0) (##intrinsic ##vcore.=)) (basic-block 1 1 (##.%p.536) ((##vcore.eq? (bruijn ##.sym.9 11 1) '##vcore.>=)) (if (bruijn ##.%p.536 0 0) ((bruijn ##.%k.22 11 0) (##intrinsic ##vcore.>=)) (basic-block 1 1 (##.%p.537) ((##vcore.eq? (bruijn ##.sym.9 12 1) '##vcore.>)) (if (bruijn ##.%p.537 0 0) ((bruijn ##.%k.22 12 0) (##intrinsic ##vcore.>)) (basic-block 1 1 (##.%p.538) ((##vcore.eq? (bruijn ##.sym.9 13 1) '##vcore.quotient)) (if (bruijn ##.%p.538 0 0) ((bruijn ##.%k.22 13 0) (##intrinsic ##vcore.quotient)) (basic-block 1 1 (##.%p.539) ((##vcore.eq? (bruijn ##.sym.9 14 1) '##vcore.remainder)) (if (bruijn ##.%p.539 0 0) ((bruijn ##.%k.22 14 0) (##intrinsic ##vcore.remainder)) (basic-block 1 1 (##.%p.540) ((##vcore.eq? (bruijn ##.sym.9 15 1) '##vcore.null?)) (if (bruijn ##.%p.540 0 0) ((bruijn ##.%k.22 15 0) (##intrinsic ##vcore.null?)) (basic-block 1 1 (##.%p.541) ((##vcore.eq? (bruijn ##.sym.9 16 1) '##vcore.pair?)) (if (bruijn ##.%p.541 0 0) ((bruijn ##.%k.22 16 0) (##intrinsic ##vcore.pair?)) (basic-block 1 1 (##.%p.542) ((##vcore.eq? (bruijn ##.sym.9 17 1) '##vcore.vector?)) (if (bruijn ##.%p.542 0 0) ((bruijn ##.%k.22 17 0) (##intrinsic ##vcore.vector?)) (basic-block 1 1 (##.%p.543) ((##vcore.eq? (bruijn ##.sym.9 18 1) '##vcore.hash-table?)) (if (bruijn ##.%p.543 0 0) ((bruijn ##.%k.22 18 0) (##intrinsic ##vcore.hash-table?)) (basic-block 1 1 (##.%p.544) ((##vcore.eq? (bruijn ##.sym.9 19 1) '##vcore.record?)) (if (bruijn ##.%p.544 0 0) ((bruijn ##.%k.22 19 0) (##intrinsic ##vcore.record?)) (basic-block 1 1 (##.%p.545) ((##vcore.eq? (bruijn ##.sym.9 20 1) '##vcore.procedure?)) (if (bruijn ##.%p.545 0 0) ((bruijn ##.%k.22 20 0) (##intrinsic ##vcore.procedure?)) (basic-block 1 1 (##.%p.546) ((##vcore.eq? (bruijn ##.sym.9 21 1) '##vcore.blob?)) (if (bruijn ##.%p.546 0 0) ((bruijn ##.%k.22 21 0) (##intrinsic ##vcore.blob?)) (basic-block 1 1 (##.%p.547) ((##vcore.eq? (bruijn ##.sym.9 22 1) '##vcore.symbol?)) (if (bruijn ##.%p.547 0 0) ((bruijn ##.%k.22 22 0) (##intrinsic ##vcore.symbol?)) (basic-block 1 1 (##.%p.548) ((##vcore.eq? (bruijn ##.sym.9 23 1) '##vcore.string?)) (if (bruijn ##.%p.548 0 0) ((bruijn ##.%k.22 23 0) (##intrinsic ##vcore.string?)) (basic-block 1 1 (##.%p.549) ((##vcore.eq? (bruijn ##.sym.9 24 1) '##vcore.int?)) (if (bruijn ##.%p.549 0 0) ((bruijn ##.%k.22 24 0) (##intrinsic ##vcore.int?)) (basic-block 1 1 (##.%p.550) ((##vcore.eq? (bruijn ##.sym.9 25 1) '##vcore.double?)) (if (bruijn ##.%p.550 0 0) ((bruijn ##.%k.22 25 0) (##intrinsic ##vcore.double?)) (basic-block 1 1 (##.%p.551) ((##vcore.eq? (bruijn ##.sym.9 26 1) '##vcore.char?)) (if (bruijn ##.%p.551 0 0) ((bruijn ##.%k.22 26 0) (##intrinsic ##vcore.char?)) (basic-block 1 1 (##.%p.552) ((##vcore.eq? (bruijn ##.sym.9 27 1) '##vcore.void?)) (if (bruijn ##.%p.552 0 0) ((bruijn ##.%k.22 27 0) (##intrinsic ##vcore.void?)) (basic-block 1 1 (##.%p.553) ((##vcore.eq? (bruijn ##.sym.9 28 1) '##vcore.nullptr?)) (if (bruijn ##.%p.553 0 0) ((bruijn ##.%k.22 28 0) (##intrinsic ##vcore.nullptr?)) (basic-block 1 1 (##.%p.554) ((##vcore.eq? (bruijn ##.sym.9 29 1) '##vcore.foreign-pointer?)) (if (bruijn ##.%p.554 0 0) ((bruijn ##.%k.22 29 0) (##intrinsic ##vcore.foreign-pointer?)) (basic-block 1 1 (##.%p.555) ((##vcore.eq? (bruijn ##.sym.9 30 1) '##vcore.eq?)) (if (bruijn ##.%p.555 0 0) ((bruijn ##.%k.22 30 0) (##intrinsic ##vcore.eq?)) (basic-block 1 1 (##.%p.556) ((##vcore.eq? (bruijn ##.sym.9 31 1) '##vcore.symbol=?)) (if (bruijn ##.%p.556 0 0) ((bruijn ##.%k.22 31 0) (##intrinsic ##vcore.symbol=?)) (basic-block 1 1 (##.%p.557) ((##vcore.eq? (bruijn ##.sym.9 32 1) '##vcore.blob=?)) (if (bruijn ##.%p.557 0 0) ((bruijn ##.%k.22 32 0) (##intrinsic ##vcore.blob=?)) (basic-block 1 1 (##.%p.558) ((##vcore.eq? (bruijn ##.sym.9 33 1) '##vcore.eqv?)) (if (bruijn ##.%p.558 0 0) ((bruijn ##.%k.22 33 0) (##intrinsic ##vcore.eq?)) (basic-block 1 1 (##.%p.559) ((##vcore.eq? (bruijn ##.sym.9 34 1) '##vcore.not)) (if (bruijn ##.%p.559 0 0) ((bruijn ##.%k.22 34 0) (##intrinsic ##vcore.not)) (basic-block 1 1 (##.%p.560) ((##vcore.eq? (bruijn ##.sym.9 35 1) '##vcore.get-dynamics)) (if (bruijn ##.%p.560 0 0) ((bruijn ##.%k.22 35 0) (##intrinsic ##vcore.get-dynamics)) (basic-block 1 1 (##.%p.561) ((##vcore.eq? (bruijn ##.sym.9 36 1) '##vcore.push-dynamic)) (if (bruijn ##.%p.561 0 0) ((bruijn ##.%k.22 36 0) (##intrinsic ##vcore.push-dynamic)) (basic-block 1 1 (##.%p.562) ((##vcore.eq? (bruijn ##.sym.9 37 1) '##vcore.pop-dynamic)) (if (bruijn ##.%p.562 0 0) ((bruijn ##.%k.22 37 0) (##intrinsic ##vcore.pop-dynamic)) (basic-block 1 1 (##.%p.563) ((##vcore.eq? (bruijn ##.sym.9 38 1) '##vcore.get-exception-handler)) (if (bruijn ##.%p.563 0 0) ((bruijn ##.%k.22 38 0) (##intrinsic ##vcore.get-exception-handler)) (basic-block 1 1 (##.%p.564) ((##vcore.eq? (bruijn ##.sym.9 39 1) '##vcore.push-exception-handler)) (if (bruijn ##.%p.564 0 0) ((bruijn ##.%k.22 39 0) (##intrinsic ##vcore.push-exception-handler)) (basic-block 1 1 (##.%p.565) ((##vcore.eq? (bruijn ##.sym.9 40 1) '##vcore.pop-exception-handler)) (if (bruijn ##.%p.565 0 0) ((bruijn ##.%k.22 40 0) (##intrinsic ##vcore.pop-exception-handler)) (basic-block 1 1 (##.%p.566) ((##vcore.eq? (bruijn ##.sym.9 41 1) '##vcore.raise)) (if (bruijn ##.%p.566 0 0) ((bruijn ##.%k.22 41 0) (##intrinsic ##vcore.raise)) (basic-block 1 1 (##.%p.567) ((##vcore.eq? (bruijn ##.sym.9 42 1) '##vcore.next)) (if (bruijn ##.%p.567 0 0) ((bruijn ##.%k.22 42 0) (##intrinsic ##vcore.next)) (basic-block 1 1 (##.%p.568) ((##vcore.eq? (bruijn ##.sym.9 43 1) '##vcore.call/cc)) (if (bruijn ##.%p.568 0 0) ((bruijn ##.%k.22 43 0) (##intrinsic ##vcore.call/cc)) (basic-block 1 1 (##.%p.569) ((##vcore.eq? (bruijn ##.sym.9 44 1) '##vcore.call-with-values)) (if (bruijn ##.%p.569 0 0) ((bruijn ##.%k.22 44 0) (##intrinsic ##vcore.call-with-values)) (basic-block 1 1 (##.%p.570) ((##vcore.eq? (bruijn ##.sym.9 45 1) '##vcore.apply)) (if (bruijn ##.%p.570 0 0) ((bruijn ##.%k.22 45 0) (##intrinsic ##vcore.apply)) (basic-block 1 1 (##.%p.571) ((##vcore.eq? (bruijn ##.sym.9 46 1) '##vcore.apply-cps)) (if (bruijn ##.%p.571 0 0) ((bruijn ##.%k.22 46 0) (##intrinsic ##vcore.apply-cps)) (basic-block 1 1 (##.%p.572) ((##vcore.eq? (bruijn ##.sym.9 47 1) '##vcore.abort)) (if (bruijn ##.%p.572 0 0) ((bruijn ##.%k.22 47 0) (##intrinsic ##vcore.abort)) (basic-block 1 1 (##.%p.573) ((##vcore.eq? (bruijn ##.sym.9 48 1) '##vcore.exit)) (if (bruijn ##.%p.573 0 0) ((bruijn ##.%k.22 48 0) (##intrinsic ##vcore.exit)) (basic-block 1 1 (##.%p.574) ((##vcore.eq? (bruijn ##.sym.9 49 1) '##vcore.define-global)) (if (bruijn ##.%p.574 0 0) ((bruijn ##.%k.22 49 0) (##intrinsic ##vcore.define-global)) (basic-block 1 1 (##.%p.575) ((##vcore.eq? (bruijn ##.sym.9 50 1) '##vcore.set-global!)) (if (bruijn ##.%p.575 0 0) ((bruijn ##.%k.22 50 0) (##intrinsic ##vcore.set-global!)) (basic-block 1 1 (##.%p.576) ((##vcore.eq? (bruijn ##.sym.9 51 1) '##vcore.record)) (if (bruijn ##.%p.576 0 0) ((bruijn ##.%k.22 51 0) (##intrinsic ##vcore.record)) (basic-block 1 1 (##.%p.577) ((##vcore.eq? (bruijn ##.sym.9 52 1) '##vcore.record-ref)) (if (bruijn ##.%p.577 0 0) ((bruijn ##.%k.22 52 0) (##intrinsic ##vcore.record-ref)) (basic-block 1 1 (##.%p.578) ((##vcore.eq? (bruijn ##.sym.9 53 1) '##vcore.record-set!)) (if (bruijn ##.%p.578 0 0) ((bruijn ##.%k.22 53 0) (##intrinsic ##vcore.record-set!)) (basic-block 1 1 (##.%p.579) ((##vcore.eq? (bruijn ##.sym.9 54 1) '##vcore.record-length)) (if (bruijn ##.%p.579 0 0) ((bruijn ##.%k.22 54 0) (##intrinsic ##vcore.record-length)) (basic-block 1 1 (##.%p.580) ((##vcore.eq? (bruijn ##.sym.9 55 1) '##vcore.function)) (if (bruijn ##.%p.580 0 0) ((bruijn ##.%k.22 55 0) (##intrinsic ##vcore.function)) (basic-block 1 1 (##.%p.581) ((##vcore.eq? (bruijn ##.sym.9 56 1) '##vcore.define)) (if (bruijn ##.%p.581 0 0) ((bruijn ##.%k.22 56 0) (##intrinsic ##vcore.define)) (basic-block 1 1 (##.%p.582) ((##vcore.eq? (bruijn ##.sym.9 57 1) '##vcore.multidefine)) (if (bruijn ##.%p.582 0 0) ((bruijn ##.%k.22 57 0) (##intrinsic ##vcore.multidefine)) (basic-block 1 1 (##.%p.583) ((##vcore.eq? (bruijn ##.sym.9 58 1) '##vcore.lookup-library)) (if (bruijn ##.%p.583 0 0) ((bruijn ##.%k.22 58 0) (##intrinsic ##vcore.lookup-library)) (basic-block 1 1 (##.%p.584) ((##vcore.eq? (bruijn ##.sym.9 59 1) '##vcore.make-import)) (if (bruijn ##.%p.584 0 0) ((bruijn ##.%k.22 59 0) (##intrinsic ##vcore.make-import)) (basic-block 1 1 (##.%p.585) ((##vcore.eq? (bruijn ##.sym.9 60 1) '##vcore.load-library)) (if (bruijn ##.%p.585 0 0) ((bruijn ##.%k.22 60 0) (##intrinsic ##vcore.load-library)) (basic-block 1 1 (##.%p.586) ((##vcore.eq? (bruijn ##.sym.9 61 1) '##vcore.unload-library)) (if (bruijn ##.%p.586 0 0) ((bruijn ##.%k.22 61 0) (##intrinsic ##vcore.unload-library)) (basic-block 1 1 (##.%p.587) ((##vcore.eq? (bruijn ##.sym.9 62 1) '##vcore.cons)) ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3) (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V10vcore_Dinexact);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V40_V10vcore_Dinexact);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      _V10vcore_Dexact);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V40_V10vcore_Dexact);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      _V10vcore_D_P);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _V40_V10vcore_D_P);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[1],
      _V10vcore_D__);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _V40_V10vcore_D__);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      _V10vcore_D_S);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      _V40_V10vcore_D_S);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      _V10vcore_D_W);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _V40_V10vcore_D_W);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dcmp);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      _V40_V10vcore_Dcmp);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      _V10vcore_D_L_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      _V40_V10vcore_D_L_E);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      _V10vcore_D_L);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      _V40_V10vcore_D_L);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      _V10vcore_D_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      _V40_V10vcore_D_E);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      _V10vcore_D_G_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      _V40_V10vcore_D_G_E);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 12-1, 1),
      _V10vcore_D_G);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      _V40_V10vcore_D_G);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      _V10vcore_Dquotient);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      _V40_V10vcore_Dquotient);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      _V10vcore_Dremainder);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      _V40_V10vcore_Dremainder);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dnull_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      _V40_V10vcore_Dnull_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      _V10vcore_Dpair_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      _V40_V10vcore_Dpair_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      _V10vcore_Dvector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      _V40_V10vcore_Dvector_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 18-1, 1),
      _V10vcore_Dhash__table_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      _V40_V10vcore_Dhash__table_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 19-1, 1),
      _V10vcore_Drecord_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      _V40_V10vcore_Drecord_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dprocedure_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      _V40_V10vcore_Dprocedure_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dblob_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      _V40_V10vcore_Dblob_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dsymbol_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      _V40_V10vcore_Dsymbol_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 23-1, 1),
      _V10vcore_Dstring_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      _V40_V10vcore_Dstring_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 24-1, 1),
      _V10vcore_Dint_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      _V40_V10vcore_Dint_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 25-1, 1),
      _V10vcore_Ddouble_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      _V40_V10vcore_Ddouble_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 26-1, 1),
      _V10vcore_Dchar_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      _V40_V10vcore_Dchar_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 27-1, 1),
      _V10vcore_Dvoid_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      _V40_V10vcore_Dvoid_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 28-1, 1),
      _V10vcore_Dnullptr_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      _V40_V10vcore_Dnullptr_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 29-1, 1),
      _V10vcore_Dforeign__pointer_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      _V40_V10vcore_Dforeign__pointer_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 30-1, 1),
      _V10vcore_Deq_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      _V40_V10vcore_Deq_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 31-1, 1),
      _V10vcore_Dsymbol_E_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      _V40_V10vcore_Dsymbol_E_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 32-1, 1),
      _V10vcore_Dblob_E_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      _V40_V10vcore_Dblob_E_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 33-1, 1),
      _V10vcore_Deqv_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      _V40_V10vcore_Deq_Q);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 34-1, 1),
      _V10vcore_Dnot);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      _V40_V10vcore_Dnot);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 35-1, 1),
      _V10vcore_Dget__dynamics);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 1,
      _V40_V10vcore_Dget__dynamics);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 36-1, 1),
      _V10vcore_Dpush__dynamic);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      _V40_V10vcore_Dpush__dynamic);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dpop__dynamic);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      _V40_V10vcore_Dpop__dynamic);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 38-1, 1),
      _V10vcore_Dget__exception__handler);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      _V40_V10vcore_Dget__exception__handler);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 39-1, 1),
      _V10vcore_Dpush__exception__handler);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      _V40_V10vcore_Dpush__exception__handler);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 40-1, 1),
      _V10vcore_Dpop__exception__handler);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      _V40_V10vcore_Dpop__exception__handler);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 41-1, 1),
      _V10vcore_Draise);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      _V40_V10vcore_Draise);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 42-1, 1),
      _V10vcore_Dnext);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      _V40_V10vcore_Dnext);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 43-1, 1),
      _V10vcore_Dcall_Wcc);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      _V40_V10vcore_Dcall_Wcc);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 44-1, 1),
      _V10vcore_Dcall__with__values);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      _V40_V10vcore_Dcall__with__values);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 45-1, 1),
      _V10vcore_Dapply);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      _V40_V10vcore_Dapply);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 46-1, 1),
      _V10vcore_Dapply__cps);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      _V40_V10vcore_Dapply__cps);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 47-1, 1),
      _V10vcore_Dabort);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      _V40_V10vcore_Dabort);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 48-1, 1),
      _V10vcore_Dexit);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      _V40_V10vcore_Dexit);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 49-1, 1),
      _V10vcore_Ddefine__global);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      _V40_V10vcore_Ddefine__global);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 50-1, 1),
      _V10vcore_Dset__global_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      _V40_V10vcore_Dset__global_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 51-1, 1),
      _V10vcore_Drecord);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      _V40_V10vcore_Drecord);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 52-1, 1),
      _V10vcore_Drecord__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      _V40_V10vcore_Drecord__ref);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 53-1, 1),
      _V10vcore_Drecord__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      _V40_V10vcore_Drecord__set_B);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 54-1, 1),
      _V10vcore_Drecord__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 1,
      _V40_V10vcore_Drecord__length);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 55-1, 1),
      _V10vcore_Dfunction);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      _V40_V10vcore_Dfunction);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 56-1, 1),
      _V10vcore_Ddefine);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      _V40_V10vcore_Ddefine);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 57-1, 1),
      _V10vcore_Dmultidefine);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 1,
      _V40_V10vcore_Dmultidefine);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dlookup__library);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      _V40_V10vcore_Dlookup__library);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 59-1, 1),
      _V10vcore_Dmake__import);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 1,
      _V40_V10vcore_Dmake__import);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dload__library);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 1,
      _V40_V10vcore_Dload__library);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 61-1, 1),
      _V10vcore_Dunload__library);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      _V40_V10vcore_Dunload__library);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 62-1, 1),
      _V10vcore_Dcons);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4, self)))));
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
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.764 1 0) ((bruijn ##.%k.311 0 0) (bruijn ##.%p.764 1 0)) (basic-block 1 1 (##.%r.811) ((##vcore.eq? (bruijn ##.sym.11 37 1) '##vcore.qcons)) ((bruijn ##.%k.311 1 0) (bruijn ##.%r.811 0 0))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dqcons);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.263 0 0) ((bruijn ##.%k.228 36 0) #t) (basic-block 1 1 (##.%p.765) ((##vcore.eq? (bruijn ##.sym.11 37 1) '##vcore.car)) (if (bruijn ##.%p.765 0 0) ((bruijn ##.%k.228 37 0) #t) (basic-block 1 1 (##.%p.766) ((##vcore.eq? (bruijn ##.sym.11 38 1) '##vcore.cdr)) (if (bruijn ##.%p.766 0 0) ((bruijn ##.%k.228 38 0) #t) (basic-block 1 1 (##.%p.767) ((##vcore.eq? (bruijn ##.sym.11 39 1) '##vcore.vector-ref)) (if (bruijn ##.%p.767 0 0) ((bruijn ##.%k.228 39 0) #t) (basic-block 1 1 (##.%p.768) ((##vcore.eq? (bruijn ##.sym.11 40 1) '##vcore.vector-length)) (if (bruijn ##.%p.768 0 0) ((bruijn ##.%k.228 40 0) #t) (basic-block 1 1 (##.%p.769) ((##vcore.eq? (bruijn ##.sym.11 41 1) '##vcore.f64vector?)) (if (bruijn ##.%p.769 0 0) ((bruijn ##.%k.228 41 0) #t) (basic-block 1 1 (##.%p.770) ((##vcore.eq? (bruijn ##.sym.11 42 1) '##vcore.f64vector-ref)) (if (bruijn ##.%p.770 0 0) ((bruijn ##.%k.228 42 0) #t) (basic-block 1 1 (##.%p.771) ((##vcore.eq? (bruijn ##.sym.11 43 1) '##vcore.f64vector-set!)) (if (bruijn ##.%p.771 0 0) ((bruijn ##.%k.228 43 0) #t) (basic-block 1 1 (##.%p.772) ((##vcore.eq? (bruijn ##.sym.11 44 1) '##vcore.f64vector-length)) (if (bruijn ##.%p.772 0 0) ((bruijn ##.%k.228 44 0) #t) (basic-block 1 1 (##.%p.773) ((##vcore.eq? (bruijn ##.sym.11 45 1) '##vcore.f32vector?)) (if (bruijn ##.%p.773 0 0) ((bruijn ##.%k.228 45 0) #t) (basic-block 1 1 (##.%p.774) ((##vcore.eq? (bruijn ##.sym.11 46 1) '##vcore.f32vector-ref)) (if (bruijn ##.%p.774 0 0) ((bruijn ##.%k.228 46 0) #t) (basic-block 1 1 (##.%p.775) ((##vcore.eq? (bruijn ##.sym.11 47 1) '##vcore.f32vector-set!)) (if (bruijn ##.%p.775 0 0) ((bruijn ##.%k.228 47 0) #t) (basic-block 1 1 (##.%p.776) ((##vcore.eq? (bruijn ##.sym.11 48 1) '##vcore.f32vector-length)) (if (bruijn ##.%p.776 0 0) ((bruijn ##.%k.228 48 0) #t) (basic-block 1 1 (##.%p.777) ((##vcore.eq? (bruijn ##.sym.11 49 1) '##vcore.s32vector?)) (if (bruijn ##.%p.777 0 0) ((bruijn ##.%k.228 49 0) #t) (basic-block 1 1 (##.%p.778) ((##vcore.eq? (bruijn ##.sym.11 50 1) '##vcore.s32vector-ref)) (if (bruijn ##.%p.778 0 0) ((bruijn ##.%k.228 50 0) #t) (basic-block 1 1 (##.%p.779) ((##vcore.eq? (bruijn ##.sym.11 51 1) '##vcore.s32vector-set!)) (if (bruijn ##.%p.779 0 0) ((bruijn ##.%k.228 51 0) #t) (basic-block 1 1 (##.%p.780) ((##vcore.eq? (bruijn ##.sym.11 52 1) '##vcore.s32vector-length)) (if (bruijn ##.%p.780 0 0) ((bruijn ##.%k.228 52 0) #t) (basic-block 1 1 (##.%p.781) ((##vcore.eq? (bruijn ##.sym.11 53 1) '##vcore.s16vector?)) (if (bruijn ##.%p.781 0 0) ((bruijn ##.%k.228 53 0) #t) (basic-block 1 1 (##.%p.782) ((##vcore.eq? (bruijn ##.sym.11 54 1) '##vcore.s16vector-ref)) (if (bruijn ##.%p.782 0 0) ((bruijn ##.%k.228 54 0) #t) (basic-block 1 1 (##.%p.783) ((##vcore.eq? (bruijn ##.sym.11 55 1) '##vcore.s16vector-set!)) (if (bruijn ##.%p.783 0 0) ((bruijn ##.%k.228 55 0) #t) (basic-block 1 1 (##.%p.784) ((##vcore.eq? (bruijn ##.sym.11 56 1) '##vcore.s16vector-length)) (if (bruijn ##.%p.784 0 0) ((bruijn ##.%k.228 56 0) #t) (basic-block 1 1 (##.%p.785) ((##vcore.eq? (bruijn ##.sym.11 57 1) '##vcore.u16vector?)) (if (bruijn ##.%p.785 0 0) ((bruijn ##.%k.228 57 0) #t) (basic-block 1 1 (##.%p.786) ((##vcore.eq? (bruijn ##.sym.11 58 1) '##vcore.u16vector-ref)) (if (bruijn ##.%p.786 0 0) ((bruijn ##.%k.228 58 0) #t) (basic-block 1 1 (##.%p.787) ((##vcore.eq? (bruijn ##.sym.11 59 1) '##vcore.u16vector-set!)) (if (bruijn ##.%p.787 0 0) ((bruijn ##.%k.228 59 0) #t) (basic-block 1 1 (##.%p.788) ((##vcore.eq? (bruijn ##.sym.11 60 1) '##vcore.u16vector-length)) (if (bruijn ##.%p.788 0 0) ((bruijn ##.%k.228 60 0) #t) (basic-block 1 1 (##.%p.789) ((##vcore.eq? (bruijn ##.sym.11 61 1) '##vcore.s8vector?)) (if (bruijn ##.%p.789 0 0) ((bruijn ##.%k.228 61 0) #t) (basic-block 1 1 (##.%p.790) ((##vcore.eq? (bruijn ##.sym.11 62 1) '##vcore.s8vector-ref)) (if (bruijn ##.%p.790 0 0) ((bruijn ##.%k.228 62 0) #t) (basic-block 1 1 (##.%p.791) ((##vcore.eq? (bruijn ##.sym.11 63 1) '##vcore.s8vector-set!)) (if (bruijn ##.%p.791 0 0) ((bruijn ##.%k.228 63 0) #t) (basic-block 1 1 (##.%p.792) ((##vcore.eq? (bruijn ##.sym.11 64 1) '##vcore.s8vector-length)) (if (bruijn ##.%p.792 0 0) ((bruijn ##.%k.228 64 0) #t) (basic-block 1 1 (##.%p.793) ((##vcore.eq? (bruijn ##.sym.11 65 1) '##vcore.u8vector?)) (if (bruijn ##.%p.793 0 0) ((bruijn ##.%k.228 65 0) #t) (basic-block 1 1 (##.%p.794) ((##vcore.eq? (bruijn ##.sym.11 66 1) '##vcore.u8vector-ref)) (if (bruijn ##.%p.794 0 0) ((bruijn ##.%k.228 66 0) #t) (basic-block 1 1 (##.%p.795) ((##vcore.eq? (bruijn ##.sym.11 67 1) '##vcore.u8vector-set!)) (if (bruijn ##.%p.795 0 0) ((bruijn ##.%k.228 67 0) #t) (basic-block 1 1 (##.%p.796) ((##vcore.eq? (bruijn ##.sym.11 68 1) '##vcore.u8vector-length)) (if (bruijn ##.%p.796 0 0) ((bruijn ##.%k.228 68 0) #t) (basic-block 1 1 (##.%p.797) ((##vcore.eq? (bruijn ##.sym.11 69 1) '##vcore.record-ref)) (if (bruijn ##.%p.797 0 0) ((bruijn ##.%k.228 69 0) #t) (basic-block 1 1 (##.%p.798) ((##vcore.eq? (bruijn ##.sym.11 70 1) '##vcore.record-length)) (if (bruijn ##.%p.798 0 0) ((bruijn ##.%k.228 70 0) #t) (basic-block 1 1 (##.%p.799) ((##vcore.eq? (bruijn ##.sym.11 71 1) '##vcore.string-ref)) (if (bruijn ##.%p.799 0 0) ((bruijn ##.%k.228 71 0) #t) (basic-block 1 1 (##.%p.800) ((##vcore.eq? (bruijn ##.sym.11 72 1) '##vcore.string-set!)) (if (bruijn ##.%p.800 0 0) ((bruijn ##.%k.228 72 0) #t) (basic-block 1 1 (##.%p.801) ((##vcore.eq? (bruijn ##.sym.11 73 1) '##vcore.string-length)) (if (bruijn ##.%p.801 0 0) ((bruijn ##.%k.228 73 0) #t) (basic-block 1 1 (##.%p.802) ((##vcore.eq? (bruijn ##.sym.11 74 1) '##vcore.string->number)) (if (bruijn ##.%p.802 0 0) ((bruijn ##.%k.228 74 0) #t) (basic-block 1 1 (##.%p.803) ((##vcore.eq? (bruijn ##.sym.11 75 1) '##vcore.char-integer)) (if (bruijn ##.%p.803 0 0) ((bruijn ##.%k.228 75 0) #t) (basic-block 1 1 (##.%p.804) ((##vcore.eq? (bruijn ##.sym.11 76 1) '##vcore.read-char)) (if (bruijn ##.%p.804 0 0) ((bruijn ##.%k.228 76 0) #t) (basic-block 1 1 (##.%p.805) ((##vcore.eq? (bruijn ##.sym.11 77 1) '##vcore.display-word)) (if (bruijn ##.%p.805 0 0) ((bruijn ##.%k.228 77 0) #t) (basic-block 1 1 (##.%p.806) ((##vcore.eq? (bruijn ##.sym.11 78 1) '##vcore.write)) (if (bruijn ##.%p.806 0 0) ((bruijn ##.%k.228 78 0) #t) (basic-block 1 1 (##.%p.807) ((##vcore.eq? (bruijn ##.sym.11 79 1) '##vcore.newline)) (if (bruijn ##.%p.807 0 0) ((bruijn ##.%k.228 79 0) #t) (basic-block 1 1 (##.%p.808) ((##vcore.eq? (bruijn ##.sym.11 80 1) '##vcore.display-stdout)) (if (bruijn ##.%p.808 0 0) ((bruijn ##.%k.228 80 0) #t) (basic-block 1 1 (##.%p.809) ((##vcore.eq? (bruijn ##.sym.11 81 1) '##vcore.write-stdout)) (if (bruijn ##.%p.809 0 0) ((bruijn ##.%k.228 81 0) #t) (basic-block 1 1 (##.%p.810) ((##vcore.eq? (bruijn ##.sym.11 82 1) '##vcore.newline-stdout)) (if (bruijn ##.%p.810 0 0) ((bruijn ##.%k.228 82 0) #t) ((bruijn ##.%k.228 82 0) #f))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dcar);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 38-1, 1),
      _V10vcore_Dcdr);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 39-1, 1),
      _V10vcore_Dvector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 40-1, 1),
      _V10vcore_Dvector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 41-1, 1),
      _V10vcore_Df64vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 42-1, 1),
      _V10vcore_Df64vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 43-1, 1),
      _V10vcore_Df64vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 44-1, 1),
      _V10vcore_Df64vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 45-1, 1),
      _V10vcore_Df32vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 46-1, 1),
      _V10vcore_Df32vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 47-1, 1),
      _V10vcore_Df32vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 48-1, 1),
      _V10vcore_Df32vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 49-1, 1),
      _V10vcore_Ds32vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 50-1, 1),
      _V10vcore_Ds32vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 51-1, 1),
      _V10vcore_Ds32vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 52-1, 1),
      _V10vcore_Ds32vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 53-1, 1),
      _V10vcore_Ds16vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 54-1, 1),
      _V10vcore_Ds16vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 55-1, 1),
      _V10vcore_Ds16vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 56-1, 1),
      _V10vcore_Ds16vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 57-1, 1),
      _V10vcore_Du16vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 58-1, 1),
      _V10vcore_Du16vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 59-1, 1),
      _V10vcore_Du16vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 60-1, 1),
      _V10vcore_Du16vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 61-1, 1),
      _V10vcore_Ds8vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 62-1, 1),
      _V10vcore_Ds8vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 63-1, 1),
      _V10vcore_Ds8vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 64-1, 1),
      _V10vcore_Ds8vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 65-1, 1),
      _V10vcore_Du8vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 66-1, 1),
      _V10vcore_Du8vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 67-1, 1),
      _V10vcore_Du8vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 68-1, 1),
      _V10vcore_Du8vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 69-1, 1),
      _V10vcore_Drecord__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 70-1, 1),
      _V10vcore_Drecord__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 71-1, 1),
      _V10vcore_Dstring__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 72-1, 1),
      _V10vcore_Dstring__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 73-1, 1),
      _V10vcore_Dstring__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 74-1, 1),
      _V10vcore_Dstring___Gnumber);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 75-1, 1),
      _V10vcore_Dchar__integer);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 76-1, 1),
      _V10vcore_Dread__char);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 77-1, 1),
      _V10vcore_Ddisplay__word);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 78-1, 1),
      _V10vcore_Dwrite);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 79-1, 1),
      _V10vcore_Dnewline);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 80-1, 1),
      _V10vcore_Ddisplay__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 81-1, 1),
      _V10vcore_Dwrite__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 82-1, 1),
      _V10vcore_Dnewline__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      VEncodeBool(false));
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
}
    }
}
    }
}
}
void _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.730) ((##vcore.eq? (bruijn ##.sym.11 1 1) '##vcore.inexact)) (if (bruijn ##.%p.730 0 0) ((bruijn ##.%k.228 1 0) #t) (basic-block 1 1 (##.%p.731) ((##vcore.eq? (bruijn ##.sym.11 2 1) '##vcore.exact)) (if (bruijn ##.%p.731 0 0) ((bruijn ##.%k.228 2 0) #t) (basic-block 1 1 (##.%p.732) ((##vcore.eq? (bruijn ##.sym.11 3 1) '##vcore.+)) (if (bruijn ##.%p.732 0 0) ((bruijn ##.%k.228 3 0) #t) (basic-block 1 1 (##.%p.733) ((##vcore.eq? (bruijn ##.sym.11 4 1) '##vcore.-)) (if (bruijn ##.%p.733 0 0) ((bruijn ##.%k.228 4 0) #t) (basic-block 1 1 (##.%p.734) ((##vcore.eq? (bruijn ##.sym.11 5 1) '##vcore.*)) (if (bruijn ##.%p.734 0 0) ((bruijn ##.%k.228 5 0) #t) (basic-block 1 1 (##.%p.735) ((##vcore.eq? (bruijn ##.sym.11 6 1) '##vcore./)) (if (bruijn ##.%p.735 0 0) ((bruijn ##.%k.228 6 0) #t) (basic-block 1 1 (##.%p.736) ((##vcore.eq? (bruijn ##.sym.11 7 1) '##vcore.quotient)) (if (bruijn ##.%p.736 0 0) ((bruijn ##.%k.228 7 0) #t) (basic-block 1 1 (##.%p.737) ((##vcore.eq? (bruijn ##.sym.11 8 1) '##vcore.remainder)) (if (bruijn ##.%p.737 0 0) ((bruijn ##.%k.228 8 0) #t) (basic-block 1 1 (##.%p.738) ((##vcore.eq? (bruijn ##.sym.11 9 1) '##vcore.<=)) (if (bruijn ##.%p.738 0 0) ((bruijn ##.%k.228 9 0) #t) (basic-block 1 1 (##.%p.739) ((##vcore.eq? (bruijn ##.sym.11 10 1) '##vcore.<)) (if (bruijn ##.%p.739 0 0) ((bruijn ##.%k.228 10 0) #t) (basic-block 1 1 (##.%p.740) ((##vcore.eq? (bruijn ##.sym.11 11 1) '##vcore.=)) (if (bruijn ##.%p.740 0 0) ((bruijn ##.%k.228 11 0) #t) (basic-block 1 1 (##.%p.741) ((##vcore.eq? (bruijn ##.sym.11 12 1) '##vcore.>=)) (if (bruijn ##.%p.741 0 0) ((bruijn ##.%k.228 12 0) #t) (basic-block 1 1 (##.%p.742) ((##vcore.eq? (bruijn ##.sym.11 13 1) '##vcore.>)) (if (bruijn ##.%p.742 0 0) ((bruijn ##.%k.228 13 0) #t) (basic-block 1 1 (##.%p.743) ((##vcore.eq? (bruijn ##.sym.11 14 1) '##vcore.null?)) (if (bruijn ##.%p.743 0 0) ((bruijn ##.%k.228 14 0) #t) (basic-block 1 1 (##.%p.744) ((##vcore.eq? (bruijn ##.sym.11 15 1) '##vcore.pair?)) (if (bruijn ##.%p.744 0 0) ((bruijn ##.%k.228 15 0) #t) (basic-block 1 1 (##.%p.745) ((##vcore.eq? (bruijn ##.sym.11 16 1) '##vcore.eof-object?)) (if (bruijn ##.%p.745 0 0) ((bruijn ##.%k.228 16 0) #t) (basic-block 1 1 (##.%p.746) ((##vcore.eq? (bruijn ##.sym.11 17 1) '##vcore.vector?)) (if (bruijn ##.%p.746 0 0) ((bruijn ##.%k.228 17 0) #t) (basic-block 1 1 (##.%p.747) ((##vcore.eq? (bruijn ##.sym.11 18 1) '##vcore.record?)) (if (bruijn ##.%p.747 0 0) ((bruijn ##.%k.228 18 0) #t) (basic-block 1 1 (##.%p.748) ((##vcore.eq? (bruijn ##.sym.11 19 1) '##vcore.hash-table?)) (if (bruijn ##.%p.748 0 0) ((bruijn ##.%k.228 19 0) #t) (basic-block 1 1 (##.%p.749) ((##vcore.eq? (bruijn ##.sym.11 20 1) '##vcore.procedure?)) (if (bruijn ##.%p.749 0 0) ((bruijn ##.%k.228 20 0) #t) (basic-block 1 1 (##.%p.750) ((##vcore.eq? (bruijn ##.sym.11 21 1) '##vcore.blob?)) (if (bruijn ##.%p.750 0 0) ((bruijn ##.%k.228 21 0) #t) (basic-block 1 1 (##.%p.751) ((##vcore.eq? (bruijn ##.sym.11 22 1) '##vcore.symbol?)) (if (bruijn ##.%p.751 0 0) ((bruijn ##.%k.228 22 0) #t) (basic-block 1 1 (##.%p.752) ((##vcore.eq? (bruijn ##.sym.11 23 1) '##vcore.string?)) (if (bruijn ##.%p.752 0 0) ((bruijn ##.%k.228 23 0) #t) (basic-block 1 1 (##.%p.753) ((##vcore.eq? (bruijn ##.sym.11 24 1) '##vcore.double?)) (if (bruijn ##.%p.753 0 0) ((bruijn ##.%k.228 24 0) #t) (basic-block 1 1 (##.%p.754) ((##vcore.eq? (bruijn ##.sym.11 25 1) '##vcore.int?)) (if (bruijn ##.%p.754 0 0) ((bruijn ##.%k.228 25 0) #t) (basic-block 1 1 (##.%p.755) ((##vcore.eq? (bruijn ##.sym.11 26 1) '##vcore.char?)) (if (bruijn ##.%p.755 0 0) ((bruijn ##.%k.228 26 0) #t) (basic-block 1 1 (##.%p.756) ((##vcore.eq? (bruijn ##.sym.11 27 1) '##vcore.void?)) (if (bruijn ##.%p.756 0 0) ((bruijn ##.%k.228 27 0) #t) (basic-block 1 1 (##.%p.757) ((##vcore.eq? (bruijn ##.sym.11 28 1) '##vcore.nullptr?)) (if (bruijn ##.%p.757 0 0) ((bruijn ##.%k.228 28 0) #t) (basic-block 1 1 (##.%p.758) ((##vcore.eq? (bruijn ##.sym.11 29 1) '##vcore.foreign-pointer?)) (if (bruijn ##.%p.758 0 0) ((bruijn ##.%k.228 29 0) #t) (basic-block 1 1 (##.%p.759) ((##vcore.eq? (bruijn ##.sym.11 30 1) '##vcore.not)) (if (bruijn ##.%p.759 0 0) ((bruijn ##.%k.228 30 0) #t) (basic-block 1 1 (##.%p.760) ((##vcore.eq? (bruijn ##.sym.11 31 1) '##vcore.eq?)) (if (bruijn ##.%p.760 0 0) ((bruijn ##.%k.228 31 0) #t) (basic-block 1 1 (##.%p.761) ((##vcore.eq? (bruijn ##.sym.11 32 1) '##vcore.symbol=?)) (if (bruijn ##.%p.761 0 0) ((bruijn ##.%k.228 32 0) #t) (basic-block 1 1 (##.%p.762) ((##vcore.eq? (bruijn ##.sym.11 33 1) '##vcore.blob=?)) (if (bruijn ##.%p.762 0 0) ((bruijn ##.%k.228 33 0) #t) (basic-block 1 1 (##.%p.763) ((##vcore.eq? (bruijn ##.sym.11 34 1) '##vcore.eqv?)) (if (bruijn ##.%p.763 0 0) ((bruijn ##.%k.228 34 0) #t) (basic-block 1 1 (##.%p.764) ((##vcore.eq? (bruijn ##.sym.11 35 1) '##vcore.cons)) ((close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k5) (close _V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k6)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V10vcore_Dinexact);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      _V10vcore_Dexact);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      _V10vcore_D_P);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[1],
      _V10vcore_D__);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      _V10vcore_D_S);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      _V10vcore_D_W);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dquotient);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      _V10vcore_Dremainder);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      _V10vcore_D_L_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      _V10vcore_D_L);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      _V10vcore_D_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 12-1, 1),
      _V10vcore_D_G_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      _V10vcore_D_G);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      _V10vcore_Dnull_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dpair_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      _V10vcore_Deof__object_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      _V10vcore_Dvector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 18-1, 1),
      _V10vcore_Drecord_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 19-1, 1),
      _V10vcore_Dhash__table_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dprocedure_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dblob_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dsymbol_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 23-1, 1),
      _V10vcore_Dstring_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 24-1, 1),
      _V10vcore_Ddouble_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 25-1, 1),
      _V10vcore_Dint_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 26-1, 1),
      _V10vcore_Dchar_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 27-1, 1),
      _V10vcore_Dvoid_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 28-1, 1),
      _V10vcore_Dnullptr_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 29-1, 1),
      _V10vcore_Dforeign__pointer_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 30-1, 1),
      _V10vcore_Dnot);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 31-1, 1),
      _V10vcore_Deq_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 32-1, 1),
      _V10vcore_Dsymbol_E_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 33-1, 1),
      _V10vcore_Dblob_E_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 34-1, 1),
      _V10vcore_Deqv_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 35-1, 1),
      _V10vcore_Dcons);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k6, self)))));
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
    }
}
    }
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.871 1 0) ((bruijn ##.%k.517 0 0) (bruijn ##.%p.871 1 0)) (basic-block 1 1 (##.%r.1015) ((##vcore.eq? (bruijn ##.sym.13 62 1) '##vcore.qcons)) ((bruijn ##.%k.517 1 0) (bruijn ##.%r.1015 0 0))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 62-1, 1),
      _V10vcore_Dqcons);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.372 0 0) ((bruijn ##.%k.312 61 0) (##string ##.string.1198)) (basic-block 1 1 (##.%p.872) ((##vcore.eq? (bruijn ##.sym.13 62 1) '##vcore.car)) (if (bruijn ##.%p.872 0 0) ((bruijn ##.%k.312 62 0) (##string ##.string.1199)) (basic-block 1 1 (##.%p.873) ((##vcore.eq? (bruijn ##.sym.13 63 1) '##vcore.cdr)) (if (bruijn ##.%p.873 0 0) ((bruijn ##.%k.312 63 0) (##string ##.string.1200)) (basic-block 1 1 (##.%p.874) ((##vcore.eq? (bruijn ##.sym.13 64 1) '##vcore.set-car!)) (if (bruijn ##.%p.874 0 0) ((bruijn ##.%k.312 64 0) (##string ##.string.1201)) (basic-block 1 1 (##.%p.875) ((##vcore.eq? (bruijn ##.sym.13 65 1) '##vcore.set-cdr!)) (if (bruijn ##.%p.875 0 0) ((bruijn ##.%k.312 65 0) (##string ##.string.1202)) (basic-block 1 1 (##.%p.876) ((##vcore.eq? (bruijn ##.sym.13 66 1) '##vcore.append)) (if (bruijn ##.%p.876 0 0) ((bruijn ##.%k.312 66 0) (##string ##.string.1203)) (basic-block 1 1 (##.%p.877) ((##vcore.eq? (bruijn ##.sym.13 67 1) '##vcore.vector)) (if (bruijn ##.%p.877 0 0) ((bruijn ##.%k.312 67 0) (##string ##.string.1204)) (basic-block 1 1 (##.%p.878) ((##vcore.eq? (bruijn ##.sym.13 68 1) '##vcore.make-vector)) (if (bruijn ##.%p.878 0 0) ((bruijn ##.%k.312 68 0) (##string ##.string.1205)) (basic-block 1 1 (##.%p.879) ((##vcore.eq? (bruijn ##.sym.13 69 1) '##vcore.list->vector)) (if (bruijn ##.%p.879 0 0) ((bruijn ##.%k.312 69 0) (##string ##.string.1206)) (basic-block 1 1 (##.%p.880) ((##vcore.eq? (bruijn ##.sym.13 70 1) '##vcore.list->vector)) (if (bruijn ##.%p.880 0 0) ((bruijn ##.%k.312 70 0) (##string ##.string.1206)) (basic-block 1 1 (##.%p.881) ((##vcore.eq? (bruijn ##.sym.13 71 1) '##vcore.vector-ref)) (if (bruijn ##.%p.881 0 0) ((bruijn ##.%k.312 71 0) (##string ##.string.1207)) (basic-block 1 1 (##.%p.882) ((##vcore.eq? (bruijn ##.sym.13 72 1) '##vcore.vector-set!)) (if (bruijn ##.%p.882 0 0) ((bruijn ##.%k.312 72 0) (##string ##.string.1208)) (basic-block 1 1 (##.%p.883) ((##vcore.eq? (bruijn ##.sym.13 73 1) '##vcore.vector-length)) (if (bruijn ##.%p.883 0 0) ((bruijn ##.%k.312 73 0) (##string ##.string.1209)) (basic-block 1 1 (##.%p.884) ((##vcore.eq? (bruijn ##.sym.13 74 1) '##vcore.f64vector)) (if (bruijn ##.%p.884 0 0) ((bruijn ##.%k.312 74 0) (##string ##.string.1210)) (basic-block 1 1 (##.%p.885) ((##vcore.eq? (bruijn ##.sym.13 75 1) '##vcore.f64vector?)) (if (bruijn ##.%p.885 0 0) ((bruijn ##.%k.312 75 0) (##string ##.string.1211)) (basic-block 1 1 (##.%p.886) ((##vcore.eq? (bruijn ##.sym.13 76 1) '##vcore.make-f64vector)) (if (bruijn ##.%p.886 0 0) ((bruijn ##.%k.312 76 0) (##string ##.string.1212)) (basic-block 1 1 (##.%p.887) ((##vcore.eq? (bruijn ##.sym.13 77 1) '##vcore.list->f64vector)) (if (bruijn ##.%p.887 0 0) ((bruijn ##.%k.312 77 0) (##string ##.string.1213)) (basic-block 1 1 (##.%p.888) ((##vcore.eq? (bruijn ##.sym.13 78 1) '##vcore.f64vector-ref)) (if (bruijn ##.%p.888 0 0) ((bruijn ##.%k.312 78 0) (##string ##.string.1214)) (basic-block 1 1 (##.%p.889) ((##vcore.eq? (bruijn ##.sym.13 79 1) '##vcore.f64vector-set!)) (if (bruijn ##.%p.889 0 0) ((bruijn ##.%k.312 79 0) (##string ##.string.1215)) (basic-block 1 1 (##.%p.890) ((##vcore.eq? (bruijn ##.sym.13 80 1) '##vcore.f64vector-length)) (if (bruijn ##.%p.890 0 0) ((bruijn ##.%k.312 80 0) (##string ##.string.1216)) (basic-block 1 1 (##.%p.891) ((##vcore.eq? (bruijn ##.sym.13 81 1) '##vcore.f32vector)) (if (bruijn ##.%p.891 0 0) ((bruijn ##.%k.312 81 0) (##string ##.string.1217)) (basic-block 1 1 (##.%p.892) ((##vcore.eq? (bruijn ##.sym.13 82 1) '##vcore.f32vector?)) (if (bruijn ##.%p.892 0 0) ((bruijn ##.%k.312 82 0) (##string ##.string.1218)) (basic-block 1 1 (##.%p.893) ((##vcore.eq? (bruijn ##.sym.13 83 1) '##vcore.make-f32vector)) (if (bruijn ##.%p.893 0 0) ((bruijn ##.%k.312 83 0) (##string ##.string.1219)) (basic-block 1 1 (##.%p.894) ((##vcore.eq? (bruijn ##.sym.13 84 1) '##vcore.list->f32vector)) (if (bruijn ##.%p.894 0 0) ((bruijn ##.%k.312 84 0) (##string ##.string.1220)) (basic-block 1 1 (##.%p.895) ((##vcore.eq? (bruijn ##.sym.13 85 1) '##vcore.f32vector-ref)) (if (bruijn ##.%p.895 0 0) ((bruijn ##.%k.312 85 0) (##string ##.string.1221)) (basic-block 1 1 (##.%p.896) ((##vcore.eq? (bruijn ##.sym.13 86 1) '##vcore.f32vector-set!)) (if (bruijn ##.%p.896 0 0) ((bruijn ##.%k.312 86 0) (##string ##.string.1222)) (basic-block 1 1 (##.%p.897) ((##vcore.eq? (bruijn ##.sym.13 87 1) '##vcore.f32vector-length)) (if (bruijn ##.%p.897 0 0) ((bruijn ##.%k.312 87 0) (##string ##.string.1223)) (basic-block 1 1 (##.%p.898) ((##vcore.eq? (bruijn ##.sym.13 88 1) '##vcore.s32vector)) (if (bruijn ##.%p.898 0 0) ((bruijn ##.%k.312 88 0) (##string ##.string.1224)) (basic-block 1 1 (##.%p.899) ((##vcore.eq? (bruijn ##.sym.13 89 1) '##vcore.s32vector?)) (if (bruijn ##.%p.899 0 0) ((bruijn ##.%k.312 89 0) (##string ##.string.1225)) (basic-block 1 1 (##.%p.900) ((##vcore.eq? (bruijn ##.sym.13 90 1) '##vcore.make-s32vector)) (if (bruijn ##.%p.900 0 0) ((bruijn ##.%k.312 90 0) (##string ##.string.1226)) (basic-block 1 1 (##.%p.901) ((##vcore.eq? (bruijn ##.sym.13 91 1) '##vcore.list->s32vector)) (if (bruijn ##.%p.901 0 0) ((bruijn ##.%k.312 91 0) (##string ##.string.1227)) (basic-block 1 1 (##.%p.902) ((##vcore.eq? (bruijn ##.sym.13 92 1) '##vcore.s32vector-ref)) (if (bruijn ##.%p.902 0 0) ((bruijn ##.%k.312 92 0) (##string ##.string.1228)) (basic-block 1 1 (##.%p.903) ((##vcore.eq? (bruijn ##.sym.13 93 1) '##vcore.s32vector-set!)) (if (bruijn ##.%p.903 0 0) ((bruijn ##.%k.312 93 0) (##string ##.string.1229)) (basic-block 1 1 (##.%p.904) ((##vcore.eq? (bruijn ##.sym.13 94 1) '##vcore.s32vector-length)) (if (bruijn ##.%p.904 0 0) ((bruijn ##.%k.312 94 0) (##string ##.string.1230)) (basic-block 1 1 (##.%p.905) ((##vcore.eq? (bruijn ##.sym.13 95 1) '##vcore.u16vector)) (if (bruijn ##.%p.905 0 0) ((bruijn ##.%k.312 95 0) (##string ##.string.1231)) (basic-block 1 1 (##.%p.906) ((##vcore.eq? (bruijn ##.sym.13 96 1) '##vcore.u16vector?)) (if (bruijn ##.%p.906 0 0) ((bruijn ##.%k.312 96 0) (##string ##.string.1232)) (basic-block 1 1 (##.%p.907) ((##vcore.eq? (bruijn ##.sym.13 97 1) '##vcore.make-u16vector)) (if (bruijn ##.%p.907 0 0) ((bruijn ##.%k.312 97 0) (##string ##.string.1233)) (basic-block 1 1 (##.%p.908) ((##vcore.eq? (bruijn ##.sym.13 98 1) '##vcore.list->u16vector)) (if (bruijn ##.%p.908 0 0) ((bruijn ##.%k.312 98 0) (##string ##.string.1234)) (basic-block 1 1 (##.%p.909) ((##vcore.eq? (bruijn ##.sym.13 99 1) '##vcore.u16vector-ref)) (if (bruijn ##.%p.909 0 0) ((bruijn ##.%k.312 99 0) (##string ##.string.1235)) (basic-block 1 1 (##.%p.910) ((##vcore.eq? (bruijn ##.sym.13 100 1) '##vcore.u16vector-set!)) (if (bruijn ##.%p.910 0 0) ((bruijn ##.%k.312 100 0) (##string ##.string.1236)) (basic-block 1 1 (##.%p.911) ((##vcore.eq? (bruijn ##.sym.13 101 1) '##vcore.u16vector-length)) (if (bruijn ##.%p.911 0 0) ((bruijn ##.%k.312 101 0) (##string ##.string.1237)) (basic-block 1 1 (##.%p.912) ((##vcore.eq? (bruijn ##.sym.13 102 1) '##vcore.s16vector)) (if (bruijn ##.%p.912 0 0) ((bruijn ##.%k.312 102 0) (##string ##.string.1238)) (basic-block 1 1 (##.%p.913) ((##vcore.eq? (bruijn ##.sym.13 103 1) '##vcore.s16vector?)) (if (bruijn ##.%p.913 0 0) ((bruijn ##.%k.312 103 0) (##string ##.string.1239)) (basic-block 1 1 (##.%p.914) ((##vcore.eq? (bruijn ##.sym.13 104 1) '##vcore.make-s16vector)) (if (bruijn ##.%p.914 0 0) ((bruijn ##.%k.312 104 0) (##string ##.string.1240)) (basic-block 1 1 (##.%p.915) ((##vcore.eq? (bruijn ##.sym.13 105 1) '##vcore.list->s16vector)) (if (bruijn ##.%p.915 0 0) ((bruijn ##.%k.312 105 0) (##string ##.string.1241)) (basic-block 1 1 (##.%p.916) ((##vcore.eq? (bruijn ##.sym.13 106 1) '##vcore.s16vector-ref)) (if (bruijn ##.%p.916 0 0) ((bruijn ##.%k.312 106 0) (##string ##.string.1242)) (basic-block 1 1 (##.%p.917) ((##vcore.eq? (bruijn ##.sym.13 107 1) '##vcore.s16vector-set!)) (if (bruijn ##.%p.917 0 0) ((bruijn ##.%k.312 107 0) (##string ##.string.1243)) (basic-block 1 1 (##.%p.918) ((##vcore.eq? (bruijn ##.sym.13 108 1) '##vcore.s16vector-length)) (if (bruijn ##.%p.918 0 0) ((bruijn ##.%k.312 108 0) (##string ##.string.1244)) (basic-block 1 1 (##.%p.919) ((##vcore.eq? (bruijn ##.sym.13 109 1) '##vcore.u8vector)) (if (bruijn ##.%p.919 0 0) ((bruijn ##.%k.312 109 0) (##string ##.string.1245)) (basic-block 1 1 (##.%p.920) ((##vcore.eq? (bruijn ##.sym.13 110 1) '##vcore.u8vector?)) (if (bruijn ##.%p.920 0 0) ((bruijn ##.%k.312 110 0) (##string ##.string.1246)) (basic-block 1 1 (##.%p.921) ((##vcore.eq? (bruijn ##.sym.13 111 1) '##vcore.make-u8vector)) (if (bruijn ##.%p.921 0 0) ((bruijn ##.%k.312 111 0) (##string ##.string.1247)) (basic-block 1 1 (##.%p.922) ((##vcore.eq? (bruijn ##.sym.13 112 1) '##vcore.list->u8vector)) (if (bruijn ##.%p.922 0 0) ((bruijn ##.%k.312 112 0) (##string ##.string.1248)) (basic-block 1 1 (##.%p.923) ((##vcore.eq? (bruijn ##.sym.13 113 1) '##vcore.u8vector-ref)) (if (bruijn ##.%p.923 0 0) ((bruijn ##.%k.312 113 0) (##string ##.string.1249)) (basic-block 1 1 (##.%p.924) ((##vcore.eq? (bruijn ##.sym.13 114 1) '##vcore.u8vector-set!)) (if (bruijn ##.%p.924 0 0) ((bruijn ##.%k.312 114 0) (##string ##.string.1250)) (basic-block 1 1 (##.%p.925) ((##vcore.eq? (bruijn ##.sym.13 115 1) '##vcore.u8vector-length)) (if (bruijn ##.%p.925 0 0) ((bruijn ##.%k.312 115 0) (##string ##.string.1251)) (basic-block 1 1 (##.%p.926) ((##vcore.eq? (bruijn ##.sym.13 116 1) '##vcore.s8vector)) (if (bruijn ##.%p.926 0 0) ((bruijn ##.%k.312 116 0) (##string ##.string.1252)) (basic-block 1 1 (##.%p.927) ((##vcore.eq? (bruijn ##.sym.13 117 1) '##vcore.s8vector?)) (if (bruijn ##.%p.927 0 0) ((bruijn ##.%k.312 117 0) (##string ##.string.1253)) (basic-block 1 1 (##.%p.928) ((##vcore.eq? (bruijn ##.sym.13 118 1) '##vcore.make-s8vector)) (if (bruijn ##.%p.928 0 0) ((bruijn ##.%k.312 118 0) (##string ##.string.1254)) (basic-block 1 1 (##.%p.929) ((##vcore.eq? (bruijn ##.sym.13 119 1) '##vcore.list->s8vector)) (if (bruijn ##.%p.929 0 0) ((bruijn ##.%k.312 119 0) (##string ##.string.1255)) (basic-block 1 1 (##.%p.930) ((##vcore.eq? (bruijn ##.sym.13 120 1) '##vcore.s8vector-ref)) (if (bruijn ##.%p.930 0 0) ((bruijn ##.%k.312 120 0) (##string ##.string.1256)) (basic-block 1 1 (##.%p.931) ((##vcore.eq? (bruijn ##.sym.13 121 1) '##vcore.s8vector-set!)) (if (bruijn ##.%p.931 0 0) ((bruijn ##.%k.312 121 0) (##string ##.string.1257)) (basic-block 1 1 (##.%p.932) ((##vcore.eq? (bruijn ##.sym.13 122 1) '##vcore.s8vector-length)) (if (bruijn ##.%p.932 0 0) ((bruijn ##.%k.312 122 0) (##string ##.string.1258)) (basic-block 1 1 (##.%p.933) ((##vcore.eq? (bruijn ##.sym.13 123 1) '##vcore.read-u8vector)) (if (bruijn ##.%p.933 0 0) ((bruijn ##.%k.312 123 0) (##string ##.string.1259)) (basic-block 1 1 (##.%p.934) ((##vcore.eq? (bruijn ##.sym.13 124 1) '##vcore.record)) (if (bruijn ##.%p.934 0 0) ((bruijn ##.%k.312 124 0) (##string ##.string.1260)) (basic-block 1 1 (##.%p.935) ((##vcore.eq? (bruijn ##.sym.13 125 1) '##vcore.record-ref)) (if (bruijn ##.%p.935 0 0) ((bruijn ##.%k.312 125 0) (##string ##.string.1261)) (basic-block 1 1 (##.%p.936) ((##vcore.eq? (bruijn ##.sym.13 126 1) '##vcore.record-set!)) (if (bruijn ##.%p.936 0 0) ((bruijn ##.%k.312 126 0) (##string ##.string.1262)) (basic-block 1 1 (##.%p.937) ((##vcore.eq? (bruijn ##.sym.13 127 1) '##vcore.record-length)) (if (bruijn ##.%p.937 0 0) ((bruijn ##.%k.312 127 0) (##string ##.string.1263)) (basic-block 1 1 (##.%p.938) ((##vcore.eq? (bruijn ##.sym.13 128 1) '##vcore.make-hash-table)) (if (bruijn ##.%p.938 0 0) ((bruijn ##.%k.312 128 0) (##string ##.string.1264)) (basic-block 1 1 (##.%p.939) ((##vcore.eq? (bruijn ##.sym.13 129 1) '##vcore.hash-table-equivalence-function)) (if (bruijn ##.%p.939 0 0) ((bruijn ##.%k.312 129 0) (##string ##.string.1265)) (basic-block 1 1 (##.%p.940) ((##vcore.eq? (bruijn ##.sym.13 130 1) '##vcore.hash-table-hash-function)) (if (bruijn ##.%p.940 0 0) ((bruijn ##.%k.312 130 0) (##string ##.string.1266)) (basic-block 1 1 (##.%p.941) ((##vcore.eq? (bruijn ##.sym.13 131 1) '##vcore.hash-table-vector)) (if (bruijn ##.%p.941 0 0) ((bruijn ##.%k.312 131 0) (##string ##.string.1267)) (basic-block 1 1 (##.%p.942) ((##vcore.eq? (bruijn ##.sym.13 132 1) '##vcore.hash-table-ref)) (if (bruijn ##.%p.942 0 0) ((bruijn ##.%k.312 132 0) (##string ##.string.1268)) (basic-block 1 1 (##.%p.943) ((##vcore.eq? (bruijn ##.sym.13 133 1) '##vcore.hash-table-set!)) (if (bruijn ##.%p.943 0 0) ((bruijn ##.%k.312 133 0) (##string ##.string.1269)) (basic-block 1 1 (##.%p.944) ((##vcore.eq? (bruijn ##.sym.13 134 1) '##vcore.hash-table-delete!)) (if (bruijn ##.%p.944 0 0) ((bruijn ##.%k.312 134 0) (##string ##.string.1270)) (basic-block 1 1 (##.%p.945) ((##vcore.eq? (bruijn ##.sym.13 135 1) '##vcore.make-string)) (if (bruijn ##.%p.945 0 0) ((bruijn ##.%k.312 135 0) (##string ##.string.1271)) (basic-block 1 1 (##.%p.946) ((##vcore.eq? (bruijn ##.sym.13 136 1) '##vcore.substring)) (if (bruijn ##.%p.946 0 0) ((bruijn ##.%k.312 136 0) (##string ##.string.1272)) (basic-block 1 1 (##.%p.947) ((##vcore.eq? (bruijn ##.sym.13 137 1) '##vcore.string-copy!)) (if (bruijn ##.%p.947 0 0) ((bruijn ##.%k.312 137 0) (##string ##.string.1273)) (basic-block 1 1 (##.%p.948) ((##vcore.eq? (bruijn ##.sym.13 138 1) '##vcore.string-ref)) (if (bruijn ##.%p.948 0 0) ((bruijn ##.%k.312 138 0) (##string ##.string.1274)) (basic-block 1 1 (##.%p.949) ((##vcore.eq? (bruijn ##.sym.13 139 1) '##vcore.string-set!)) (if (bruijn ##.%p.949 0 0) ((bruijn ##.%k.312 139 0) (##string ##.string.1275)) (basic-block 1 1 (##.%p.950) ((##vcore.eq? (bruijn ##.sym.13 140 1) '##vcore.string-length)) (if (bruijn ##.%p.950 0 0) ((bruijn ##.%k.312 140 0) (##string ##.string.1276)) (basic-block 1 1 (##.%p.951) ((##vcore.eq? (bruijn ##.sym.13 141 1) '##vcore.string->symbol)) (if (bruijn ##.%p.951 0 0) ((bruijn ##.%k.312 141 0) (##string ##.string.1277)) (basic-block 1 1 (##.%p.952) ((##vcore.eq? (bruijn ##.sym.13 142 1) '##vcore.string->number)) (if (bruijn ##.%p.952 0 0) ((bruijn ##.%k.312 142 0) (##string ##.string.1278)) (basic-block 1 1 (##.%p.953) ((##vcore.eq? (bruijn ##.sym.13 143 1) '##vcore.symbol->string)) (if (bruijn ##.%p.953 0 0) ((bruijn ##.%k.312 143 0) (##string ##.string.1279)) (basic-block 1 1 (##.%p.954) ((##vcore.eq? (bruijn ##.sym.13 144 1) '##vcore.gensym)) (if (bruijn ##.%p.954 0 0) ((bruijn ##.%k.312 144 0) (##string ##.string.1280)) (basic-block 1 1 (##.%p.955) ((##vcore.eq? (bruijn ##.sym.13 145 1) '##vcore.char-integer)) (if (bruijn ##.%p.955 0 0) ((bruijn ##.%k.312 145 0) (##string ##.string.1281)) (basic-block 1 1 (##.%p.956) ((##vcore.eq? (bruijn ##.sym.13 146 1) '##vcore.integer->char)) (if (bruijn ##.%p.956 0 0) ((bruijn ##.%k.312 146 0) (##string ##.string.1282)) (basic-block 1 1 (##.%p.957) ((##vcore.eq? (bruijn ##.sym.13 147 1) '##vcore.stdin->port)) (if (bruijn ##.%p.957 0 0) ((bruijn ##.%k.312 147 0) (##string ##.string.1283)) (basic-block 1 1 (##.%p.958) ((##vcore.eq? (bruijn ##.sym.13 148 1) '##vcore.stdout->port)) (if (bruijn ##.%p.958 0 0) ((bruijn ##.%k.312 148 0) (##string ##.string.1284)) (basic-block 1 1 (##.%p.959) ((##vcore.eq? (bruijn ##.sym.13 149 1) '##vcore.stderr->port)) (if (bruijn ##.%p.959 0 0) ((bruijn ##.%k.312 149 0) (##string ##.string.1285)) (basic-block 1 1 (##.%p.960) ((##vcore.eq? (bruijn ##.sym.13 150 1) '##vcore.open-input-stream)) (if (bruijn ##.%p.960 0 0) ((bruijn ##.%k.312 150 0) (##string ##.string.1286)) (basic-block 1 1 (##.%p.961) ((##vcore.eq? (bruijn ##.sym.13 151 1) '##vcore.open-output-stream)) (if (bruijn ##.%p.961 0 0) ((bruijn ##.%k.312 151 0) (##string ##.string.1287)) (basic-block 1 1 (##.%p.962) ((##vcore.eq? (bruijn ##.sym.13 152 1) '##vcore.close-stream)) (if (bruijn ##.%p.962 0 0) ((bruijn ##.%k.312 152 0) (##string ##.string.1288)) (basic-block 1 1 (##.%p.963) ((##vcore.eq? (bruijn ##.sym.13 153 1) '##vcore.tty-port?)) (if (bruijn ##.%p.963 0 0) ((bruijn ##.%k.312 153 0) (##string ##.string.1289)) (basic-block 1 1 (##.%p.964) ((##vcore.eq? (bruijn ##.sym.13 154 1) '##vcore.open-output-string)) (if (bruijn ##.%p.964 0 0) ((bruijn ##.%k.312 154 0) (##string ##.string.1290)) (basic-block 1 1 (##.%p.965) ((##vcore.eq? (bruijn ##.sym.13 155 1) '##vcore.get-output-string)) (if (bruijn ##.%p.965 0 0) ((bruijn ##.%k.312 155 0) (##string ##.string.1291)) (basic-block 1 1 (##.%p.966) ((##vcore.eq? (bruijn ##.sym.13 156 1) '##vcore.eof-object?)) (if (bruijn ##.%p.966 0 0) ((bruijn ##.%k.312 156 0) (##string ##.string.1292)) (basic-block 1 1 (##.%p.967) ((##vcore.eq? (bruijn ##.sym.13 157 1) '##vcore.read-char)) (if (bruijn ##.%p.967 0 0) ((bruijn ##.%k.312 157 0) (##string ##.string.1293)) (basic-block 1 1 (##.%p.968) ((##vcore.eq? (bruijn ##.sym.13 158 1) '##vcore.read-line)) (if (bruijn ##.%p.968 0 0) ((bruijn ##.%k.312 158 0) (##string ##.string.1294)) (basic-block 1 1 (##.%p.969) ((##vcore.eq? (bruijn ##.sym.13 159 1) '##vcore.read-line2)) (if (bruijn ##.%p.969 0 0) ((bruijn ##.%k.312 159 0) (##string ##.string.1295)) (basic-block 1 1 (##.%p.970) ((##vcore.eq? (bruijn ##.sym.13 160 1) '##vcore.read)) (if (bruijn ##.%p.970 0 0) ((bruijn ##.%k.312 160 0) (##string ##.string.1296)) (basic-block 1 1 (##.%p.971) ((##vcore.eq? (bruijn ##.sym.13 161 1) '##vcore.display-word)) (if (bruijn ##.%p.971 0 0) ((bruijn ##.%k.312 161 0) (##string ##.string.1297)) (basic-block 1 1 (##.%p.972) ((##vcore.eq? (bruijn ##.sym.13 162 1) '##vcore.write)) (if (bruijn ##.%p.972 0 0) ((bruijn ##.%k.312 162 0) (##string ##.string.1298)) (basic-block 1 1 (##.%p.973) ((##vcore.eq? (bruijn ##.sym.13 163 1) '##vcore.newline)) (if (bruijn ##.%p.973 0 0) ((bruijn ##.%k.312 163 0) (##string ##.string.1299)) (basic-block 1 1 (##.%p.974) ((##vcore.eq? (bruijn ##.sym.13 164 1) '##vcore.display-stdout)) (if (bruijn ##.%p.974 0 0) ((bruijn ##.%k.312 164 0) (##string ##.string.1300)) (basic-block 1 1 (##.%p.975) ((##vcore.eq? (bruijn ##.sym.13 165 1) '##vcore.write-stdout)) (if (bruijn ##.%p.975 0 0) ((bruijn ##.%k.312 165 0) (##string ##.string.1301)) (basic-block 1 1 (##.%p.976) ((##vcore.eq? (bruijn ##.sym.13 166 1) '##vcore.newline-stdout)) (if (bruijn ##.%p.976 0 0) ((bruijn ##.%k.312 166 0) (##string ##.string.1302)) (basic-block 1 1 (##.%p.977) ((##vcore.eq? (bruijn ##.sym.13 167 1) '##vcore.set-finalizer!)) (if (bruijn ##.%p.977 0 0) ((bruijn ##.%k.312 167 0) (##string ##.string.1303)) (basic-block 1 1 (##.%p.978) ((##vcore.eq? (bruijn ##.sym.13 168 1) '##vcore.has-finalizer?)) (if (bruijn ##.%p.978 0 0) ((bruijn ##.%k.312 168 0) (##string ##.string.1304)) (basic-block 1 1 (##.%p.979) ((##vcore.eq? (bruijn ##.sym.13 169 1) '##vcore.finalize!)) (if (bruijn ##.%p.979 0 0) ((bruijn ##.%k.312 169 0) (##string ##.string.1305)) (basic-block 1 1 (##.%p.980) ((##vcore.eq? (bruijn ##.sym.13 170 1) '##vcore.garbage-collect)) (if (bruijn ##.%p.980 0 0) ((bruijn ##.%k.312 170 0) (##string ##.string.1306)) (basic-block 1 1 (##.%p.981) ((##vcore.eq? (bruijn ##.sym.13 171 1) '##vcore.yield-to-host)) (if (bruijn ##.%p.981 0 0) ((bruijn ##.%k.312 171 0) (##string ##.string.1307)) (basic-block 1 1 (##.%p.982) ((##vcore.eq? (bruijn ##.sym.13 172 1) '##vcore.yield-to-host-major)) (if (bruijn ##.%p.982 0 0) ((bruijn ##.%k.312 172 0) (##string ##.string.1308)) (basic-block 1 1 (##.%p.983) ((##vcore.eq? (bruijn ##.sym.13 173 1) '##vcore.system)) (if (bruijn ##.%p.983 0 0) ((bruijn ##.%k.312 173 0) (##string ##.string.1309)) (basic-block 1 1 (##.%p.984) ((##vcore.eq? (bruijn ##.sym.13 174 1) '##vcore.open-input-process)) (if (bruijn ##.%p.984 0 0) ((bruijn ##.%k.312 174 0) (##string ##.string.1310)) (basic-block 1 1 (##.%p.985) ((##vcore.eq? (bruijn ##.sym.13 175 1) '##vcore.open-output-process)) (if (bruijn ##.%p.985 0 0) ((bruijn ##.%k.312 175 0) (##string ##.string.1311)) (basic-block 1 1 (##.%p.986) ((##vcore.eq? (bruijn ##.sym.13 176 1) '##vcore.command-line)) (if (bruijn ##.%p.986 0 0) ((bruijn ##.%k.312 176 0) (##string ##.string.1312)) (basic-block 1 1 (##.%p.987) ((##vcore.eq? (bruijn ##.sym.13 177 1) '##vcore.register-sigint)) (if (bruijn ##.%p.987 0 0) ((bruijn ##.%k.312 177 0) (##string ##.string.1313)) (basic-block 1 1 (##.%p.988) ((##vcore.eq? (bruijn ##.sym.13 178 1) '##vcore.make-random)) (if (bruijn ##.%p.988 0 0) ((bruijn ##.%k.312 178 0) (##string ##.string.1314)) (basic-block 1 1 (##.%p.989) ((##vcore.eq? (bruijn ##.sym.13 179 1) '##vcore.random-copy)) (if (bruijn ##.%p.989 0 0) ((bruijn ##.%k.312 179 0) (##string ##.string.1315)) (basic-block 1 1 (##.%p.990) ((##vcore.eq? (bruijn ##.sym.13 180 1) '##vcore.random-sample!)) (if (bruijn ##.%p.990 0 0) ((bruijn ##.%k.312 180 0) (##string ##.string.1316)) (basic-block 1 1 (##.%p.991) ((##vcore.eq? (bruijn ##.sym.13 181 1) '##vcore.random-sample-bounded!)) (if (bruijn ##.%p.991 0 0) ((bruijn ##.%k.312 181 0) (##string ##.string.1317)) (basic-block 1 1 (##.%p.992) ((##vcore.eq? (bruijn ##.sym.13 182 1) '##vcore.random-sample-float!)) (if (bruijn ##.%p.992 0 0) ((bruijn ##.%k.312 182 0) (##string ##.string.1318)) (basic-block 1 1 (##.%p.993) ((##vcore.eq? (bruijn ##.sym.13 183 1) '##vcore.random-advance!)) (if (bruijn ##.%p.993 0 0) ((bruijn ##.%k.312 183 0) (##string ##.string.1319)) (basic-block 1 1 (##.%p.994) ((##vcore.eq? (bruijn ##.sym.13 184 1) '##vcore.fiber-fork-list)) (if (bruijn ##.%p.994 0 0) ((bruijn ##.%k.312 184 0) (##string ##.string.1320)) (basic-block 1 1 (##.%p.995) ((##vcore.eq? (bruijn ##.sym.13 185 1) '##vcore.async)) (if (bruijn ##.%p.995 0 0) ((bruijn ##.%k.312 185 0) (##string ##.string.1321)) (basic-block 1 1 (##.%p.996) ((##vcore.eq? (bruijn ##.sym.13 186 1) '##vcore.await)) (if (bruijn ##.%p.996 0 0) ((bruijn ##.%k.312 186 0) (##string ##.string.1322)) (basic-block 1 1 (##.%p.997) ((##vcore.eq? (bruijn ##.sym.13 187 1) '##vcore.realpath)) (if (bruijn ##.%p.997 0 0) ((bruijn ##.%k.312 187 0) (##string ##.string.1323)) (basic-block 1 1 (##.%p.998) ((##vcore.eq? (bruijn ##.sym.13 188 1) '##vcore.make-temporary-file)) (if (bruijn ##.%p.998 0 0) ((bruijn ##.%k.312 188 0) (##string ##.string.1324)) (basic-block 1 1 (##.%p.999) ((##vcore.eq? (bruijn ##.sym.13 189 1) '##vcore.access)) (if (bruijn ##.%p.999 0 0) ((bruijn ##.%k.312 189 0) (##string ##.string.1325)) (basic-block 1 1 (##.%p.1000) ((##vcore.eq? (bruijn ##.sym.13 190 1) '##vcore.current-jiffy)) (if (bruijn ##.%p.1000 0 0) ((bruijn ##.%k.312 190 0) (##string ##.string.1326)) (basic-block 1 1 (##.%p.1001) ((##vcore.eq? (bruijn ##.sym.13 191 1) '##vcore.jiffies-per-second)) (if (bruijn ##.%p.1001 0 0) ((bruijn ##.%k.312 191 0) (##string ##.string.1327)) (basic-block 1 1 (##.%p.1002) ((##vcore.eq? (bruijn ##.sym.13 192 1) '##vcore.bitwise-not)) (if (bruijn ##.%p.1002 0 0) ((bruijn ##.%k.312 192 0) (##string ##.string.1328)) (basic-block 1 1 (##.%p.1003) ((##vcore.eq? (bruijn ##.sym.13 193 1) '##vcore.bitwise-ior)) (if (bruijn ##.%p.1003 0 0) ((bruijn ##.%k.312 193 0) (##string ##.string.1329)) (basic-block 1 1 (##.%p.1004) ((##vcore.eq? (bruijn ##.sym.13 194 1) '##vcore.bitwise-xor)) (if (bruijn ##.%p.1004 0 0) ((bruijn ##.%k.312 194 0) (##string ##.string.1330)) (basic-block 1 1 (##.%p.1005) ((##vcore.eq? (bruijn ##.sym.13 195 1) '##vcore.bitwise-and)) (if (bruijn ##.%p.1005 0 0) ((bruijn ##.%k.312 195 0) (##string ##.string.1331)) (basic-block 1 1 (##.%p.1006) ((##vcore.eq? (bruijn ##.sym.13 196 1) '##vcore.bitwise-xnor)) (if (bruijn ##.%p.1006 0 0) ((bruijn ##.%k.312 196 0) (##string ##.string.1332)) (basic-block 1 1 (##.%p.1007) ((##vcore.eq? (bruijn ##.sym.13 197 1) '##vcore.bitwise-nand)) (if (bruijn ##.%p.1007 0 0) ((bruijn ##.%k.312 197 0) (##string ##.string.1333)) (basic-block 1 1 (##.%p.1008) ((##vcore.eq? (bruijn ##.sym.13 198 1) '##vcore.bitwise-nor)) (if (bruijn ##.%p.1008 0 0) ((bruijn ##.%k.312 198 0) (##string ##.string.1334)) (basic-block 1 1 (##.%p.1009) ((##vcore.eq? (bruijn ##.sym.13 199 1) '##vcore.bitwise-andc1)) (if (bruijn ##.%p.1009 0 0) ((bruijn ##.%k.312 199 0) (##string ##.string.1335)) (basic-block 1 1 (##.%p.1010) ((##vcore.eq? (bruijn ##.sym.13 200 1) '##vcore.bitwise-andc2)) (if (bruijn ##.%p.1010 0 0) ((bruijn ##.%k.312 200 0) (##string ##.string.1336)) (basic-block 1 1 (##.%p.1011) ((##vcore.eq? (bruijn ##.sym.13 201 1) '##vcore.bitwise-orc1)) (if (bruijn ##.%p.1011 0 0) ((bruijn ##.%k.312 201 0) (##string ##.string.1337)) (basic-block 1 1 (##.%p.1012) ((##vcore.eq? (bruijn ##.sym.13 202 1) '##vcore.bitwise-orc2)) (if (bruijn ##.%p.1012 0 0) ((bruijn ##.%k.312 202 0) (##string ##.string.1338)) (basic-block 1 1 (##.%p.1013) ((##vcore.eq? (bruijn ##.sym.13 203 1) '##vcore.arithmetic-shift)) (if (bruijn ##.%p.1013 0 0) ((bruijn ##.%k.312 203 0) (##string ##.string.1339)) (basic-block 1 1 (##.%p.1014) ((##vcore.eq? (bruijn ##.sym.13 204 1) '##vcore.bit-count)) (if (bruijn ##.%p.1014 0 0) ((bruijn ##.%k.312 204 0) (##string ##.string.1340)) ((bruijn ##.%k.312 204 0) #f))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1198.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 62-1, 1),
      _V10vcore_Dcar);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1199.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 63-1, 1),
      _V10vcore_Dcdr);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1200.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 64-1, 1),
      _V10vcore_Dset__car_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1201.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 65-1, 1),
      _V10vcore_Dset__cdr_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1202.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 66-1, 1),
      _V10vcore_Dappend);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1203.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 67-1, 1),
      _V10vcore_Dvector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1204.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 68-1, 1),
      _V10vcore_Dmake__vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1205.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 69-1, 1),
      _V10vcore_Dlist___Gvector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1206.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 70-1, 1),
      _V10vcore_Dlist___Gvector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1206.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 71-1, 1),
      _V10vcore_Dvector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1207.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 72-1, 1),
      _V10vcore_Dvector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1208.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 73-1, 1),
      _V10vcore_Dvector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1209.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 74-1, 1),
      _V10vcore_Df64vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1210.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 75-1, 1),
      _V10vcore_Df64vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1211.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 76-1, 1),
      _V10vcore_Dmake__f64vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1212.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 77-1, 1),
      _V10vcore_Dlist___Gf64vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1213.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 78-1, 1),
      _V10vcore_Df64vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1214.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 79-1, 1),
      _V10vcore_Df64vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1215.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 80-1, 1),
      _V10vcore_Df64vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1216.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 81-1, 1),
      _V10vcore_Df32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1217.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 82-1, 1),
      _V10vcore_Df32vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1218.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 83-1, 1),
      _V10vcore_Dmake__f32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1219.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 84-1, 1),
      _V10vcore_Dlist___Gf32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1220.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 85-1, 1),
      _V10vcore_Df32vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1221.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 86-1, 1),
      _V10vcore_Df32vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1222.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 87-1, 1),
      _V10vcore_Df32vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1223.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 88-1, 1),
      _V10vcore_Ds32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1224.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 89-1, 1),
      _V10vcore_Ds32vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1225.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 90-1, 1),
      _V10vcore_Dmake__s32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1226.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 91-1, 1),
      _V10vcore_Dlist___Gs32vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1227.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 92-1, 1),
      _V10vcore_Ds32vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1228.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 93-1, 1),
      _V10vcore_Ds32vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1229.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 94-1, 1),
      _V10vcore_Ds32vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1230.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 95-1, 1),
      _V10vcore_Du16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1231.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 96-1, 1),
      _V10vcore_Du16vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1232.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 97-1, 1),
      _V10vcore_Dmake__u16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1233.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 98-1, 1),
      _V10vcore_Dlist___Gu16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1234.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 99-1, 1),
      _V10vcore_Du16vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1235.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 100-1, 1),
      _V10vcore_Du16vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1236.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 101-1, 1),
      _V10vcore_Du16vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 102-1, 1),
      _V10vcore_Ds16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1238.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 103-1, 1),
      _V10vcore_Ds16vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1239.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 104-1, 1),
      _V10vcore_Dmake__s16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1240.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 105-1, 1),
      _V10vcore_Dlist___Gs16vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1241.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 106-1, 1),
      _V10vcore_Ds16vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1242.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 107-1, 1),
      _V10vcore_Ds16vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1243.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 108-1, 1),
      _V10vcore_Ds16vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1244.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 109-1, 1),
      _V10vcore_Du8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1245.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 110-1, 1),
      _V10vcore_Du8vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1246.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 111-1, 1),
      _V10vcore_Dmake__u8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1247.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 112-1, 1),
      _V10vcore_Dlist___Gu8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1248.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 113-1, 1),
      _V10vcore_Du8vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1249.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 114-1, 1),
      _V10vcore_Du8vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1250.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 115-1, 1),
      _V10vcore_Du8vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1251.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 116-1, 1),
      _V10vcore_Ds8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1252.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 117-1, 1),
      _V10vcore_Ds8vector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1253.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 118-1, 1),
      _V10vcore_Dmake__s8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1254.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 119-1, 1),
      _V10vcore_Dlist___Gs8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1255.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 120-1, 1),
      _V10vcore_Ds8vector__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1256.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 121-1, 1),
      _V10vcore_Ds8vector__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1257.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 122-1, 1),
      _V10vcore_Ds8vector__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1258.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 123-1, 1),
      _V10vcore_Dread__u8vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1259.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 124-1, 1),
      _V10vcore_Drecord);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1260.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 125-1, 1),
      _V10vcore_Drecord__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 125-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1261.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 126-1, 1),
      _V10vcore_Drecord__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 126-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1262.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 127-1, 1),
      _V10vcore_Drecord__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1263.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 128-1, 1),
      _V10vcore_Dmake__hash__table);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 128-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1264.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 129-1, 1),
      _V10vcore_Dhash__table__equivalence__function);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 129-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1265.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 130-1, 1),
      _V10vcore_Dhash__table__hash__function);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 130-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1266.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 131-1, 1),
      _V10vcore_Dhash__table__vector);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 131-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1267.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 132-1, 1),
      _V10vcore_Dhash__table__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 132-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1268.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 133-1, 1),
      _V10vcore_Dhash__table__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 133-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1269.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 134-1, 1),
      _V10vcore_Dhash__table__delete_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 134-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1270.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 135-1, 1),
      _V10vcore_Dmake__string);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 135-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1271.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 136-1, 1),
      _V10vcore_Dsubstring);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 136-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1272.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 137-1, 1),
      _V10vcore_Dstring__copy_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 137-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1273.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 138-1, 1),
      _V10vcore_Dstring__ref);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 138-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1274.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 139-1, 1),
      _V10vcore_Dstring__set_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 139-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1275.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 140-1, 1),
      _V10vcore_Dstring__length);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 140-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1276.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 141-1, 1),
      _V10vcore_Dstring___Gsymbol);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 141-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1277.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 142-1, 1),
      _V10vcore_Dstring___Gnumber);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 142-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1278.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 143-1, 1),
      _V10vcore_Dsymbol___Gstring);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 143-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1279.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 144-1, 1),
      _V10vcore_Dgensym);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 144-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1280.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 145-1, 1),
      _V10vcore_Dchar__integer);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 145-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1281.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 146-1, 1),
      _V10vcore_Dinteger___Gchar);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 146-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1282.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 147-1, 1),
      _V10vcore_Dstdin___Gport);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 147-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1283.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 148-1, 1),
      _V10vcore_Dstdout___Gport);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 148-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1284.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 149-1, 1),
      _V10vcore_Dstderr___Gport);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 149-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1285.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 150-1, 1),
      _V10vcore_Dopen__input__stream);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 150-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1286.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 151-1, 1),
      _V10vcore_Dopen__output__stream);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 151-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1287.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 152-1, 1),
      _V10vcore_Dclose__stream);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 152-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1288.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 153-1, 1),
      _V10vcore_Dtty__port_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 153-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1289.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 154-1, 1),
      _V10vcore_Dopen__output__string);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 154-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1290.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 155-1, 1),
      _V10vcore_Dget__output__string);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 155-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1291.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 156-1, 1),
      _V10vcore_Deof__object_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 156-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1292.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 157-1, 1),
      _V10vcore_Dread__char);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 157-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1293.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 158-1, 1),
      _V10vcore_Dread__line);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 158-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1294.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 159-1, 1),
      _V10vcore_Dread__line2);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 159-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1295.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 160-1, 1),
      _V10vcore_Dread);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 160-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1296.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 161-1, 1),
      _V10vcore_Ddisplay__word);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 161-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1297.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 162-1, 1),
      _V10vcore_Dwrite);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 162-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1298.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 163-1, 1),
      _V10vcore_Dnewline);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 163-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1299.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 164-1, 1),
      _V10vcore_Ddisplay__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 164-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1300.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 165-1, 1),
      _V10vcore_Dwrite__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 165-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1301.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 166-1, 1),
      _V10vcore_Dnewline__stdout);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 166-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1302.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 167-1, 1),
      _V10vcore_Dset__finalizer_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 167-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1303.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 168-1, 1),
      _V10vcore_Dhas__finalizer_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 168-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1304.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 169-1, 1),
      _V10vcore_Dfinalize_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 169-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1305.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 170-1, 1),
      _V10vcore_Dgarbage__collect);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 170-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1306.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 171-1, 1),
      _V10vcore_Dyield__to__host);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 171-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1307.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 172-1, 1),
      _V10vcore_Dyield__to__host__major);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 172-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1308.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 173-1, 1),
      _V10vcore_Dsystem);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 173-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1309.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 174-1, 1),
      _V10vcore_Dopen__input__process);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 174-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1310.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 175-1, 1),
      _V10vcore_Dopen__output__process);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 175-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1311.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 176-1, 1),
      _V10vcore_Dcommand__line);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 176-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1312.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 177-1, 1),
      _V10vcore_Dregister__sigint);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 177-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1313.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 178-1, 1),
      _V10vcore_Dmake__random);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 178-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1314.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 179-1, 1),
      _V10vcore_Drandom__copy);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 179-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1315.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 180-1, 1),
      _V10vcore_Drandom__sample_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 180-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1316.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 181-1, 1),
      _V10vcore_Drandom__sample__bounded_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 181-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1317.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 182-1, 1),
      _V10vcore_Drandom__sample__float_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 182-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1318.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 183-1, 1),
      _V10vcore_Drandom__advance_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 183-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1319.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 184-1, 1),
      _V10vcore_Dfiber__fork__list);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 184-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1320.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 185-1, 1),
      _V10vcore_Dasync);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 185-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1321.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 186-1, 1),
      _V10vcore_Dawait);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 186-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1322.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 187-1, 1),
      _V10vcore_Drealpath);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 187-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1323.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 188-1, 1),
      _V10vcore_Dmake__temporary__file);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 188-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1324.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 189-1, 1),
      _V10vcore_Daccess);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 189-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1325.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 190-1, 1),
      _V10vcore_Dcurrent__jiffy);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 190-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1326.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 191-1, 1),
      _V10vcore_Djiffies__per__second);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 191-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1327.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 192-1, 1),
      _V10vcore_Dbitwise__not);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 192-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1328.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 193-1, 1),
      _V10vcore_Dbitwise__ior);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 193-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1329.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 194-1, 1),
      _V10vcore_Dbitwise__xor);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 194-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1330.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 195-1, 1),
      _V10vcore_Dbitwise__and);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 195-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1331.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 196-1, 1),
      _V10vcore_Dbitwise__xnor);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 196-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1332.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 197-1, 1),
      _V10vcore_Dbitwise__nand);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 197-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1333.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 198-1, 1),
      _V10vcore_Dbitwise__nor);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 198-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1334.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 199-1, 1),
      _V10vcore_Dbitwise__andc1);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 199-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1335.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 200-1, 1),
      _V10vcore_Dbitwise__andc2);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 200-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1336.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 201-1, 1),
      _V10vcore_Dbitwise__orc1);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 201-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1337.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 202-1, 1),
      _V10vcore_Dbitwise__orc2);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 202-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1338.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 203-1, 1),
      _V10vcore_Darithmetic__shift);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 203-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1339.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 204-1, 1),
      _V10vcore_Dbit__count);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 204-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1340.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 204-1, 0)), 1,
      VEncodeBool(false));
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
}
}
void _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.812) ((##vcore.eq? (bruijn ##.sym.13 1 1) '##vcore.inexact)) (if (bruijn ##.%p.812 0 0) ((bruijn ##.%k.312 1 0) (##string ##.string.1138)) (basic-block 1 1 (##.%p.813) ((##vcore.eq? (bruijn ##.sym.13 2 1) '##vcore.exact)) (if (bruijn ##.%p.813 0 0) ((bruijn ##.%k.312 2 0) (##string ##.string.1139)) (basic-block 1 1 (##.%p.814) ((##vcore.eq? (bruijn ##.sym.13 3 1) '##vcore.+)) (if (bruijn ##.%p.814 0 0) ((bruijn ##.%k.312 3 0) (##string ##.string.1140)) (basic-block 1 1 (##.%p.815) ((##vcore.eq? (bruijn ##.sym.13 4 1) '##vcore.-)) (if (bruijn ##.%p.815 0 0) ((bruijn ##.%k.312 4 0) (##string ##.string.1141)) (basic-block 1 1 (##.%p.816) ((##vcore.eq? (bruijn ##.sym.13 5 1) '##vcore.*)) (if (bruijn ##.%p.816 0 0) ((bruijn ##.%k.312 5 0) (##string ##.string.1142)) (basic-block 1 1 (##.%p.817) ((##vcore.eq? (bruijn ##.sym.13 6 1) '##vcore./)) (if (bruijn ##.%p.817 0 0) ((bruijn ##.%k.312 6 0) (##string ##.string.1143)) (basic-block 1 1 (##.%p.818) ((##vcore.eq? (bruijn ##.sym.13 7 1) '##vcore.cmp)) (if (bruijn ##.%p.818 0 0) ((bruijn ##.%k.312 7 0) (##string ##.string.1144)) (basic-block 1 1 (##.%p.819) ((##vcore.eq? (bruijn ##.sym.13 8 1) '##vcore.<=)) (if (bruijn ##.%p.819 0 0) ((bruijn ##.%k.312 8 0) (##string ##.string.1145)) (basic-block 1 1 (##.%p.820) ((##vcore.eq? (bruijn ##.sym.13 9 1) '##vcore.<)) (if (bruijn ##.%p.820 0 0) ((bruijn ##.%k.312 9 0) (##string ##.string.1146)) (basic-block 1 1 (##.%p.821) ((##vcore.eq? (bruijn ##.sym.13 10 1) '##vcore.=)) (if (bruijn ##.%p.821 0 0) ((bruijn ##.%k.312 10 0) (##string ##.string.1147)) (basic-block 1 1 (##.%p.822) ((##vcore.eq? (bruijn ##.sym.13 11 1) '##vcore.>=)) (if (bruijn ##.%p.822 0 0) ((bruijn ##.%k.312 11 0) (##string ##.string.1148)) (basic-block 1 1 (##.%p.823) ((##vcore.eq? (bruijn ##.sym.13 12 1) '##vcore.>)) (if (bruijn ##.%p.823 0 0) ((bruijn ##.%k.312 12 0) (##string ##.string.1149)) (basic-block 1 1 (##.%p.824) ((##vcore.eq? (bruijn ##.sym.13 13 1) '##vcore.quotient)) (if (bruijn ##.%p.824 0 0) ((bruijn ##.%k.312 13 0) (##string ##.string.1150)) (basic-block 1 1 (##.%p.825) ((##vcore.eq? (bruijn ##.sym.13 14 1) '##vcore.remainder)) (if (bruijn ##.%p.825 0 0) ((bruijn ##.%k.312 14 0) (##string ##.string.1151)) (basic-block 1 1 (##.%p.826) ((##vcore.eq? (bruijn ##.sym.13 15 1) '##vcore.null?)) (if (bruijn ##.%p.826 0 0) ((bruijn ##.%k.312 15 0) (##string ##.string.1152)) (basic-block 1 1 (##.%p.827) ((##vcore.eq? (bruijn ##.sym.13 16 1) '##vcore.pair?)) (if (bruijn ##.%p.827 0 0) ((bruijn ##.%k.312 16 0) (##string ##.string.1153)) (basic-block 1 1 (##.%p.828) ((##vcore.eq? (bruijn ##.sym.13 17 1) '##vcore.record?)) (if (bruijn ##.%p.828 0 0) ((bruijn ##.%k.312 17 0) (##string ##.string.1154)) (basic-block 1 1 (##.%p.829) ((##vcore.eq? (bruijn ##.sym.13 18 1) '##vcore.vector?)) (if (bruijn ##.%p.829 0 0) ((bruijn ##.%k.312 18 0) (##string ##.string.1155)) (basic-block 1 1 (##.%p.830) ((##vcore.eq? (bruijn ##.sym.13 19 1) '##vcore.hash-table?)) (if (bruijn ##.%p.830 0 0) ((bruijn ##.%k.312 19 0) (##string ##.string.1156)) (basic-block 1 1 (##.%p.831) ((##vcore.eq? (bruijn ##.sym.13 20 1) '##vcore.procedure?)) (if (bruijn ##.%p.831 0 0) ((bruijn ##.%k.312 20 0) (##string ##.string.1157)) (basic-block 1 1 (##.%p.832) ((##vcore.eq? (bruijn ##.sym.13 21 1) '##vcore.blob?)) (if (bruijn ##.%p.832 0 0) ((bruijn ##.%k.312 21 0) (##string ##.string.1158)) (basic-block 1 1 (##.%p.833) ((##vcore.eq? (bruijn ##.sym.13 22 1) '##vcore.symbol?)) (if (bruijn ##.%p.833 0 0) ((bruijn ##.%k.312 22 0) (##string ##.string.1159)) (basic-block 1 1 (##.%p.834) ((##vcore.eq? (bruijn ##.sym.13 23 1) '##vcore.string?)) (if (bruijn ##.%p.834 0 0) ((bruijn ##.%k.312 23 0) (##string ##.string.1160)) (basic-block 1 1 (##.%p.835) ((##vcore.eq? (bruijn ##.sym.13 24 1) '##vcore.int?)) (if (bruijn ##.%p.835 0 0) ((bruijn ##.%k.312 24 0) (##string ##.string.1161)) (basic-block 1 1 (##.%p.836) ((##vcore.eq? (bruijn ##.sym.13 25 1) '##vcore.double?)) (if (bruijn ##.%p.836 0 0) ((bruijn ##.%k.312 25 0) (##string ##.string.1162)) (basic-block 1 1 (##.%p.837) ((##vcore.eq? (bruijn ##.sym.13 26 1) '##vcore.char?)) (if (bruijn ##.%p.837 0 0) ((bruijn ##.%k.312 26 0) (##string ##.string.1163)) (basic-block 1 1 (##.%p.838) ((##vcore.eq? (bruijn ##.sym.13 27 1) '##vcore.void?)) (if (bruijn ##.%p.838 0 0) ((bruijn ##.%k.312 27 0) (##string ##.string.1164)) (basic-block 1 1 (##.%p.839) ((##vcore.eq? (bruijn ##.sym.13 28 1) '##vcore.nullptr?)) (if (bruijn ##.%p.839 0 0) ((bruijn ##.%k.312 28 0) (##string ##.string.1165)) (basic-block 1 1 (##.%p.840) ((##vcore.eq? (bruijn ##.sym.13 29 1) '##vcore.foreign-pointer?)) (if (bruijn ##.%p.840 0 0) ((bruijn ##.%k.312 29 0) (##string ##.string.1166)) (basic-block 1 1 (##.%p.841) ((##vcore.eq? (bruijn ##.sym.13 30 1) '##vcore.eq?)) (if (bruijn ##.%p.841 0 0) ((bruijn ##.%k.312 30 0) (##string ##.string.1167)) (basic-block 1 1 (##.%p.842) ((##vcore.eq? (bruijn ##.sym.13 31 1) '##vcore.symbol=?)) (if (bruijn ##.%p.842 0 0) ((bruijn ##.%k.312 31 0) (##string ##.string.1168)) (basic-block 1 1 (##.%p.843) ((##vcore.eq? (bruijn ##.sym.13 32 1) '##vcore.blob=?)) (if (bruijn ##.%p.843 0 0) ((bruijn ##.%k.312 32 0) (##string ##.string.1169)) (basic-block 1 1 (##.%p.844) ((##vcore.eq? (bruijn ##.sym.13 33 1) '##vcore.eqv?)) (if (bruijn ##.%p.844 0 0) ((bruijn ##.%k.312 33 0) (##string ##.string.1167)) (basic-block 1 1 (##.%p.845) ((##vcore.eq? (bruijn ##.sym.13 34 1) '##vcore.not)) (if (bruijn ##.%p.845 0 0) ((bruijn ##.%k.312 34 0) (##string ##.string.1170)) (basic-block 1 1 (##.%p.846) ((##vcore.eq? (bruijn ##.sym.13 35 1) '##vcore.get-dynamics)) (if (bruijn ##.%p.846 0 0) ((bruijn ##.%k.312 35 0) (##string ##.string.1171)) (basic-block 1 1 (##.%p.847) ((##vcore.eq? (bruijn ##.sym.13 36 1) '##vcore.push-dynamic)) (if (bruijn ##.%p.847 0 0) ((bruijn ##.%k.312 36 0) (##string ##.string.1172)) (basic-block 1 1 (##.%p.848) ((##vcore.eq? (bruijn ##.sym.13 37 1) '##vcore.pop-dynamic)) (if (bruijn ##.%p.848 0 0) ((bruijn ##.%k.312 37 0) (##string ##.string.1173)) (basic-block 1 1 (##.%p.849) ((##vcore.eq? (bruijn ##.sym.13 38 1) '##vcore.get-exception-handler)) (if (bruijn ##.%p.849 0 0) ((bruijn ##.%k.312 38 0) (##string ##.string.1174)) (basic-block 1 1 (##.%p.850) ((##vcore.eq? (bruijn ##.sym.13 39 1) '##vcore.push-exception-handler)) (if (bruijn ##.%p.850 0 0) ((bruijn ##.%k.312 39 0) (##string ##.string.1175)) (basic-block 1 1 (##.%p.851) ((##vcore.eq? (bruijn ##.sym.13 40 1) '##vcore.pop-exception-handler)) (if (bruijn ##.%p.851 0 0) ((bruijn ##.%k.312 40 0) (##string ##.string.1176)) (basic-block 1 1 (##.%p.852) ((##vcore.eq? (bruijn ##.sym.13 41 1) '##vcore.raise)) (if (bruijn ##.%p.852 0 0) ((bruijn ##.%k.312 41 0) (##string ##.string.1177)) (basic-block 1 1 (##.%p.853) ((##vcore.eq? (bruijn ##.sym.13 42 1) '##vcore.next)) (if (bruijn ##.%p.853 0 0) ((bruijn ##.%k.312 42 0) (##string ##.string.1178)) (basic-block 1 1 (##.%p.854) ((##vcore.eq? (bruijn ##.sym.13 43 1) '##vcore.call/cc)) (if (bruijn ##.%p.854 0 0) ((bruijn ##.%k.312 43 0) (##string ##.string.1179)) (basic-block 1 1 (##.%p.855) ((##vcore.eq? (bruijn ##.sym.13 44 1) '##vcore.call-with-values)) (if (bruijn ##.%p.855 0 0) ((bruijn ##.%k.312 44 0) (##string ##.string.1180)) (basic-block 1 1 (##.%p.856) ((##vcore.eq? (bruijn ##.sym.13 45 1) '##vcore.apply)) (if (bruijn ##.%p.856 0 0) ((bruijn ##.%k.312 45 0) (##string ##.string.1181)) (basic-block 1 1 (##.%p.857) ((##vcore.eq? (bruijn ##.sym.13 46 1) '##vcore.apply-cps)) (if (bruijn ##.%p.857 0 0) ((bruijn ##.%k.312 46 0) (##string ##.string.1182)) (basic-block 1 1 (##.%p.858) ((##vcore.eq? (bruijn ##.sym.13 47 1) '##vcore.abort)) (if (bruijn ##.%p.858 0 0) ((bruijn ##.%k.312 47 0) (##string ##.string.1183)) (basic-block 1 1 (##.%p.859) ((##vcore.eq? (bruijn ##.sym.13 48 1) '##vcore.exit)) (if (bruijn ##.%p.859 0 0) ((bruijn ##.%k.312 48 0) (##string ##.string.1184)) (basic-block 1 1 (##.%p.860) ((##vcore.eq? (bruijn ##.sym.13 49 1) '##vcore.define-global)) (if (bruijn ##.%p.860 0 0) ((bruijn ##.%k.312 49 0) (##string ##.string.1185)) (basic-block 1 1 (##.%p.861) ((##vcore.eq? (bruijn ##.sym.13 50 1) '##vcore.set-global!)) (if (bruijn ##.%p.861 0 0) ((bruijn ##.%k.312 50 0) (##string ##.string.1186)) (basic-block 1 1 (##.%p.862) ((##vcore.eq? (bruijn ##.sym.13 51 1) '##vcore.function)) (if (bruijn ##.%p.862 0 0) ((bruijn ##.%k.312 51 0) (##string ##.string.1187)) (basic-block 1 1 (##.%p.863) ((##vcore.eq? (bruijn ##.sym.13 52 1) '##vcore.function3)) (if (bruijn ##.%p.863 0 0) ((bruijn ##.%k.312 52 0) (##string ##.string.1188)) (basic-block 1 1 (##.%p.864) ((##vcore.eq? (bruijn ##.sym.13 53 1) '##vcore.set-declare!)) (if (bruijn ##.%p.864 0 0) ((bruijn ##.%k.312 53 0) (##string ##.string.1189)) (basic-block 1 1 (##.%p.865) ((##vcore.eq? (bruijn ##.sym.13 54 1) '##vcore.define)) (if (bruijn ##.%p.865 0 0) ((bruijn ##.%k.312 54 0) (##string ##.string.1185)) (basic-block 1 1 (##.%p.866) ((##vcore.eq? (bruijn ##.sym.13 55 1) '##vcore.multidefine)) (if (bruijn ##.%p.866 0 0) ((bruijn ##.%k.312 55 0) (##string ##.string.1190)) (basic-block 1 1 (##.%p.867) ((##vcore.eq? (bruijn ##.sym.13 56 1) '##vcore.lookup-library)) (if (bruijn ##.%p.867 0 0) ((bruijn ##.%k.312 56 0) (##string ##.string.1191)) (basic-block 1 1 (##.%p.868) ((##vcore.eq? (bruijn ##.sym.13 57 1) '##vcore.make-import)) (if (bruijn ##.%p.868 0 0) ((bruijn ##.%k.312 57 0) (##string ##.string.1192)) (basic-block 1 1 (##.%p.869) ((##vcore.eq? (bruijn ##.sym.13 58 1) '##vcore.load-library)) (if (bruijn ##.%p.869 0 0) ((bruijn ##.%k.312 58 0) (##string ##.string.1193)) (basic-block 1 1 (##.%p.870) ((##vcore.eq? (bruijn ##.sym.13 59 1) '##vcore.unload-library)) (if (bruijn ##.%p.870 0 0) ((bruijn ##.%k.312 59 0) (##string ##.string.1194)) (basic-block 1 1 (##.%p.871) ((##vcore.eq? (bruijn ##.sym.13 60 1) '##vcore.cons)) ((close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7) (close _V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V10vcore_Dinexact);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1138.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      _V10vcore_Dexact);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1139.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      _V10vcore_D_P);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1140.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[1],
      _V10vcore_D__);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1141.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      _V10vcore_D_S);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1142.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      _V10vcore_D_W);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1143.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      _V10vcore_Dcmp);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1144.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      _V10vcore_D_L_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1145.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      _V10vcore_D_L);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1146.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      _V10vcore_D_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1147.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      _V10vcore_D_G_E);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1148.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 12-1, 1),
      _V10vcore_D_G);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1149.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      _V10vcore_Dquotient);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1150.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      _V10vcore_Dremainder);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1151.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 15-1, 1),
      _V10vcore_Dnull_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1152.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      _V10vcore_Dpair_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1153.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      _V10vcore_Drecord_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1154.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 18-1, 1),
      _V10vcore_Dvector_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1155.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 19-1, 1),
      _V10vcore_Dhash__table_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1156.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 20-1, 1),
      _V10vcore_Dprocedure_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1157.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 21-1, 1),
      _V10vcore_Dblob_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1158.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 22-1, 1),
      _V10vcore_Dsymbol_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1159.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 23-1, 1),
      _V10vcore_Dstring_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1160.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 24-1, 1),
      _V10vcore_Dint_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1161.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 25-1, 1),
      _V10vcore_Ddouble_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1162.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 26-1, 1),
      _V10vcore_Dchar_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1163.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 27-1, 1),
      _V10vcore_Dvoid_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1164.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 28-1, 1),
      _V10vcore_Dnullptr_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1165.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 29-1, 1),
      _V10vcore_Dforeign__pointer_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1166.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 30-1, 1),
      _V10vcore_Deq_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1167.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 31-1, 1),
      _V10vcore_Dsymbol_E_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1168.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 32-1, 1),
      _V10vcore_Dblob_E_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1169.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 33-1, 1),
      _V10vcore_Deqv_Q);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1167.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 34-1, 1),
      _V10vcore_Dnot);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1170.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 35-1, 1),
      _V10vcore_Dget__dynamics);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1171.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 36-1, 1),
      _V10vcore_Dpush__dynamic);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1172.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 37-1, 1),
      _V10vcore_Dpop__dynamic);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1173.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 38-1, 1),
      _V10vcore_Dget__exception__handler);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1174.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 39-1, 1),
      _V10vcore_Dpush__exception__handler);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1175.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 40-1, 1),
      _V10vcore_Dpop__exception__handler);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1176.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 41-1, 1),
      _V10vcore_Draise);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1177.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 42-1, 1),
      _V10vcore_Dnext);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1178.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 43-1, 1),
      _V10vcore_Dcall_Wcc);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1179.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 44-1, 1),
      _V10vcore_Dcall__with__values);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1180.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 45-1, 1),
      _V10vcore_Dapply);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1181.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 46-1, 1),
      _V10vcore_Dapply__cps);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1182.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 47-1, 1),
      _V10vcore_Dabort);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1183.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 48-1, 1),
      _V10vcore_Dexit);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1184.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 49-1, 1),
      _V10vcore_Ddefine__global);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1185.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 50-1, 1),
      _V10vcore_Dset__global_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1186.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 51-1, 1),
      _V10vcore_Dfunction);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1187.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 52-1, 1),
      _V10vcore_Dfunction3);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1188.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 53-1, 1),
      _V10vcore_Dset__declare_B);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1189.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 54-1, 1),
      _V10vcore_Ddefine);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1185.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 55-1, 1),
      _V10vcore_Dmultidefine);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1190.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 56-1, 1),
      _V10vcore_Dlookup__library);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1191.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 57-1, 1),
      _V10vcore_Dmake__import);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1192.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 58-1, 1),
      _V10vcore_Dload__library);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1193.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 59-1, 1),
      _V10vcore_Dunload__library);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1194.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 60-1, 1),
      _V10vcore_Dcons);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8, self)))));
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
void _V50_V0vanity_V0intrinsics_V0lookup__inline__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0intrinsics_V0lookup__inline__name" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0intrinsics_V0lookup__inline__name, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.518 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V0vanity_V0intrinsics_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity intrinsics) 4 ((close "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic" (vanity intrinsics)) (close "_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q" (vanity intrinsics)) (close "_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name" (vanity intrinsics)) (close "_V50_V0vanity_V0intrinsics_V0lookup__inline__name" (vanity intrinsics))) (basic-block 8 8 (##.%x.1016 ##.%x.1017 ##.%x.1018 ##.%x.1019 ##.%x.1020 ##.%x.1021 ##.%x.1022 ##.%r.1023) ((##vcore.cons 'lookup-inline-name (bruijn ##.lookup-inline-name.8 1 3)) (##vcore.cons 'lookup-intrinsic-name (bruijn ##.lookup-intrinsic-name.7 1 2)) (##vcore.cons 'lookup-intrinsic (bruijn ##.lookup-intrinsic.5 1 0)) (##vcore.cons 'is-basic-intrinsic? (bruijn ##.is-basic-intrinsic?.6 1 1)) (##vcore.cons (bruijn ##.%x.1019 0 3) '()) (##vcore.cons (bruijn ##.%x.1018 0 2) (bruijn ##.%x.1020 0 4)) (##vcore.cons (bruijn ##.%x.1017 0 1) (bruijn ##.%x.1021 0 5)) (##vcore.cons (bruijn ##.%x.1016 0 0) (bruijn ##.%x.1022 0 6))) ((bruijn ##.%k.21 2 0) (bruijn ##.%r.1023 0 7))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    _V60_V0vanity_V0intrinsics = self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic, _V60_V0vanity_V0intrinsics))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, _V60_V0vanity_V0intrinsics))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, _V60_V0vanity_V0intrinsics))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name, _V60_V0vanity_V0intrinsics))));
    VRegisterStaticEnv("_V0vanity_V0intrinsics_V20", &_V60_V0vanity_V0intrinsics);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0lookup__inline__name,
      statics->vars[3]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0lookup__intrinsic__name,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lookup__intrinsic,
      statics->vars[0]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0is__basic__intrinsic_Q,
      statics->vars[1]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[7]);
    }
    }
}
static void _V0vanity_V0intrinsics_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0intrinsics_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0intrinsics_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.17 0 0) (close _V0vanity_V0intrinsics_V20_V0lambda2) (close _V0vanity_V0intrinsics_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0intrinsics_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0intrinsics_V20 = (VFunc)_V0vanity_V0intrinsics_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V10vcore_Dregister__sigint = VEncodePointer(VInternSymbol(847283797, &_VW_V10vcore_Dregister__sigint.sym), VPOINTER_OTHER);
  _V10vcore_Dset__declare_B = VEncodePointer(VInternSymbol(940374228, &_VW_V10vcore_Dset__declare_B.sym), VPOINTER_OTHER);
  _V10vcore_Dfunction3 = VEncodePointer(VInternSymbol(-501529761, &_VW_V10vcore_Dfunction3.sym), VPOINTER_OTHER);
  _V10vcore_Dbit__count = VEncodePointer(VInternSymbol(700512465, &_VW_V10vcore_Dbit__count.sym), VPOINTER_OTHER);
  _V10vcore_Darithmetic__shift = VEncodePointer(VInternSymbol(1115370201, &_VW_V10vcore_Darithmetic__shift.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__orc2 = VEncodePointer(VInternSymbol(1312963638, &_VW_V10vcore_Dbitwise__orc2.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__orc1 = VEncodePointer(VInternSymbol(-1464552358, &_VW_V10vcore_Dbitwise__orc1.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__andc2 = VEncodePointer(VInternSymbol(1145448127, &_VW_V10vcore_Dbitwise__andc2.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__andc1 = VEncodePointer(VInternSymbol(819454810, &_VW_V10vcore_Dbitwise__andc1.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__nor = VEncodePointer(VInternSymbol(-1685079465, &_VW_V10vcore_Dbitwise__nor.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__nand = VEncodePointer(VInternSymbol(-1295764500, &_VW_V10vcore_Dbitwise__nand.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__xnor = VEncodePointer(VInternSymbol(1177501829, &_VW_V10vcore_Dbitwise__xnor.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__and = VEncodePointer(VInternSymbol(-1896169105, &_VW_V10vcore_Dbitwise__and.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__xor = VEncodePointer(VInternSymbol(1245954163, &_VW_V10vcore_Dbitwise__xor.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__ior = VEncodePointer(VInternSymbol(-942170661, &_VW_V10vcore_Dbitwise__ior.sym), VPOINTER_OTHER);
  _V10vcore_Dbitwise__not = VEncodePointer(VInternSymbol(1865478194, &_VW_V10vcore_Dbitwise__not.sym), VPOINTER_OTHER);
  _V10vcore_Djiffies__per__second = VEncodePointer(VInternSymbol(471812165, &_VW_V10vcore_Djiffies__per__second.sym), VPOINTER_OTHER);
  _V10vcore_Dcurrent__jiffy = VEncodePointer(VInternSymbol(671239984, &_VW_V10vcore_Dcurrent__jiffy.sym), VPOINTER_OTHER);
  _V10vcore_Daccess = VEncodePointer(VInternSymbol(-102570934, &_VW_V10vcore_Daccess.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__temporary__file = VEncodePointer(VInternSymbol(-2135995161, &_VW_V10vcore_Dmake__temporary__file.sym), VPOINTER_OTHER);
  _V10vcore_Drealpath = VEncodePointer(VInternSymbol(878551929, &_VW_V10vcore_Drealpath.sym), VPOINTER_OTHER);
  _V10vcore_Dawait = VEncodePointer(VInternSymbol(-3363662, &_VW_V10vcore_Dawait.sym), VPOINTER_OTHER);
  _V10vcore_Dasync = VEncodePointer(VInternSymbol(-2075391417, &_VW_V10vcore_Dasync.sym), VPOINTER_OTHER);
  _V10vcore_Dfiber__fork__list = VEncodePointer(VInternSymbol(1220448136, &_VW_V10vcore_Dfiber__fork__list.sym), VPOINTER_OTHER);
  _V10vcore_Drandom__advance_B = VEncodePointer(VInternSymbol(-243223548, &_VW_V10vcore_Drandom__advance_B.sym), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__float_B = VEncodePointer(VInternSymbol(1607740539, &_VW_V10vcore_Drandom__sample__float_B.sym), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__bounded_B = VEncodePointer(VInternSymbol(-894981541, &_VW_V10vcore_Drandom__sample__bounded_B.sym), VPOINTER_OTHER);
  _V10vcore_Drandom__sample_B = VEncodePointer(VInternSymbol(-952916642, &_VW_V10vcore_Drandom__sample_B.sym), VPOINTER_OTHER);
  _V10vcore_Drandom__copy = VEncodePointer(VInternSymbol(-188815275, &_VW_V10vcore_Drandom__copy.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__random = VEncodePointer(VInternSymbol(1229194915, &_VW_V10vcore_Dmake__random.sym), VPOINTER_OTHER);
  _V10vcore_Dcommand__line = VEncodePointer(VInternSymbol(648817384, &_VW_V10vcore_Dcommand__line.sym), VPOINTER_OTHER);
  _V10vcore_Dopen__output__process = VEncodePointer(VInternSymbol(-882281378, &_VW_V10vcore_Dopen__output__process.sym), VPOINTER_OTHER);
  _V10vcore_Dopen__input__process = VEncodePointer(VInternSymbol(-1182050525, &_VW_V10vcore_Dopen__input__process.sym), VPOINTER_OTHER);
  _V10vcore_Dsystem = VEncodePointer(VInternSymbol(935667990, &_VW_V10vcore_Dsystem.sym), VPOINTER_OTHER);
  _V10vcore_Dyield__to__host__major = VEncodePointer(VInternSymbol(1829697112, &_VW_V10vcore_Dyield__to__host__major.sym), VPOINTER_OTHER);
  _V10vcore_Dyield__to__host = VEncodePointer(VInternSymbol(282732110, &_VW_V10vcore_Dyield__to__host.sym), VPOINTER_OTHER);
  _V10vcore_Dgarbage__collect = VEncodePointer(VInternSymbol(-1978291771, &_VW_V10vcore_Dgarbage__collect.sym), VPOINTER_OTHER);
  _V10vcore_Dfinalize_B = VEncodePointer(VInternSymbol(846452306, &_VW_V10vcore_Dfinalize_B.sym), VPOINTER_OTHER);
  _V10vcore_Dhas__finalizer_Q = VEncodePointer(VInternSymbol(-965442188, &_VW_V10vcore_Dhas__finalizer_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dset__finalizer_B = VEncodePointer(VInternSymbol(1182306547, &_VW_V10vcore_Dset__finalizer_B.sym), VPOINTER_OTHER);
  _V10vcore_Dnewline__stdout = VEncodePointer(VInternSymbol(2087695336, &_VW_V10vcore_Dnewline__stdout.sym), VPOINTER_OTHER);
  _V10vcore_Dwrite__stdout = VEncodePointer(VInternSymbol(415233662, &_VW_V10vcore_Dwrite__stdout.sym), VPOINTER_OTHER);
  _V10vcore_Ddisplay__stdout = VEncodePointer(VInternSymbol(1962598561, &_VW_V10vcore_Ddisplay__stdout.sym), VPOINTER_OTHER);
  _V10vcore_Dnewline = VEncodePointer(VInternSymbol(1495081256, &_VW_V10vcore_Dnewline.sym), VPOINTER_OTHER);
  _V10vcore_Dwrite = VEncodePointer(VInternSymbol(470178830, &_VW_V10vcore_Dwrite.sym), VPOINTER_OTHER);
  _V10vcore_Ddisplay__word = VEncodePointer(VInternSymbol(1671076545, &_VW_V10vcore_Ddisplay__word.sym), VPOINTER_OTHER);
  _V10vcore_Dread = VEncodePointer(VInternSymbol(2066060051, &_VW_V10vcore_Dread.sym), VPOINTER_OTHER);
  _V10vcore_Dread__line2 = VEncodePointer(VInternSymbol(-368957830, &_VW_V10vcore_Dread__line2.sym), VPOINTER_OTHER);
  _V10vcore_Dread__line = VEncodePointer(VInternSymbol(756554351, &_VW_V10vcore_Dread__line.sym), VPOINTER_OTHER);
  _V10vcore_Dread__char = VEncodePointer(VInternSymbol(48955712, &_VW_V10vcore_Dread__char.sym), VPOINTER_OTHER);
  _V10vcore_Deof__object_Q = VEncodePointer(VInternSymbol(1702741960, &_VW_V10vcore_Deof__object_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dget__output__string = VEncodePointer(VInternSymbol(-1029405022, &_VW_V10vcore_Dget__output__string.sym), VPOINTER_OTHER);
  _V10vcore_Dopen__output__string = VEncodePointer(VInternSymbol(-1362250334, &_VW_V10vcore_Dopen__output__string.sym), VPOINTER_OTHER);
  _V10vcore_Dtty__port_Q = VEncodePointer(VInternSymbol(-855771870, &_VW_V10vcore_Dtty__port_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dclose__stream = VEncodePointer(VInternSymbol(568955533, &_VW_V10vcore_Dclose__stream.sym), VPOINTER_OTHER);
  _V10vcore_Dopen__output__stream = VEncodePointer(VInternSymbol(997507113, &_VW_V10vcore_Dopen__output__stream.sym), VPOINTER_OTHER);
  _V10vcore_Dopen__input__stream = VEncodePointer(VInternSymbol(-1954281109, &_VW_V10vcore_Dopen__input__stream.sym), VPOINTER_OTHER);
  _V10vcore_Dstderr___Gport = VEncodePointer(VInternSymbol(1200150723, &_VW_V10vcore_Dstderr___Gport.sym), VPOINTER_OTHER);
  _V10vcore_Dstdout___Gport = VEncodePointer(VInternSymbol(26194562, &_VW_V10vcore_Dstdout___Gport.sym), VPOINTER_OTHER);
  _V10vcore_Dstdin___Gport = VEncodePointer(VInternSymbol(787036741, &_VW_V10vcore_Dstdin___Gport.sym), VPOINTER_OTHER);
  _V10vcore_Dinteger___Gchar = VEncodePointer(VInternSymbol(-225562773, &_VW_V10vcore_Dinteger___Gchar.sym), VPOINTER_OTHER);
  _V10vcore_Dchar__integer = VEncodePointer(VInternSymbol(-1709202038, &_VW_V10vcore_Dchar__integer.sym), VPOINTER_OTHER);
  _V10vcore_Dgensym = VEncodePointer(VInternSymbol(-156380267, &_VW_V10vcore_Dgensym.sym), VPOINTER_OTHER);
  _V10vcore_Dsymbol___Gstring = VEncodePointer(VInternSymbol(-1755717450, &_VW_V10vcore_Dsymbol___Gstring.sym), VPOINTER_OTHER);
  _V10vcore_Dstring___Gnumber = VEncodePointer(VInternSymbol(1464887667, &_VW_V10vcore_Dstring___Gnumber.sym), VPOINTER_OTHER);
  _V10vcore_Dstring___Gsymbol = VEncodePointer(VInternSymbol(653165939, &_VW_V10vcore_Dstring___Gsymbol.sym), VPOINTER_OTHER);
  _V10vcore_Dstring__length = VEncodePointer(VInternSymbol(-1892902993, &_VW_V10vcore_Dstring__length.sym), VPOINTER_OTHER);
  _V10vcore_Dstring__set_B = VEncodePointer(VInternSymbol(61416737, &_VW_V10vcore_Dstring__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Dstring__ref = VEncodePointer(VInternSymbol(1934412251, &_VW_V10vcore_Dstring__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dstring__copy_B = VEncodePointer(VInternSymbol(1008644500, &_VW_V10vcore_Dstring__copy_B.sym), VPOINTER_OTHER);
  _V10vcore_Dsubstring = VEncodePointer(VInternSymbol(-1499057758, &_VW_V10vcore_Dsubstring.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__string = VEncodePointer(VInternSymbol(-812690547, &_VW_V10vcore_Dmake__string.sym), VPOINTER_OTHER);
  _V10vcore_Dhash__table__delete_B = VEncodePointer(VInternSymbol(235301299, &_VW_V10vcore_Dhash__table__delete_B.sym), VPOINTER_OTHER);
  _V10vcore_Dhash__table__set_B = VEncodePointer(VInternSymbol(-1127922867, &_VW_V10vcore_Dhash__table__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Dhash__table__ref = VEncodePointer(VInternSymbol(962111802, &_VW_V10vcore_Dhash__table__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dhash__table__vector = VEncodePointer(VInternSymbol(1800956393, &_VW_V10vcore_Dhash__table__vector.sym), VPOINTER_OTHER);
  _V10vcore_Dhash__table__hash__function = VEncodePointer(VInternSymbol(-65977091, &_VW_V10vcore_Dhash__table__hash__function.sym), VPOINTER_OTHER);
  _V10vcore_Dhash__table__equivalence__function = VEncodePointer(VInternSymbol(560212050, &_VW_V10vcore_Dhash__table__equivalence__function.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__hash__table = VEncodePointer(VInternSymbol(264423349, &_VW_V10vcore_Dmake__hash__table.sym), VPOINTER_OTHER);
  _V10vcore_Dread__u8vector = VEncodePointer(VInternSymbol(1918205805, &_VW_V10vcore_Dread__u8vector.sym), VPOINTER_OTHER);
  _V10vcore_Ds8vector__length = VEncodePointer(VInternSymbol(-162998119, &_VW_V10vcore_Ds8vector__length.sym), VPOINTER_OTHER);
  _V10vcore_Ds8vector__set_B = VEncodePointer(VInternSymbol(626079132, &_VW_V10vcore_Ds8vector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Ds8vector__ref = VEncodePointer(VInternSymbol(-1870319227, &_VW_V10vcore_Ds8vector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs8vector = VEncodePointer(VInternSymbol(-1495667680, &_VW_V10vcore_Dlist___Gs8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__s8vector = VEncodePointer(VInternSymbol(-340586998, &_VW_V10vcore_Dmake__s8vector.sym), VPOINTER_OTHER);
  _V10vcore_Ds8vector_Q = VEncodePointer(VInternSymbol(1757266961, &_VW_V10vcore_Ds8vector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Ds8vector = VEncodePointer(VInternSymbol(1166815344, &_VW_V10vcore_Ds8vector.sym), VPOINTER_OTHER);
  _V10vcore_Du8vector__length = VEncodePointer(VInternSymbol(1393581960, &_VW_V10vcore_Du8vector__length.sym), VPOINTER_OTHER);
  _V10vcore_Du8vector__set_B = VEncodePointer(VInternSymbol(-984050941, &_VW_V10vcore_Du8vector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Du8vector__ref = VEncodePointer(VInternSymbol(-1146944916, &_VW_V10vcore_Du8vector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu8vector = VEncodePointer(VInternSymbol(-398660499, &_VW_V10vcore_Dlist___Gu8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__u8vector = VEncodePointer(VInternSymbol(-1141430116, &_VW_V10vcore_Dmake__u8vector.sym), VPOINTER_OTHER);
  _V10vcore_Du8vector_Q = VEncodePointer(VInternSymbol(456948252, &_VW_V10vcore_Du8vector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Du8vector = VEncodePointer(VInternSymbol(2084266384, &_VW_V10vcore_Du8vector.sym), VPOINTER_OTHER);
  _V10vcore_Ds16vector__length = VEncodePointer(VInternSymbol(-727070483, &_VW_V10vcore_Ds16vector__length.sym), VPOINTER_OTHER);
  _V10vcore_Ds16vector__set_B = VEncodePointer(VInternSymbol(-1250451481, &_VW_V10vcore_Ds16vector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Ds16vector__ref = VEncodePointer(VInternSymbol(-122569208, &_VW_V10vcore_Ds16vector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs16vector = VEncodePointer(VInternSymbol(-604043574, &_VW_V10vcore_Dlist___Gs16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__s16vector = VEncodePointer(VInternSymbol(-1689014685, &_VW_V10vcore_Dmake__s16vector.sym), VPOINTER_OTHER);
  _V10vcore_Ds16vector_Q = VEncodePointer(VInternSymbol(-1488392107, &_VW_V10vcore_Ds16vector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Ds16vector = VEncodePointer(VInternSymbol(1282603556, &_VW_V10vcore_Ds16vector.sym), VPOINTER_OTHER);
  _V10vcore_Du16vector__length = VEncodePointer(VInternSymbol(-1697358903, &_VW_V10vcore_Du16vector__length.sym), VPOINTER_OTHER);
  _V10vcore_Du16vector__set_B = VEncodePointer(VInternSymbol(1946309558, &_VW_V10vcore_Du16vector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Du16vector__ref = VEncodePointer(VInternSymbol(-776529331, &_VW_V10vcore_Du16vector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu16vector = VEncodePointer(VInternSymbol(-288736869, &_VW_V10vcore_Dlist___Gu16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__u16vector = VEncodePointer(VInternSymbol(-912694225, &_VW_V10vcore_Dmake__u16vector.sym), VPOINTER_OTHER);
  _V10vcore_Du16vector_Q = VEncodePointer(VInternSymbol(1581038774, &_VW_V10vcore_Du16vector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Du16vector = VEncodePointer(VInternSymbol(-106839034, &_VW_V10vcore_Du16vector.sym), VPOINTER_OTHER);
  _V10vcore_Ds32vector__length = VEncodePointer(VInternSymbol(1983587795, &_VW_V10vcore_Ds32vector__length.sym), VPOINTER_OTHER);
  _V10vcore_Ds32vector__set_B = VEncodePointer(VInternSymbol(-93372752, &_VW_V10vcore_Ds32vector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Ds32vector__ref = VEncodePointer(VInternSymbol(2094752532, &_VW_V10vcore_Ds32vector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs32vector = VEncodePointer(VInternSymbol(-1792200977, &_VW_V10vcore_Dlist___Gs32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__s32vector = VEncodePointer(VInternSymbol(-339457972, &_VW_V10vcore_Dmake__s32vector.sym), VPOINTER_OTHER);
  _V10vcore_Ds32vector_Q = VEncodePointer(VInternSymbol(533915332, &_VW_V10vcore_Ds32vector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Ds32vector = VEncodePointer(VInternSymbol(-826393434, &_VW_V10vcore_Ds32vector.sym), VPOINTER_OTHER);
  _V10vcore_Df32vector__length = VEncodePointer(VInternSymbol(-1972159185, &_VW_V10vcore_Df32vector__length.sym), VPOINTER_OTHER);
  _V10vcore_Df32vector__set_B = VEncodePointer(VInternSymbol(1089212958, &_VW_V10vcore_Df32vector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Df32vector__ref = VEncodePointer(VInternSymbol(252270527, &_VW_V10vcore_Df32vector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf32vector = VEncodePointer(VInternSymbol(-797019339, &_VW_V10vcore_Dlist___Gf32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__f32vector = VEncodePointer(VInternSymbol(-1013795764, &_VW_V10vcore_Dmake__f32vector.sym), VPOINTER_OTHER);
  _V10vcore_Df32vector_Q = VEncodePointer(VInternSymbol(-817990383, &_VW_V10vcore_Df32vector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Df32vector = VEncodePointer(VInternSymbol(417631813, &_VW_V10vcore_Df32vector.sym), VPOINTER_OTHER);
  _V10vcore_Df64vector__length = VEncodePointer(VInternSymbol(-1894634683, &_VW_V10vcore_Df64vector__length.sym), VPOINTER_OTHER);
  _V10vcore_Df64vector__set_B = VEncodePointer(VInternSymbol(1969529339, &_VW_V10vcore_Df64vector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Df64vector__ref = VEncodePointer(VInternSymbol(1036348913, &_VW_V10vcore_Df64vector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf64vector = VEncodePointer(VInternSymbol(-1111467472, &_VW_V10vcore_Dlist___Gf64vector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__f64vector = VEncodePointer(VInternSymbol(829175144, &_VW_V10vcore_Dmake__f64vector.sym), VPOINTER_OTHER);
  _V10vcore_Df64vector_Q = VEncodePointer(VInternSymbol(1475204336, &_VW_V10vcore_Df64vector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Df64vector = VEncodePointer(VInternSymbol(-1067922825, &_VW_V10vcore_Df64vector.sym), VPOINTER_OTHER);
  _V10vcore_Dvector__length = VEncodePointer(VInternSymbol(2016980216, &_VW_V10vcore_Dvector__length.sym), VPOINTER_OTHER);
  _V10vcore_Dvector__set_B = VEncodePointer(VInternSymbol(1062100534, &_VW_V10vcore_Dvector__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Dvector__ref = VEncodePointer(VInternSymbol(-487754107, &_VW_V10vcore_Dvector__ref.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gvector = VEncodePointer(VInternSymbol(484282061, &_VW_V10vcore_Dlist___Gvector.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__vector = VEncodePointer(VInternSymbol(-912906856, &_VW_V10vcore_Dmake__vector.sym), VPOINTER_OTHER);
  _V10vcore_Dvector = VEncodePointer(VInternSymbol(-1789602761, &_VW_V10vcore_Dvector.sym), VPOINTER_OTHER);
  _V10vcore_Dappend = VEncodePointer(VInternSymbol(1742285522, &_VW_V10vcore_Dappend.sym), VPOINTER_OTHER);
  _V10vcore_Dset__cdr_B = VEncodePointer(VInternSymbol(-1721050845, &_VW_V10vcore_Dset__cdr_B.sym), VPOINTER_OTHER);
  _V10vcore_Dset__car_B = VEncodePointer(VInternSymbol(1079502229, &_VW_V10vcore_Dset__car_B.sym), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VInternSymbol(-1160051211, &_VW_V10vcore_Dcdr.sym), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VInternSymbol(976741304, &_VW_V10vcore_Dcar.sym), VPOINTER_OTHER);
  _V10vcore_Dqcons = VEncodePointer(VInternSymbol(-1450939338, &_VW_V10vcore_Dqcons.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V10vcore_Dunload__library = VEncodePointer(VInternSymbol(514499771, &_VW_V10vcore_Dunload__library.sym), VPOINTER_OTHER);
  _V10vcore_Dload__library = VEncodePointer(VInternSymbol(-798060666, &_VW_V10vcore_Dload__library.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__import = VEncodePointer(VInternSymbol(-743613550, &_VW_V10vcore_Dmake__import.sym), VPOINTER_OTHER);
  _V10vcore_Dlookup__library = VEncodePointer(VInternSymbol(891695491, &_VW_V10vcore_Dlookup__library.sym), VPOINTER_OTHER);
  _V10vcore_Dmultidefine = VEncodePointer(VInternSymbol(2021955755, &_VW_V10vcore_Dmultidefine.sym), VPOINTER_OTHER);
  _V10vcore_Ddefine = VEncodePointer(VInternSymbol(-65267310, &_VW_V10vcore_Ddefine.sym), VPOINTER_OTHER);
  _V10vcore_Dfunction = VEncodePointer(VInternSymbol(995907794, &_VW_V10vcore_Dfunction.sym), VPOINTER_OTHER);
  _V10vcore_Drecord__length = VEncodePointer(VInternSymbol(-1182838825, &_VW_V10vcore_Drecord__length.sym), VPOINTER_OTHER);
  _V10vcore_Drecord__set_B = VEncodePointer(VInternSymbol(520756061, &_VW_V10vcore_Drecord__set_B.sym), VPOINTER_OTHER);
  _V10vcore_Drecord__ref = VEncodePointer(VInternSymbol(617706384, &_VW_V10vcore_Drecord__ref.sym), VPOINTER_OTHER);
  _V10vcore_Drecord = VEncodePointer(VInternSymbol(743129318, &_VW_V10vcore_Drecord.sym), VPOINTER_OTHER);
  _V10vcore_Dset__global_B = VEncodePointer(VInternSymbol(-121985904, &_VW_V10vcore_Dset__global_B.sym), VPOINTER_OTHER);
  _V10vcore_Ddefine__global = VEncodePointer(VInternSymbol(-346187274, &_VW_V10vcore_Ddefine__global.sym), VPOINTER_OTHER);
  _V10vcore_Dexit = VEncodePointer(VInternSymbol(1029128203, &_VW_V10vcore_Dexit.sym), VPOINTER_OTHER);
  _V10vcore_Dabort = VEncodePointer(VInternSymbol(-2005265993, &_VW_V10vcore_Dabort.sym), VPOINTER_OTHER);
  _V10vcore_Dapply__cps = VEncodePointer(VInternSymbol(1050237310, &_VW_V10vcore_Dapply__cps.sym), VPOINTER_OTHER);
  _V10vcore_Dapply = VEncodePointer(VInternSymbol(1029936291, &_VW_V10vcore_Dapply.sym), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VInternSymbol(1537217383, &_VW_V10vcore_Dcall__with__values.sym), VPOINTER_OTHER);
  _V10vcore_Dcall_Wcc = VEncodePointer(VInternSymbol(482979242, &_VW_V10vcore_Dcall_Wcc.sym), VPOINTER_OTHER);
  _V10vcore_Dnext = VEncodePointer(VInternSymbol(-652201311, &_VW_V10vcore_Dnext.sym), VPOINTER_OTHER);
  _V10vcore_Draise = VEncodePointer(VInternSymbol(1209083558, &_VW_V10vcore_Draise.sym), VPOINTER_OTHER);
  _V10vcore_Dpop__exception__handler = VEncodePointer(VInternSymbol(1091879845, &_VW_V10vcore_Dpop__exception__handler.sym), VPOINTER_OTHER);
  _V10vcore_Dpush__exception__handler = VEncodePointer(VInternSymbol(220440008, &_VW_V10vcore_Dpush__exception__handler.sym), VPOINTER_OTHER);
  _V10vcore_Dget__exception__handler = VEncodePointer(VInternSymbol(636545418, &_VW_V10vcore_Dget__exception__handler.sym), VPOINTER_OTHER);
  _V10vcore_Dpop__dynamic = VEncodePointer(VInternSymbol(-1981597861, &_VW_V10vcore_Dpop__dynamic.sym), VPOINTER_OTHER);
  _V10vcore_Dpush__dynamic = VEncodePointer(VInternSymbol(1879853356, &_VW_V10vcore_Dpush__dynamic.sym), VPOINTER_OTHER);
  _V10vcore_Dget__dynamics = VEncodePointer(VInternSymbol(-905110170, &_VW_V10vcore_Dget__dynamics.sym), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VInternSymbol(904118690, &_VW_V10vcore_Dnot.sym), VPOINTER_OTHER);
  _V10vcore_Deqv_Q = VEncodePointer(VInternSymbol(-1972763382, &_VW_V10vcore_Deqv_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dblob_E_Q = VEncodePointer(VInternSymbol(36075437, &_VW_V10vcore_Dblob_E_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dsymbol_E_Q = VEncodePointer(VInternSymbol(1730793190, &_VW_V10vcore_Dsymbol_E_Q.sym), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VInternSymbol(434979212, &_VW_V10vcore_Deq_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dforeign__pointer_Q = VEncodePointer(VInternSymbol(1994122350, &_VW_V10vcore_Dforeign__pointer_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dnullptr_Q = VEncodePointer(VInternSymbol(-1069195546, &_VW_V10vcore_Dnullptr_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dvoid_Q = VEncodePointer(VInternSymbol(1114669637, &_VW_V10vcore_Dvoid_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dchar_Q = VEncodePointer(VInternSymbol(1043052971, &_VW_V10vcore_Dchar_Q.sym), VPOINTER_OTHER);
  _V10vcore_Ddouble_Q = VEncodePointer(VInternSymbol(-751088721, &_VW_V10vcore_Ddouble_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dint_Q = VEncodePointer(VInternSymbol(-1033406073, &_VW_V10vcore_Dint_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VInternSymbol(-1296233363, &_VW_V10vcore_Dstring_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dsymbol_Q = VEncodePointer(VInternSymbol(1503200735, &_VW_V10vcore_Dsymbol_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dblob_Q = VEncodePointer(VInternSymbol(-854351002, &_VW_V10vcore_Dblob_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dprocedure_Q = VEncodePointer(VInternSymbol(-1159898044, &_VW_V10vcore_Dprocedure_Q.sym), VPOINTER_OTHER);
  _V10vcore_Drecord_Q = VEncodePointer(VInternSymbol(1032511328, &_VW_V10vcore_Drecord_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dhash__table_Q = VEncodePointer(VInternSymbol(1037822878, &_VW_V10vcore_Dhash__table_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dvector_Q = VEncodePointer(VInternSymbol(1615080895, &_VW_V10vcore_Dvector_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VInternSymbol(-2140366458, &_VW_V10vcore_Dpair_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VInternSymbol(-577062031, &_VW_V10vcore_Dnull_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dremainder = VEncodePointer(VInternSymbol(1852746574, &_VW_V10vcore_Dremainder.sym), VPOINTER_OTHER);
  _V10vcore_Dquotient = VEncodePointer(VInternSymbol(-885327668, &_VW_V10vcore_Dquotient.sym), VPOINTER_OTHER);
  _V10vcore_D_G = VEncodePointer(VInternSymbol(2034575128, &_VW_V10vcore_D_G.sym), VPOINTER_OTHER);
  _V10vcore_D_G_E = VEncodePointer(VInternSymbol(-649527264, &_VW_V10vcore_D_G_E.sym), VPOINTER_OTHER);
  _V10vcore_D_E = VEncodePointer(VInternSymbol(-1575520747, &_VW_V10vcore_D_E.sym), VPOINTER_OTHER);
  _V10vcore_D_L = VEncodePointer(VInternSymbol(1686200305, &_VW_V10vcore_D_L.sym), VPOINTER_OTHER);
  _V10vcore_D_L_E = VEncodePointer(VInternSymbol(-443834917, &_VW_V10vcore_D_L_E.sym), VPOINTER_OTHER);
  _V10vcore_Dcmp = VEncodePointer(VInternSymbol(499420365, &_VW_V10vcore_Dcmp.sym), VPOINTER_OTHER);
  _V10vcore_D_W = VEncodePointer(VInternSymbol(-1214622260, &_VW_V10vcore_D_W.sym), VPOINTER_OTHER);
  _V10vcore_D_S = VEncodePointer(VInternSymbol(324676011, &_VW_V10vcore_D_S.sym), VPOINTER_OTHER);
  _V10vcore_D__ = VEncodePointer(VInternSymbol(861910462, &_VW_V10vcore_D__.sym), VPOINTER_OTHER);
  _V10vcore_D_P = VEncodePointer(VInternSymbol(419804493, &_VW_V10vcore_D_P.sym), VPOINTER_OTHER);
  _V10vcore_Dexact = VEncodePointer(VInternSymbol(1125478527, &_VW_V10vcore_Dexact.sym), VPOINTER_OTHER);
  _V10vcore_Dinexact = VEncodePointer(VInternSymbol(683811701, &_VW_V10vcore_Dinexact.sym), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VInternSymbol(-127727763, &_VW_V0lookup__inline__name.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0is__basic__intrinsic_Q = VEncodePointer(VInternSymbol(-832470335, &_VW_V0is__basic__intrinsic_Q.sym), VPOINTER_OTHER);
  _V0sym = VEncodePointer(VInternSymbol(2139759047, &_VW_V0sym.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0intrinsics = VEncodePointer(VInternSymbol(-1100999328, &_VW_V0intrinsics.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D1344.first = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1344.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1343.first = VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR);
  _V10_Dpair_D1343.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1342.first = _V0vanity;
  _V10_Dpair_D1342.rest = VEncodePointer(&_V10_Dpair_D1341, VPOINTER_PAIR);
  _V10_Dpair_D1341.first = _V0intrinsics;
  _V10_Dpair_D1341.rest = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1197.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1197.rest = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1196.first = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1196.rest = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1195.first = VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR);
  _V10_Dpair_D1195.rest = VNULL;
  _V10_Dpair_D1137.first = VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR);
  _V10_Dpair_D1137.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1136.first = VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR);
  _V10_Dpair_D1136.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1135.first = _V0vanity;
  _V10_Dpair_D1135.rest = VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR);
  _V10_Dpair_D1134.first = _V0intrinsics;
  _V10_Dpair_D1134.rest = VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR);
  _V10_Dpair_D1133.first = _V0lookup__intrinsic__name;
  _V10_Dpair_D1133.rest = VNULL;
  _V10_Dpair_D1132.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1132.rest = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D1131.first = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1131.rest = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D1130.first = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1130.rest = VNULL;
  _V10_Dpair_D1129.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1129.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1128.first = VEncodePointer(&_V10_Dpair_D1127, VPOINTER_PAIR);
  _V10_Dpair_D1128.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1127.first = _V0vanity;
  _V10_Dpair_D1127.rest = VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR);
  _V10_Dpair_D1126.first = _V0intrinsics;
  _V10_Dpair_D1126.rest = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1125.first = _V0is__basic__intrinsic_Q;
  _V10_Dpair_D1125.rest = VNULL;
  _V40_V10vcore_Dbit__count = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbit__count", &_VW_V40_V10vcore_Dbit__count), VPOINTER_CLOSURE);
  _V40_V10vcore_Darithmetic__shift = VEncodePointer(VLookupConstant("_V40_V10vcore_Darithmetic__shift", &_VW_V40_V10vcore_Darithmetic__shift), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__orc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc2", &_VW_V40_V10vcore_Dbitwise__orc2), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__orc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__orc1", &_VW_V40_V10vcore_Dbitwise__orc1), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__andc2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc2", &_VW_V40_V10vcore_Dbitwise__andc2), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__andc1 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__andc1", &_VW_V40_V10vcore_Dbitwise__andc1), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__nor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nor", &_VW_V40_V10vcore_Dbitwise__nor), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__nand = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__nand", &_VW_V40_V10vcore_Dbitwise__nand), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__xnor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__xnor", &_VW_V40_V10vcore_Dbitwise__xnor), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__and = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__and", &_VW_V40_V10vcore_Dbitwise__and), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__xor = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__xor", &_VW_V40_V10vcore_Dbitwise__xor), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__ior = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__ior", &_VW_V40_V10vcore_Dbitwise__ior), VPOINTER_CLOSURE);
  _V40_V10vcore_Dbitwise__not = VEncodePointer(VLookupConstant("_V40_V10vcore_Dbitwise__not", &_VW_V40_V10vcore_Dbitwise__not), VPOINTER_CLOSURE);
  _V40_V10vcore_Djiffies__per__second = VEncodePointer(VLookupConstant("_V40_V10vcore_Djiffies__per__second", &_VW_V40_V10vcore_Djiffies__per__second), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcurrent__jiffy = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcurrent__jiffy", &_VW_V40_V10vcore_Dcurrent__jiffy), VPOINTER_CLOSURE);
  _V40_V10vcore_Daccess = VEncodePointer(VLookupConstant("_V40_V10vcore_Daccess", &_VW_V40_V10vcore_Daccess), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V40_V10vcore_Drealpath = VEncodePointer(VLookupConstant("_V40_V10vcore_Drealpath", &_VW_V40_V10vcore_Drealpath), VPOINTER_CLOSURE);
  _V40_V10vcore_Dawait = VEncodePointer(VLookupConstant("_V40_V10vcore_Dawait", &_VW_V40_V10vcore_Dawait), VPOINTER_CLOSURE);
  _V40_V10vcore_Dasync = VEncodePointer(VLookupConstant("_V40_V10vcore_Dasync", &_VW_V40_V10vcore_Dasync), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfiber__fork__list", &_VW_V40_V10vcore_Dfiber__fork__list), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__advance_B", &_VW_V40_V10vcore_Drandom__advance_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__float_B", &_VW_V40_V10vcore_Drandom__sample__float_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample__bounded_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__bounded_B", &_VW_V40_V10vcore_Drandom__sample__bounded_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample_B", &_VW_V40_V10vcore_Drandom__sample_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__copy", &_VW_V40_V10vcore_Drandom__copy), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__random", &_VW_V40_V10vcore_Dmake__random), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
  _V40_V10vcore_Dyield__to__host__major = VEncodePointer(VLookupConstant("_V40_V10vcore_Dyield__to__host__major", &_VW_V40_V10vcore_Dyield__to__host__major), VPOINTER_CLOSURE);
  _V40_V10vcore_Dyield__to__host = VEncodePointer(VLookupConstant("_V40_V10vcore_Dyield__to__host", &_VW_V40_V10vcore_Dyield__to__host), VPOINTER_CLOSURE);
  _V40_V10vcore_Dgarbage__collect = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgarbage__collect", &_VW_V40_V10vcore_Dgarbage__collect), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfinalize_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfinalize_B", &_VW_V40_V10vcore_Dfinalize_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhas__finalizer_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhas__finalizer_Q", &_VW_V40_V10vcore_Dhas__finalizer_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__finalizer_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__finalizer_B", &_VW_V40_V10vcore_Dset__finalizer_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnewline__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnewline__stdout", &_VW_V40_V10vcore_Dnewline__stdout), VPOINTER_CLOSURE);
  _V40_V10vcore_Dwrite__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Dwrite__stdout", &_VW_V40_V10vcore_Dwrite__stdout), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddisplay__stdout = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddisplay__stdout", &_VW_V40_V10vcore_Ddisplay__stdout), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnewline = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnewline", &_VW_V40_V10vcore_Dnewline), VPOINTER_CLOSURE);
  _V40_V10vcore_Dwrite = VEncodePointer(VLookupConstant("_V40_V10vcore_Dwrite", &_VW_V40_V10vcore_Dwrite), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddisplay__word = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddisplay__word", &_VW_V40_V10vcore_Ddisplay__word), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread", &_VW_V40_V10vcore_Dread), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__line2 = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__line2", &_VW_V40_V10vcore_Dread__line2), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__line", &_VW_V40_V10vcore_Dread__line), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__char = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__char", &_VW_V40_V10vcore_Dread__char), VPOINTER_CLOSURE);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__output__string", &_VW_V40_V10vcore_Dget__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__string", &_VW_V40_V10vcore_Dopen__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dtty__port_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dtty__port_Q", &_VW_V40_V10vcore_Dtty__port_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dclose__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dclose__stream", &_VW_V40_V10vcore_Dclose__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__stream", &_VW_V40_V10vcore_Dopen__output__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__stream", &_VW_V40_V10vcore_Dopen__input__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstderr___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstderr___Gport", &_VW_V40_V10vcore_Dstderr___Gport), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstdout___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstdout___Gport", &_VW_V40_V10vcore_Dstdout___Gport), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstdin___Gport = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstdin___Gport", &_VW_V40_V10vcore_Dstdin___Gport), VPOINTER_CLOSURE);
  _V40_V10vcore_Dinteger___Gchar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinteger___Gchar", &_VW_V40_V10vcore_Dinteger___Gchar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gnumber", &_VW_V40_V10vcore_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gsymbol", &_VW_V40_V10vcore_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__length", &_VW_V40_V10vcore_Dstring__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__copy_B", &_VW_V40_V10vcore_Dstring__copy_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsubstring", &_VW_V40_V10vcore_Dsubstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__string", &_VW_V40_V10vcore_Dmake__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__delete_B", &_VW_V40_V10vcore_Dhash__table__delete_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__set_B", &_VW_V40_V10vcore_Dhash__table__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__ref", &_VW_V40_V10vcore_Dhash__table__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__vector", &_VW_V40_V10vcore_Dhash__table__vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__hash__function", &_VW_V40_V10vcore_Dhash__table__hash__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__equivalence__function", &_VW_V40_V10vcore_Dhash__table__equivalence__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__hash__table", &_VW_V40_V10vcore_Dmake__hash__table), VPOINTER_CLOSURE);
  _V40_V10vcore_Dread__u8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dread__u8vector", &_VW_V40_V10vcore_Dread__u8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__length", &_VW_V40_V10vcore_Ds8vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__set_B", &_VW_V40_V10vcore_Ds8vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector__ref", &_VW_V40_V10vcore_Ds8vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gs8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs8vector", &_VW_V40_V10vcore_Dlist___Gs8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__s8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s8vector", &_VW_V40_V10vcore_Dmake__s8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector_Q", &_VW_V40_V10vcore_Ds8vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds8vector", &_VW_V40_V10vcore_Ds8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__length", &_VW_V40_V10vcore_Du8vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__set_B", &_VW_V40_V10vcore_Du8vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector__ref", &_VW_V40_V10vcore_Du8vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gu8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu8vector", &_VW_V40_V10vcore_Dlist___Gu8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__u8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u8vector", &_VW_V40_V10vcore_Dmake__u8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector_Q", &_VW_V40_V10vcore_Du8vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Du8vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Du8vector", &_VW_V40_V10vcore_Du8vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__length", &_VW_V40_V10vcore_Ds16vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__set_B", &_VW_V40_V10vcore_Ds16vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector__ref", &_VW_V40_V10vcore_Ds16vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gs16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs16vector", &_VW_V40_V10vcore_Dlist___Gs16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__s16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s16vector", &_VW_V40_V10vcore_Dmake__s16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector_Q", &_VW_V40_V10vcore_Ds16vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds16vector", &_VW_V40_V10vcore_Ds16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__length", &_VW_V40_V10vcore_Du16vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__set_B", &_VW_V40_V10vcore_Du16vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector__ref", &_VW_V40_V10vcore_Du16vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gu16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gu16vector", &_VW_V40_V10vcore_Dlist___Gu16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__u16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__u16vector", &_VW_V40_V10vcore_Dmake__u16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector_Q", &_VW_V40_V10vcore_Du16vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Du16vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Du16vector", &_VW_V40_V10vcore_Du16vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__length", &_VW_V40_V10vcore_Ds32vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__set_B", &_VW_V40_V10vcore_Ds32vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector__ref", &_VW_V40_V10vcore_Ds32vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gs32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gs32vector", &_VW_V40_V10vcore_Dlist___Gs32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__s32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__s32vector", &_VW_V40_V10vcore_Dmake__s32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector_Q", &_VW_V40_V10vcore_Ds32vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ds32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Ds32vector", &_VW_V40_V10vcore_Ds32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__length", &_VW_V40_V10vcore_Df32vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__set_B", &_VW_V40_V10vcore_Df32vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector__ref", &_VW_V40_V10vcore_Df32vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gf32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf32vector", &_VW_V40_V10vcore_Dlist___Gf32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__f32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f32vector", &_VW_V40_V10vcore_Dmake__f32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector_Q", &_VW_V40_V10vcore_Df32vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Df32vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Df32vector", &_VW_V40_V10vcore_Df32vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__length", &_VW_V40_V10vcore_Df64vector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__set_B", &_VW_V40_V10vcore_Df64vector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector__ref", &_VW_V40_V10vcore_Df64vector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gf64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gf64vector", &_VW_V40_V10vcore_Dlist___Gf64vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__f64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__f64vector", &_VW_V40_V10vcore_Dmake__f64vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector_Q", &_VW_V40_V10vcore_Df64vector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Df64vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Df64vector", &_VW_V40_V10vcore_Df64vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__vector", &_VW_V40_V10vcore_Dmake__vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V40VAppend = VEncodePointer(VLookupConstant("_V40VAppend", &_VW_V40VAppend), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V10_Dpair_D1124.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1124.rest = VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR);
  _V10_Dpair_D1123.first = VEncodeBool(false);
  _V10_Dpair_D1123.rest = VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR);
  _V10_Dpair_D1122.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1122.rest = VNULL;
  _V10_Dpair_D1121.first = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1121.rest = VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR);
  _V10_Dpair_D1120.first = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1120.rest = VNULL;
  _V10_Dpair_D1119.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1119.rest = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1118.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1118.rest = VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR);
  _V10_Dpair_D1117.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1117.rest = VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR);
  _V10_Dpair_D1116.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1116.rest = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1115.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1115.rest = VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR);
  _V10_Dpair_D1114.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1114.rest = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1113.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1113.rest = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1112.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1112.rest = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1111.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1111.rest = VEncodePointer(&_V10_Dpair_D1110, VPOINTER_PAIR);
  _V10_Dpair_D1110.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1110.rest = VEncodePointer(&_V10_Dpair_D1109, VPOINTER_PAIR);
  _V10_Dpair_D1109.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1109.rest = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1108.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1108.rest = VEncodePointer(&_V10_Dpair_D1107, VPOINTER_PAIR);
  _V10_Dpair_D1107.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1107.rest = VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR);
  _V10_Dpair_D1106.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1106.rest = VEncodePointer(&_V10_Dpair_D1105, VPOINTER_PAIR);
  _V10_Dpair_D1105.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1105.rest = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1104.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1104.rest = VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR);
  _V10_Dpair_D1103.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1103.rest = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1102.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1102.rest = VEncodePointer(&_V10_Dpair_D1101, VPOINTER_PAIR);
  _V10_Dpair_D1101.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1101.rest = VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR);
  _V10_Dpair_D1100.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1100.rest = VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR);
  _V10_Dpair_D1099.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1099.rest = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1098.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1098.rest = VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR);
  _V10_Dpair_D1097.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1097.rest = VEncodePointer(&_V10_Dpair_D1096, VPOINTER_PAIR);
  _V10_Dpair_D1096.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1096.rest = VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR);
  _V10_Dpair_D1095.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1095.rest = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1094.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1094.rest = VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR);
  _V10_Dpair_D1093.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1093.rest = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1092.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1092.rest = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1091.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1091.rest = VEncodePointer(&_V10_Dpair_D1090, VPOINTER_PAIR);
  _V10_Dpair_D1090.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1090.rest = VEncodePointer(&_V10_Dpair_D1089, VPOINTER_PAIR);
  _V10_Dpair_D1089.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1089.rest = VEncodePointer(&_V10_Dpair_D1088, VPOINTER_PAIR);
  _V10_Dpair_D1088.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1088.rest = VEncodePointer(&_V10_Dpair_D1087, VPOINTER_PAIR);
  _V10_Dpair_D1087.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1087.rest = VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR);
  _V10_Dpair_D1086.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1086.rest = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1085.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1085.rest = VEncodePointer(&_V10_Dpair_D1084, VPOINTER_PAIR);
  _V10_Dpair_D1084.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1084.rest = VEncodePointer(&_V10_Dpair_D1083, VPOINTER_PAIR);
  _V10_Dpair_D1083.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1083.rest = VEncodePointer(&_V10_Dpair_D1082, VPOINTER_PAIR);
  _V10_Dpair_D1082.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1082.rest = VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR);
  _V10_Dpair_D1081.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1081.rest = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1080.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1080.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1079.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1079.rest = VEncodePointer(&_V10_Dpair_D1078, VPOINTER_PAIR);
  _V10_Dpair_D1078.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1078.rest = VEncodePointer(&_V10_Dpair_D1077, VPOINTER_PAIR);
  _V10_Dpair_D1077.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1077.rest = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1076.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1076.rest = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1075.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1075.rest = VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR);
  _V10_Dpair_D1074.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1074.rest = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1073.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1073.rest = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1072.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1072.rest = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1071.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1071.rest = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1070.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1070.rest = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1069.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1069.rest = VEncodePointer(&_V10_Dpair_D1068, VPOINTER_PAIR);
  _V10_Dpair_D1068.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1068.rest = VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR);
  _V10_Dpair_D1067.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1067.rest = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1066.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1066.rest = VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR);
  _V10_Dpair_D1065.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1065.rest = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1064.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1064.rest = VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR);
  _V10_Dpair_D1063.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1063.rest = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1062.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1061.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1060.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1060.rest = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1059.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1059.rest = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1058.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1058.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1057.first = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1057.rest = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1056.first = _V0_Mp;
  _V10_Dpair_D1056.rest = VNULL;
  _V40_V10vcore_Dunload__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dunload__library", &_VW_V40_V10vcore_Dunload__library), VPOINTER_CLOSURE);
  _V40_V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dload__library", &_VW_V40_V10vcore_Dload__library), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__import", &_VW_V40_V10vcore_Dmake__import), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlookup__library = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlookup__library", &_VW_V40_V10vcore_Dlookup__library), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmultidefine", &_VW_V40_V10vcore_Dmultidefine), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddefine = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddefine", &_VW_V40_V10vcore_Ddefine), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfunction = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfunction", &_VW_V40_V10vcore_Dfunction), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__length", &_VW_V40_V10vcore_Drecord__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__set_B", &_VW_V40_V10vcore_Drecord__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__ref", &_VW_V40_V10vcore_Drecord__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord", &_VW_V40_V10vcore_Drecord), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__global_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__global_B", &_VW_V40_V10vcore_Dset__global_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddefine__global = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddefine__global", &_VW_V40_V10vcore_Ddefine__global), VPOINTER_CLOSURE);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V40_V10vcore_Dabort = VEncodePointer(VLookupConstant("_V40_V10vcore_Dabort", &_VW_V40_V10vcore_Dabort), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply__cps = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply__cps", &_VW_V40_V10vcore_Dapply__cps), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnext = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnext", &_VW_V40_V10vcore_Dnext), VPOINTER_CLOSURE);
  _V40_V10vcore_Draise = VEncodePointer(VLookupConstant("_V40_V10vcore_Draise", &_VW_V40_V10vcore_Draise), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpop__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpop__exception__handler", &_VW_V40_V10vcore_Dpop__exception__handler), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpush__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpush__exception__handler", &_VW_V40_V10vcore_Dpush__exception__handler), VPOINTER_CLOSURE);
  _V40_V10vcore_Dget__exception__handler = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__exception__handler", &_VW_V40_V10vcore_Dget__exception__handler), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpop__dynamic = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpop__dynamic", &_VW_V40_V10vcore_Dpop__dynamic), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpush__dynamic = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpush__dynamic", &_VW_V40_V10vcore_Dpush__dynamic), VPOINTER_CLOSURE);
  _V40_V10vcore_Dget__dynamics = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__dynamics", &_VW_V40_V10vcore_Dget__dynamics), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnot = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnot", &_VW_V40_V10vcore_Dnot), VPOINTER_CLOSURE);
  _V40_V10vcore_Dblob_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_E_Q", &_VW_V40_V10vcore_Dblob_E_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_E_Q", &_VW_V40_V10vcore_Dsymbol_E_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dforeign__pointer_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dforeign__pointer_Q", &_VW_V40_V10vcore_Dforeign__pointer_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnullptr_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnullptr_Q", &_VW_V40_V10vcore_Dnullptr_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvoid_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvoid_Q", &_VW_V40_V10vcore_Dvoid_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dblob_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dblob_Q", &_VW_V40_V10vcore_Dblob_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord_Q", &_VW_V40_V10vcore_Drecord_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table_Q", &_VW_V40_V10vcore_Dhash__table_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V40_V10vcore_Dremainder", &_VW_V40_V10vcore_Dremainder), VPOINTER_CLOSURE);
  _V40_V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V40_V10vcore_Dquotient", &_VW_V40_V10vcore_Dquotient), VPOINTER_CLOSURE);
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcmp = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcmp", &_VW_V40_V10vcore_Dcmp), VPOINTER_CLOSURE);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V40_V10vcore_Dexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexact", &_VW_V40_V10vcore_Dexact), VPOINTER_CLOSURE);
  _V40_V10vcore_Dinexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinexact", &_VW_V40_V10vcore_Dinexact), VPOINTER_CLOSURE);
  _V10_Dpair_D1055.first = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1055.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1054.first = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1054.rest = VNULL;
  _V10_Dpair_D1053.first = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1053.rest = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1052.first = _V0lookup__intrinsic;
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = _V0is__basic__intrinsic_Q;
  _V10_Dpair_D1051.rest = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1050.first = _V0lookup__intrinsic__name;
  _V10_Dpair_D1050.rest = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1049.first = _V0lookup__inline__name;
  _V10_Dpair_D1049.rest = VNULL;
  _V10_Dpair_D1048.first = VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR);
  _V10_Dpair_D1048.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1047.first = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1047.rest = VNULL;
  _V10_Dpair_D1046.first = _V0_Mk;
  _V10_Dpair_D1046.rest = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1045.first = _V0sym;
  _V10_Dpair_D1045.rest = VNULL;
  _V10_Dpair_D1044.first = _V0vanity;
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = _V0intrinsics;
  _V10_Dpair_D1043.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1042.first = _V0lookup__intrinsic;
  _V10_Dpair_D1042.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D1039.first = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1039.rest = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1038.first = VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR);
  _V10_Dpair_D1038.rest = VNULL;
  _V10_Dpair_D1037.first = VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR);
  _V10_Dpair_D1037.rest = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1036.first = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1035.rest = VNULL;
  _V10_Dpair_D1034.first = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = VEncodeBool(false);
  _V10_Dpair_D1033.rest = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1032.first = VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR);
  _V10_Dpair_D1032.rest = VNULL;
  _V10_Dpair_D1031.first = _V0_Mx;
  _V10_Dpair_D1031.rest = VNULL;
  _V10_Dpair_D1030.first = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1029.rest = VNULL;
  _V10_Dpair_D1028.first = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1028.rest = VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR);
  _V10_Dpair_D1027.first = VNULL;
  _V10_Dpair_D1027.rest = VNULL;
  _V10_Dpair_D1026.first = VEncodeBool(false);
  _V10_Dpair_D1026.rest = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VNULL;
  _V10_Dpair_D1024.first = _V0_Mk;
  _V10_Dpair_D1024.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0intrinsics_V20_V0k2, VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0intrinsics_V20_V0k1, VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0intrinsics_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k3, VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic_V0k4, VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic, VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k5, VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q_V0k6, VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0is__basic__intrinsic_Q, VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k7, VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name_V0k8, VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__intrinsic__name, VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0intrinsics_V0lookup__inline__name, VEncodePointer(&_V10_Dpair_D1344, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0intrinsics_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0intrinsics_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR));
}
