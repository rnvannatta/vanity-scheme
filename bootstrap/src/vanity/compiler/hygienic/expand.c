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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0expand;

VWEAK VWORD _V10vcore_Dappend;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dappend = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.append" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V40_V10vcore_D_G_E;
VWEAK VClosure _VW_V40_V10vcore_D_G_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGe, NULL };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V40_V10vcore_D_G;
VWEAK VClosure _VW_V40_V10vcore_D_G = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGt, NULL };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V40_V10vcore_D_E;
VWEAK VClosure _VW_V40_V10vcore_D_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpEq, NULL };
VWEAK VWORD _V40_V10vcore_D_L_E;
VWEAK VClosure _VW_V40_V10vcore_D_L_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLe, NULL };
VWEAK VWORD _V40_V10vcore_D_L;
VWEAK VClosure _VW_V40_V10vcore_D_L = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLt, NULL };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V40_V10vcore_D_W;
VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V0_W;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "/" };
VWEAK VWORD _V40_V10vcore_D_S;
VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V40_V10vcore_D__;
VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V40_V10vcore_D_P;
VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0syntax__object___Gdatum;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0syntax__object___Gdatum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "syntax-object->datum" };
VWEAK VWORD _V0datum___Gsyntax__object;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0datum___Gsyntax__object = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "datum->syntax-object" };
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
static VPair _V10_Dpair_D1445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
VWEAK VWORD _V0expand__syntax;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0expand__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "expand-syntax" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "ambiguous id" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dapply;
VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "not in context" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "bad syntax" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "free variable" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "resolve: naked symbol in syntax" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static VPair _V10_Dpair_D1437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V10foreign__function;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign-function" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0ignored;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0ignored = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "ignored" };
VWEAK VWORD _V10vcore_Dapply;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dapply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.apply" };
VWEAK VWORD _V0transformer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0transformer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "transformer" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1429 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "incorrect number of args to macro ~A" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0form;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0form = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "form" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1428 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "desugar-define-syntax" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1427 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "\033[1;31merror while compiling macro:\033[0m ~A~N" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1426 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "malformed exported variable" };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1425 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "\033[1;31merror while applying macro:\033[0m ~A~N" };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
VWEAK VWORD _V0val;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "val" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0let__syntax;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0let__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "let-syntax" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V0define__syntax;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0define__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "define-syntax" };
VWEAK VWORD _V0tmp;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0tmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "tmp" };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define__values;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0define__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "define-values" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1424 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "expand: ot a constant expression" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1423 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "expand: stray () in program" };
VWEAK VWORD _V0dummy;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0dummy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "dummy" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1422 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1421 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1420 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1419 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1418 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1417 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1416 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "_V0vanity_V0compiler_V0hygienic_V0eval_V20" };
VWEAK VWORD _V0generate__symbol;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0generate__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "generate-symbol" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
VWEAK VWORD _V0syntax__null_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-null\?" };
VWEAK VWORD _V0syntax__cons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cons" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0syntax__cdar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cdar" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__list;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-list" };
VWEAK VWORD _V0syntax__vector__map;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-map" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0lset_L_E;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lset_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lset<=" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0lset_E;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0lset_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "lset=" };
VWEAK VWORD _V0global__forms;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__forms = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-forms" };
VWEAK VWORD _V0global__form__env;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0global__form__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "global-form-env" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0eval;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eval = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eval" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0take__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-right" };
VWEAK VWORD _V0drop__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-right" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0every_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0every_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "every\?" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0get__syntax__scopes;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__syntax__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-syntax-scopes" };
VWEAK VWORD _V0set__scope__bindings_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0set__scope__bindings_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "set-scope-bindings!" };
VWEAK VWORD _V0get__scope__bindings;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0get__scope__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "get-scope-bindings" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0assq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assq" };
VWEAK VWORD _V0with__exception__handler;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0with__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "with-exception-handler" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0flip__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "flip-scope" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0syntax__caddr;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-caddr" };
VWEAK VWORD _V0make__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0make__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "make-scope" };
VWEAK VWORD _V0global__identifier;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0global__identifier = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "global-identifier" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0append__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0append__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "append-map" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1415 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "_V0vanity_V0compiler_V0hygienic_V0expand_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V10vcore_Dappend = VEncodePointer(VInternSymbol(1742285522, &_VW_V10vcore_Dappend.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VInternSymbol(232208272, &_VW_V0eqv_Q.sym), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VInternSymbol(-1583738215, &_VW_V0eq_Q.sym), VPOINTER_OTHER);
  _V0_G_E = VEncodePointer(VInternSymbol(1925865613, &_VW_V0_G_E.sym), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VInternSymbol(-990041482, &_VW_V0_G.sym), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VInternSymbol(1057406733, &_VW_V0_L.sym), VPOINTER_OTHER);
  _V0_W = VEncodePointer(VInternSymbol(-1980900630, &_VW_V0_W.sym), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VInternSymbol(-1095746844, &_VW_V0_S.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VInternSymbol(-27845161, &_VW_V0cdr.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0car = VEncodePointer(VInternSymbol(-5179575, &_VW_V0car.sym), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VInternSymbol(943237530, &_VW_V0cons.sym), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VInternSymbol(1722024332, &_VW_V0null_Q.sym), VPOINTER_OTHER);
  _V0syntax__object___Gdatum = VEncodePointer(VInternSymbol(-925486414, &_VW_V0syntax__object___Gdatum.sym), VPOINTER_OTHER);
  _V0datum___Gsyntax__object = VEncodePointer(VInternSymbol(-180606471, &_VW_V0datum___Gsyntax__object.sym), VPOINTER_OTHER);
  _V0export = VEncodePointer(VInternSymbol(1426862643, &_VW_V0export.sym), VPOINTER_OTHER);
  _V0variable = VEncodePointer(VInternSymbol(1686232624, &_VW_V0variable.sym), VPOINTER_OTHER);
  _V0expand__syntax = VEncodePointer(VInternSymbol(309030068, &_VW_V0expand__syntax.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V10foreign__function = VEncodePointer(VInternSymbol(594095722, &_VW_V10foreign__function.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0ignored = VEncodePointer(VInternSymbol(825245967, &_VW_V0ignored.sym), VPOINTER_OTHER);
  _V10vcore_Dapply = VEncodePointer(VInternSymbol(1029936291, &_VW_V10vcore_Dapply.sym), VPOINTER_OTHER);
  _V0transformer = VEncodePointer(VInternSymbol(301928864, &_VW_V0transformer.sym), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VInternSymbol(1290206293, &_VW_V0__.sym), VPOINTER_OTHER);
  _V0form = VEncodePointer(VInternSymbol(-180257785, &_VW_V0form.sym), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VInternSymbol(-2106268102, &_VW_V0_L_E.sym), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VInternSymbol(91122933, &_VW_V0_E.sym), VPOINTER_OTHER);
  _V0rename = VEncodePointer(VInternSymbol(1807760215, &_VW_V0rename.sym), VPOINTER_OTHER);
  _V0letrec_S = VEncodePointer(VInternSymbol(2021638346, &_VW_V0letrec_S.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VInternSymbol(2136925547, &_VW_V10vcore_Dsetter.sym), VPOINTER_OTHER);
  _V0val = VEncodePointer(VInternSymbol(-1280639451, &_VW_V0val.sym), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VInternSymbol(-315800619, &_VW_V10vcore_Dmutator.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0let__syntax = VEncodePointer(VInternSymbol(1899976589, &_VW_V0let__syntax.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VInternSymbol(1433144780, &_VW_V10vcore_Dpush__value.sym), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VInternSymbol(-858837018, &_VW_V10vcore_Dpop__value.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V0import = VEncodePointer(VInternSymbol(268366565, &_VW_V0import.sym), VPOINTER_OTHER);
  _V0define__syntax = VEncodePointer(VInternSymbol(-75888163, &_VW_V0define__syntax.sym), VPOINTER_OTHER);
  _V0tmp = VEncodePointer(VInternSymbol(1890156776, &_VW_V0tmp.sym), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VInternSymbol(1537217383, &_VW_V10vcore_Dcall__with__values.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0define__values = VEncodePointer(VInternSymbol(734623460, &_VW_V0define__values.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0dummy = VEncodePointer(VInternSymbol(1450767474, &_VW_V0dummy.sym), VPOINTER_OTHER);
  _V0generate__symbol = VEncodePointer(VInternSymbol(-1987818883, &_VW_V0generate__symbol.sym), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VInternSymbol(57061984, &_VW_V0make__parameter.sym), VPOINTER_OTHER);
  _V0syntax__null_Q = VEncodePointer(VInternSymbol(-1668028446, &_VW_V0syntax__null_Q.sym), VPOINTER_OTHER);
  _V0syntax__cons = VEncodePointer(VInternSymbol(-713299037, &_VW_V0syntax__cons.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0syntax__cdar = VEncodePointer(VInternSymbol(528412582, &_VW_V0syntax__cdar.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__list = VEncodePointer(VInternSymbol(-605002697, &_VW_V0syntax__list.sym), VPOINTER_OTHER);
  _V0syntax__vector__map = VEncodePointer(VInternSymbol(-1500491324, &_VW_V0syntax__vector__map.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0lset_L_E = VEncodePointer(VInternSymbol(2095333289, &_VW_V0lset_L_E.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0lset_E = VEncodePointer(VInternSymbol(338280255, &_VW_V0lset_E.sym), VPOINTER_OTHER);
  _V0global__forms = VEncodePointer(VInternSymbol(1252986977, &_VW_V0global__forms.sym), VPOINTER_OTHER);
  _V0global__form__env = VEncodePointer(VInternSymbol(1415805201, &_VW_V0global__form__env.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0eval = VEncodePointer(VInternSymbol(-2078907041, &_VW_V0eval.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0take__right = VEncodePointer(VInternSymbol(427694580, &_VW_V0take__right.sym), VPOINTER_OTHER);
  _V0drop__right = VEncodePointer(VInternSymbol(-377735426, &_VW_V0drop__right.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0every_Q = VEncodePointer(VInternSymbol(-289757295, &_VW_V0every_Q.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0get__syntax__scopes = VEncodePointer(VInternSymbol(1433535723, &_VW_V0get__syntax__scopes.sym), VPOINTER_OTHER);
  _V0set__scope__bindings_B = VEncodePointer(VInternSymbol(-32175007, &_VW_V0set__scope__bindings_B.sym), VPOINTER_OTHER);
  _V0get__scope__bindings = VEncodePointer(VInternSymbol(706853436, &_VW_V0get__scope__bindings.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0assq = VEncodePointer(VInternSymbol(456349189, &_VW_V0assq.sym), VPOINTER_OTHER);
  _V0with__exception__handler = VEncodePointer(VInternSymbol(1043968208, &_VW_V0with__exception__handler.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0flip__scope = VEncodePointer(VInternSymbol(-1341584941, &_VW_V0flip__scope.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0syntax__caddr = VEncodePointer(VInternSymbol(43375589, &_VW_V0syntax__caddr.sym), VPOINTER_OTHER);
  _V0make__scope = VEncodePointer(VInternSymbol(1685021352, &_VW_V0make__scope.sym), VPOINTER_OTHER);
  _V0global__identifier = VEncodePointer(VInternSymbol(-1557481786, &_VW_V0global__identifier.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0append__map = VEncodePointer(VInternSymbol(-2135287522, &_VW_V0append__map.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V10_Dpair_D1463.first = _V0begin;
  _V10_Dpair_D1463.rest = VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR);
  _V10_Dpair_D1462.first = _V0define;
  _V10_Dpair_D1462.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1461.first = _V0define__constant;
  _V10_Dpair_D1461.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1460.first = _V0define__values;
  _V10_Dpair_D1460.rest = VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR);
  _V10_Dpair_D1459.first = _V0lambda;
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = _V0case__lambda;
  _V10_Dpair_D1458.rest = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1457.first = _V0letrec;
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = _V0letrec_S;
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = _V0let__syntax;
  _V10_Dpair_D1455.rest = VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR);
  _V10_Dpair_D1454.first = _V0define__syntax;
  _V10_Dpair_D1454.rest = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1453.first = _V0quote;
  _V10_Dpair_D1453.rest = VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR);
  _V10_Dpair_D1452.first = _V0syntax;
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = _V0if;
  _V10_Dpair_D1451.rest = VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR);
  _V10_Dpair_D1450.first = _V0and;
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1449, VPOINTER_PAIR);
  _V10_Dpair_D1449.first = _V0or;
  _V10_Dpair_D1449.rest = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1448.first = _V0set_B;
  _V10_Dpair_D1448.rest = VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR);
  _V10_Dpair_D1447.first = _V10intrinsic;
  _V10_Dpair_D1447.rest = VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR);
  _V10_Dpair_D1446.first = _V10basic__intrinsic;
  _V10_Dpair_D1446.rest = VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR);
  _V10_Dpair_D1445.first = _V10vcore_Ddeclare;
  _V10_Dpair_D1445.rest = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1444.first = _V0export;
  _V10_Dpair_D1444.rest = VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR);
  _V10_Dpair_D1443.first = _V0import;
  _V10_Dpair_D1443.rest = VNULL;
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V10_Dpair_D1437.first = _V0quote;
  _V10_Dpair_D1437.rest = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1436.first = _V0lambda;
  _V10_Dpair_D1436.rest = VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR);
  _V10_Dpair_D1435.first = _V0case__lambda;
  _V10_Dpair_D1435.rest = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1434.first = _V10qualified__lambda;
  _V10_Dpair_D1434.rest = VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = _V10qualified__case__lambda;
  _V10_Dpair_D1433.rest = VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR);
  _V10_Dpair_D1432.first = _V10intrinsic;
  _V10_Dpair_D1432.rest = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1431.first = _V10basic__intrinsic;
  _V10_Dpair_D1431.rest = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1430.first = _V10foreign__function;
  _V10_Dpair_D1430.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax, _var0, _var1);
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.426 8 0) (##string ##.string.1415) (bruijn ##.x.427 0 0) 'map 'list 'global-scope 'make-syntax 'identifier? 'append-map 'compiler-error 'append 'syntax-pair? 'global-identifier 'make-scope 'syntax-caddr 'get-syntax-data 'assoc 'flip-scope 'values 'current-error-port 'format 'with-exception-handler 'assq 'sprintf 'get-scope-bindings 'set-scope-bindings! 'get-syntax-scopes 'reverse 'cadar 'caar 'every? 'cadr 'for-each 'member 'memq 'drop-right 'take-right 'lookup-intrinsic-name 'eval 'syntax? 'syntax-vector? 'global-form-env 'global-forms 'lset= 'cdar 'length 'filter 'lset<= 'fold 'syntax-vector-map 'syntax-list 'syntax-car 'syntax-cadr 'syntax-cddr 'syntax-map 'error 'equal? 'syntax-cdr 'syntax-cdar 'syntax-caar 'syntax-cons 'syntax-null? 'make-parameter 'generate-symbol)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 64,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D1415.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0list,
      _V0global__scope,
      _V0make__syntax,
      _V0identifier_Q,
      _V0append__map,
      _V0compiler__error,
      _V0append,
      _V0syntax__pair_Q,
      _V0global__identifier,
      _V0make__scope,
      _V0syntax__caddr,
      _V0get__syntax__data,
      _V0assoc,
      _V0flip__scope,
      _V0values,
      _V0current__error__port,
      _V0format,
      _V0with__exception__handler,
      _V0assq,
      _V0sprintf,
      _V0get__scope__bindings,
      _V0set__scope__bindings_B,
      _V0get__syntax__scopes,
      _V0reverse,
      _V0cadar,
      _V0caar,
      _V0every_Q,
      _V0cadr,
      _V0for__each,
      _V0member,
      _V0memq,
      _V0drop__right,
      _V0take__right,
      _V0lookup__intrinsic__name,
      _V0eval,
      _V0syntax_Q,
      _V0syntax__vector_Q,
      _V0global__form__env,
      _V0global__forms,
      _V0lset_E,
      _V0cdar,
      _V0length,
      _V0filter,
      _V0lset_L_E,
      _V0fold,
      _V0syntax__vector__map,
      _V0syntax__list,
      _V0syntax__car,
      _V0syntax__cadr,
      _V0syntax__cddr,
      _V0syntax__map,
      _V0error,
      _V0equal_Q,
      _V0syntax__cdr,
      _V0syntax__cdar,
      _V0syntax__caar,
      _V0syntax__cons,
      _V0syntax__null_Q,
      _V0make__parameter,
      _V0generate__symbol);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8) (bruijn ##.x.428 6 0) (bruijn ##.x.429 5 0) (bruijn ##.x.430 4 0) (bruijn ##.x.431 3 0) (bruijn ##.x.432 2 0) (bruijn ##.x.433 1 0) (bruijn ##.x.434 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8, self)))),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7) (##string ##.string.1416))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1416.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6) (##string ##.string.1417))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1417.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5) (##string ##.string.1418))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1418.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4) (##string ##.string.1419))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1419.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3) (##string ##.string.1420))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1420.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2) (##string ##.string.1421))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1421.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1) (##string ##.string.1422))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1422.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.map.29 7 1) (bruijn ##.k.436 5 0) (bruijn ##.resolve.138 6 23) (bruijn ##.x.437 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 6-1, 23),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-toplevel.116 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13) (bruijn ##.x.438 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13, self)))),
      _var0,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.datum->syntax-object.157 4 42) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12) (bruijn ##.x.439 0 0) (bruijn ##.expr.163 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[42]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-syntax.32 4 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11) 'dummy (bruijn ##.x.440 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11, self)))),
      _V0dummy,
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10) (bruijn ##.x.441 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-scope.31 2 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 5 2) (bruijn ##.k.442 3 0) (bruijn ##.x.444 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-identifier.139 3 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16) (bruijn ##.stx.164 2 1) (bruijn ##.x.445 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[24]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16, self)))),
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.expand-toplevel.116 11 1) (bruijn ##.k.451 0 0) (bruijn ##.x.19.168 0 1) (bruijn ##._.165 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      _var0,
      _var1,
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-map.34 11 6) (bruijn ##.k.442 9 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4) (bruijn ##.x.452 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 6)), 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 12 2) (bruijn ##.k.442 10 0) (bruijn ##.x.454 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      VGetArg(statics, 10-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-toplevel-define.125 10 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25) (bruijn ##.x.455 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.35 15 7) (bruijn ##.k.459 1 0) (##string ##.string.1424) (bruijn ##.x.460 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1424.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.458 1 0) ((bruijn ##.k.459 0 0) #void) ((bruijn ##.syntax-object->datum.156 13 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30) (bruijn ##.stx.164 12 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 41)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30, self)))),
      VGetArg(statics, 12-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 14 2) (bruijn ##.k.442 12 0) (bruijn ##.x.457 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 2,
      VGetArg(statics, 12-1, 0),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.expand-toplevel-define.125 12 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32) (bruijn ##.def.169 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k31))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k31, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.constant-expr?.133 11 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28) (bruijn ##.x.461 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 11 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27) (bruijn ##.stx.164 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27, self)))),
      VGetArg(statics, 9-1, 1));
}
static void _V10_Dloop_D175_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D175_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D175_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.485 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mangles.177 3 2)) (bruijn ##.x.488 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var0));
}
static void _V10_Dloop_D175_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D175_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D175_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.175 3 0) (close _V10_Dloop_D175_V0k46) (bruijn ##.x.489 0 0) (##inline ##vcore.cdr (bruijn ##.mangles.177 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D175_V0k46, self)))),
      _var0,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D175_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D175_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D175_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.491 0 0) ((bruijn ##.k.485 2 0) '()) ((bruijn ##.k.485 2 0) (##inline ##vcore.car (bruijn ##.mangles.177 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D175_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D175_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D175_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.486 0 0) ((bruijn ##.syntax-cdr.83 23 55) (close _V10_Dloop_D175_V0k45) (bruijn ##.formals.176 1 1)) ((bruijn ##.syntax-null?.87 23 59) (close _V10_Dloop_D175_V0k47) (bruijn ##.formals.176 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D175_V0k45, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 59)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D175_V0k47, self)))),
      statics->vars[1]);
}
}
static void _V10_Dloop_D175_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D175_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D175_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.37 22 9) (close _V10_Dloop_D175_V0k44) (bruijn ##.formals.176 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D175_V0k44, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-toplevel.116 24 1) (bruijn ##.k.442 23 0) (##inline ##vcore.cons (bruijn ##.x.465 10 0) (bruijn ##.x.466 0 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 1)), 3,
      VGetArg(statics, 23-1, 0),
      VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        _var0),
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 24 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51) (bruijn ##.x.467 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.470 7 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.492 6 0) (##inline ##vcore.cons '() (##inline ##vcore.cons (bruijn ##.x.495 5 0) '()))) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.475 4 0) (##inline ##vcore.cons (bruijn ##.x.477 2 0) (##inline ##vcore.cons '#void (bruijn ##.x.479 0 0)))) '()))) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51, self)))),
      VGetArg(statics, 8-1, 0),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VVOID,
        _var0))),
        VNULL))),
        VNULL));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 23 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50) (bruijn ##.x.480 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50, self)))),
      _var0,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.481 1 0) (##inline ##vcore.cons (bruijn ##.x.482 0 0) (##inline ##vcore.cons (bruijn ##.name.178 1 1) (##inline ##vcore.cons (bruijn ##.mangle.179 1 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[2],
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.global-identifier.38 23 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52) 'set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52, self)))),
      _V0set_B);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 22 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6) (bruijn ##.names.171 10 1) (bruijn ##.mangles.172 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6, self)))),
      VGetArg(statics, 10-1, 1),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D175_V0lambda5)) ((bruijn ##.loop.175 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48) (bruijn ##.formals.170 9 0) (bruijn ##.mangles.172 9 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D175_V0lambda5, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48, self)))),
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 9-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 19 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 18 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42) (bruijn ##.stx.164 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42, self)))),
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 17 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 16 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40) '##vcore.call-with-values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40, self)))),
      _V10vcore_Dcall__with__values);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.496 1 0) (##inline ##vcore.cons (bruijn ##.x.497 0 0) (##inline ##vcore.cons (bruijn ##.name.174 1 1) (##inline ##vcore.cons '#void '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        VVOID,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-identifier.38 16 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53) 'define)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53, self)))),
      _V0define);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 15 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7) (bruijn ##.names.171 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7, self)))),
      statics->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-identifier.38 14 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38) 'begin)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38, self)))),
      _V0begin);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k37) (bruijn ##.mangles.172 2 2) (bruijn ##.x.500 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k37, self)))),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.32 17 4) (bruijn ##.k.501 3 0) (bruijn ##.x.502 2 0) (bruijn ##.x.503 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 16 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56) (bruijn ##.x.504 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.31 15 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.generate-symbol.89 14 61) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54) 'tmp)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 61)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54, self)))),
      _V0tmp);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.29 13 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8) (bruijn ##.names.171 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k35) (bruijn ##.names.171 1 1) (bruijn ##.x.505 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k35, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.463 1 0) #f #f) ((bruijn ##.syntax-undot-list.134 11 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34) (bruijn ##.formals.170 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34, self)))),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.442 9 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-toplevel-define-syntax.121 10 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k58) (bruijn ##.x.507 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k58, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.442 22 0) (bruijn ##.ret.28.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      self->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.parameter.20.180 13 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k74) '##vcore.pop-value (bruijn ##.keyval.21.181 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k74, self)))),
      _V10vcore_Dpop__value,
      VGetArg(statics, 11-1, 0));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-scope.31 24 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k73) '##vcore.pop-value (bruijn ##.keyval.24.184 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k73, self)))),
      _V10vcore_Dpop__value,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.26.186 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k72) '##vcore.pop-value (bruijn ##.keyval.27.187 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k72, self)))),
      _V10vcore_Dpop__value,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 23 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71) (bruijn ##.x.510 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 22 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70) (bruijn ##.x.511 4 0) (bruijn ##.x.512 3 0) (bruijn ##.x.513 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70, self)))),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 20 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69) (bruijn ##.x.514 1 0) (bruijn ##.x.515 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.toplevel-expand-env.141 19 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 19 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67) (bruijn ##.stx.164 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67, self)))),
      VGetArg(statics, 17-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 18 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66) (bruijn ##.stx.164 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66, self)))),
      VGetArg(statics, 16-1, 1));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-car.77 17 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65) (bruijn ##.stx.164 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65, self)))),
      VGetArg(statics, 15-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.init-global-forms.144 16 29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k64))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 29)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k64, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.26.186 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63) '##vcore.push-value #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63, self)))),
      _V10vcore_Dpush__value,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10) (bruijn ##.free-vars-allowed.159 14 44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10, self)), 1,
      VGetArg(statics, 14-1, 44));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.31 14 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62) '##vcore.push-value (bruijn ##.x.516 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62, self)))),
      _V10vcore_Dpush__value,
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.39 13 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.20.180 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60) '##vcore.push-value (bruijn ##.x.517 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60, self)))),
      _V10vcore_Dpush__value,
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fresh-toplevel-expand-env.142 10 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 27)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 13 2) (bruijn ##.k.518 2 0) (bruijn ##.x.519 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.189 3 1) (bruijn ##.k.520 1 0) (bruijn ##.x.521 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.expand-toplevel.116 12 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77) (bruijn ##.x.190 0 1) (bruijn ##.y.191 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77, self)))),
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-id-application-form.118 11 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda12) (bruijn ##.stx.164 10 1) (bruijn ##.binding.166 2 0) (bruijn ##.x.522 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda12, self)))),
      VGetArg(statics, 10-1, 1),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.toplevel-expand-env.141 10 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.449 1 0)) (if (##inline ##vcore.eq? (bruijn ##.binding.166 0 0) 'begin) ((bruijn ##.syntax-cdr.83 10 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23) (bruijn ##.stx.164 8 1)) (if (##inline ##vcore.eq? (bruijn ##.binding.166 0 0) 'define) ((bruijn ##.desugar-define.127 9 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24) (bruijn ##.stx.164 8 1)) (if (##inline ##vcore.eq? (bruijn ##.binding.166 0 0) 'define-constant) ((bruijn ##.desugar-define.127 9 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26) (bruijn ##.stx.164 8 1)) (if (##inline ##vcore.eq? (bruijn ##.binding.166 0 0) 'define-values) ((bruijn ##.syntax-cadr.78 10 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33) (bruijn ##.stx.164 8 1)) (if (##inline ##vcore.eq? (bruijn ##.binding.166 0 0) 'define-syntax) ((bruijn ##.desugar-define-syntax.122 9 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57) (bruijn ##.stx.164 8 1)) (if (##inline ##vcore.eq? (bruijn ##.binding.166 0 0) 'import) ((bruijn ##.list.30 10 2) (bruijn ##.k.442 8 0) (bruijn ##.stx.164 8 1)) (if (##inline ##vcore.eq? (bruijn ##.binding.166 0 0) '##vcore.declare) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9) (bruijn ##.toplevel-expand-env.141 9 26)) (##vcore.call/cc (bruijn ##.k.442 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda11))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        _V0begin))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        _V0define))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        _V0define__constant))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        _V0define__values))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        _V0define__syntax))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        _V0import))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 2,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        _V10vcore_Ddeclare))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9, self)), 1,
      VGetArg(statics, 9-1, 26));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      VGetArg(statics, 8-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda11, self)))));
}
}
}
}
}
}
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 7 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22) (bruijn ##.x.523 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 9 2) (bruijn ##.k.442 7 0) (bruijn ##.x.524 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 2,
      VGetArg(statics, 7-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-app.130 7 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79) (bruijn ##.stx.164 6 1) (bruijn ##.x.525 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79, self)))),
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.448 0 0) ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21) (bruijn ##.stx.164 5 1)) ((bruijn ##.toplevel-expand-env.141 6 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78, self)))));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.33 6 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20) (bruijn ##.x.526 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.527 0 0)) ((bruijn ##.list.30 5 2) (bruijn ##.k.442 3 0) (bruijn ##.stx.164 3 1)) ((bruijn ##.syntax-car.77 5 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19) (bruijn ##.stx.164 3 1)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.446 0 0) ((bruijn ##.error.81 4 53) (bruijn ##.k.442 2 0) (##string ##.string.1423)) ((bruijn ##.syntax-pair?.37 4 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18) (bruijn ##.stx.164 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[53]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1423.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.443 0 0) ((bruijn ##.toplevel-expand-env.141 2 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15)) ((bruijn ##.syntax-null?.87 3 59) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17) (bruijn ##.stx.164 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[26]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.identifier?.33 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14) (bruijn ##.stx.164 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.533 1 0)) ((bruijn ##.expand-id-application-form.118 9 3) (bruijn ##.k.528 8 0) (bruijn ##.expand-impl.117 9 2) (bruijn ##.stx.192 8 1) (bruijn ##.binding.194 0 0) (bruijn ##.env.193 8 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 5,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 9-1, 2),
      VGetArg(statics, 8-1, 1),
      self->vars[0],
      VGetArg(statics, 8-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 7 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86) (bruijn ##.x.534 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.532 0 0) ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85) (bruijn ##.stx.192 5 1)) ((bruijn ##.expand-app.130 6 15) (bruijn ##.k.528 5 0) (bruijn ##.stx.192 5 1) (bruijn ##.env.193 5 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.33 6 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84) (bruijn ##.x.535 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.536 0 0)) ((bruijn ##.k.528 3 0) (bruijn ##.stx.192 3 1)) ((bruijn ##.syntax-car.77 5 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83) (bruijn ##.stx.192 3 1)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.530 0 0) ((bruijn ##.error.81 4 53) (bruijn ##.k.528 2 0) (##string ##.string.1423)) ((bruijn ##.syntax-pair?.37 4 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82) (bruijn ##.stx.192 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[53]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1423.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.529 0 0) ((bruijn ##.expand-identifier.139 2 24) (bruijn ##.k.528 1 0) (bruijn ##.stx.192 1 1) (bruijn ##.env.193 1 2)) ((bruijn ##.syntax-null?.87 3 59) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81) (bruijn ##.stx.192 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[24]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.identifier?.33 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80) (bruijn ##.stx.192 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.537 3 0) (##inline ##vcore.cons (bruijn ##.x.539 2 0) (bruijn ##.x.540 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-lambda.131 3 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89) (bruijn ##.x.541 0 0) (bruijn ##.env.198 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[16]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89, self)))),
      _var0,
      statics->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 3 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88) (bruijn ##.stx.196 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[55]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.537 3 0) (##inline ##vcore.cons (bruijn ##.x.543 2 0) (bruijn ##.x.544 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.expand-lambda.131 4 16) (bruijn ##.k.545 0 0) (bruijn ##.x.14.200 0 1) (bruijn ##.env.198 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[16]), 3,
      _var0,
      _var1,
      statics->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.80 4 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda13) (bruijn ##.x.546 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[52]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda13, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 3 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91) (bruijn ##.stx.196 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[55]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.684 1 0) ((bruijn ##.k.685 0 0) (bruijn ##.p.684 1 0)) ((bruijn ##.k.685 0 0) (##inline ##vcore.eq? (bruijn ##.binding.197 2 3) 'letrec)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        statics->up->vars[3],
        _V0letrec));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.682 1 0) ((bruijn ##.k.683 0 0) (bruijn ##.p.682 1 0)) ((bruijn ##.k.683 0 0) (##inline ##vcore.eq? (bruijn ##.binding.197 4 3) 'quote)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        statics->up->up->up->vars[3],
        _V0quote));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-impl.117 7 2) (bruijn ##.k.537 6 0) (bruijn ##.x.553 0 0) (bruijn ##.env.198 6 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      VGetArg(statics, 6-1, 0),
      _var0,
      VGetArg(statics, 6-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 12 2) (bruijn ##.k.537 10 0) (bruijn ##.x.555 4 0) (bruijn ##.x.556 2 0) (bruijn ##.x.557 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 4,
      VGetArg(statics, 10-1, 0),
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 10 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105) (bruijn ##.x.558 0 0) (bruijn ##.env.198 9 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105, self)))),
      _var0,
      VGetArg(statics, 9-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 10 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104) (bruijn ##.stx.196 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103) (bruijn ##.x.559 0 0) (bruijn ##.env.198 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103, self)))),
      _var0,
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 8 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102) (bruijn ##.stx.196 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 13 2) (bruijn ##.k.537 11 0) (bruijn ##.x.560 5 0) (bruijn ##.x.561 3 0) (bruijn ##.x.562 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 4,
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 11 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111) (##inline ##vcore.cons (bruijn ##.x.564 1 0) (bruijn ##.x.565 0 0)) (bruijn ##.env.198 10 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111, self)))),
      VInlineCons2(runtime,
        statics->vars[0],
        _var0),
      VGetArg(statics, 10-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 11 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110) (bruijn ##.stx.196 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 10 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109) 'begin)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109, self)))),
      _V0begin);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108) (bruijn ##.x.566 0 0) (bruijn ##.env.198 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108, self)))),
      _var0,
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 8 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107) (bruijn ##.stx.196 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.15.201 0 0) '1) ((bruijn ##.k.537 5 0) #void) (if (##inline ##vcore.eq? (bruijn ##.x.15.201 0 0) '2) ((bruijn ##.syntax-cadr.78 7 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100) (bruijn ##.stx.196 5 2)) (if (##inline ##vcore.eq? (bruijn ##.x.15.201 0 0) '3) ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101) (bruijn ##.stx.196 5 2)) ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106) (bruijn ##.stx.196 5 2)))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VVOID);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(2l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100, self)))),
      VGetArg(statics, 5-1, 2));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(3l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101, self)))),
      VGetArg(statics, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106, self)))),
      VGetArg(statics, 5-1, 2));
}
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 17 2) (bruijn ##.k.537 15 0) (bruijn ##.x.569 8 0) (bruijn ##.x.570 6 0) (bruijn ##.x.571 3 0) (bruijn ##.x.572 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 5,
      VGetArg(statics, 15-1, 0),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 15 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121) (bruijn ##.x.573 0 0) (bruijn ##.env.198 14 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121, self)))),
      _var0,
      VGetArg(statics, 14-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 15 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120) (bruijn ##.x.574 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 14 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119) (bruijn ##.stx.196 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 12 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118) (bruijn ##.x.575 0 0) (bruijn ##.env.198 11 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118, self)))),
      _var0,
      VGetArg(statics, 11-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 12 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117) (bruijn ##.x.576 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 11 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116) (bruijn ##.stx.196 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 9 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115) (bruijn ##.x.577 0 0) (bruijn ##.env.198 8 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115, self)))),
      _var0,
      VGetArg(statics, 8-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 9 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114) (bruijn ##.stx.196 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114, self)))),
      VGetArg(statics, 7-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 14 2) (bruijn ##.k.537 12 0) (bruijn ##.x.578 5 0) (bruijn ##.x.579 3 0) (bruijn ##.x.580 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 5,
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0],
      _var0,
      VVOID);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 12 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127) (bruijn ##.x.581 0 0) (bruijn ##.env.198 11 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127, self)))),
      _var0,
      VGetArg(statics, 11-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 12 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126) (bruijn ##.x.582 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 11 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125) (bruijn ##.stx.196 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 9 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124) (bruijn ##.x.583 0 0) (bruijn ##.env.198 8 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124, self)))),
      _var0,
      VGetArg(statics, 8-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 9 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123) (bruijn ##.stx.196 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123, self)))),
      VGetArg(statics, 7-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1406) ((##vcore.= (bruijn ##.x.584 1 0) 4)) (if (bruijn ##.reg.1406 0 0) ((bruijn ##.syntax-car.77 8 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113) (bruijn ##.stx.196 6 2)) ((bruijn ##.syntax-car.77 8 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122) (bruijn ##.stx.196 6 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[0],
      VEncodeInt(4l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113, self)))),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122, self)))),
      VGetArg(statics, 6-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-impl.117 7 2) (bruijn ##.k.537 6 0) (bruijn ##.x.588 0 0) (bruijn ##.env.198 6 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      VGetArg(statics, 6-1, 0),
      _var0,
      VGetArg(statics, 6-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.537 10 0) (##inline ##vcore.cons (bruijn ##.x.590 4 0) (##inline ##vcore.cons (bruijn ##.x.592 2 0) (##inline ##vcore.cons (bruijn ##.x.594 0 0) (##inline ##vcore.cons '#f '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 10 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134) (bruijn ##.x.596 0 0) (bruijn ##.env.198 9 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134, self)))),
      _var0,
      VGetArg(statics, 9-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 10 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133) (bruijn ##.stx.196 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132) (bruijn ##.x.597 0 0) (bruijn ##.env.198 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132, self)))),
      _var0,
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 8 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131) (bruijn ##.stx.196 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.537 11 0) (##inline ##vcore.cons (bruijn ##.x.598 5 0) (##inline ##vcore.cons (bruijn ##.x.600 3 0) (##inline ##vcore.cons (bruijn ##.x.602 0 0) (##inline ##vcore.cons '#f '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 11 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140) (##inline ##vcore.cons (bruijn ##.x.605 1 0) (bruijn ##.x.606 0 0)) (bruijn ##.env.198 10 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140, self)))),
      VInlineCons2(runtime,
        statics->vars[0],
        _var0),
      VGetArg(statics, 10-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 11 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139) (bruijn ##.stx.196 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 10 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138) 'and)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138, self)))),
      _V0and);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137) (bruijn ##.x.607 0 0) (bruijn ##.env.198 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137, self)))),
      _var0,
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 8 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136) (bruijn ##.stx.196 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.16.202 0 0) '1) ((bruijn ##.k.537 5 0) #t) (if (##inline ##vcore.eq? (bruijn ##.x.16.202 0 0) '2) ((bruijn ##.syntax-cadr.78 7 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129) (bruijn ##.stx.196 5 2)) (if (##inline ##vcore.eq? (bruijn ##.x.16.202 0 0) '3) ((bruijn ##.global-identifier.38 7 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130) 'if) ((bruijn ##.global-identifier.38 7 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135) 'if))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(true));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(2l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129, self)))),
      VGetArg(statics, 5-1, 2));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(3l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130, self)))),
      _V0if);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135, self)))),
      _V0if);
}
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-impl.117 7 2) (bruijn ##.k.537 6 0) (bruijn ##.x.611 0 0) (bruijn ##.env.198 6 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      VGetArg(statics, 6-1, 0),
      _var0,
      VGetArg(statics, 6-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 12 2) (bruijn ##.k.537 10 0) (bruijn ##.x.613 4 0) (bruijn ##.x.614 2 0) (bruijn ##.x.615 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 4,
      VGetArg(statics, 10-1, 0),
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 10 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147) (bruijn ##.x.616 0 0) (bruijn ##.env.198 9 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147, self)))),
      _var0,
      VGetArg(statics, 9-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 10 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146) (bruijn ##.stx.196 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145) (bruijn ##.x.617 0 0) (bruijn ##.env.198 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145, self)))),
      _var0,
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 8 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144) (bruijn ##.stx.196 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.537 11 0) (##inline ##vcore.cons (bruijn ##.x.618 5 0) (##inline ##vcore.cons (bruijn ##.x.620 3 0) (##inline ##vcore.cons (bruijn ##.x.622 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 11 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153) (##inline ##vcore.cons (bruijn ##.x.624 1 0) (bruijn ##.x.625 0 0)) (bruijn ##.env.198 10 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153, self)))),
      VInlineCons2(runtime,
        statics->vars[0],
        _var0),
      VGetArg(statics, 10-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 11 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152) (bruijn ##.stx.196 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 10 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151) 'or)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151, self)))),
      _V0or);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150) (bruijn ##.x.626 0 0) (bruijn ##.env.198 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150, self)))),
      _var0,
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 8 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149) (bruijn ##.stx.196 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.17.203 0 0) '1) ((bruijn ##.k.537 5 0) #f) (if (##inline ##vcore.eq? (bruijn ##.x.17.203 0 0) '2) ((bruijn ##.syntax-cadr.78 7 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142) (bruijn ##.stx.196 5 2)) (if (##inline ##vcore.eq? (bruijn ##.x.17.203 0 0) '3) ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143) (bruijn ##.stx.196 5 2)) ((bruijn ##.global-identifier.38 7 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148) 'or))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(2l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142, self)))),
      VGetArg(statics, 5-1, 2));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(3l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143, self)))),
      VGetArg(statics, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148, self)))),
      _V0or);
}
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.537 12 0) (##inline ##vcore.cons (bruijn ##.x.630 3 0) (##inline ##vcore.cons (bruijn ##.place.204 5 0) (##inline ##vcore.cons (bruijn ##.x.633 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 12 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160) (##inline ##vcore.cons (bruijn ##.x.635 1 0) (bruijn ##.x.636 0 0)) (bruijn ##.env.198 11 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160, self)))),
      VInlineCons2(runtime,
        statics->vars[0],
        _var0),
      VGetArg(statics, 11-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 12 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159) (bruijn ##.stx.196 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 11 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158) (bruijn ##.stx.196 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-impl.117 18 2) (bruijn ##.k.537 17 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.652 7 0) (##inline ##vcore.cons (bruijn ##.x.654 6 0) '())) (bruijn ##.x.639 0 0)) (bruijn ##.env.198 17 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 3,
      VGetArg(statics, 17-1, 0),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VNULL)),
        _var0),
      VGetArg(statics, 17-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 18 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169) (bruijn ##.x.640 4 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.643 3 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.val.205 7 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.648 2 0) (##inline ##vcore.cons (bruijn ##.val.205 7 0) (bruijn ##.x.650 0 0))) '()))) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169, self)))),
      statics->up->up->up->vars[0],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        _var0)),
        VNULL))),
        VNULL));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 17 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168) (bruijn ##.x.651 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 16 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167) (bruijn ##.stx.196 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167, self)))),
      VGetArg(statics, 14-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 15 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166) (bruijn ##.stx.196 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 14 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 13 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164) (bruijn ##.place.204 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 12 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163) (bruijn ##.place.204 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 11 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162) '##vcore.mutator)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162, self)))),
      _V10vcore_Dmutator);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.629 0 0) ((bruijn ##.global-identifier.38 10 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157) 'set!) ((bruijn ##.generate-symbol.89 10 61) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161) 'val))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157, self)))),
      _V0set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 61)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161, self)))),
      _V0val);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.33 9 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156) (bruijn ##.place.204 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.537 11 0) (##inline ##vcore.cons (bruijn ##.x.656 2 0) (##inline ##vcore.cons (bruijn ##.place.206 4 0) (##inline ##vcore.cons (bruijn ##.x.659 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 11 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174) (bruijn ##.x.660 0 0) (bruijn ##.env.198 10 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174, self)))),
      _var0,
      VGetArg(statics, 10-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 11 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173) (bruijn ##.stx.196 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-impl.117 14 2) (bruijn ##.k.537 13 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.667 4 0) (##inline ##vcore.cons (bruijn ##.x.669 3 0) '())) (bruijn ##.x.663 0 0)) (bruijn ##.env.198 13 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 3,
      VGetArg(statics, 13-1, 0),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        _var0),
      VGetArg(statics, 13-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179) (bruijn ##.x.664 1 0) (##inline ##vcore.cons (bruijn ##.x.666 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179, self)))),
      statics->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.40 13 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178) (bruijn ##.stx.196 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 12 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177) (bruijn ##.place.206 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 11 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176) (bruijn ##.place.206 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.655 0 0) ((bruijn ##.syntax-car.77 10 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172) (bruijn ##.stx.196 8 2)) ((bruijn ##.global-identifier.38 10 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175) '##vcore.setter))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172, self)))),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175, self)))),
      _V10vcore_Dsetter);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.33 9 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171) (bruijn ##.place.206 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1407) ((##vcore.> (bruijn ##.x.670 1 0) 3)) (if (bruijn ##.reg.1407 0 0) ((bruijn ##.syntax-caddr.40 8 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155) (bruijn ##.stx.196 6 2)) ((bruijn ##.syntax-cadr.78 8 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170) (bruijn ##.stx.196 6 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(3l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155, self)))),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170, self)))),
      VGetArg(statics, 6-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.680 1 0) ((bruijn ##.k.681 0 0) (bruijn ##.p.680 1 0)) ((bruijn ##.k.681 0 0) (##inline ##vcore.eq? (bruijn ##.binding.197 6 3) '##basic-intrinsic)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 6-1, 3),
        _V10basic__intrinsic));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.v.207 1 0) (basic-block 1 1 (##.reg.1408) ((##vcore.procedure? (##inline ##vcore.cdr (bruijn ##.v.207 2 0)))) ((bruijn ##.k.678 1 0) (bruijn ##.reg.1408 0 0))) ((bruijn ##.k.678 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VProcedureP2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand.195 12 1) (bruijn ##.k.537 12 0) (bruijn ##.x.674 0 0) (bruijn ##.env.198 12 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      VGetArg(statics, 12-1, 0),
      _var0,
      VGetArg(statics, 12-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.apply-transformer.119 12 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k188) (bruijn ##.x.675 0 0) (##inline ##vcore.cdr (bruijn ##.v.207 3 0)) (bruijn ##.stx.196 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k188, self)))),
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 12 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k187) (bruijn ##.x.677 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k187, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.673 0 0) ((bruijn ##.syntax-car.77 11 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k186) (bruijn ##.stx.196 9 2)) ((bruijn ##.expand-app.130 10 15) (bruijn ##.k.537 9 0) (bruijn ##.stx.196 9 2) (bruijn ##.env.198 9 4)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k186, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 15)), 3,
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 9-1, 2),
      VGetArg(statics, 9-1, 4));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.672 1 0)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.671 0 0) ((bruijn ##.k.537 6 0) (bruijn ##.stx.196 6 2)) ((bruijn ##.assoc.42 8 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183) (bruijn ##.binding.197 6 3) (bruijn ##.env.198 6 4)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183, self)))),
      VGetArg(statics, 6-1, 3),
      VGetArg(statics, 6-1, 4));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.549 0 0) ((bruijn ##.k.537 4 0) (bruijn ##.stx.196 4 2)) (if (##inline ##vcore.eq? (bruijn ##.binding.197 4 3) 'begin) ((bruijn ##.syntax-length.147 5 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99) (bruijn ##.stx.196 4 2)) (if (##inline ##vcore.eq? (bruijn ##.binding.197 4 3) 'if) ((bruijn ##.syntax-length.147 5 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112) (bruijn ##.stx.196 4 2)) (if (##inline ##vcore.eq? (bruijn ##.binding.197 4 3) 'and) ((bruijn ##.syntax-length.147 5 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128) (bruijn ##.stx.196 4 2)) (if (##inline ##vcore.eq? (bruijn ##.binding.197 4 3) 'or) ((bruijn ##.syntax-length.147 5 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141) (bruijn ##.stx.196 4 2)) (if (##inline ##vcore.eq? (bruijn ##.binding.197 4 3) 'set!) ((bruijn ##.syntax-length.147 5 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154) (bruijn ##.stx.196 4 2)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180) (##inline ##vcore.eq? (bruijn ##.binding.197 4 3) '##intrinsic))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[3],
        _V0begin))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99, self)))),
      statics->up->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[3],
        _V0if))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112, self)))),
      statics->up->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[3],
        _V0and))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128, self)))),
      statics->up->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[3],
        _V0or))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141, self)))),
      statics->up->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->up->vars[3],
        _V0set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180, self)), 1,
      VInlineEq2(runtime,
        statics->up->up->up->vars[3],
        _V10intrinsic));
}
}
}
}
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.547 0 0) ((bruijn ##.expand-letrec*.128 3 13) (bruijn ##.k.537 2 0) (bruijn ##.stx.196 2 2) (bruijn ##.env.198 2 4)) (if (##inline ##vcore.eq? (bruijn ##.binding.197 2 3) 'let-syntax) ((bruijn ##.expand-let-syntax.135 3 20) (bruijn ##.k.537 2 0) (bruijn ##.stx.196 2 2) (bruijn ##.env.198 2 4)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96) (##inline ##vcore.eq? (bruijn ##.binding.197 2 3) 'syntax))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      statics->up->vars[0],
      statics->up->vars[2],
      statics->up->vars[4]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[3],
        _V0let__syntax))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[20]), 3,
      statics->up->vars[0],
      statics->up->vars[2],
      statics->up->vars[4]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96, self)), 1,
      VInlineEq2(runtime,
        statics->up->vars[3],
        _V0syntax));
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, got ~D~N"
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
  // (if (##inline ##vcore.eq? (bruijn ##.binding.197 0 3) 'lambda) ((bruijn ##.syntax-car.77 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87) (bruijn ##.stx.196 0 2)) (if (##inline ##vcore.eq? (bruijn ##.binding.197 0 3) 'case-lambda) ((bruijn ##.syntax-car.77 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90) (bruijn ##.stx.196 0 2)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93) (##inline ##vcore.eq? (bruijn ##.binding.197 0 3) 'letrec*))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var3,
        _V0lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87, self)))),
      _var2);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var3,
        _V0case__lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90, self)))),
      _var2);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93, self)), 1,
      VInlineEq2(runtime,
        _var3,
        _V0letrec_S));
}
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k194(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.flip-scope.43 7 15) (bruijn ##.k.686 5 0) (bruijn ##.transformed-s.213 3 2) (bruijn ##.intro-scope.211 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 15)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[2],
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k194) (bruijn ##.transformed-s.213 3 2) (bruijn ##.x.688 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k194, self)))),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.689 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.692 0 0) (bruijn ##.k.691 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k197(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.raise (bruijn ##.k.694 1 0) (bruijn ##.condition.10.215 3 1))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.46 10 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k197) (bruijn ##.x.695 0 0) (##string ##.string.1425) (bruijn ##.name.208 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 18)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k197, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1425.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.45 9 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k196))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 17)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k196, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.guard-k.9.214 2 1) (bruijn ##.k.693 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k195) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k195, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.t.209 6 2) (bruijn ##.k.697 0 0) (bruijn ##.intro-s.212 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      _var0,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.699 0 0) (bruijn ##.values.44 9 16) (bruijn ##.args.12.218 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      VGetArg(statics, 9-1, 16),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda20, got ~D~N"
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
  // ((bruijn ##.guard-k.9.214 2 1) (bruijn ##.k.698 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda21))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda21, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.696 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda20))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda20, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.with-exception-handler.47 6 19) (bruijn ##.k.690 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 19)), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k191(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k191) (bruijn ##.intro-s.212 1 1) (bruijn ##.x.700 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k191, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.687 1 0) #f #f) ((bruijn ##.flip-scope.43 4 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190) (bruijn ##.stx.210 2 3) (bruijn ##.intro-scope.211 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[15]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190, self)))),
      statics->up->vars[3],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, got ~D~N"
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
  // ((bruijn ##.make-scope.39 2 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[11]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.707 3 0) (##inline ##vcore.eq? (bruijn ##.x.709 0 0) 'rename))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        _V0rename));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 7 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203) (bruijn ##.x.710 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.708 0 0) ((bruijn ##.syntax-car.77 6 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202) (bruijn ##.e.219 4 1)) ((bruijn ##.k.707 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.706 1 0) ((bruijn ##.syntax-pair?.37 5 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201) (##inline ##vcore.cdr (bruijn ##.e.219 3 1))) ((bruijn ##.k.707 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.35 7 7) (bruijn ##.k.704 1 0) (##string ##.string.1426) (bruijn ##.x.705 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 7)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1426.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.703 1 0) ((bruijn ##.k.704 0 0) #void) ((bruijn ##.syntax-object->datum.156 5 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k206) (bruijn ##.e.219 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 41)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k206, self)))),
      statics->up->up->up->vars[1]);
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k207(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-cadr.78 5 50) (bruijn ##.k.701 3 0) (bruijn ##.e.219 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 50)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k205) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k207))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k205, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k207, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.702 0 0) ((bruijn ##.k.701 1 0) (bruijn ##.e.219 1 1)) ((bruijn ##.syntax-pair?.37 3 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199) (bruijn ##.e.219 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.identifier?.33 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198) (bruijn ##.e.219 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k219(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.712 10 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k219) (bruijn ##.x.716 0 0) (bruijn ##.val.225 5 4))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k219, self)))),
      _var0,
      VGetArg(statics, 5-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assq.48 11 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218) (bruijn ##.binding.224 4 3) (bruijn ##.x.717 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218, self)))),
      statics->up->up->up->vars[3],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k216(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.toplevel-expand-env.141 9 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k216) (bruijn ##.val.225 3 4) (bruijn ##.x.718 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k216, self)))),
      VEncodeInt(3l), VEncodeInt(4l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.719 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.722 0 0) (bruijn ##.k.721 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k223(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.raise (bruijn ##.k.724 2 0) (bruijn ##.condition.6.227 4 1))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.46 14 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k223) (bruijn ##.x.725 1 0) (##string ##.string.1427) (bruijn ##.x.726 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 18)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k223, self)))),
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1427.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 13 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k222) (bruijn ##.var.222 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k222, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.45 12 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k221))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 17)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k221, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.guard-k.5.226 2 1) (bruijn ##.k.723 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-for-syntax-binding.136 10 21) (bruijn ##.k.728 0 0) (bruijn ##.raw-val.223 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 21)), 2,
      _var0,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.730 0 0) (bruijn ##.values.44 12 16) (bruijn ##.args.8.230 1 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      VGetArg(statics, 12-1, 16),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda28, got ~D~N"
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
  // ((bruijn ##.guard-k.5.226 2 1) (bruijn ##.k.729 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda29))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda29, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.727 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda27) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda28))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda27, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda28, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.with-exception-handler.47 9 19) (bruijn ##.k.720 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda26))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 19)), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda26, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k213(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k213) (bruijn ##.binding.224 1 3) (bruijn ##.x.731 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k213, self)))),
      VEncodeInt(1l), VEncodeInt(3l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 5 ((bruijn ##.x.713 4 0) (bruijn ##.x.714 3 0) (bruijn ##.x.715 1 0) #f #f) ((bruijn ##.add-toplevel-binding!.126 6 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212) (bruijn ##.var.222 0 1) #f))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = statics->up->up->up->vars[0];
    self->vars[1] = statics->up->up->vars[0];
    self->vars[2] = statics->vars[0];
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212, self)))),
      self->vars[1],
      VEncodeBool(false));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 5 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211) (bruijn ##.x.732 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 4 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210) (bruijn ##.stx.220 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[51]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 3 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209) (bruijn ##.stx.220 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.77 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208) (bruijn ##.stx.220 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.790 1 0) ((bruijn ##.global-identifier.38 20 10) (bruijn ##.k.791 0 0) '=) ((bruijn ##.global-identifier.38 20 10) (bruijn ##.k.791 0 0) '<=))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 10)), 2,
      _var0,
      _V0_E);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 10)), 2,
      _var0,
      _V0_L_E);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.735 30 0) (##inline ##vcore.cons (bruijn ##.x.738 26 0) (##inline ##vcore.cons (bruijn ##.x.740 25 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.743 24 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.794 23 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.797 22 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.800 21 0) (bruijn ##.x.801 20 0)) (bruijn ##.body.234 27 1))) '())) '()) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.748 19 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.792 18 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.753 17 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.782 15 0) (##inline ##vcore.cons (bruijn ##.x.784 14 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.787 13 0) (##inline ##vcore.cons (bruijn ##.x.789 12 0) '())) '()))) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.777 11 0) (##inline ##vcore.cons (bruijn ##.x.779 10 0) (##inline ##vcore.cons (bruijn ##.x.781 9 0) '()))) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.760 8 0) (##inline ##vcore.cons (bruijn ##.x.762 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.768 4 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.772 3 0) (##inline ##vcore.cons (bruijn ##.x.774 2 0) '())) (##inline ##vcore.cons '1 '()))) (##inline ##vcore.cons (bruijn ##.x.766 0 0) '())))) '())))) '()))) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 26-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 25-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 24-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 23-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 22-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 21-1, 0),
        VGetArg(statics, 20-1, 0)),
        VGetArg(statics, 27-1, 1))),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 19-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 18-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 17-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 15-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 14-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 13-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 12-1, 0),
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 11-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        VEncodeInt(1l),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL)))),
        VNULL)))),
        VNULL))),
        VNULL))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-improper-length.123 33 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k255) (bruijn ##.x.767 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k255, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 33 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k254) (bruijn ##.var.233 25 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k254, self)))),
      VGetArg(statics, 25-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 32 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k253) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k253, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 31 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252, self)))),
      _V0length);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 30 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251, self)))),
      _V0__);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sprintf.49 29 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250) (##string ##.string.1429) (bruijn ##.x.775 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 21)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250, self)))),
      VEncodePointer(&_V10_Dstring_D1429.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 28 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249) (bruijn ##.x.776 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 27 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248) (bruijn ##.var.233 19 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248, self)))),
      VGetArg(statics, 19-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 26 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247, self)))),
      _V0error);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 25 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 24 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245) 'transformer)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245, self)))),
      _V0transformer);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 23 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244) '##vcore.apply)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244, self)))),
      _V10vcore_Dapply);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 22 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 21 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242, self)))),
      _V0length);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-improper-length.123 19 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241) (bruijn ##.var.233 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241, self)))),
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-proper-list?.124 17 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238) (bruijn ##.var.233 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 17 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237) 'if)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237, self)))),
      _V0if);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 16 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 15 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 14 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234) (bruijn ##.var.233 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 13 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233) 'ignored)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233, self)))),
      _V0ignored);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 12 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 11 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231) 'transformer)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231, self)))),
      _V0transformer);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 10 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230) 'let)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230, self)))),
      _V0let);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 9 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229) (bruijn ##.var.233 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.736 2 0) (bruijn ##.x.737 1 0)) ((bruijn ##.global-identifier.38 8 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228) 'define-syntax))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228, self)))),
      _V0define__syntax);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 6 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227) (bruijn ##.stx.232 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.78 5 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226) (bruijn ##.stx.232 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.734 0 0) ((bruijn ##.apply-transformer.119 3 4) (bruijn ##.k.733 2 0) (##string ##.string.1428) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda30) (bruijn ##.stx.231 2 1)) ((bruijn ##.k.733 2 0) (bruijn ##.stx.231 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1428.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda30, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.37 3 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225) (bruijn ##.x.802 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.78 2 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224) (bruijn ##.stx.231 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224, self)))),
      _var1);
}
static void _V10_Dloop_D236_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D236_V0k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D236_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.236 4 0) (bruijn ##.k.804 3 0) (bruijn ##.reg.1409 1 0) (bruijn ##.x.807 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D236_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D236_V0k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D236_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.805 0 0) (basic-block 1 1 (##.reg.1409) ((##vcore.+ (bruijn ##.acc.237 2 1) 1)) ((bruijn ##.syntax-cdr.83 6 55) (close _V10_Dloop_D236_V0k257) (bruijn ##.xs.238 2 2))) ((bruijn ##.k.804 1 0) (bruijn ##.acc.237 1 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D236_V0k257, self)))),
      statics->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
static void _V10_Dloop_D236_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D236_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D236_V0lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.37 4 9) (close _V10_Dloop_D236_V0k256) (bruijn ##.xs.238 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D236_V0k256, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D236_V0lambda31)) ((bruijn ##.loop.236 0 0) (bruijn ##.k.803 1 0) 0 (bruijn ##.xs.235 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D236_V0lambda31, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-proper-list?.124 4 9) (bruijn ##.k.808 3 0) (bruijn ##.x.811 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.810 0 0) ((bruijn ##.syntax-cdr.83 4 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k260) (bruijn ##.xs.239 2 1)) ((bruijn ##.k.808 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[55]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k260, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.809 0 0) ((bruijn ##.k.808 1 0) #t) ((bruijn ##.syntax-pair?.37 3 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k259) (bruijn ##.xs.239 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k259, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.87 2 59) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k258) (bruijn ##.xs.239 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k258, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.812 8 0) (##inline ##vcore.cons (bruijn ##.x.816 2 0) (##inline ##vcore.cons (bruijn ##.var.242 3 1) (##inline ##vcore.cons (bruijn ##.x.819 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k268) (bruijn ##.val.243 2 2) (bruijn ##.x.820 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k268, self)))),
      statics->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.toplevel-expand-env.141 7 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k267))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k267, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k265(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-identifier.38 7 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k266) 'define)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k266, self)))),
      _V0define);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.813 4 0) (bruijn ##.x.814 3 0) (bruijn ##.x.815 1 0)) ((bruijn ##.add-toplevel-binding!.126 6 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k265) (bruijn ##.var.242 0 1) (bruijn ##.variable.140 6 25)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->up->up->up->vars[0];
    self->vars[1] = statics->up->up->vars[0];
    self->vars[2] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k265, self)))),
      self->vars[1],
      VGetArg(statics, 6-1, 25));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 5 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264) (bruijn ##.x.821 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 4 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263) (bruijn ##.stx.240 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[51]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 3 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262) (bruijn ##.stx.240 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.77 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261) (bruijn ##.stx.240 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.89 11 61) (bruijn ##.k.837 1 0) (bruijn ##.x.838 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 61)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.836 1 0) ((bruijn ##.get-syntax-data.41 10 13) (bruijn ##.k.837 0 0) (bruijn ##.var.244 8 1)) ((bruijn ##.get-syntax-data.41 10 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276) (bruijn ##.var.244 8 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 13)), 2,
      _var0,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276, self)))),
      VGetArg(statics, 8-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.825 10 0) (bruijn ##.x.826 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.binding.246 11 0) (bruijn ##.value.245 13 2)) (##inline ##vcore.cdr (bruijn ##.x.830 0 0))))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      VGetArg(statics, 10-1, 0),
      statics->vars[0],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 11-1, 0),
        VGetArg(statics, 13-1, 2)),
        VInlineCdr2(runtime,
        _var0)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.toplevel-expand-env.141 13 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k284))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k284, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k282(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.toplevel-expand-env.141 12 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k283))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k283, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.set-scope-bindings!.51 13 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k282) (bruijn ##.x.831 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.var.244 11 1) (bruijn ##.binding.246 9 0)) (bruijn ##.bindings.247 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 23)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k282, self)))),
      _var0,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 11-1, 1),
        VGetArg(statics, 9-1, 0)),
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.31 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-scope-bindings.50 11 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280) (bruijn ##.x.834 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k278(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-scope.31 10 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k278) (bruijn ##.binding.246 6 0) (bruijn ##.x.835 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k278, self)))),
      VEncodeInt(6l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.82 8 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274) (bruijn ##.x.839 1 0) (bruijn ##.x.840 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 54)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.52 7 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273) (bruijn ##.var.244 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 6 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272) (bruijn ##.x.841 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.binding.246 1 0)) ((bruijn ##.global-scope.31 5 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271)) ((bruijn ##.k.825 0 0) #void))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k285(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.822 2 0) (bruijn ##.binding.246 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.823 1 0)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k285)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k285, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.find-exact-binding.151 1 36) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269) (bruijn ##.var.244 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[36]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.842 8 0) (##inline ##vcore.cons (bruijn ##.x.846 3 0) (##inline ##vcore.cons (bruijn ##.x.848 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.851 1 0) (##inline ##vcore.cons (bruijn ##.x.853 0 0) (bruijn ##.body.250 5 1))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 5-1, 1))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 9 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k292) (bruijn ##.var.249 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k292, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.38 8 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k291) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k291, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k290) (bruijn ##.var.249 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k290, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.845 0 0) ((bruijn ##.global-identifier.38 6 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289) 'define) ((bruijn ##.k.842 4 0) (bruijn ##.stx.248 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289, self)))),
      _V0define);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.843 2 0) (bruijn ##.x.844 1 0)) ((bruijn ##.syntax-pair?.37 5 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288) (bruijn ##.var.249 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 3 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287) (bruijn ##.stx.248 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[51]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.78 2 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286) (bruijn ##.stx.248 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286, self)))),
      _var1);
}
static void _V10_Dintroduce_D256_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dintroduce_D256_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dintroduce_D256_V0lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.introduced-identifier.137 7 22) (bruijn ##.k.858 0 0) (bruijn ##.x.260 0 1) (bruijn ##.introduced-sc.255 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 3,
      _var0,
      _var1,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.854 15 0) (##inline ##vcore.cons (bruijn ##.x.861 0 0) (##inline ##vcore.cons (bruijn ##.exp-idvals.266 5 0) (##inline ##vcore.cons (bruijn ##.exp-body.267 3 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL))));
}
static void _V10_Dloop_D269_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.864 1 0) (##inline ##vcore.cons (bruijn ##.x.866 0 0) (##inline ##vcore.cons (bruijn ##.idvals.270 1 1) (##inline ##vcore.cons (bruijn ##.body.272 1 3) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[3],
        VNULL))));
}
static void _V10_Dloop_D269_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.269 9 0) (bruijn ##.k.864 8 0) (##inline ##vcore.cons (bruijn ##.x.885 4 0) (bruijn ##.idvals.270 8 1)) (##inline ##vcore.cdr (bruijn ##.todo.271 8 2)) (##inline ##vcore.cons (bruijn ##.x.876 3 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.880 2 0) (##inline ##vcore.cons (bruijn ##.x.882 1 0) (##inline ##vcore.cons (bruijn ##.x.884 0 0) '()))) (##inline ##vcore.cons (bruijn ##.body.272 8 3) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      VGetArg(statics, 8-1, 0),
      VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VGetArg(statics, 8-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)),
      VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 3),
        VNULL))));
}
static void _V10_Dloop_D269_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadar.54 25 26) (close _V10_Dloop_D269_V0k318) (bruijn ##.todo.271 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 26)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k318, self)))),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dloop_D269_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caar.55 24 27) (close _V10_Dloop_D269_V0k317) (bruijn ##.todo.271 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 27)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k317, self)))),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D269_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.256 16 3) (close _V10_Dloop_D269_V0k316) 'set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k316, self)))),
      _V0set_B);
}
static void _V10_Dloop_D269_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.256 15 3) (close _V10_Dloop_D269_V0k315) 'begin)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k315, self)))),
      _V0begin);
}
static void _V10_Dloop_D269_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 21 2) (close _V10_Dloop_D269_V0k314) (bruijn ##.x.886 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k314, self)))),
      _var0,
      VVOID);
}
static void _V10_Dloop_D269_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.869 0 0) ((bruijn ##.loop.269 3 0) (bruijn ##.k.864 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.todo.271 2 2)) (bruijn ##.idvals.270 2 1)) (##inline ##vcore.cdr (bruijn ##.todo.271 2 2)) (bruijn ##.body.272 2 3)) ((bruijn ##.caar.55 20 27) (close _V10_Dloop_D269_V0k313) (bruijn ##.todo.271 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 4,
      statics->up->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]),
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 27)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k313, self)))),
      statics->up->vars[2]);
}
}
static void _V10_Dloop_D269_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.primitive-letrec?.129 18 14) (close _V10_Dloop_D269_V0k312) (bruijn ##.x.887 0 0) (bruijn ##.ids.258 12 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k312, self)))),
      _var0,
      VGetArg(statics, 12-1, 5));
}
static void _V10_Dloop_D269_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D269_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D269_V0lambda33, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.todo.271 0 2)) ((bruijn ##.introduce.256 11 3) (close _V10_Dloop_D269_V0k310) 'letrec) ((bruijn ##.cadar.54 18 26) (close _V10_Dloop_D269_V0k311) (bruijn ##.todo.271 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k310, self)))),
      _V0letrec);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 26)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0k311, self)))),
      _var2);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.269 1 0) (bruijn ##.k.854 16 0) '() (bruijn ##.x.888 0 0) (bruijn ##.exp-body.267 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 4,
      VGetArg(statics, 16-1, 0),
      VNULL,
      _var0,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.860 0 0) ((bruijn ##.introduce.256 9 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k309) 'letrec) (letrec 1 ((close _V10_Dloop_D269_V0lambda33)) ((bruijn ##.reverse.53 17 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319) (bruijn ##.exp-idvals.266 5 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k309, self)))),
      _V0letrec);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D269_V0lambda33, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 25)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319, self)))),
      VGetArg(statics, 5-1, 0));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.primitive-letrec?.129 15 14) (bruijn ##.k.889 0 0) (bruijn ##.x.4.268 0 1) (bruijn ##.ids.258 9 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 14)), 3,
      _var0,
      _var1,
      VGetArg(statics, 9-1, 5));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.every?.56 15 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k308) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda34) (bruijn ##.x.890 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 28)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k308, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda34, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 14 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k307) (bruijn ##.cadr.57 14 29) (bruijn ##.exp-idvals.266 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k307, self)))),
      VGetArg(statics, 14-1, 29),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-body.132 12 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306) (bruijn ##.x.891 0 0) (bruijn ##.letrec-env.265 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306, self)))),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.43 12 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305) (bruijn ##.body.254 5 1) (bruijn ##.sc.257 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305, self)))),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 15 2) (bruijn ##.k.892 3 0) (bruijn ##.id.273 3 1) (bruijn ##.x.893 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 13 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k322) (bruijn ##.x.894 0 0) (bruijn ##.letrec-env.265 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k322, self)))),
      _var0,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.43 13 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321) (bruijn ##.x.895 0 0) (bruijn ##.sc.257 6 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321, self)))),
      _var0,
      VGetArg(statics, 6-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-cadr.78 12 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320) (bruijn ##.idval.274 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.80 11 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda35) (bruijn ##.ids.258 4 5) (bruijn ##.idvals.253 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 52)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda35, self)))),
      statics->up->up->up->vars[5],
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303) (bruijn ##.x.896 0 0) (bruijn ##.env.252 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303, self)))),
      _var0,
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.897 0 0) (##inline ##vcore.cons (bruijn ##.binding.275 0 1) (bruijn ##.variable.140 9 25)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VGetArg(statics, 9-1, 25)));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k301(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.29 9 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda36) (bruijn ##.bindings.259 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda36, self)))),
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.add-binding!.158 9 43) (bruijn ##.k.898 0 0) (bruijn ##.id.263 0 1) (bruijn ##.binding.264 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 43)), 3,
      _var0,
      _var1,
      _var2);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k300(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.58 9 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k301) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda37) (bruijn ##.ids.258 2 5) (bruijn ##.bindings.259 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 30)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k301, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda37, self)))),
      statics->up->vars[5],
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k300) (bruijn ##.bindings.259 2 6) (bruijn ##.x.899 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k300, self)))),
      VEncodeInt(2l), VEncodeInt(6l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.89 10 61) (bruijn ##.k.900 1 0) (bruijn ##.x.901 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 61)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.41 9 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k323) (bruijn ##.e.262 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k323, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k298(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.29 8 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda38) (bruijn ##.ids.258 1 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda38, self)))),
      statics->vars[5]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k298) (bruijn ##.ids.258 1 5) (bruijn ##.x.902 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k298, self)))),
      VEncodeInt(1l), VEncodeInt(5l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.flip-scope.43 9 15) (bruijn ##.k.903 1 0) (bruijn ##.x.904 0 0) (bruijn ##.sc.257 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 15)), 3,
      statics->vars[0],
      _var0,
      statics->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.77 8 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k324) (bruijn ##.idval.261 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k324, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((bruijn ##.x.855 4 0) (bruijn ##.x.856 3 0) (bruijn ##.x.857 2 0) (close _V10_Dintroduce_D256_V0lambda32) (bruijn ##.x.859 1 0) #f #f) ((bruijn ##.syntax-map.80 7 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda39) (bruijn ##.idvals.253 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = statics->up->up->up->vars[0];
    self->vars[1] = statics->up->up->vars[0];
    self->vars[2] = statics->up->vars[0];
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dintroduce_D256_V0lambda32, self))));
    self->vars[4] = statics->vars[0];
    self->vars[5] = VEncodeBool(false);
    self->vars[6] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 52)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda39, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.39 5 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.39 4 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 3 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294) (bruijn ##.stx.251 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[51]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-cadr.78 2 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293) (bruijn ##.stx.251 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293, self)))),
      _var1);
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.identifier?.33 8 5) (bruijn ##.k.927 1 0) (bruijn ##.x.928 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.926 1 0) ((bruijn ##.syntax-car.77 7 49) (close _V10_Dadvanced__primitive__letrec_D279_V0k327) (bruijn ##.val.280 2 1)) ((bruijn ##.k.927 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k327, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.920 0 0) ((bruijn ##.k.918 2 0) (bruijn ##.p.920 0 0)) ((bruijn ##.k.918 2 0) (##inline ##vcore.eq? (bruijn ##.x.3.281 4 0) '##foreign-function)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineEq2(runtime,
        statics->up->up->up->vars[0],
        _V10foreign__function));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.919 0 0) ((bruijn ##.k.918 1 0) (bruijn ##.p.919 0 0)) ((close _V10_Dadvanced__primitive__letrec_D279_V0k334) (##inline ##vcore.eq? (bruijn ##.x.3.281 3 0) '##basic-intrinsic)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k334, self)), 1,
      VInlineEq2(runtime,
        statics->up->up->vars[0],
        _V10basic__intrinsic));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.917 1 0) ((bruijn ##.k.918 0 0) (bruijn ##.p.917 1 0)) ((close _V10_Dadvanced__primitive__letrec_D279_V0k333) (##inline ##vcore.eq? (bruijn ##.x.3.281 2 0) '##intrinsic)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k333, self)), 1,
      VInlineEq2(runtime,
        statics->up->vars[0],
        _V10intrinsic));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.916 0 0) ((bruijn ##.k.912 4 0) (bruijn ##.p.916 0 0)) ((bruijn ##.k.912 4 0) (##inline ##vcore.eq? (bruijn ##.x.3.281 8 0) '##letrec)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 8-1, 0),
        _V10letrec));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.915 0 0) ((bruijn ##.k.912 3 0) (bruijn ##.p.915 0 0)) ((close _V10_Dadvanced__primitive__letrec_D279_V0k341) (##inline ##vcore.eq? (bruijn ##.x.3.281 7 0) 'letrec)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k341, self)), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 7-1, 0),
        _V0letrec));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.914 0 0) ((bruijn ##.k.912 2 0) (bruijn ##.p.914 0 0)) ((close _V10_Dadvanced__primitive__letrec_D279_V0k340) (##inline ##vcore.eq? (bruijn ##.x.3.281 6 0) '##qualified-case-lambda)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k340, self)), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 6-1, 0),
        _V10qualified__case__lambda));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.913 0 0) ((bruijn ##.k.912 1 0) (bruijn ##.p.913 0 0)) ((close _V10_Dadvanced__primitive__letrec_D279_V0k339) (##inline ##vcore.eq? (bruijn ##.x.3.281 5 0) '##qualified-lambda)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k339, self)), 1,
      VInlineEq2(runtime,
        VGetArg(statics, 5-1, 0),
        _V10qualified__lambda));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.911 1 0) ((bruijn ##.k.912 0 0) (bruijn ##.p.911 1 0)) ((close _V10_Dadvanced__primitive__letrec_D279_V0k338) (##inline ##vcore.eq? (bruijn ##.x.3.281 4 0) 'case-lambda)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k338, self)), 1,
      VInlineEq2(runtime,
        statics->up->up->up->vars[0],
        _V0case__lambda));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.910 0 0) ((bruijn ##.return.278 10 1) (bruijn ##.k.907 8 0) #f) ((bruijn ##.syntax-map.80 13 52) (bruijn ##.k.907 8 0) (bruijn ##.advanced-primitive-letrec.279 9 0) (bruijn ##.val.280 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 2,
      VGetArg(statics, 8-1, 0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 52)), 3,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 8-1, 1));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dadvanced__primitive__letrec_D279_V0k337) (close _V10_Dadvanced__primitive__letrec_D279_V0k342))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k337, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k342, self)))));
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.909 0 0) ((bruijn ##.k.907 6 0) #t) ((close _V10_Dadvanced__primitive__letrec_D279_V0k336) (##inline ##vcore.eq? (bruijn ##.x.3.281 2 0) 'lambda)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k336, self)), 1,
      VInlineEq2(runtime,
        statics->up->vars[0],
        _V0lambda));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dadvanced__primitive__letrec_D279_V0k332) (close _V10_Dadvanced__primitive__letrec_D279_V0k335))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k332, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k335, self)))));
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dadvanced__primitive__letrec_D279_V0k331) (##inline ##vcore.eq? (bruijn ##.x.3.281 0 0) 'quote))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k331, self)), 1,
      VInlineEq2(runtime,
        _var0,
        _V0quote));
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 7 37) (close _V10_Dadvanced__primitive__letrec_D279_V0k330) (bruijn ##.x.921 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k330, self)))),
      _var0);
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.924 1 0) ((bruijn ##.member.59 10 31) (bruijn ##.k.925 0 0) (bruijn ##.val.280 5 1) (bruijn ##.xs.277 8 2) (bruijn ##.free-identifier=?.161 9 46)) ((bruijn ##.k.925 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 31)), 4,
      _var0,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 8-1, 2),
      VGetArg(statics, 9-1, 46));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.923 0 0) ((bruijn ##.return.278 7 1) (bruijn ##.k.907 5 0) #f) ((bruijn ##.k.907 5 0) #t))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(true));
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dadvanced__primitive__letrec_D279_V0k345) (close _V10_Dadvanced__primitive__letrec_D279_V0k346))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k345, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k346, self)))));
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.922 0 0) ((bruijn ##.syntax-map.80 8 52) (bruijn ##.k.907 3 0) (bruijn ##.advanced-primitive-letrec.279 4 0) (bruijn ##.val.280 3 1)) ((bruijn ##.identifier?.33 8 5) (close _V10_Dadvanced__primitive__letrec_D279_V0k344) (bruijn ##.val.280 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 52)), 3,
      statics->up->up->vars[0],
      statics->up->up->up->vars[0],
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k344, self)))),
      statics->up->up->vars[1]);
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.908 0 0) ((bruijn ##.syntax-car.77 7 49) (close _V10_Dadvanced__primitive__letrec_D279_V0k329) (bruijn ##.val.280 2 1)) ((bruijn ##.syntax-pair?.37 7 9) (close _V10_Dadvanced__primitive__letrec_D279_V0k343) (bruijn ##.val.280 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k329, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k343, self)))),
      statics->up->vars[1]);
}
}
static void _V10_Dadvanced__primitive__letrec_D279_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dadvanced__primitive__letrec_D279_V0k326) (close _V10_Dadvanced__primitive__letrec_D279_V0k328))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k326, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k328, self)))));
}
static void _V10_Dadvanced__primitive__letrec_D279_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dadvanced__primitive__letrec_D279_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadvanced__primitive__letrec_D279_V0lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-pair?.37 5 9) (close _V10_Dadvanced__primitive__letrec_D279_V0k325) (bruijn ##.val.280 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0k325, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.identifier?.33 7 5) (bruijn ##.k.938 1 0) (bruijn ##.x.939 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.937 1 0) ((bruijn ##.syntax-car.77 6 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k349) (bruijn ##.val.276 4 1)) ((bruijn ##.k.938 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k349, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.930 0 0) ((bruijn ##.k.906 6 0) (bruijn ##.p.930 0 0)) ((bruijn ##.advanced-primitive-letrec.279 5 0) (bruijn ##.k.906 6 0) (bruijn ##.val.276 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 7-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.memq.60 8 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k353) (bruijn ##.x.931 0 0) '(##pair ##.pair.1437))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k353, self)))),
      _var0,
      VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 6 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k352) (bruijn ##.x.932 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k352, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.935 1 0) ((bruijn ##.member.59 9 31) (bruijn ##.k.936 0 0) (bruijn ##.val.276 7 1) (bruijn ##.xs.277 7 2) (bruijn ##.free-identifier=?.161 8 46)) ((bruijn ##.k.936 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 31)), 4,
      _var0,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2),
      VGetArg(statics, 8-1, 46));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.906 6 0) (##inline ##vcore.not (bruijn ##.x.934 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k356) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k357))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k356, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k357, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.933 0 0) ((bruijn ##.advanced-primitive-letrec.279 3 0) (bruijn ##.k.906 4 0) (bruijn ##.val.276 5 1)) ((bruijn ##.identifier?.33 7 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k355) (bruijn ##.val.276 5 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->up->up->vars[0],
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k355, self)))),
      VGetArg(statics, 5-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.929 0 0) ((bruijn ##.syntax-car.77 6 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k351) (bruijn ##.val.276 4 1)) ((bruijn ##.syntax-pair?.37 6 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k354) (bruijn ##.val.276 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k351, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k354, self)))),
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k348) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k350))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k348, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k350, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dadvanced__primitive__letrec_D279_V0lambda41)) ((bruijn ##.syntax-pair?.37 4 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k347) (bruijn ##.val.276 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dadvanced__primitive__letrec_D279_V0lambda41, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k347, self)))),
      statics->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.905 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda40))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda40, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.expand-impl.117 2 2) (bruijn ##.k.941 0 0) (bruijn ##.x.284 0 1) (bruijn ##.env.283 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      _var0,
      _var1,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-map.80 2 52) (bruijn ##.k.940 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda42) (bruijn ##.xs.282 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[52]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda42, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.36 17 8) (bruijn ##.k.948 2 0) (bruijn ##.x.949 1 0) (##inline ##vcore.car (bruijn ##.x.951 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 3,
      statics->up->vars[0],
      statics->vars[0],
      VInlineCar2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.take-right.62 16 34) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k375) (bruijn ##.ids.291 10 4) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 34)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k375, self)))),
      VGetArg(statics, 10-1, 4),
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.dotted?.289 9 2) ((bruijn ##.drop-right.61 15 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k374) (bruijn ##.ids.291 9 4) 1) ((bruijn ##.k.948 0 0) (bruijn ##.ids.291 9 4)))
if(VDecodeBool(
VGetArg(statics, 9-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 33)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k374, self)))),
      VGetArg(statics, 9-1, 4),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 4));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.942 13 0) (##inline ##vcore.cons (bruijn ##.x.946 0 0) (##inline ##vcore.cons (bruijn ##.exp-body.298 1 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k373) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k376))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k373, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k376, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-body.132 12 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k372) (bruijn ##.x.952 0 0) (bruijn ##.body-env.297 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k372, self)))),
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.43 12 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k371) (bruijn ##.body.288 6 1) (bruijn ##.sc.290 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k371, self)))),
      VGetArg(statics, 6-1, 1),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k370) (bruijn ##.x.953 0 0) (bruijn ##.env.286 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k370, self)))),
      _var0,
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.954 0 0) (##inline ##vcore.cons (bruijn ##.binding.299 0 1) (bruijn ##.variable.140 10 25)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VGetArg(statics, 10-1, 25)));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k368(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.29 10 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k369) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda43) (bruijn ##.bindings.292 4 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k369, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda43, self)))),
      statics->up->up->up->vars[5]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.add-binding!.158 10 43) (bruijn ##.k.955 0 0) (bruijn ##.id.295 0 1) (bruijn ##.binding.296 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 43)), 3,
      _var0,
      _var1,
      _var2);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k367(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.58 10 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k368) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda44) (bruijn ##.ids.291 4 4) (bruijn ##.bindings.292 4 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 30)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k368, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda44, self)))),
      statics->up->up->up->vars[4],
      statics->up->up->up->vars[5]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k367) (bruijn ##.bindings.292 4 5) (bruijn ##.x.956 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k367, self)))),
      VEncodeInt(4l), VEncodeInt(5l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.89 11 61) (bruijn ##.k.957 1 0) (bruijn ##.x.958 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 61)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.41 10 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k377) (bruijn ##.e.294 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k377, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k365(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.29 9 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda45) (bruijn ##.ids.291 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda45, self)))),
      statics->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k365) (bruijn ##.ids.291 3 4) (bruijn ##.x.959 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k365, self)))),
      VEncodeInt(3l), VEncodeInt(4l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.flip-scope.43 9 15) (bruijn ##.k.960 0 0) (bruijn ##.id.293 0 1) (bruijn ##.sc.290 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 15)), 3,
      _var0,
      _var1,
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.80 8 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda46) (bruijn ##.x.961 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 52)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda46, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k362(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-undot-list.134 6 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363) (bruijn ##.formals.287 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k362) (bruijn ##.dotted?.289 1 2) (##inline ##vcore.not (bruijn ##.x.963 0 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k362, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      VInlineNot2(runtime,
        _var0)
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((bruijn ##.x.943 3 0) (bruijn ##.x.944 2 0) #f (bruijn ##.x.945 1 0) #f #f) ((bruijn ##.syntax-proper-list?.124 5 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361) (bruijn ##.formals.287 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = statics->up->up->vars[0];
    self->vars[1] = statics->up->vars[0];
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = statics->vars[0];
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.39 4 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 3 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359) (bruijn ##.stx.285 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[55]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-car.77 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358) (bruijn ##.stx.285 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358, self)))),
      _var1);
}
static void _V10_Dintroduce_D303_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dintroduce_D303_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dintroduce_D303_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.introduced-identifier.137 4 22) (bruijn ##.k.966 0 0) (bruijn ##.x.306 0 1) (bruijn ##.introduced-sc.302 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[22]), 3,
      _var0,
      _var1,
      statics->vars[0]);
}
static void _V10_Dfinish__constants_D304_V0k385(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.967 6 0) (bruijn ##.expr.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
}
static void _V10_Dfinish__constants_D304_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.35 15 7) (bruijn ##.k.969 3 0) (##string ##.string.1424) (##inline ##vcore.cons 'define-constant (bruijn ##.x.972 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1424.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0define__constant,
        _var0));
}
static void _V10_Dfinish__constants_D304_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.970 0 0) ((bruijn ##.k.969 2 0) #void) ((bruijn ##.syntax-object->datum.156 13 41) (close _V10_Dfinish__constants_D304_V0k388) (bruijn ##.e.310 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 41)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k388, self)))),
      statics->up->vars[1]);
}
}
static void _V10_Dfinish__constants_D304_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.constant-expr?.133 12 18) (close _V10_Dfinish__constants_D304_V0k387) (bruijn ##.x.973 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k387, self)))),
      _var0);
}
static void _V10_Dfinish__constants_D304_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.78 12 50) (close _V10_Dfinish__constants_D304_V0k386) (bruijn ##.e.310 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k386, self)))),
      _var1);
}
static void _V10_Dfinish__constants_D304_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.58 11 30) (close _V10_Dfinish__constants_D304_V0k385) (close _V10_Dfinish__constants_D304_V0lambda49) (bruijn ##.constants.307 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 30)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k385, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0lambda49, self)))),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dfinish__constants_D304_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 9 2) (close _V10_Dfinish__constants_D304_V0k384) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.978 4 0) (##inline ##vcore.cons (bruijn ##.x.980 2 0) (##inline ##vcore.cons (bruijn ##.body.308 5 2) '()))) (bruijn ##.x.976 0 0)) (bruijn ##.env.301 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k384, self)))),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 2),
        VNULL))),
        _var0),
      VGetArg(statics, 8-1, 2));
}
static void _V10_Dfinish__constants_D304_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 9 1) (close _V10_Dfinish__constants_D304_V0k383) (bruijn ##.syntax-cadr.78 9 50) (bruijn ##.x.977 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k383, self)))),
      VGetArg(statics, 9-1, 50),
      _var0);
}
static void _V10_Dfinish__constants_D304_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.53 8 25) (close _V10_Dfinish__constants_D304_V0k382) (bruijn ##.constants.307 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 25)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k382, self)))),
      statics->up->up->vars[1]);
}
static void _V10_Dfinish__constants_D304_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 7 1) (close _V10_Dfinish__constants_D304_V0k381) (bruijn ##.syntax-car.77 7 49) (bruijn ##.x.982 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k381, self)))),
      VGetArg(statics, 7-1, 49),
      _var0);
}
static void _V10_Dfinish__constants_D304_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.53 6 25) (close _V10_Dfinish__constants_D304_V0k380) (bruijn ##.constants.307 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 25)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k380, self)))),
      statics->vars[1]);
}
static void _V10_Dfinish__constants_D304_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfinish__constants_D304_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish__constants_D304_V0lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.constants.307 0 1)) ((bruijn ##.expand-impl.117 4 2) (bruijn ##.k.967 0 0) (bruijn ##.body.308 0 2) (bruijn ##.env.301 3 2)) ((bruijn ##.introduce.303 1 1) (close _V10_Dfinish__constants_D304_V0k379) 'lambda))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      _var0,
      _var2,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0k379, self)))),
      _V0lambda);
}
}
static void _V10_Dfinish_D305_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish_D305_V0k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish_D305_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.986 2 0) (##inline ##vcore.cons (bruijn ##.x.987 1 0) (##inline ##vcore.cons (bruijn ##.x.989 0 0) (##inline ##vcore.cons (bruijn ##.body.314 3 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL))));
}
static void _V10_Dfinish_D305_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish_D305_V0k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish_D305_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.53 9 25) (close _V10_Dfinish_D305_V0k393) (bruijn ##.defines.311 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 25)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish_D305_V0k393, self)))),
      statics->up->up->up->vars[1]);
}
static void _V10_Dfinish_D305_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish_D305_V0k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish_D305_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.defines.311 3 1)) ((bruijn ##.k.986 0 0) (bruijn ##.body.314 1 0)) ((bruijn ##.introduce.303 4 1) (close _V10_Dfinish_D305_V0k392) 'letrec*))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish_D305_V0k392, self)))),
      _V0letrec_S);
}
}
static void _V10_Dfinish_D305_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish_D305_V0k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish_D305_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.finish-constants.304 4 2) (bruijn ##.k.983 3 0) (bruijn ##.constants.312 3 2) (bruijn ##.x.984 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[2],
      _var0);
}
static void _V10_Dfinish_D305_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish_D305_V0k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish_D305_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dfinish_D305_V0k391) (close _V10_Dfinish_D305_V0k394))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish_D305_V0k391, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish_D305_V0k394, self)))));
}
static void _V10_Dfinish_D305_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfinish_D305_V0k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish_D305_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dfinish_D305_V0k390) (##inline ##vcore.cons (bruijn ##.x.991 0 0) (bruijn ##.body.313 1 3)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish_D305_V0k390, self)), 1,
      VInlineCons2(runtime,
        _var0,
        statics->vars[3]));
}
static void _V10_Dfinish_D305_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dfinish_D305_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfinish_D305_V0lambda50, got ~D~N"
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
  // ((bruijn ##.introduce.303 1 1) (close _V10_Dfinish_D305_V0k389) 'begin)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish_D305_V0k389, self)))),
      _V0begin);
}
static void _V10_Dloop_D315_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.identifier?.33 11 5) (bruijn ##.k.1091 3 0) (bruijn ##.x.1093 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 5)), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D315_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1092 0 0) ((bruijn ##.syntax-caar.85 10 57) (close _V10_Dloop_D315_V0k399) (bruijn ##.body.318 4 3)) ((bruijn ##.k.1091 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 57)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k399, self)))),
      statics->up->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D315_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.37 9 9) (close _V10_Dloop_D315_V0k398) (bruijn ##.x.1094 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k398, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1090 1 0) ((bruijn ##.syntax-car.77 8 49) (close _V10_Dloop_D315_V0k397) (bruijn ##.body.318 2 3)) ((bruijn ##.k.1091 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k397, self)))),
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D315_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.315 8 0) (bruijn ##.k.992 7 0) (bruijn ##.defines.316 7 1) (bruijn ##.constants.317 7 2) (bruijn ##.x.995 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 4,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2),
      _var0);
}
static void _V10_Dloop_D315_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-append.148 11 33) (close _V10_Dloop_D315_V0k405) (bruijn ##.x.996 1 0) (bruijn ##.x.997 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 33)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k405, self)))),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D315_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 11 55) (close _V10_Dloop_D315_V0k404) (bruijn ##.body.318 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k404, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V10_Dloop_D315_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.315 15 0) (bruijn ##.k.992 14 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1003 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1006 4 0) (##inline ##vcore.cons (bruijn ##.x.1008 2 0) (bruijn ##.x.1009 1 0))) '())) (bruijn ##.defines.316 14 1)) (bruijn ##.constants.317 14 2) (bruijn ##.x.1001 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      VGetArg(statics, 14-1, 0),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        statics->vars[0])),
        VNULL)),
        VGetArg(statics, 14-1, 1)),
      VGetArg(statics, 14-1, 2),
      _var0);
}
static void _V10_Dloop_D315_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 19 55) (close _V10_Dloop_D315_V0k415) (bruijn ##.body.318 13 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k415, self)))),
      VGetArg(statics, 13-1, 3));
}
static void _V10_Dloop_D315_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 18 51) (close _V10_Dloop_D315_V0k414) (bruijn ##.def.321 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k414, self)))),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dloop_D315_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 17 55) (close _V10_Dloop_D315_V0k413) (bruijn ##.x.1010 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k413, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 16 50) (close _V10_Dloop_D315_V0k412) (bruijn ##.def.321 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k412, self)))),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dloop_D315_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.303 11 1) (close _V10_Dloop_D315_V0k411) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k411, self)))),
      _V0lambda);
}
static void _V10_Dloop_D315_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 14 49) (close _V10_Dloop_D315_V0k410) (bruijn ##.x.1011 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k410, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.315 10 0) (bruijn ##.k.992 9 0) (##inline ##vcore.cons (bruijn ##.x.1014 1 0) (bruijn ##.defines.316 9 1)) (bruijn ##.constants.317 9 2) (bruijn ##.x.1013 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      VGetArg(statics, 9-1, 0),
      VInlineCons2(runtime,
        statics->vars[0],
        VGetArg(statics, 9-1, 1)),
      VGetArg(statics, 9-1, 2),
      _var0);
}
static void _V10_Dloop_D315_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 14 55) (close _V10_Dloop_D315_V0k417) (bruijn ##.body.318 8 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k417, self)))),
      VGetArg(statics, 8-1, 3));
}
static void _V10_Dloop_D315_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.999 0 0) ((bruijn ##.syntax-cadr.78 13 50) (close _V10_Dloop_D315_V0k409) (bruijn ##.def.321 2 0)) ((bruijn ##.syntax-cdr.83 13 55) (close _V10_Dloop_D315_V0k416) (bruijn ##.def.321 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k409, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k416, self)))),
      statics->up->vars[0]);
}
}
static void _V10_Dloop_D315_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.37 12 9) (close _V10_Dloop_D315_V0k408) (bruijn ##.x.1015 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k408, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 11 50) (close _V10_Dloop_D315_V0k407) (bruijn ##.def.321 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k407, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.315 15 0) (bruijn ##.k.992 14 0) (bruijn ##.defines.316 14 1) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1021 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1024 4 0) (##inline ##vcore.cons (bruijn ##.x.1026 2 0) (bruijn ##.x.1027 1 0))) '())) (bruijn ##.constants.317 14 2)) (bruijn ##.x.1019 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      VGetArg(statics, 14-1, 0),
      VGetArg(statics, 14-1, 1),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        statics->vars[0])),
        VNULL)),
        VGetArg(statics, 14-1, 2)),
      _var0);
}
static void _V10_Dloop_D315_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 19 55) (close _V10_Dloop_D315_V0k427) (bruijn ##.body.318 13 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k427, self)))),
      VGetArg(statics, 13-1, 3));
}
static void _V10_Dloop_D315_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 18 51) (close _V10_Dloop_D315_V0k426) (bruijn ##.def.322 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k426, self)))),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dloop_D315_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 17 55) (close _V10_Dloop_D315_V0k425) (bruijn ##.x.1028 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k425, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 16 50) (close _V10_Dloop_D315_V0k424) (bruijn ##.def.322 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k424, self)))),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dloop_D315_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.303 11 1) (close _V10_Dloop_D315_V0k423) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k423, self)))),
      _V0lambda);
}
static void _V10_Dloop_D315_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 14 49) (close _V10_Dloop_D315_V0k422) (bruijn ##.x.1029 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k422, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.315 10 0) (bruijn ##.k.992 9 0) (bruijn ##.defines.316 9 1) (##inline ##vcore.cons (bruijn ##.x.1032 1 0) (bruijn ##.constants.317 9 2)) (bruijn ##.x.1031 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 9-1, 1),
      VInlineCons2(runtime,
        statics->vars[0],
        VGetArg(statics, 9-1, 2)),
      _var0);
}
static void _V10_Dloop_D315_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 14 55) (close _V10_Dloop_D315_V0k429) (bruijn ##.body.318 8 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k429, self)))),
      VGetArg(statics, 8-1, 3));
}
static void _V10_Dloop_D315_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1017 0 0) ((bruijn ##.syntax-cadr.78 13 50) (close _V10_Dloop_D315_V0k421) (bruijn ##.def.322 2 0)) ((bruijn ##.syntax-cdr.83 13 55) (close _V10_Dloop_D315_V0k428) (bruijn ##.def.322 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k421, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k428, self)))),
      statics->up->vars[0]);
}
}
static void _V10_Dloop_D315_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.37 12 9) (close _V10_Dloop_D315_V0k420) (bruijn ##.x.1033 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k420, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 11 50) (close _V10_Dloop_D315_V0k419) (bruijn ##.def.322 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k419, self)))),
      _var0);
}
static void _V10_Dloop_D329_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D329_V0k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D329_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1060 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mangles.331 3 2)) (bruijn ##.x.1063 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var0));
}
static void _V10_Dloop_D329_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D329_V0k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D329_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.329 3 0) (close _V10_Dloop_D329_V0k447) (bruijn ##.x.1064 0 0) (##inline ##vcore.cdr (bruijn ##.mangles.331 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D329_V0k447, self)))),
      _var0,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D329_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D329_V0k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D329_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1066 0 0) ((bruijn ##.k.1060 2 0) '()) ((bruijn ##.k.1060 2 0) (##inline ##vcore.car (bruijn ##.mangles.331 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D329_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D329_V0k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D329_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1061 0 0) ((bruijn ##.syntax-cdr.83 25 55) (close _V10_Dloop_D329_V0k446) (bruijn ##.formals.330 1 1)) ((bruijn ##.syntax-null?.87 25 59) (close _V10_Dloop_D329_V0k448) (bruijn ##.formals.330 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D329_V0k446, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 59)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D329_V0k448, self)))),
      statics->vars[1]);
}
}
static void _V10_Dloop_D329_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D329_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D329_V0lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.37 24 9) (close _V10_Dloop_D329_V0k445) (bruijn ##.formals.330 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D329_V0k445, self)))),
      _var1);
}
static void _V10_Dloop_D315_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.315 24 0) (bruijn ##.k.992 23 0) (bruijn ##.x.1036 1 0) (bruijn ##.constants.317 23 2) (bruijn ##.x.1037 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      VGetArg(statics, 23-1, 0),
      statics->vars[0],
      VGetArg(statics, 23-1, 2),
      _var0);
}
static void _V10_Dloop_D315_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 28 55) (close _V10_Dloop_D315_V0k454) (bruijn ##.body.318 22 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k454, self)))),
      VGetArg(statics, 22-1, 3));
}
static void _V10_Dloop_D315_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 27 8) (close _V10_Dloop_D315_V0k453) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1043 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1046 7 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1067 6 0) (##inline ##vcore.cons '() (##inline ##vcore.cons (bruijn ##.def-body.327 15 4) '()))) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1051 5 0) (##inline ##vcore.cons (bruijn ##.x.1053 3 0) (##inline ##vcore.cons '#void (bruijn ##.x.1055 2 0)))) '()))) '())) '()) (bruijn ##.x.1039 0 0) (bruijn ##.defines.316 21 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k453, self)))),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VGetArg(statics, 15-1, 4),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VVOID,
        statics->up->vars[0]))),
        VNULL))),
        VNULL)),
        VNULL),
      _var0,
      VGetArg(statics, 21-1, 1));
}
static void _V10_Dloop_D315_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.53 26 25) (close _V10_Dloop_D315_V0k452) (bruijn ##.x.1040 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 25)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k452, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list.30 26 2) (bruijn ##.k.1041 0 0) (bruijn ##.name.334 0 1) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
static void _V10_Dloop_D315_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 25 1) (close _V10_Dloop_D315_V0k451) (close _V10_Dloop_D315_V0lambda53) (bruijn ##.names.325 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k451, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0lambda53, self)))),
      VGetArg(statics, 13-1, 2));
}
static void _V10_Dloop_D315_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1056 1 0) (##inline ##vcore.cons (bruijn ##.x.1057 0 0) (##inline ##vcore.cons (bruijn ##.name.332 1 1) (##inline ##vcore.cons (bruijn ##.mangle.333 1 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        statics->vars[2],
        VNULL))));
}
static void _V10_Dloop_D315_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0lambda54, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.introduce.303 21 1) (close _V10_Dloop_D315_V0k455) 'set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k455, self)))),
      _V0set_B);
}
static void _V10_Dloop_D315_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 24 1) (close _V10_Dloop_D315_V0k450) (close _V10_Dloop_D315_V0lambda54) (bruijn ##.names.325 12 2) (bruijn ##.mangles.326 12 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k450, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0lambda54, self)))),
      VGetArg(statics, 12-1, 2),
      VGetArg(statics, 12-1, 3));
}
static void _V10_Dloop_D315_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D329_V0lambda52)) ((bruijn ##.loop.329 0 0) (close _V10_Dloop_D315_V0k449) (bruijn ##.formals.324 11 1) (bruijn ##.mangles.326 11 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D329_V0lambda52, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k449, self)))),
      VGetArg(statics, 11-1, 1),
      VGetArg(statics, 11-1, 3));
    }
}
static void _V10_Dloop_D315_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.303 17 1) (close _V10_Dloop_D315_V0k444) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k444, self)))),
      _V0lambda);
}
static void _V10_Dloop_D315_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.303 16 1) (close _V10_Dloop_D315_V0k443) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k443, self)))),
      _V0lambda);
}
static void _V10_Dloop_D315_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.303 15 1) (close _V10_Dloop_D315_V0k442) '##vcore.call-with-values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k442, self)))),
      _V10vcore_Dcall__with__values);
}
static void _V10_Dloop_D315_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.introduce.303 14 1) (close _V10_Dloop_D315_V0k441) (bruijn ##.x.1070 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k441, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k439(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.generate-symbol.89 17 61) (close _V10_Dloop_D315_V0k440) 'dummy)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 61)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k440, self)))),
      _V0dummy);
}
static void _V10_Dloop_D315_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D315_V0k439) (bruijn ##.def-body.327 5 4) (bruijn ##.x.1071 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k439, self)))),
      VEncodeInt(5l), VEncodeInt(4l),
      _var0
    );
}
static void _V10_Dloop_D315_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 16 49) (close _V10_Dloop_D315_V0k438) (bruijn ##.x.1072 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k438, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k436(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-cddr.79 15 51) (close _V10_Dloop_D315_V0k437) (bruijn ##.def.323 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k437, self)))),
      statics->up->up->vars[0]);
}
static void _V10_Dloop_D315_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D315_V0k436) (bruijn ##.mangles.326 3 3) (bruijn ##.x.1073 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k436, self)))),
      VEncodeInt(3l), VEncodeInt(3l),
      _var0
    );
}
static void _V10_Dloop_D315_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.introduce.303 12 1) (bruijn ##.k.1074 1 0) (bruijn ##.x.1075 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D315_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.generate-symbol.89 15 61) (close _V10_Dloop_D315_V0k456) 'tmp)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 61)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k456, self)))),
      _V0tmp);
}
static void _V10_Dloop_D315_V0k434(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.29 14 1) (close _V10_Dloop_D315_V0k435) (close _V10_Dloop_D315_V0lambda55) (bruijn ##.names.325 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k435, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0lambda55, self)))),
      statics->up->vars[2]);
}
static void _V10_Dloop_D315_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D315_V0k434) (bruijn ##.names.325 2 2) (bruijn ##.x.1076 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k434, self)))),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dloop_D315_V0k432(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-undot-list.134 12 19) (close _V10_Dloop_D315_V0k433) (bruijn ##.formals.324 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k433, self)))),
      statics->vars[1]);
}
static void _V10_Dloop_D315_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dloop_D315_V0k432) (bruijn ##.formals.324 1 1) (bruijn ##.x.1077 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k432, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
static void _V10_Dloop_D315_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 5 ((bruijn ##.x.1035 1 0) #f #f #f #f) ((bruijn ##.syntax-cadr.78 12 50) (close _V10_Dloop_D315_V0k431) (bruijn ##.def.323 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k431, self)))),
      self->vars[0]);
    }
}
static void _V10_Dloop_D315_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.v.335 1 0) (basic-block 1 1 (##.reg.1410) ((##vcore.procedure? (##inline ##vcore.cdr (bruijn ##.v.335 2 0)))) ((bruijn ##.k.1087 1 0) (bruijn ##.reg.1410 0 0))) ((bruijn ##.k.1087 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VProcedureP2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D315_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.315 13 0) (bruijn ##.k.992 12 0) (bruijn ##.defines.316 12 1) (bruijn ##.constants.317 12 2) (##inline ##vcore.cons (bruijn ##.x.1081 1 0) (bruijn ##.x.1082 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 4,
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 12-1, 1),
      VGetArg(statics, 12-1, 2),
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D315_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 17 55) (close _V10_Dloop_D315_V0k464) (bruijn ##.body.318 11 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k464, self)))),
      VGetArg(statics, 11-1, 3));
}
static void _V10_Dloop_D315_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.apply-transformer.119 15 4) (close _V10_Dloop_D315_V0k463) (bruijn ##.x.1083 1 0) (##inline ##vcore.cdr (bruijn ##.v.335 4 0)) (bruijn ##.x.1085 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k463, self)))),
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]),
      _var0);
}
static void _V10_Dloop_D315_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 15 49) (close _V10_Dloop_D315_V0k462) (bruijn ##.body.318 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k462, self)))),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dloop_D315_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 14 13) (close _V10_Dloop_D315_V0k461) (bruijn ##.x.1086 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k461, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1079 0 0) ((bruijn ##.syntax-caar.85 13 57) (close _V10_Dloop_D315_V0k460) (bruijn ##.body.318 7 3)) ((bruijn ##.finish.305 9 3) (bruijn ##.k.992 7 0) (bruijn ##.defines.316 7 1) (bruijn ##.constants.317 7 2) (bruijn ##.body.318 7 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 57)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k460, self)))),
      VGetArg(statics, 7-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 4,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2),
      VGetArg(statics, 7-1, 3));
}
}
static void _V10_Dloop_D315_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.1078 1 0)) ((close _V10_Dloop_D315_V0k458) (close _V10_Dloop_D315_V0k459)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k458, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k459, self)))));
    }
}
static void _V10_Dloop_D315_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.binding.319 0 0) 'begin) ((bruijn ##.syntax-cdar.84 10 56) (close _V10_Dloop_D315_V0k403) (bruijn ##.body.318 4 3)) (if (##inline ##vcore.eq? (bruijn ##.binding.319 0 0) 'define) ((bruijn ##.syntax-car.77 10 49) (close _V10_Dloop_D315_V0k406) (bruijn ##.body.318 4 3)) (if (##inline ##vcore.eq? (bruijn ##.binding.319 0 0) 'define-constant) ((bruijn ##.syntax-car.77 10 49) (close _V10_Dloop_D315_V0k418) (bruijn ##.body.318 4 3)) (if (##inline ##vcore.eq? (bruijn ##.binding.319 0 0) 'define-values) ((bruijn ##.syntax-car.77 10 49) (close _V10_Dloop_D315_V0k430) (bruijn ##.body.318 4 3)) ((bruijn ##.assoc.42 10 14) (close _V10_Dloop_D315_V0k457) (bruijn ##.binding.319 0 0) (bruijn ##.env.301 8 2))))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0begin))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 56)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k403, self)))),
      statics->up->up->up->vars[3]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0define))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k406, self)))),
      statics->up->up->up->vars[3]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0define__constant))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k418, self)))),
      statics->up->up->up->vars[3]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0define__values))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k430, self)))),
      statics->up->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k457, self)))),
      _var0,
      VGetArg(statics, 8-1, 2));
}
}
}
}
}
static void _V10_Dloop_D315_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 8 37) (close _V10_Dloop_D315_V0k402) (bruijn ##.x.1089 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k402, self)))),
      _var0);
}
static void _V10_Dloop_D315_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.993 0 0) ((bruijn ##.syntax-caar.85 8 57) (close _V10_Dloop_D315_V0k401) (bruijn ##.body.318 2 3)) ((bruijn ##.finish.305 4 3) (bruijn ##.k.992 2 0) (bruijn ##.defines.316 2 1) (bruijn ##.constants.317 2 2) (bruijn ##.body.318 2 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 57)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k401, self)))),
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 4,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3]);
}
}
static void _V10_Dloop_D315_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D315_V0k396) (close _V10_Dloop_D315_V0k400))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k396, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k400, self)))));
}
static void _V10_Dloop_D315_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D315_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D315_V0lambda51, got ~D~N"
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
  // ((bruijn ##.syntax-pair?.37 6 9) (close _V10_Dloop_D315_V0k395) (bruijn ##.body.318 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0k395, self)))),
      _var3);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 4 ((bruijn ##.x.965 1 0) (close _V10_Dintroduce_D303_V0lambda47) (close _V10_Dfinish__constants_D304_V0lambda48) (close _V10_Dfinish_D305_V0lambda50)) (letrec 1 ((close _V10_Dloop_D315_V0lambda51)) ((bruijn ##.loop.315 0 0) (bruijn ##.k.964 3 0) '() '() (bruijn ##.stx.300 3 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dintroduce_D303_V0lambda47, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish__constants_D304_V0lambda48, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dfinish_D305_V0lambda50, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D315_V0lambda51, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->up->up->vars[0],
      VNULL,
      VNULL,
      statics->up->up->vars[1]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.make-scope.39 2 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k378))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[11]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k378, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lookup-intrinsic-name.63 5 35) (bruijn ##.k.1112 1 0) (bruijn ##.x.1113 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 35)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1111 1 0) ((bruijn ##.get-syntax-data.41 4 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467) (bruijn ##.expr.336 2 1)) ((bruijn ##.k.1112 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1108 1 0) (##inline ##vcore.not (bruijn ##.x.1109 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1110 1 0)) ((bruijn ##.identifier?.33 6 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k471) (bruijn ##.expr.336 4 1)) ((bruijn ##.k.1108 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k471, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1095 13 0) (##inline ##vcore.eq? (bruijn ##.x.1101 0 0) '##foreign.function))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineEq2(runtime,
        _var0,
        _V10foreign_Dfunction));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 14 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k481) (bruijn ##.x.1102 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k481, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1100 0 0) ((bruijn ##.k.1095 11 0) (bruijn ##.p.1100 0 0)) ((bruijn ##.syntax-car.77 13 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k480) (bruijn ##.expr.336 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k480, self)))),
      VGetArg(statics, 11-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k479) (##inline ##vcore.eq? (bruijn ##.x.1103 0 0) '##basic-intrinsic))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k479, self)), 1,
      VInlineEq2(runtime,
        _var0,
        _V10basic__intrinsic));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 11 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k478) (bruijn ##.x.1104 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k478, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1099 0 0) ((bruijn ##.k.1095 8 0) (bruijn ##.p.1099 0 0)) ((bruijn ##.syntax-car.77 10 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k477) (bruijn ##.expr.336 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k477, self)))),
      VGetArg(statics, 8-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k476) (##inline ##vcore.eq? (bruijn ##.x.1105 0 0) '##intrinsic))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k476, self)), 1,
      VInlineEq2(runtime,
        _var0,
        _V10intrinsic));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 8 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k475) (bruijn ##.x.1106 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k475, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1098 0 0) ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k474) (bruijn ##.expr.336 5 1)) ((bruijn ##.k.1095 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k474, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1097 0 0) ((bruijn ##.k.1095 4 0) (bruijn ##.p.1097 0 0)) ((bruijn ##.syntax-pair?.37 6 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k473) (bruijn ##.expr.336 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k473, self)))),
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k470) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k472))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k470, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k472, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1096 0 0) ((bruijn ##.k.1095 2 0) (bruijn ##.p.1096 0 0)) ((bruijn ##.syntax-pair?.37 4 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k469) (bruijn ##.expr.336 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k469, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k468))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k468, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.identifier?.33 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465) (bruijn ##.expr.336 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1114 5 0) (##inline ##vcore.cons (bruijn ##.x.1117 2 0) (bruijn ##.x.1118 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-undot-list.134 5 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k486) (bruijn ##.x.1119 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k486, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 5 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k485) (bruijn ##.xs.337 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k485, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1116 0 0) ((bruijn ##.syntax-car.77 4 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k484) (bruijn ##.xs.337 2 1)) ((bruijn ##.k.1114 2 0) (##inline ##vcore.cons (bruijn ##.xs.337 2 1) '())))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k484, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[1],
        VNULL));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1115 0 0) ((bruijn ##.k.1114 1 0) '()) ((bruijn ##.syntax-pair?.37 3 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k483) (bruijn ##.xs.337 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k483, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.87 2 59) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k482) (bruijn ##.xs.337 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k482, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-impl.117 16 2) (bruijn ##.k.1120 15 0) (bruijn ##.x.1126 0 0) (bruijn ##.body-env.352 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      VGetArg(statics, 15-1, 0),
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.43 16 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k503) (bruijn ##.body.343 5 3) (bruijn ##.sc.344 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k503, self)))),
      VGetArg(statics, 5-1, 3),
      VGetArg(statics, 5-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k502) (bruijn ##.x.1127 0 0) (bruijn ##.env.339 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k502, self)))),
      _var0,
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.1128 0 0) (##inline ##vcore.cons (bruijn ##.binding.353 0 1) (bruijn ##.val.354 0 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        _var2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.29 14 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k501) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda56) (bruijn ##.bindings.346 3 6) (bruijn ##.rhs-vals.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k501, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda56, self)))),
      statics->up->up->vars[6],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k499(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-map.80 13 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k500) (bruijn ##.eval-for-syntax-binding.136 12 21) (bruijn ##.rhss.342 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 52)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k500, self)))),
      VGetArg(statics, 12-1, 21),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda57, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.add-binding!.158 13 43) (bruijn ##.k.1129 0 0) (bruijn ##.id.349 0 1) (bruijn ##.binding.350 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 43)), 3,
      _var0,
      _var1,
      _var2);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k498(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.58 13 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k499) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda57) (bruijn ##.ids.345 2 5) (bruijn ##.bindings.346 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 30)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k499, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda57, self)))),
      statics->up->vars[5],
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k498) (bruijn ##.bindings.346 2 6) (bruijn ##.x.1130 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k498, self)))),
      VEncodeInt(2l), VEncodeInt(6l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.89 14 61) (bruijn ##.k.1131 1 0) (bruijn ##.x.1132 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 61)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.41 13 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k504) (bruijn ##.id.348 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k504, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k496(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-map.80 12 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k497) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda58) (bruijn ##.ids.345 1 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 52)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k497, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda58, self)))),
      statics->vars[5]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k496) (bruijn ##.ids.345 1 5) (bruijn ##.x.1133 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k496, self)))),
      VEncodeInt(1l), VEncodeInt(5l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.flip-scope.43 12 15) (bruijn ##.k.1134 0 0) (bruijn ##.lhs-id.347 0 1) (bruijn ##.sc.344 1 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 15)), 3,
      _var0,
      _var1,
      statics->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((bruijn ##.x.1121 8 0) (bruijn ##.x.1122 6 0) (bruijn ##.x.1123 4 0) (bruijn ##.x.1124 2 0) (bruijn ##.x.1125 1 0) #f #f) ((bruijn ##.syntax-map.80 11 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k495) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda59) (bruijn ##.lhs-ids.341 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = VGetArg(statics, 8-1, 0);
    self->vars[1] = VGetArg(statics, 6-1, 0);
    self->vars[2] = statics->up->up->up->vars[0];
    self->vars[3] = statics->up->vars[0];
    self->vars[4] = statics->vars[0];
    self->vars[5] = VEncodeBool(false);
    self->vars[6] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 52)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k495, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda59, self)))),
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.39 9 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k494))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 11)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k494, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 8 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k493) (bruijn ##.x.1135 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k493, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 7 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k492) (bruijn ##.stx.338 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k492, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.80 6 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k491) (bruijn ##.syntax-cadr.78 6 50) (bruijn ##.x.1136 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 52)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k491, self)))),
      VGetArg(statics, 6-1, 50),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 5 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490) (bruijn ##.stx.338 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.80 4 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489) (bruijn ##.syntax-car.77 4 49) (bruijn ##.x.1137 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[52]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489, self)))),
      statics->up->up->up->vars[49],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 3 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488) (bruijn ##.stx.338 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-car.77 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487) (bruijn ##.stx.338 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.1139 1 0)) ((bruijn ##.eval.64 6 36) (bruijn ##.k.1138 4 0) (bruijn ##.expanded.356 0 0) (bruijn ##.macro-expand-env.146 5 31)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 36)), 3,
      statics->up->up->up->vars[0],
      self->vars[0],
      VGetArg(statics, 5-1, 31));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve.138 3 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k507) (bruijn ##.x.1140 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k507, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-impl.117 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k506) (bruijn ##.rhs.355 1 1) (bruijn ##.x.1141 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k506, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.toplevel-expand-env.141 1 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k505))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[26]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k505, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.32 4 4) (bruijn ##.k.1142 2 0) (bruijn ##.x.357 2 1) (bruijn ##.x.1143 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k509) (bruijn ##.x.1144 0 0) (bruijn ##.sc.358 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k509, self)))),
      _var0,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.global-scope.31 2 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k508))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k508, self)))));
}
static void _V10_Dresolve__formals_D360_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__formals_D360_V0k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__formals_D360_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1146 6 0) (##inline ##vcore.cons (bruijn ##.x.1149 2 0) (bruijn ##.x.1150 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dresolve__formals_D360_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__formals_D360_V0k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__formals_D360_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-formals.360 6 0) (close _V10_Dresolve__formals_D360_V0k515) (bruijn ##.x.1151 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dresolve__formals_D360_V0k515, self)))),
      _var0);
}
static void _V10_Dresolve__formals_D360_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__formals_D360_V0k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__formals_D360_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 8 55) (close _V10_Dresolve__formals_D360_V0k514) (bruijn ##.formals.361 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dresolve__formals_D360_V0k514, self)))),
      statics->up->up->up->vars[1]);
}
static void _V10_Dresolve__formals_D360_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__formals_D360_V0k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__formals_D360_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 6 37) (close _V10_Dresolve__formals_D360_V0k513) (bruijn ##.x.1152 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dresolve__formals_D360_V0k513, self)))),
      _var0);
}
static void _V10_Dresolve__formals_D360_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__formals_D360_V0k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__formals_D360_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1148 0 0) ((bruijn ##.syntax-car.77 6 49) (close _V10_Dresolve__formals_D360_V0k512) (bruijn ##.formals.361 2 1)) ((bruijn ##.resolve-identifier.152 5 37) (bruijn ##.k.1146 2 0) (bruijn ##.formals.361 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dresolve__formals_D360_V0k512, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 37)), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
}
}
static void _V10_Dresolve__formals_D360_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__formals_D360_V0k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__formals_D360_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1147 0 0) ((bruijn ##.k.1146 1 0) '()) ((bruijn ##.syntax-pair?.37 5 9) (close _V10_Dresolve__formals_D360_V0k511) (bruijn ##.formals.361 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dresolve__formals_D360_V0k511, self)))),
      statics->vars[1]);
}
}
static void _V10_Dresolve__formals_D360_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dresolve__formals_D360_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__formals_D360_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.87 4 59) (close _V10_Dresolve__formals_D360_V0k510) (bruijn ##.formals.361 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dresolve__formals_D360_V0k510, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1155 0 0) ((bruijn ##.get-syntax-data.41 6 13) (bruijn ##.k.1145 4 0) (bruijn ##.stx.359 4 1)) ((bruijn ##.k.1145 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1154 0 0) ((bruijn ##.k.1145 3 0) (bruijn ##.p.1154 0 0)) ((bruijn ##.free-vars-allowed.159 4 44) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[44]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518, self)))));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1159 0 0) ((bruijn ##.get-syntax-data.41 8 13) (bruijn ##.k.1145 6 0) (bruijn ##.stx.359 6 1)) ((bruijn ##.k.1145 6 0) (bruijn ##.stx.359 6 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 13)), 2,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 6-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.resolve-identifier.152 10 37) (bruijn ##.k.1192 1 0) (bruijn ##.x.1193 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 37)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1191 1 0) ((bruijn ##.syntax-car.77 10 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525) (bruijn ##.stx.359 8 1)) ((bruijn ##.k.1192 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1145 13 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.1162 3 0) (##inline ##vcore.cons (bruijn ##.x.1164 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve.138 13 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531) (bruijn ##.x.1165 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 13 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530) (bruijn ##.x.1166 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 12 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529) (bruijn ##.stx.359 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-formals.360 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528) (bruijn ##.x.1167 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1145 13 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1170 3 0) (##inline ##vcore.cons (bruijn ##.x.1172 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve.138 13 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k536) (bruijn ##.x.1173 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k536, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k534" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.77 13 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k535) (bruijn ##.x.1174 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k535, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.79 12 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k534) (bruijn ##.stx.359 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 51)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k534, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.30 16 2) (bruijn ##.k.1175 4 0) (bruijn ##.x.1176 2 0) (bruijn ##.x.1177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve.138 14 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k540) (bruijn ##.x.1178 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k540, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k538" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.78 14 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k539) (bruijn ##.pair.363 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k539, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 12 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k538) (bruijn ##.x.1179 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k538, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.77 12 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k537) (bruijn ##.pair.363 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k537, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.80 11 52) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k533) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda61) (bruijn ##.x.1180 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 52)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k533, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda61, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k542" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1145 10 0) (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.1183 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k541" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-object->datum.156 10 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k542) (bruijn ##.x.1184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 41)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k542, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k543" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1145 9 0) (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.1187 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k545" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1145 10 0) (##inline ##vcore.cons 'if (bruijn ##.x.1189 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k544" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve.138 10 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k545) (bruijn ##.x.1190 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k545, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1.362 0 0) 'lambda) ((bruijn ##.syntax-cadr.78 10 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527) (bruijn ##.stx.359 8 1)) (if (##inline ##vcore.eq? (bruijn ##.x.1.362 0 0) 'letrec) ((bruijn ##.syntax-cadr.78 10 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k532) (bruijn ##.stx.359 8 1)) (if (##inline ##vcore.eq? (bruijn ##.x.1.362 0 0) 'quote) ((bruijn ##.syntax-cadr.78 10 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k541) (bruijn ##.stx.359 8 1)) (if (##inline ##vcore.eq? (bruijn ##.x.1.362 0 0) 'syntax) ((bruijn ##.syntax-cadr.78 10 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k543) (bruijn ##.stx.359 8 1)) (if (##inline ##vcore.eq? (bruijn ##.x.1.362 0 0) 'if) ((bruijn ##.syntax-cdr.83 10 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k544) (bruijn ##.stx.359 8 1)) ((bruijn ##.syntax-map.80 10 52) (bruijn ##.k.1145 8 0) (bruijn ##.resolve.138 9 23) (bruijn ##.stx.359 8 1)))))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0letrec))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k532, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0quote))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k541, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0syntax))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k543, self)))),
      VGetArg(statics, 8-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0if))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k544, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 52)), 3,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 9-1, 23),
      VGetArg(statics, 8-1, 1));
}
}
}
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.33 8 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523) (bruijn ##.x.1194 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1195 0 0)) ((bruijn ##.syntax?.65 7 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521) (bruijn ##.stx.359 5 1)) ((bruijn ##.syntax-car.77 7 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522) (bruijn ##.stx.359 5 1)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522, self)))),
      VGetArg(statics, 5-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1157 0 0) ((bruijn ##.syntax-object->datum.156 5 41) (bruijn ##.k.1145 4 0) (bruijn ##.stx.359 4 1)) ((bruijn ##.syntax-pair?.37 6 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520) (bruijn ##.stx.359 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 41)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520, self)))),
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1153 0 0) ((bruijn ##.resolve-identifier.152 3 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517) (bruijn ##.stx.359 2 1)) (basic-block 1 1 (##.reg.1411) ((##vcore.symbol? (bruijn ##.stx.359 3 1))) (if (bruijn ##.reg.1411 0 0) ((bruijn ##.error.81 5 53) (bruijn ##.k.1145 3 0) (##string ##.string.1438) (bruijn ##.stx.359 3 1)) ((bruijn ##.syntax-vector?.66 5 38) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519) (bruijn ##.stx.359 3 1)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[37]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517, self)))),
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 53)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1438.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 38)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519, self)))),
      statics->up->up->vars[1]);
}
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dresolve__formals_D360_V0lambda60)) ((bruijn ##.identifier?.33 3 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516) (bruijn ##.stx.359 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dresolve__formals_D360_V0lambda60, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516, self)))),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k549" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.35 7 7) (bruijn ##.k.1200 1 0) (##string ##.string.1439) (bruijn ##.x.1201 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 7)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1439.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k548" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1199 1 0) ((bruijn ##.k.1200 0 0) #void) ((bruijn ##.get-syntax-data.41 6 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k549) (bruijn ##.stx.364 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k549, self)))),
      statics->up->up->up->vars[1]);
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k550(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1196 3 0) (bruijn ##.stx.364 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k547" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k548) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k550))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k548, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k550, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k553" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.81 8 53) (bruijn ##.k.1196 6 0) (##string ##.string.1441) (bruijn ##.x.1205 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 53)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1441.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.81 8 53) (bruijn ##.k.1196 6 0) (##string ##.string.1440) (bruijn ##.x.1207 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 53)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1440.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k552" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.1203 1 0)) (if (##inline ##vcore.not (bruijn ##.v.367 0 0)) ((bruijn ##.get-syntax-data.41 7 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k553) (bruijn ##.stx.364 5 1)) (if (##inline ##vcore.eq? (##inline ##vcore.cdr (bruijn ##.v.367 0 0)) (bruijn ##.variable.140 6 25)) ((bruijn ##.k.1196 5 0) (bruijn ##.stx.364 5 1)) ((bruijn ##.get-syntax-data.41 7 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k554) (bruijn ##.stx.364 5 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k553, self)))),
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCdr2(runtime,
        self->vars[0]),
        VGetArg(statics, 6-1, 25)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k554, self)))),
      VGetArg(statics, 5-1, 1));
}
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k551" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1202 0 0) ((bruijn ##.error.81 5 53) (bruijn ##.k.1196 3 0) (##string ##.string.1440) (bruijn ##.stx.364 3 1)) ((bruijn ##.assoc.42 5 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k552) (bruijn ##.binding.366 1 0) (bruijn ##.env.365 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 53)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1440.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k552, self)))),
      statics->vars[0],
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k546" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.1197 1 0)) (if (##inline ##vcore.not (bruijn ##.binding.366 0 0)) ((bruijn ##.free-vars-allowed.159 3 44) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k547)) ((bruijn ##.member.59 4 31) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k551) (bruijn ##.binding.366 0 0) (bruijn ##.special-forms.145 3 30))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[44]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k547, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k551, self)))),
      self->vars[0],
      statics->up->up->vars[30]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.resolve-identifier.152 1 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k546) (bruijn ##.stx.364 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[37]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k546, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k555" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1209 1 0) (##inline ##vcore.cons (##inline ##vcore.cons #f #f) (bruijn ##.x.1211 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VEncodeBool(false)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.alist-copy.143 1 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k555) (bruijn ##.global-form-env.67 2 39))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k555, self)))),
      statics->up->vars[39]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1213 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.e.369 0 1)) (##inline ##vcore.cdr (bruijn ##.e.369 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var1),
        VInlineCdr2(runtime,
        _var1)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.29 2 1) (bruijn ##.k.1212 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda62) (bruijn ##.alist.368 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda62, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k559" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.add-binding!.158 6 43) (bruijn ##.k.1217 3 0) (bruijn ##.x.1218 0 0) (bruijn ##.sym.370 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 43)), 3,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k558" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-syntax.32 6 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k559) (bruijn ##.sym.370 2 1) (bruijn ##.x.1219 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k559, self)))),
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k557" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.30 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k558) (bruijn ##.x.1220 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k558, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-scope.31 4 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k557))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k557, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k556" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.58 3 30) (bruijn ##.k.1216 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda63) (bruijn ##.x.1221 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[30]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda63, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.36 2 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k556) (bruijn ##.special-forms.145 1 30) (bruijn ##.global-forms.68 2 40))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[8]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k556, self)))),
      statics->vars[30],
      statics->up->vars[40]);
}
static void _V10_Dloop_D372_V0k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_V0k561" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_V0k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.372 4 0) (bruijn ##.k.1223 3 0) (bruijn ##.reg.1412 1 0) (bruijn ##.x.1226 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D372_V0k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_V0k560" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_V0k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1224 0 0) ((bruijn ##.k.1223 1 0) (bruijn ##.acc.373 1 1)) (basic-block 1 1 (##.reg.1412) ((##vcore.+ (bruijn ##.acc.373 2 1) 1)) ((bruijn ##.syntax-cdr.83 6 55) (close _V10_Dloop_D372_V0k561) (bruijn ##.xs.374 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D372_V0k561, self)))),
      statics->up->vars[2]);
    }
}
}
static void _V10_Dloop_D372_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_V0lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-null?.87 4 59) (close _V10_Dloop_D372_V0k560) (bruijn ##.xs.374 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D372_V0k560, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D372_V0lambda64)) ((bruijn ##.loop.372 0 0) (bruijn ##.k.1222 1 0) 0 (bruijn ##.xs.371 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D372_V0lambda64, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k563" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.append (bruijn ##.k.1227 2 0) (bruijn ##.x.1228 1 0) (bruijn ##.x.1229 0 0))
    VCallFuncWithGC(runtime, (VFunc)VAppend, 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k562" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-copy-list.150 2 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k563) (bruijn ##.b.376 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[35]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k563, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-copy-list.150 1 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k562) (bruijn ##.a.375 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[35]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k562, self)))),
      _var1);
}
static void _V10_Dloop_D380_V0k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D380_V0k564" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D380_V0k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1232 1 0) (##inline ##vcore.cons (bruijn ##.x.1234 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
static void _V10_Dloop_D380_V0k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D380_V0k565" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D380_V0k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1232 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.args.381 1 1)) (bruijn ##.x.1237 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dloop_D380_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D380_V0lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D380_V0lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.args.381 0 1))) ((bruijn ##.syntax-copy-list.150 4 35) (close _V10_Dloop_D380_V0k564) (##inline ##vcore.car (bruijn ##.args.381 0 1))) ((bruijn ##.loop.380 1 0) (close _V10_Dloop_D380_V0k565) (##inline ##vcore.cdr (bruijn ##.args.381 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[35]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D380_V0k564, self)))),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D380_V0k565, self)))),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k567(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.apply (bruijn ##.k.1230 3 0) (##intrinsic ##vcore.apply) (bruijn ##.f.377 3 1) (bruijn ##.fresh-args.379 2 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->up->up->vars[0],
      _V40_V10vcore_Dapply,
      statics->up->up->vars[1],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k566" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k567) (bruijn ##.fresh-args.379 2 0) (bruijn ##.x.1231 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k567, self)))),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply, got ~D~N"
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
  // (letrec 1 (#f) (letrec 1 ((close _V10_Dloop_D380_V0lambda65)) ((bruijn ##.loop.380 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k566) (bruijn ##.args.378 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D380_V0lambda65, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k566, self)))),
      statics->up->vars[2]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k571" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-cons.86 6 58) (bruijn ##.k.1240 4 0) (bruijn ##.x.1242 2 0) (bruijn ##.x.1243 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 58)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k570" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-copy-list.150 4 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k571) (bruijn ##.x.1244 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[35]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k571, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k569" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 4 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k570) (bruijn ##.lst.382 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[55]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k570, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k568" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1241 0 0) ((bruijn ##.k.1240 1 0) '()) ((bruijn ##.syntax-car.77 3 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k569) (bruijn ##.lst.382 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k569, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.87 2 59) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k568) (bruijn ##.lst.382 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k568, self)))),
      _var1);
}
static void _V10_Dloop2_D388_V0k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D388_V0k578" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D388_V0k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset=.69 14 41) (bruijn ##.k.1256 2 0) (##intrinsic ##vcore.eq?) (bruijn ##.x.1257 0 0) (bruijn ##.all-id-scopes.385 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 41)), 4,
      statics->up->vars[0],
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 9-1, 1));
}
static void _V10_Dloop2_D388_V0k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D388_V0k577" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D388_V0k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.52 13 24) (close _V10_Dloop2_D388_V0k578) (bruijn ##.x.1258 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D388_V0k578, self)))),
      _var0);
}
static void _V10_Dloop2_D388_V0k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D388_V0k576" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D388_V0k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1259 1 0) (bruijn ##.id-sym.384 7 0)) ((bruijn ##.caar.55 12 27) (close _V10_Dloop2_D388_V0k577) (bruijn ##.bindings.389 3 1)) ((bruijn ##.k.1256 0 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VGetArg(statics, 7-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 27)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D388_V0k577, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop2_D388_V0k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D388_V0k579" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D388_V0k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1253 0 0) ((bruijn ##.cdar.70 12 42) (bruijn ##.k.1250 3 0) (bruijn ##.bindings.389 3 1)) ((bruijn ##.loop2.388 4 0) (bruijn ##.k.1250 3 0) (##inline ##vcore.cdr (bruijn ##.bindings.389 3 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 42)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
}
}
static void _V10_Dloop2_D388_V0k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D388_V0k575" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D388_V0k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop2_D388_V0k576) (close _V10_Dloop2_D388_V0k579))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D388_V0k576, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D388_V0k579, self)))));
}
static void _V10_Dloop2_D388_V0k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D388_V0k574" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D388_V0k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 10 13) (close _V10_Dloop2_D388_V0k575) (bruijn ##.x.1260 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D388_V0k575, self)))),
      _var0);
}
static void _V10_Dloop2_D388_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop2_D388_V0lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D388_V0lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.bindings.389 0 1)) ((bruijn ##.loop.386 3 0) (bruijn ##.k.1250 0 0) (##inline ##vcore.cdr (bruijn ##.rest-id-scopes.387 2 1))) ((bruijn ##.caar.55 9 27) (close _V10_Dloop2_D388_V0k574) (bruijn ##.bindings.389 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      _var0,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 27)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D388_V0k574, self)))),
      _var1);
}
}
static void _V10_Dloop_D386_V0k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D386_V0k580" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D386_V0k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop2.388 1 0) (bruijn ##.k.1248 2 0) (bruijn ##.x.1261 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D386_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D386_V0lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D386_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.rest-id-scopes.387 0 1)) ((bruijn ##.k.1248 0 0) #f) (letrec 1 ((close _V10_Dloop2_D388_V0lambda67)) ((bruijn ##.get-scope-bindings.50 8 22) (close _V10_Dloop_D386_V0k580) (##inline ##vcore.car (bruijn ##.rest-id-scopes.387 1 1)))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D388_V0lambda67, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D386_V0k580, self)))),
      VInlineCar2(runtime,
        statics->vars[1]));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k573" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.1246 2 0) (bruijn ##.x.1247 1 0)) (letrec 1 ((close _V10_Dloop_D386_V0lambda66)) ((bruijn ##.loop.386 0 0) (bruijn ##.k.1245 4 0) (bruijn ##.all-id-scopes.385 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D386_V0lambda66, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      statics->vars[1]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k572" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.52 3 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k573) (bruijn ##.id.383 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[24]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k573, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.41 2 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k572) (bruijn ##.id.383 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k572, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k583(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1263 3 0) (##inline ##vcore.cdr (bruijn ##.max-id.392 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCdr2(runtime,
        self->vars[0]));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k582" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.check-unambiguous.155 4 40) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k583) (bruijn ##.max-id.392 0 0) (bruijn ##.candidate-ids.391 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[40]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k583, self)))),
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k584" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.length.71 6 43) (bruijn ##.k.1266 1 0) (bruijn ##.x.1267 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 43)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-scopes.52 5 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k584) (##inline ##vcore.car (bruijn ##.e.393 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k584, self)))),
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k581" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.1264 1 0)) (if (##inline ##vcore.null? (bruijn ##.candidate-ids.391 0 0)) ((bruijn ##.k.1263 2 0) #f) ((bruijn ##.argmax.154 3 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k582) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda68) (bruijn ##.candidate-ids.391 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
if(VDecodeBool(
VInlineNullP2(runtime,
        self->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[39]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k582, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda68, self)))),
      self->vars[0]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.find-all-matching-bindings.153 1 38) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k581) (bruijn ##.id.390 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[38]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k581, self)))),
      _var1);
}
static void _V10_Dloop_D397_V0k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_V0k589" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_V0k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.36 10 8) (bruijn ##.k.1272 3 0) (bruijn ##.x.1274 1 0) (bruijn ##.x.1275 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D397_V0k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_V0k588" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_V0k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.397 3 0) (close _V10_Dloop_D397_V0k589) (##inline ##vcore.cdr (bruijn ##.rest-id-scopes.398 2 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D397_V0k589, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
static void _V10_Dloop_D397_V0k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_V0k591" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_V0k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset<=.73 11 45) (bruijn ##.k.1277 2 0) (##intrinsic ##vcore.eq?) (bruijn ##.x.1279 0 0) (bruijn ##.all-id-scopes.396 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 45)), 4,
      statics->up->vars[0],
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dloop_D397_V0k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_V0k590" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_V0k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1281 0 0) (bruijn ##.id-sym.395 5 0)) ((bruijn ##.get-syntax-scopes.52 10 24) (close _V10_Dloop_D397_V0k591) (##inline ##vcore.car (bruijn ##.e.399 1 1))) ((bruijn ##.k.1277 1 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VGetArg(statics, 5-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D397_V0k591, self)))),
      VInlineCar2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D397_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_V0lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.41 9 13) (close _V10_Dloop_D397_V0k590) (##inline ##vcore.car (bruijn ##.e.399 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D397_V0k590, self)))),
      VInlineCar2(runtime,
        _var1));
}
static void _V10_Dloop_D397_V0k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_V0k587" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_V0k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.72 8 44) (close _V10_Dloop_D397_V0k588) (close _V10_Dloop_D397_V0lambda70) (bruijn ##.x.1283 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 44)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D397_V0k588, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D397_V0lambda70, self)))),
      _var0);
}
static void _V10_Dloop_D397_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_V0lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_V0lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.rest-id-scopes.398 0 1)) ((bruijn ##.k.1272 0 0) '()) ((bruijn ##.get-scope-bindings.50 7 22) (close _V10_Dloop_D397_V0k587) (##inline ##vcore.car (bruijn ##.rest-id-scopes.398 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D397_V0k587, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k586" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.1270 2 0) (bruijn ##.x.1271 1 0)) (letrec 1 ((close _V10_Dloop_D397_V0lambda69)) ((bruijn ##.loop.397 0 0) (bruijn ##.k.1269 4 0) (bruijn ##.all-id-scopes.396 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D397_V0lambda69, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      statics->vars[1]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k585" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.52 3 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k586) (bruijn ##.id.394 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[24]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k586, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.41 2 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k585) (bruijn ##.id.394 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k585, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k593" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1285 2 0) (##inline ##vcore.cdr (bruijn ##.x.1286 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k594" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1413) ((##vcore.> (bruijn ##.fa.404 1 0) (##inline ##vcore.car (bruijn ##.b.403 2 2)))) (if (bruijn ##.reg.1413 0 0) ((bruijn ##.k.1287 2 0) (##inline ##vcore.cons (bruijn ##.fa.404 1 0) (bruijn ##.a.402 2 1))) ((bruijn ##.k.1287 2 0) (bruijn ##.b.403 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[2]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.400 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k594) (bruijn ##.a.402 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k594, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k592" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.74 3 46) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k593) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda71) (##inline ##vcore.cons (bruijn ##.x.1292 0 0) (##inline ##vcore.car (bruijn ##.xs.401 1 2))) (##inline ##vcore.cdr (bruijn ##.xs.401 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[46]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k593, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda71, self)))),
      VInlineCons2(runtime,
        _var0,
        VInlineCar2(runtime,
        statics->vars[2])),
      VInlineCdr2(runtime,
        statics->vars[2]));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.400 0 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k592) (##inline ##vcore.car (bruijn ##.xs.401 0 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k592, self)))),
      VInlineCar2(runtime,
        _var2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k597" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1298 0 0) ((bruijn ##.k.1297 2 0) #void) ((bruijn ##.error.81 7 53) (bruijn ##.k.1297 2 0) (##string ##.string.1442) (bruijn ##.max-id.405 5 1) (bruijn ##.candidate-ids.406 5 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 53)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1442.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k596" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lset<=.73 6 45) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k597) (##intrinsic ##vcore.eq?) (bruijn ##.x.1299 0 0) (bruijn ##.id-scopes.407 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 45)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k597, self)))),
      _V40_V10vcore_Deq_Q,
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-scopes.52 5 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k596) (##inline ##vcore.car (bruijn ##.e.408 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k596, self)))),
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k595" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.1296 1 0)) ((bruijn ##.for-each.58 4 30) (bruijn ##.k.1295 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda72) (bruijn ##.candidate-ids.406 2 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[30]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda72, self)))),
      statics->up->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-scopes.52 2 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k595) (##inline ##vcore.car (bruijn ##.max-id.405 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[24]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k595, self)))),
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k603" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1302 6 0) (##inline ##vcore.cons (bruijn ##.x.1305 2 0) (bruijn ##.x.1306 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k602" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-object->datum.156 6 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k603) (bruijn ##.x.1307 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 41)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k603, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k601" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 6 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k602) (bruijn ##.v.409 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k602, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k600" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-object->datum.156 4 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k601) (bruijn ##.x.1308 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[41]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k601, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k604" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1309 0 0) ((bruijn ##.syntax-vector-map.75 5 47) (bruijn ##.k.1302 3 0) (bruijn ##.syntax-object->datum.156 4 41) (bruijn ##.v.409 3 1)) ((bruijn ##.k.1302 3 0) (bruijn ##.v.409 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 47)), 3,
      statics->up->up->vars[0],
      statics->up->up->up->vars[41],
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k599" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1304 0 0) ((bruijn ##.syntax-car.77 4 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k600) (bruijn ##.v.409 2 1)) ((bruijn ##.syntax-vector?.66 4 38) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k604) (bruijn ##.v.409 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k600, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[38]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k604, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k598" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1303 0 0) ((bruijn ##.get-syntax-data.41 3 13) (bruijn ##.k.1302 1 0) (bruijn ##.v.409 1 1)) ((bruijn ##.syntax-pair?.37 3 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k599) (bruijn ##.v.409 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k599, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.identifier?.33 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k598) (bruijn ##.v.409 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k598, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k606" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.32 5 4) (bruijn ##.k.1310 3 0) (bruijn ##.v.411 3 2) (bruijn ##.x.1313 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k611" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-cons.86 9 58) (bruijn ##.k.1310 7 0) (bruijn ##.x.1315 2 0) (bruijn ##.x.1316 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 58)), 3,
      VGetArg(statics, 7-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k610" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.datum->syntax-object.157 7 42) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k611) (bruijn ##.template.410 6 1) (bruijn ##.x.1317 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 42)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k611, self)))),
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k609" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.83 7 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k610) (bruijn ##.v.411 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k610, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k608" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.datum->syntax-object.157 5 42) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k609) (bruijn ##.template.410 4 1) (bruijn ##.x.1318 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 42)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k609, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.datum->syntax-object.157 6 42) (bruijn ##.k.1320 0 0) (bruijn ##.template.410 5 1) (bruijn ##.x.0.412 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 42)), 3,
      _var0,
      VGetArg(statics, 5-1, 1),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k612" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1319 0 0) ((bruijn ##.syntax-vector-map.75 6 47) (bruijn ##.k.1310 4 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda73) (bruijn ##.v.411 4 2)) ((bruijn ##.k.1310 4 0) (bruijn ##.v.411 4 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 47)), 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda73, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k607" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1314 0 0) ((bruijn ##.syntax-car.77 5 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k608) (bruijn ##.v.411 3 2)) ((bruijn ##.syntax-vector?.66 5 38) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k612) (bruijn ##.v.411 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k608, self)))),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 38)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k612, self)))),
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k605" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1311 0 0) ((bruijn ##.k.1310 1 0) (bruijn ##.v.411 1 2)) (basic-block 1 1 (##.reg.1414) ((##vcore.symbol? (bruijn ##.v.411 2 2))) (if (bruijn ##.reg.1414 0 0) ((bruijn ##.get-syntax-scopes.52 4 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k606) (bruijn ##.template.410 2 1)) ((bruijn ##.syntax-pair?.37 4 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k607) (bruijn ##.v.411 2 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k606, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k607, self)))),
      statics->up->vars[2]);
}
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.identifier?.33 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k605) (bruijn ##.v.411 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k605, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k616(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k616" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.scope.416 2 0) (bruijn ##.x.1330 1 0)) ((bruijn ##.k.1328 0 0) (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.scopes.415 3 0)))) ((bruijn ##.k.1328 0 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[0],
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[0])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k618(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k618" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1325 1 0) ((bruijn ##.cadr.57 7 29) (bruijn ##.k.1326 0 0) (bruijn ##.scopes.415 4 0)) ((bruijn ##.k.1326 0 0) (bruijn ##.scope.416 3 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 29)), 2,
      _var0,
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k620" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-scope-bindings!.51 8 23) (bruijn ##.k.1321 6 0) (bruijn ##.scope.417 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.id.413 6 1) (bruijn ##.binding.414 6 2)) (bruijn ##.x.1324 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 23)), 3,
      VGetArg(statics, 6-1, 0),
      statics->vars[0],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 1),
        VGetArg(statics, 6-1, 2)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k619" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-scope-bindings.50 7 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k620) (bruijn ##.scope.417 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k620, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k617(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k617" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k618) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k619))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k618, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k619, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k615" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k616) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k617))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k616, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k617, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k614" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.31 4 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k615))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k615, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k613" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k614) (##inline ##vcore.car (bruijn ##.scopes.415 0 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k614, self)), 1,
      VInlineCar2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-scopes.52 2 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k613) (bruijn ##.id.413 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[24]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k613, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k622" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1331 2 0) (##inline ##vcore.eq? (bruijn ##.x.1332 1 0) (bruijn ##.x.1333 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineEq2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k621" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 3 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k622) (bruijn ##.b.419 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k622, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-data.41 2 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k621) (bruijn ##.a.418 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k621, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k624" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1334 2 0) (##inline ##vcore.eq? (bruijn ##.x.1335 1 0) (bruijn ##.x.1336 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineEq2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k623(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k623" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.resolve-identifier.152 2 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k624) (bruijn ##.b.421 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[37]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k624, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.resolve-identifier.152 1 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k623) (bruijn ##.a.420 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[37]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k623, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k628" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset=.69 6 41) (bruijn ##.k.1337 4 0) (##intrinsic ##vcore.eq?) (bruijn ##.x.1339 1 0) (bruijn ##.x.1340 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 41)), 4,
      statics->up->up->up->vars[0],
      _V40_V10vcore_Deq_Q,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k627" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.52 5 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k628) (bruijn ##.b.423 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k628, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k626" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1341 1 0) (bruijn ##.x.1342 0 0)) ((bruijn ##.get-syntax-scopes.52 4 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k627) (bruijn ##.a.422 2 1)) ((bruijn ##.k.1337 2 0) #f))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k627, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k625(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k625" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.41 3 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k626) (bruijn ##.b.423 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k626, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-data.41 2 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k625) (bruijn ##.a.422 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k625, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k638(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.435 5 0) (##inline ##vcore.cons (##inline ##vcore.cons 'expand-syntax (bruijn ##.expand-syntax.115 4 0)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0expand__syntax,
        statics->up->up->up->vars[0]),
        VNULL));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k637" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k638) (bruijn ##.variable.140 4 25) (bruijn ##.x.1344 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k638, self)))),
      VEncodeInt(4l), VEncodeInt(25l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k636(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.generate-symbol.89 4 61) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k637) 'variable)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[61]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k637, self)))),
      _V0variable);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k635(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k635" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k636) (bruijn ##.toplevel-expand-env.141 3 26) (bruijn ##.x.1345 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k636, self)))),
      VEncodeInt(3l), VEncodeInt(26l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k634(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k634" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.88 3 60) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k635) (bruijn ##.x.1346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[60]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k635, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k633(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.fresh-toplevel-expand-env.142 1 27) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k634))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[27]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k634, self)))));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k632(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.init-global-forms.144 1 29) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k633))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[29]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k633, self)))));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k631(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k632) (bruijn ##.special-forms.145 1 30) '(##pair ##.pair.1463))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k632, self)))),
      VEncodeInt(1l), VEncodeInt(30l),
      VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k630(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k631) (bruijn ##.macro-expand-env.146 1 31) (##inline ##vcore.cons (##inline ##vcore.cons 'datum->syntax-object (bruijn ##.datum->syntax-object.157 1 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-object->datum (bruijn ##.syntax-object->datum.156 1 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (bruijn ##.syntax-null?.87 2 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.syntax-list.76 2 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (bruijn ##.syntax-cons.86 2 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (bruijn ##.syntax-car.77 2 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.syntax-caar.85 2 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.syntax-cadr.78 2 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.syntax-cdar.84 2 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.syntax-cddr.79 2 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (bruijn ##.syntax-cdr.83 2 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.syntax-map.80 2 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.syntax-length.147 1 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.error.81 2 53)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (##intrinsic ##vcore.+)) (##inline ##vcore.cons (##inline ##vcore.cons '- (##intrinsic ##vcore.-)) (##inline ##vcore.cons (##inline ##vcore.cons '* (##intrinsic ##vcore.*)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (##intrinsic ##vcore./)) (##inline ##vcore.cons (##inline ##vcore.cons '< (##intrinsic ##vcore.<)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (##intrinsic ##vcore.<=)) (##inline ##vcore.cons (##inline ##vcore.cons '= (##intrinsic ##vcore.=)) (##inline ##vcore.cons (##inline ##vcore.cons '> (##intrinsic ##vcore.>)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (##intrinsic ##vcore.>=)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.equal?.82 2 54)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cons (bruijn ##.syntax-cons.86 2 58)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.apply (bruijn ##.syntax-apply.149 1 34)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.append (bruijn ##.syntax-append.148 1 33)) '()))))))))))))))))))))))))))))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k631, self)))),
      VEncodeInt(1l), VEncodeInt(31l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0datum___Gsyntax__object,
        statics->vars[42]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__object___Gdatum,
        statics->vars[41]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        statics->up->vars[59]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        statics->up->vars[48]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        statics->up->vars[58]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        statics->up->vars[49]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        statics->up->vars[57]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        statics->up->vars[50]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        statics->up->vars[56]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        statics->up->vars[51]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        statics->up->vars[55]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        statics->up->vars[52]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        statics->vars[32]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        statics->up->vars[53]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_P,
        _V40_V10vcore_D_P),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0__,
        _V40_V10vcore_D__),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_S,
        _V40_V10vcore_D_S),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_W,
        _V40_V10vcore_D_W),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L,
        _V40_V10vcore_D_L),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L_E,
        _V40_V10vcore_D_L_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_E,
        _V40_V10vcore_D_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G,
        _V40_V10vcore_D_G),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        _V40_V10vcore_D_G_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eq_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eqv_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        statics->up->vars[54]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcons,
        statics->up->vars[58]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dapply,
        statics->vars[34]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dappend,
        statics->vars[33]),
        VNULL)))))))))))))))))))))))))))))
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k629" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k630) (bruijn ##.free-vars-allowed.159 1 44) (bruijn ##.x.1405 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k630, self)))),
      VEncodeInt(1l), VEncodeInt(44l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 62) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda3, got ~D~N"
  "-- expected 62~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[62]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 62, 62, statics);
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
  self->vars[25] = _var25;
  self->vars[26] = _var26;
  self->vars[27] = _var27;
  self->vars[28] = _var28;
  self->vars[29] = _var29;
  self->vars[30] = _var30;
  self->vars[31] = _var31;
  self->vars[32] = _var32;
  self->vars[33] = _var33;
  self->vars[34] = _var34;
  self->vars[35] = _var35;
  self->vars[36] = _var36;
  self->vars[37] = _var37;
  self->vars[38] = _var38;
  self->vars[39] = _var39;
  self->vars[40] = _var40;
  self->vars[41] = _var41;
  self->vars[42] = _var42;
  self->vars[43] = _var43;
  self->vars[44] = _var44;
  self->vars[45] = _var45;
  self->vars[46] = _var46;
  self->vars[47] = _var47;
  self->vars[48] = _var48;
  self->vars[49] = _var49;
  self->vars[50] = _var50;
  self->vars[51] = _var51;
  self->vars[52] = _var52;
  self->vars[53] = _var53;
  self->vars[54] = _var54;
  self->vars[55] = _var55;
  self->vars[56] = _var56;
  self->vars[57] = _var57;
  self->vars[58] = _var58;
  self->vars[59] = _var59;
  self->vars[60] = _var60;
  self->vars[61] = _var61;
  // (##letrec (vanity compiler hygienic expand) 48 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier" (vanity compiler hygienic expand)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms" (vanity compiler hygienic expand)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B" (vanity compiler hygienic expand)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q" (vanity compiler hygienic expand))) ((bruijn ##.make-parameter.88 1 60) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k629) #t))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[48]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0expand = self;
    VInitEnv(self, 48, 48, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[25] = VEncodeBool(false);
    self->vars[26] = VEncodeBool(false);
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[30] = VEncodeBool(false);
    self->vars[31] = VEncodeBool(false);
    self->vars[32] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[35] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[40] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[44] = VEncodeBool(false);
    self->vars[45] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[46] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[47] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0expand_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0expand);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[60]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k629, self)))),
      VEncodeBool(true));
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.425 0 0) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0expand_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda1;
