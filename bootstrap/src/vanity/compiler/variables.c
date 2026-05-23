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

VEnv * _V60_V0vanity_V0compiler_V0variables;

VWEAK VWORD _V0variable__pure_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0variable__pure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "variable-pure\?" };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "free-variables" };
VWEAK VWORD _V0mangle__environment;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0mangle__environment = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "mangle-environment" };
VWEAK VWORD _V0mangle__qualified__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0mangle__qualified__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "mangle-qualified-function" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D741 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V60" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D740 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V50" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D739 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D738 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V10" };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
VWEAK VWORD _V0prefix;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0prefix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "prefix" };
VWEAK VWORD _V0except;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0except = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "except" };
VWEAK VWORD _V0only;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0only = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "only" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V20" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "non-symbol in library path:" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static VPair _V10_Dpair_D715 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D714 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D713 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0fold__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fold-right" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cddddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddddr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0variable__pure_Q = VEncodePointer(VInternSymbol(426375154, &_VW_V0variable__pure_Q.sym), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VInternSymbol(1452788755, &_VW_V0free__variables.sym), VPOINTER_OTHER);
  _V0mangle__environment = VEncodePointer(VInternSymbol(724323660, &_VW_V0mangle__environment.sym), VPOINTER_OTHER);
  _V0mangle__qualified__function = VEncodePointer(VInternSymbol(1519413566, &_VW_V0mangle__qualified__function.sym), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VInternSymbol(471189069, &_VW_V0mangle__library.sym), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VInternSymbol(-1891438302, &_VW_V0mangle__symbol.sym), VPOINTER_OTHER);
  _V0rename = VEncodePointer(VInternSymbol(1807760215, &_VW_V0rename.sym), VPOINTER_OTHER);
  _V0prefix = VEncodePointer(VInternSymbol(1117607804, &_VW_V0prefix.sym), VPOINTER_OTHER);
  _V0except = VEncodePointer(VInternSymbol(-444186265, &_VW_V0except.sym), VPOINTER_OTHER);
  _V0only = VEncodePointer(VInternSymbol(1014778380, &_VW_V0only.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0fold__right = VEncodePointer(VInternSymbol(737791577, &_VW_V0fold__right.sym), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VInternSymbol(1528859113, &_VW_V0open__output__string.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VInternSymbol(-1094109327, &_VW_V0get__output__string.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cddddr = VEncodePointer(VInternSymbol(-1400798210, &_VW_V0cddddr.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VInternSymbol(2133063198, &_VW_V0atom_Q.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V10_Dpair_D715.first = _V0begin;
  _V10_Dpair_D715.rest = VEncodePointer(&_V10_Dpair_D714, VPOINTER_PAIR);
  _V10_Dpair_D714.first = _V0and;
  _V10_Dpair_D714.rest = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D713.first = _V0or;
  _V10_Dpair_D713.rest = VNULL;
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__environment, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0import__path, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__library, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0memtail, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables, _var0, _var1);
static void _V0vanity_V0compiler_V0variables_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.283 5 0) (##string ##.string.708) (bruijn ##.x.284 0 0) 'list 'lookup-intrinsic-name 'atom? 'memv 'cadddr 'cddddr 'caar 'cdar 'cddr 'caddr 'cadr 'cdddr 'map 'fold 'assv 'reverse 'equal? 'compiler-error 'string-append 'close-port 'get-output-string 'display 'open-output-string 'fold-right)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 27,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER),
      _var0,
      _V0list,
      _V0lookup__intrinsic__name,
      _V0atom_Q,
      _V0memv,
      _V0cadddr,
      _V0cddddr,
      _V0caar,
      _V0cdar,
      _V0cddr,
      _V0caddr,
      _V0cadr,
      _V0cdddr,
      _V0map,
      _V0fold,
      _V0assv,
      _V0reverse,
      _V0equal_Q,
      _V0compiler__error,
      _V0string__append,
      _V0close__port,
      _V0get__output__string,
      _V0display,
      _V0open__output__string,
      _V0fold__right);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0variables_V20_V0k5) (bruijn ##.x.285 3 0) (bruijn ##.x.286 2 0) (bruijn ##.x.287 1 0) (bruijn ##.x.288 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k5, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k4) (##string ##.string.709))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k3) (##string ##.string.710))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k2) (##string ##.string.711))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k1) (##string ##.string.712))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
}
static void _V10_Dmerge_D122_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmerge_D122_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmerge_D122_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.293 0 0) ((bruijn ##.merge.122 3 0) (bruijn ##.k.291 2 0) (##inline ##vcore.cdr (bruijn ##.a.124 2 1)) (bruijn ##.b.125 2 2)) ((bruijn ##.merge.122 3 0) (bruijn ##.k.291 2 0) (##inline ##vcore.cdr (bruijn ##.a.124 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.124 2 1)) (bruijn ##.b.125 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
}
static void _V10_Dmerge_D122_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmerge_D122_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmerge_D122_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assv.86 5 15) (close _V10_Dmerge_D122_V0k7) (bruijn ##.x.298 0 0) (bruijn ##.b.125 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmerge_D122_V0k7, self)))),
      _var0,
      statics->vars[2]);
}
static void _V10_Dmerge_D122_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dmerge_D122_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmerge_D122_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.a.124 0 1)) ((bruijn ##.k.291 0 0) (bruijn ##.b.125 0 2)) ((bruijn ##.caar.78 4 7) (close _V10_Dmerge_D122_V0k6) (bruijn ##.a.124 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmerge_D122_V0k6, self)))),
      _var1);
}
}
static void _V10_Dappend__improper_D123_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend__improper_D123_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend__improper_D123_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.299 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.126 1 1)) (bruijn ##.x.302 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dappend__improper_D123_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dappend__improper_D123_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend__improper_D123_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.a.126 0 1)) ((bruijn ##.append-improper.123 1 1) (close _V10_Dappend__improper_D123_V0k8) (##inline ##vcore.cdr (bruijn ##.a.126 0 1)) (bruijn ##.b.127 0 2)) (if (##inline ##vcore.null? (bruijn ##.a.126 0 1)) ((bruijn ##.k.299 0 0) (bruijn ##.b.127 0 2)) ((bruijn ##.k.299 0 0) (##inline ##vcore.cons (bruijn ##.a.126 0 1) (bruijn ##.b.127 0 2)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend__improper_D123_V0k8, self)))),
      VInlineCdr2(runtime,
        _var1),
      _var2);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        _var2));
}
}
}
static void _V10_Dloop_D128_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.309 1 0) ((bruijn ##.k.310 0 0) (bruijn ##.p.309 1 0)) ((bruijn ##.lookup-intrinsic-name.73 8 2) (bruijn ##.k.310 0 0) (bruijn ##.expr.130 3 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 2,
      _var0,
      statics->up->up->vars[2]);
}
}
static void _V10_Dloop_D128_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.307 0 0) ((bruijn ##.k.305 3 0) '()) ((bruijn ##.list.72 8 1) (bruijn ##.k.305 3 0) (##inline ##vcore.cons (bruijn ##.expr.130 3 2) (bruijn ##.context.131 3 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 2,
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        statics->up->up->vars[3]));
}
}
static void _V10_Dloop_D128_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D128_V0k10) (close _V10_Dloop_D128_V0k11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k10, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k11, self)))));
}
static void _V10_Dloop_D128_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.122 11 0) (bruijn ##.k.305 9 0) (bruijn ##.x.317 2 0) (bruijn ##.x.318 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D128_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.128 9 0) (close _V10_Dloop_D128_V0k19) (bruijn ##.bound.129 8 1) (bruijn ##.x.319 0 0) (bruijn ##.expr.130 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k19, self)))),
      VGetArg(statics, 8-1, 1),
      _var0,
      VGetArg(statics, 8-1, 2));
}
static void _V10_Dloop_D128_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadddr.76 12 5) (close _V10_Dloop_D128_V0k18) (bruijn ##.expr.130 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k18, self)))),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dloop_D128_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.merge.122 8 0) (close _V10_Dloop_D128_V0k17) (bruijn ##.x.320 2 0) (bruijn ##.x.321 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k17, self)))),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D128_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.128 6 0) (close _V10_Dloop_D128_V0k16) (bruijn ##.bound.129 5 1) (bruijn ##.x.322 0 0) (bruijn ##.expr.130 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k16, self)))),
      VGetArg(statics, 5-1, 1),
      _var0,
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D128_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.81 9 10) (close _V10_Dloop_D128_V0k15) (bruijn ##.expr.130 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k15, self)))),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D128_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.128 4 0) (close _V10_Dloop_D128_V0k14) (bruijn ##.bound.129 3 1) (bruijn ##.x.323 0 0) (bruijn ##.expr.130 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k14, self)))),
      statics->up->up->vars[1],
      _var0,
      statics->up->up->vars[2]);
}
static void _V10_Dloop_D128_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.122 9 0) (bruijn ##.k.305 7 0) (bruijn ##.x.325 2 0) (bruijn ##.x.326 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D128_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.128 7 0) (close _V10_Dloop_D128_V0k24) (bruijn ##.bound.129 6 1) (bruijn ##.x.327 0 0) (bruijn ##.expr.130 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k24, self)))),
      VGetArg(statics, 6-1, 1),
      _var0,
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D128_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.81 10 10) (close _V10_Dloop_D128_V0k23) (bruijn ##.expr.130 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k23, self)))),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D128_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.128 5 0) (close _V10_Dloop_D128_V0k22) (bruijn ##.bound.129 4 1) (bruijn ##.x.328 0 0) (bruijn ##.expr.130 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k22, self)))),
      statics->up->up->up->vars[1],
      _var0,
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D128_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.128 7 0) (bruijn ##.k.305 6 0) (bruijn ##.x.330 1 0) (bruijn ##.x.331 0 0) (bruijn ##.expr.130 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 4,
      VGetArg(statics, 6-1, 0),
      statics->vars[0],
      _var0,
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D128_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.80 10 9) (close _V10_Dloop_D128_V0k27) (bruijn ##.expr.130 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k27, self)))),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D128_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.123 6 1) (close _V10_Dloop_D128_V0k26) (bruijn ##.x.332 0 0) (bruijn ##.bound.129 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k26, self)))),
      _var0,
      statics->up->up->up->vars[1]);
}
static void _V10_Dloop_D128_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.128 7 0) (bruijn ##.k.305 6 0) (bruijn ##.x.334 1 0) (bruijn ##.x.335 0 0) (bruijn ##.expr.130 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 4,
      VGetArg(statics, 6-1, 0),
      statics->vars[0],
      _var0,
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D128_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddddr.77 10 6) (close _V10_Dloop_D128_V0k30) (bruijn ##.expr.130 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k30, self)))),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D128_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.123 6 1) (close _V10_Dloop_D128_V0k29) (bruijn ##.x.336 0 0) (bruijn ##.bound.129 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k29, self)))),
      _var0,
      statics->up->up->up->vars[1]);
}
static void _V10_Dloop2_D132_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D132_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D132_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.122 12 0) (bruijn ##.k.338 5 0) (bruijn ##.x.340 1 0) (bruijn ##.x.341 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop2_D132_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D132_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D132_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop2.132 5 0) (close _V10_Dloop2_D132_V0k35) (##inline ##vcore.cdr (bruijn ##.cases.133 4 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D132_V0k35, self)))),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V10_Dloop2_D132_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D132_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D132_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.128 9 0) (close _V10_Dloop2_D132_V0k34) (bruijn ##.x.343 1 0) (bruijn ##.x.344 0 0) (##inline ##vcore.car (bruijn ##.cases.133 3 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D132_V0k34, self)))),
      statics->vars[0],
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop2_D132_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D132_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D132_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.79 12 8) (close _V10_Dloop2_D132_V0k33) (bruijn ##.cases.133 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D132_V0k33, self)))),
      statics->up->vars[1]);
}
static void _V10_Dloop2_D132_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D132_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D132_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.123 8 1) (close _V10_Dloop2_D132_V0k32) (bruijn ##.x.346 0 0) (bruijn ##.bound.129 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D132_V0k32, self)))),
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dloop2_D132_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop2_D132_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D132_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.cases.133 0 1)) ((bruijn ##.k.338 0 0) '()) ((bruijn ##.caar.78 10 7) (close _V10_Dloop2_D132_V0k31) (bruijn ##.cases.133 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D132_V0k31, self)))),
      _var1);
}
}
static void _V10_Dloop2_D134_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D134_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D134_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.122 12 0) (bruijn ##.k.349 5 0) (bruijn ##.x.351 1 0) (bruijn ##.x.352 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop2_D134_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D134_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D134_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop2.134 5 0) (close _V10_Dloop2_D134_V0k40) (##inline ##vcore.cdr (bruijn ##.cases.135 4 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D134_V0k40, self)))),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V10_Dloop2_D134_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D134_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D134_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.128 9 0) (close _V10_Dloop2_D134_V0k39) (bruijn ##.x.354 1 0) (bruijn ##.x.355 0 0) (##inline ##vcore.car (bruijn ##.cases.135 3 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D134_V0k39, self)))),
      statics->vars[0],
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop2_D134_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D134_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D134_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.79 12 8) (close _V10_Dloop2_D134_V0k38) (bruijn ##.cases.135 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D134_V0k38, self)))),
      statics->up->vars[1]);
}
static void _V10_Dloop2_D134_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop2_D134_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D134_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.123 8 1) (close _V10_Dloop2_D134_V0k37) (bruijn ##.x.357 0 0) (bruijn ##.bound.129 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D134_V0k37, self)))),
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dloop2_D134_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop2_D134_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D134_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.cases.135 0 1)) ((bruijn ##.k.349 0 0) '()) ((bruijn ##.caar.78 10 7) (close _V10_Dloop2_D134_V0k36) (bruijn ##.cases.135 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D134_V0k36, self)))),
      _var1);
}
}
static void _V10_Dloop_D128_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop2.134 1 0) (bruijn ##.k.305 5 0) (bruijn ##.x.358 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D128_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.128 10 0) (bruijn ##.k.305 9 0) (bruijn ##.x.360 3 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.363 1 0) (bruijn ##.x.364 0 0))) (bruijn ##.expr.130 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      VGetArg(statics, 9-1, 0),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        _var0)),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dloop_D128_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.80 13 9) (close _V10_Dloop_D128_V0k47) (bruijn ##.expr.130 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k47, self)))),
      VGetArg(statics, 8-1, 2));
}
static void _V10_Dloop_D128_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.84 12 13) (close _V10_Dloop_D128_V0k46) (bruijn ##.cadr.82 12 11) (bruijn ##.x.365 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k46, self)))),
      VGetArg(statics, 12-1, 11),
      _var0);
}
static void _V10_Dloop_D128_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.82 11 11) (close _V10_Dloop_D128_V0k45) (bruijn ##.expr.130 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k45, self)))),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D128_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.123 7 1) (close _V10_Dloop_D128_V0k44) (bruijn ##.x.366 0 0) (bruijn ##.bound.129 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k44, self)))),
      _var0,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D128_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.84 9 13) (close _V10_Dloop_D128_V0k43) (##intrinsic ##vcore.car) (bruijn ##.x.367 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k43, self)))),
      _V40_V10vcore_Dcar,
      _var0);
}
static void _V10_Dloop_D128_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.128 10 0) (bruijn ##.k.305 9 0) (bruijn ##.x.369 3 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.372 1 0) (bruijn ##.x.373 0 0))) (bruijn ##.expr.130 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      VGetArg(statics, 9-1, 0),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        _var0)),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dloop_D128_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdddr.83 13 12) (close _V10_Dloop_D128_V0k53) (bruijn ##.expr.130 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k53, self)))),
      VGetArg(statics, 8-1, 2));
}
static void _V10_Dloop_D128_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.84 12 13) (close _V10_Dloop_D128_V0k52) (bruijn ##.cadr.82 12 11) (bruijn ##.x.374 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k52, self)))),
      VGetArg(statics, 12-1, 11),
      _var0);
}
static void _V10_Dloop_D128_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.81 11 10) (close _V10_Dloop_D128_V0k51) (bruijn ##.expr.130 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k51, self)))),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D128_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.123 7 1) (close _V10_Dloop_D128_V0k50) (bruijn ##.x.375 0 0) (bruijn ##.bound.129 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k50, self)))),
      _var0,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D128_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.84 9 13) (close _V10_Dloop_D128_V0k49) (##intrinsic ##vcore.car) (bruijn ##.x.376 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k49, self)))),
      _V40_V10vcore_Dcar,
      _var0);
}
static void _V10_Dloop_D128_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.85 9 14) (bruijn ##.k.305 4 0) (bruijn ##.merge.122 6 0) '() (bruijn ##.x.379 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 14)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VNULL,
      _var0);
}
static void _V10_Dloop_D128_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.loop.128 5 0) (bruijn ##.k.380 0 0) (bruijn ##.bound.129 4 1) (bruijn ##.e.136 0 1) (bruijn ##.expr.130 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 4,
      _var0,
      statics->up->up->up->vars[1],
      _var1,
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D128_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.324 0 0) ((bruijn ##.cadr.82 8 11) (close _V10_Dloop_D128_V0k21) (bruijn ##.expr.130 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 3 2)) 'lambda) ((bruijn ##.cadr.82 8 11) (close _V10_Dloop_D128_V0k25) (bruijn ##.expr.130 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 3 2)) '##qualified-lambda) ((bruijn ##.cadddr.76 8 5) (close _V10_Dloop_D128_V0k28) (bruijn ##.expr.130 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 3 2)) 'case-lambda) (letrec 1 ((close _V10_Dloop2_D132_V0lambda7)) ((bruijn ##.loop2.132 0 0) (bruijn ##.k.305 4 0) (##inline ##vcore.cdr (bruijn ##.expr.130 4 2)))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 3 2)) '##qualified-case-lambda) (letrec 1 ((close _V10_Dloop2_D134_V0lambda8)) ((bruijn ##.cdddr.83 9 12) (close _V10_Dloop_D128_V0k41) (bruijn ##.expr.130 4 2))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 3 2)) 'letrec) ((bruijn ##.cadr.82 8 11) (close _V10_Dloop_D128_V0k42) (bruijn ##.expr.130 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 3 2)) '##letrec) ((bruijn ##.caddr.81 8 10) (close _V10_Dloop_D128_V0k48) (bruijn ##.expr.130 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 3 2)) 'set!) ((bruijn ##.loop.128 4 0) (bruijn ##.k.305 3 0) (bruijn ##.bound.129 3 1) (##inline ##vcore.cdr (bruijn ##.expr.130 3 2)) (bruijn ##.expr.130 3 2)) ((bruijn ##.map.84 8 13) (close _V10_Dloop_D128_V0k54) (close _V10_Dloop_D128_V0lambda9) (bruijn ##.expr.130 3 2))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k21, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V0lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k25, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V10qualified__lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k28, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V0case__lambda))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D132_V0lambda7, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
    }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V10qualified__case__lambda))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop2_D134_V0lambda8, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k41, self)))),
      statics->up->up->up->vars[2]);
    }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V0letrec))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k42, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V10letrec))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k48, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V0set_B))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->up->vars[2]),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0lambda9, self)))),
      statics->up->up->vars[2]);
}
}
}
}
}
}
}
}
}
static void _V10_Dloop_D128_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.311 0 0) ((bruijn ##.k.305 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 2 2)) 'quote) ((bruijn ##.k.305 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 2 2)) '##foreign.function) ((bruijn ##.k.305 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 2 2)) '##intrinsic) ((bruijn ##.k.305 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 2 2)) '##basic-intrinsic) ((bruijn ##.k.305 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.130 2 2)) 'if) ((bruijn ##.cadr.82 7 11) (close _V10_Dloop_D128_V0k13) (bruijn ##.expr.130 2 2)) ((bruijn ##.memv.75 7 4) (close _V10_Dloop_D128_V0k20) (##inline ##vcore.car (bruijn ##.expr.130 2 2)) '(##pair ##.pair.715))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _V0quote))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _V10foreign_Dfunction))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _V10intrinsic))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _V10basic__intrinsic))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _V0if))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k13, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k20, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR));
}
}
}
}
}
}
}
static void _V10_Dloop_D128_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D128_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D128_V0lambda6, got ~D~N"
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
  // (basic-block 1 1 (##.reg.699) ((##vcore.symbol? (bruijn ##.expr.130 1 2))) (if (bruijn ##.reg.699 0 0) ((bruijn ##.memv.75 6 4) (close _V10_Dloop_D128_V0k9) (bruijn ##.expr.130 1 2) (bruijn ##.bound.129 1 1)) ((bruijn ##.atom?.74 6 3) (close _V10_Dloop_D128_V0k12) (bruijn ##.expr.130 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k9, self)))),
      statics->vars[2],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0k12, self)))),
      statics->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close _V10_Dmerge_D122_V0lambda4) (close _V10_Dappend__improper_D123_V0lambda5)) (letrec 1 ((close _V10_Dloop_D128_V0lambda6)) ((bruijn ##.loop.128 0 0) (bruijn ##.k.290 2 0) '() (bruijn ##.expr.121 2 1) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmerge_D122_V0lambda4, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend__improper_D123_V0lambda5, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D128_V0lambda6, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[1],
      VEncodeBool(false));
    }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.596 0 0) (bruijn ##.k.594 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.597 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.595 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11) (bruijn ##.kk.12.139 2 1)) ((bruijn ##.k.594 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56) 'quote (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.594 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 0 0) (bruijn ##.k.588 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.591 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.589 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12) (bruijn ##.kk.12.139 2 1)) ((bruijn ##.k.588 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.588 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.584 0 0) (bruijn ##.k.582 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.585 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.583 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13) (bruijn ##.kk.12.139 2 1)) ((bruijn ##.k.582 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.582 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.578 0 0) (bruijn ##.k.576 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.579 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.577 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14) (bruijn ##.kk.12.139 2 1)) ((bruijn ##.k.576 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68) '##basic-intrinsic (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.576 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68, self)))),
      _V10basic__intrinsic,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.571 0 0) (bruijn ##.k.566 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.variable-pure-body?.114 7 2) (bruijn ##.k.572 0 0) (bruijn ##.k.137 6 1) (##inline ##vcore.car (bruijn ##.expr.19.146 2 0)) (##inline ##vcore.car (bruijn ##.expr.20.148 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 4,
      _var0,
      VGetArg(statics, 6-1, 1),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.148 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.148 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15) (bruijn ##.kk.12.139 4 1)) ((bruijn ##.k.566 3 0) #f)) ((bruijn ##.k.566 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.146 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74) (##inline ##vcore.cdr (bruijn ##.expr.19.146 0 0))) ((bruijn ##.k.566 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.567 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.566 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72) 'lambda (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.566 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.559 0 0) (bruijn ##.k.557 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.variable-pure-body?.114 7 2) (bruijn ##.k.561 1 0) (bruijn ##.k.137 6 1) (##inline ##vcore.car (bruijn ##.body.152 1 1)) (bruijn ##.x.563 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 4,
      statics->vars[0],
      VGetArg(statics, 6-1, 1),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.p.153 0 2) ((bruijn ##.cadr.82 7 11) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80) (bruijn ##.body.152 0 1)) ((bruijn ##.k.561 0 0) #f))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80, self)))),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.85 6 14) (bruijn ##.k.560 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17) #t (##inline ##vcore.cdr (bruijn ##.expr.138 4 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17, self)))),
      VEncodeBool(true),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.558 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16) (bruijn ##.kk.12.139 2 1)) ((bruijn ##.k.557 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.557 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.552 0 0) (bruijn ##.k.545 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.variable-pure-body?.114 9 2) (bruijn ##.k.553 0 0) (bruijn ##.k.137 8 1) (##inline ##vcore.car (bruijn ##.expr.25.159 2 0)) (##inline ##vcore.car (bruijn ##.expr.26.161 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 4,
      _var0,
      VGetArg(statics, 8-1, 1),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.161 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.161 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18) (bruijn ##.kk.12.139 6 1)) ((bruijn ##.k.545 5 0) #f)) ((bruijn ##.k.545 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.159 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87) (##inline ##vcore.cdr (bruijn ##.expr.25.159 0 0))) ((bruijn ##.k.545 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.157 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.24.157 0 0))) ((bruijn ##.k.545 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.155 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85) (##inline ##vcore.cdr (bruijn ##.expr.23.155 0 0))) ((bruijn ##.k.545 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.546 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.545 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.545 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.538 0 0) (bruijn ##.k.534 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.variable-pure-body?.114 9 2) (bruijn ##.k.540 1 0) (bruijn ##.k.137 8 1) (##inline ##vcore.car (bruijn ##.body.169 1 1)) (bruijn ##.x.542 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 4,
      statics->vars[0],
      VGetArg(statics, 8-1, 1),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.p.170 0 2) ((bruijn ##.cadr.82 9 11) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95) (bruijn ##.body.169 0 1)) ((bruijn ##.k.540 0 0) #f))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95, self)))),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.85 8 14) (bruijn ##.k.539 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20) #t (##inline ##vcore.cdr (bruijn ##.expr.29.166 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, self)))),
      VEncodeBool(true),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.166 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19) (bruijn ##.kk.12.139 4 1)) ((bruijn ##.k.534 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.164 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93) (##inline ##vcore.cdr (bruijn ##.expr.28.164 0 0))) ((bruijn ##.k.534 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.535 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.534 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.534 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.527 0 0) (bruijn ##.k.522 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.31.172 2 0)) (bruijn ##.k.137 6 1))) ((bruijn ##.variable-pure?.113 7 1) (bruijn ##.k.528 0 0) (bruijn ##.k.137 6 1) (##inline ##vcore.car (bruijn ##.expr.32.174 1 0))) ((bruijn ##.k.528 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      _var0,
      VGetArg(statics, 6-1, 1),
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.174 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.32.174 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21) (bruijn ##.kk.12.139 4 1)) ((bruijn ##.k.522 3 0) #f)) ((bruijn ##.k.522 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.172 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100) (##inline ##vcore.cdr (bruijn ##.expr.31.172 0 0))) ((bruijn ##.k.522 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.523 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.522 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98) 'set! (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.522 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.516 0 0) (bruijn ##.k.511 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.518 0 0) ((bruijn ##.k.517 1 0) (bruijn ##.p.518 0 0)) ((bruijn ##.variable-pure?.113 8 1) (bruijn ##.k.517 1 0) (bruijn ##.k.137 7 1) (##inline ##vcore.car (bruijn ##.expr.35.179 2 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      statics->vars[0],
      VGetArg(statics, 7-1, 1),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108) (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.34.177 2 0)) (bruijn ##.k.137 6 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108, self)), 1,
      VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 1)));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.179 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.179 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22) (bruijn ##.kk.12.139 4 1)) ((bruijn ##.k.511 3 0) #f)) ((bruijn ##.k.511 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.177 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106) (##inline ##vcore.cdr (bruijn ##.expr.34.177 0 0))) ((bruijn ##.k.511 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.512 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.511 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104) 'define (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.511 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104, self)))),
      _V0define,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.503 0 0) (bruijn ##.k.497 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.506 0 0) ((bruijn ##.variable-pure?.113 9 1) (bruijn ##.k.504 1 0) (bruijn ##.k.137 8 1) (##inline ##vcore.car (bruijn ##.expr.39.186 2 0))) ((bruijn ##.k.504 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      statics->vars[0],
      VGetArg(statics, 8-1, 1),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.38.184 2 0)) (bruijn ##.k.137 7 1))) ((bruijn ##.variable-pure?.113 8 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116) (bruijn ##.k.137 7 1) (##inline ##vcore.car (bruijn ##.expr.37.182 3 0))) ((bruijn ##.k.504 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 7-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116, self)))),
      VGetArg(statics, 7-1, 1),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.186 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.186 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23) (bruijn ##.kk.12.139 5 1)) ((bruijn ##.k.497 4 0) #f)) ((bruijn ##.k.497 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.184 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114) (##inline ##vcore.cdr (bruijn ##.expr.38.184 0 0))) ((bruijn ##.k.497 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.182 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113) (##inline ##vcore.cdr (bruijn ##.expr.37.182 0 0))) ((bruijn ##.k.497 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.498 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.497 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111) 'set! (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.497 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.490 0 0) (bruijn ##.k.484 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.493 0 0) ((bruijn ##.variable-pure?.113 10 1) (bruijn ##.k.491 2 0) (bruijn ##.k.137 9 1) (##inline ##vcore.car (bruijn ##.expr.43.193 3 0))) ((bruijn ##.k.491 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 9-1, 1),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.492 0 0) ((bruijn ##.k.491 1 0) (bruijn ##.p.492 0 0)) ((bruijn ##.variable-pure?.113 9 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k125) (bruijn ##.k.137 8 1) (##inline ##vcore.car (bruijn ##.expr.41.189 4 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k125, self)))),
      VGetArg(statics, 8-1, 1),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124) (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.42.191 2 0)) (bruijn ##.k.137 7 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124, self)), 1,
      VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 7-1, 1)));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.193 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.43.193 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24) (bruijn ##.kk.12.139 5 1)) ((bruijn ##.k.484 4 0) #f)) ((bruijn ##.k.484 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.191 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122) (##inline ##vcore.cdr (bruijn ##.expr.42.191 0 0))) ((bruijn ##.k.484 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.189 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121) (##inline ##vcore.cdr (bruijn ##.expr.41.189 0 0))) ((bruijn ##.k.484 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.485 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.484 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119) 'define (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.484 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119, self)))),
      _V0define,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D199_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.49.198 5 1) (bruijn ##.k.469 2 0) (bruijn ##.expr.51.200 3 1) (bruijn ##.x.470 1 0) (bruijn ##.x.471 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D199_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.87 12 16) (close _V10_Dloop_D199_V0k132) (bruijn ##.vals.48.202 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k132, self)))),
      statics->up->vars[3]);
}
static void _V10_Dloop_D199_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.51.200 1 1))) ((bruijn ##.reverse.87 11 16) (close _V10_Dloop_D199_V0k131) (bruijn ##.xs.47.201 1 2)) ((bruijn ##.k.469 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k131, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D199_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.206 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.53.206 0 0))) ((bruijn ##.kk.50.203 3 1) (bruijn ##.k.461 1 0) (##inline ##vcore.cdr (bruijn ##.expr.51.200 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.52.204 2 0)) (bruijn ##.xs.47.201 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.53.206 0 0)) (bruijn ##.vals.48.202 5 3))) ((bruijn ##.k.461 1 0) #f)) ((bruijn ##.k.461 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 5-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 5-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D199_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.204 1 0)) ((close _V10_Dloop_D199_V0k136) (##inline ##vcore.cdr (bruijn ##.expr.52.204 1 0))) ((bruijn ##.k.461 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k136, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D199_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.49.198 7 1) (bruijn ##.k.457 3 0) (bruijn ##.expr.51.200 5 1) (bruijn ##.x.458 1 0) (bruijn ##.x.459 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D199_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.87 14 16) (close _V10_Dloop_D199_V0k139) (bruijn ##.vals.48.202 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k139, self)))),
      statics->up->up->up->vars[3]);
}
static void _V10_Dloop_D199_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.87 13 16) (close _V10_Dloop_D199_V0k138) (bruijn ##.xs.47.201 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k138, self)))),
      statics->up->up->vars[2]);
}
static void _V10_Dloop_D199_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D199_V0k135) (close _V10_Dloop_D199_V0k137))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k137, self)))));
}
static void _V10_Dloop_D199_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D199_V0k134) (##inline ##vcore.car (bruijn ##.expr.51.200 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k134, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
static void _V10_Dloop_D199_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.456 0 0) (close _V10_Dloop_D199_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0lambda29, self)))));
}
static void _V10_Dloop_D199_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.455 0 0) (close _V10_Dloop_D199_V0lambda28) (bruijn ##.loop.199 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0lambda28, self)))),
      statics->vars[0]);
}
static void _V10_Dloop_D199_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D199_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D199_V0lambda27, got ~D~N"
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
  // ((close _V10_Dloop_D199_V0k130) (close _V10_Dloop_D199_V0k133))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0k133, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D199_V0lambda27)) ((bruijn ##.loop.199 0 0) (bruijn ##.k.454 1 0) (##inline ##vcore.car (bruijn ##.expr.45.196 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D199_V0lambda27, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.453 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.477 0 0) (bruijn ##.k.473 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.variable-pure-body?.114 8 2) (bruijn ##.k.478 0 0) (bruijn ##.k.137 7 1) (bruijn ##.xs.209 2 2) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.54.211 1 0)) (bruijn ##.vals.210 2 3))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 4,
      _var0,
      VGetArg(statics, 7-1, 1),
      statics->up->vars[2],
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        statics->up->vars[3])));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.211 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.54.211 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31) (bruijn ##.kk.12.139 5 1)) ((bruijn ##.k.473 1 0) #f)) ((bruijn ##.k.473 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.208 0 1)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k140) (##inline ##vcore.cdr (bruijn ##.expr.45.196 1 0))) ((bruijn ##.k.473 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k140, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.196 0 0)) (##vcore.call-with-values (bruijn ##.k.450 2 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30)) ((bruijn ##.k.450 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.451 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.450 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k128) 'letrec (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.450 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k128, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D218_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.61.217 5 1) (bruijn ##.k.435 2 0) (bruijn ##.expr.63.219 3 1) (bruijn ##.x.436 1 0) (bruijn ##.x.437 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D218_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.87 13 16) (close _V10_Dloop_D218_V0k149) (bruijn ##.vals.60.221 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k149, self)))),
      statics->up->vars[3]);
}
static void _V10_Dloop_D218_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.63.219 1 1))) ((bruijn ##.reverse.87 12 16) (close _V10_Dloop_D218_V0k148) (bruijn ##.xs.59.220 1 2)) ((bruijn ##.k.435 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k148, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D218_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.225 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.225 0 0))) ((bruijn ##.kk.62.222 3 1) (bruijn ##.k.427 1 0) (##inline ##vcore.cdr (bruijn ##.expr.63.219 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.64.223 2 0)) (bruijn ##.xs.59.220 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.65.225 0 0)) (bruijn ##.vals.60.221 5 3))) ((bruijn ##.k.427 1 0) #f)) ((bruijn ##.k.427 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 5-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 5-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D218_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.223 1 0)) ((close _V10_Dloop_D218_V0k153) (##inline ##vcore.cdr (bruijn ##.expr.64.223 1 0))) ((bruijn ##.k.427 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k153, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D218_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.61.217 7 1) (bruijn ##.k.423 3 0) (bruijn ##.expr.63.219 5 1) (bruijn ##.x.424 1 0) (bruijn ##.x.425 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D218_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.87 15 16) (close _V10_Dloop_D218_V0k156) (bruijn ##.vals.60.221 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k156, self)))),
      statics->up->up->up->vars[3]);
}
static void _V10_Dloop_D218_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.87 14 16) (close _V10_Dloop_D218_V0k155) (bruijn ##.xs.59.220 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k155, self)))),
      statics->up->up->vars[2]);
}
static void _V10_Dloop_D218_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D218_V0k152) (close _V10_Dloop_D218_V0k154))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k152, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k154, self)))));
}
static void _V10_Dloop_D218_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D218_V0k151) (##inline ##vcore.car (bruijn ##.expr.63.219 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k151, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
static void _V10_Dloop_D218_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.422 0 0) (close _V10_Dloop_D218_V0lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0lambda36, self)))));
}
static void _V10_Dloop_D218_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.421 0 0) (close _V10_Dloop_D218_V0lambda35) (bruijn ##.loop.218 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0lambda35, self)))),
      statics->vars[0]);
}
static void _V10_Dloop_D218_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D218_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D218_V0lambda34, got ~D~N"
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
  // ((close _V10_Dloop_D218_V0k147) (close _V10_Dloop_D218_V0k150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0k150, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D218_V0lambda34)) ((bruijn ##.loop.218 0 0) (bruijn ##.k.420 1 0) (##inline ##vcore.car (bruijn ##.expr.57.215 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D218_V0lambda34, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.419 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.443 0 0) (bruijn ##.k.439 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.variable-pure-body?.114 9 2) (bruijn ##.k.444 0 0) (bruijn ##.k.137 8 1) (bruijn ##.xs.228 2 2) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.66.230 1 0)) (bruijn ##.vals.229 2 3))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 4,
      _var0,
      VGetArg(statics, 8-1, 1),
      statics->up->vars[2],
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        statics->up->vars[3])));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.230 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.66.230 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38) (bruijn ##.kk.12.139 6 1)) ((bruijn ##.k.439 1 0) #f)) ((bruijn ##.k.439 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.227 0 1)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k157) (##inline ##vcore.cdr (bruijn ##.expr.57.215 1 0))) ((bruijn ##.k.439 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k157, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.215 0 0)) (##vcore.call-with-values (bruijn ##.k.415 3 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37)) ((bruijn ##.k.415 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.214 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k146) (##inline ##vcore.cdr (bruijn ##.expr.56.214 0 0))) ((bruijn ##.k.415 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k146, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.416 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k145) (##inline ##vcore.cdr (bruijn ##.expr.138 3 2))) ((bruijn ##.k.415 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k145, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138 2 2)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144) '##letrec (##inline ##vcore.car (bruijn ##.expr.138 2 2))) ((bruijn ##.k.415 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144, self)))),
      _V10letrec,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.396 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.395 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39) (bruijn ##.kk.12.139 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39, self)))),
      self->vars[1]);
}
static void _V10_Dloop_D234_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D234_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D234_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.69.233 4 1) (bruijn ##.k.406 1 0) (bruijn ##.expr.71.235 2 1) (bruijn ##.x.407 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D234_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D234_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D234_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.71.235 1 1))) ((bruijn ##.reverse.87 8 16) (close _V10_Dloop_D234_V0k162) (bruijn ##.xs.68.236 1 2)) ((bruijn ##.k.406 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0k162, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D234_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D234_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D234_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.69.233 5 1) (bruijn ##.k.401 1 0) (bruijn ##.expr.71.235 3 1) (bruijn ##.x.402 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D234_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.87 9 16) (close _V10_Dloop_D234_V0k165) (bruijn ##.xs.68.236 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0k165, self)))),
      statics->up->vars[2]);
}
static void _V10_Dloop_D234_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D234_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D234_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.70.237 0 1) (close _V10_Dloop_D234_V0k164) (##inline ##vcore.cdr (bruijn ##.expr.71.235 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.71.235 2 1)) (bruijn ##.xs.68.236 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0k164, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
static void _V10_Dloop_D234_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D234_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D234_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.400 0 0) (close _V10_Dloop_D234_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0lambda44, self)))));
}
static void _V10_Dloop_D234_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.399 0 0) (close _V10_Dloop_D234_V0lambda43) (bruijn ##.loop.234 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0lambda43, self)))),
      statics->vars[0]);
}
static void _V10_Dloop_D234_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D234_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D234_V0lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D234_V0k161) (close _V10_Dloop_D234_V0k163))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0k163, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D234_V0lambda42)) ((bruijn ##.loop.234 0 0) (bruijn ##.k.398 1 0) (bruijn ##.expr.138 4 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D234_V0lambda42, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->up->up->up->vars[2],
      VNULL);
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.397 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda41))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda41, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.411 0 0) (bruijn ##.k.409 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda47, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.p.242 0 2) ((bruijn ##.variable-pure?.113 5 1) (bruijn ##.k.413 0 0) (bruijn ##.k.137 4 1) (bruijn ##.x.241 0 1)) ((bruijn ##.k.413 0 0) #f))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      _var0,
      statics->up->up->up->vars[1],
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.85 5 14) (bruijn ##.k.412 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda47) #t (bruijn ##.xs.240 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda47, self)))),
      VEncodeBool(true),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.239 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda46) (bruijn ##.kk.12.139 1 1)) ((bruijn ##.k.409 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda46, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k160) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda40) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k160, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda45, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k142(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k143) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k159))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k159, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k127) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k142))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k142, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k126))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k126, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k109(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k109))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k109, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k66))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k66, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k62))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k62, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k58))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k58, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.394 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.600 0 0) ((bruijn ##.k.599 1 0) #t) ((bruijn ##.variable-pure?.113 2 1) (bruijn ##.k.599 1 0) (bruijn ##.k.243 1 1) (bruijn ##.body.245 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[3]);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, got ~D~N"
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
  // ((bruijn ##.memtail.115 1 3) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167) (bruijn ##.k.243 0 1) (bruijn ##.xs.244 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167, self)))),
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.603 0 0) ((bruijn ##.k.601 1 0) (bruijn ##.p.603 0 0)) ((bruijn ##.memtail.115 2 3) (bruijn ##.k.601 1 0) (bruijn ##.x.246 1 1) (##inline ##vcore.cdr (bruijn ##.args.247 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0memtail(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0memtail" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0memtail, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.args.247 0 2)) ((close _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168) (##inline ##vcore.eq? (bruijn ##.x.246 0 1) (##inline ##vcore.car (bruijn ##.args.247 0 2)))) ((bruijn ##.k.601 0 0) (##inline ##vcore.eq? (bruijn ##.x.246 0 1) (bruijn ##.args.247 0 2))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168, self)), 1,
      VInlineEq2(runtime,
        _var1,
        VInlineCar2(runtime,
        _var2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        _var1,
        _var2));
}
}
static void _V10_Dloop_D250_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D250_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D250_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.symbol->string (bruijn ##.k.615 1 0) (bruijn ##.x.616 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D250_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D250_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D250_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.701 1 0) ((bruijn ##.mangle-symbol.118 8 6) (close _V10_Dloop_D250_V0k172) (bruijn ##.e.253 2 0)) ((bruijn ##.compiler-error.89 9 18) (bruijn ##.k.615 0 0) (##string ##.string.716) (bruijn ##.e.253 2 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D250_V0k172, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 18)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
static void _V10_Dloop_D250_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D250_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D250_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.250 5 0) (bruijn ##.k.609 4 0) (bruijn ##.x.611 0 0) (##inline ##vcore.cdr (bruijn ##.ks.252 4 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
}
static void _V10_Dloop_D250_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D250_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D250_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.string-append.90 9 19) (close _V10_Dloop_D250_V0k174) (bruijn ##.x.613 0 0) (bruijn ##.knil.251 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 19)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D250_V0k174, self)))),
      _var0,
      statics->up->up->vars[1]);
}
static void _V10_Dloop_D250_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D250_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D250_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.701) ((##vcore.symbol? (bruijn ##.e.253 1 0))) ((close _V10_Dloop_D250_V0k171) (close _V10_Dloop_D250_V0k173)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D250_V0k171, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D250_V0k173, self)))));
    }
}
static void _V10_Dloop_D250_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D250_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D250_V0lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.ks.252 0 2)) ((bruijn ##.k.609 0 0) (bruijn ##.knil.251 0 1)) ((close _V10_Dloop_D250_V0k170) (##inline ##vcore.car (bruijn ##.ks.252 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D250_V0k170, self)), 1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.250 1 0) (bruijn ##.k.606 4 0) (##string ##.string.717) (bruijn ##.x.617 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.700) ((##vcore.string? (bruijn ##.lib.249 1 0))) (if (bruijn ##.reg.700 0 0) ((bruijn ##.k.606 2 0) (bruijn ##.lib.249 1 0)) (if (##inline ##vcore.pair? (bruijn ##.lib.249 1 0)) (letrec 1 ((close _V10_Dloop_D250_V0lambda48)) ((bruijn ##.reverse.87 5 16) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k175) (bruijn ##.lib.249 2 0))) ((bruijn ##.compiler-error.89 4 18) (bruijn ##.k.606 2 0) (##string ##.string.718) (bruijn ##.lib.249 1 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D250_V0lambda48, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k175, self)))),
      statics->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[18]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D718.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.import-path.117 1 5) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k169) (bruijn ##.lib.248 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k169, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.649 0 0) (bruijn ##.k.646 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.import-path.117 6 5) (bruijn ##.k.650 0 0) (##inline ##vcore.car (bruijn ##.expr.4.258 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.258 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k179) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda50) (bruijn ##.kk.1.255 3 1)) ((bruijn ##.k.646 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k179, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda50, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.647 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k178) (##inline ##vcore.cdr (bruijn ##.import.254 3 1))) ((bruijn ##.k.646 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k178, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.import.254 2 1)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k177) 'only (##inline ##vcore.car (bruijn ##.import.254 2 1))) ((bruijn ##.k.646 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k177, self)))),
      _V0only,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.642 0 0) (bruijn ##.k.639 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.import-path.117 6 5) (bruijn ##.k.643 0 0) (##inline ##vcore.car (bruijn ##.expr.6.261 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.261 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k184) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda51) (bruijn ##.kk.1.255 3 1)) ((bruijn ##.k.639 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k184, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda51, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.640 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k183) (##inline ##vcore.cdr (bruijn ##.import.254 3 1))) ((bruijn ##.k.639 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k183, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.import.254 2 1)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k182) 'except (##inline ##vcore.car (bruijn ##.import.254 2 1))) ((bruijn ##.k.639 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k182, self)))),
      _V0except,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.634 0 0) (bruijn ##.k.629 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.import-path.117 7 5) (bruijn ##.k.635 0 0) (##inline ##vcore.car (bruijn ##.expr.8.264 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.266 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.266 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k190) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda52) (bruijn ##.kk.1.255 4 1)) ((bruijn ##.k.629 3 0) #f)) ((bruijn ##.k.629 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda52, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.264 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k189) (##inline ##vcore.cdr (bruijn ##.expr.8.264 0 0))) ((bruijn ##.k.629 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k189, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.630 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k188) (##inline ##vcore.cdr (bruijn ##.import.254 3 1))) ((bruijn ##.k.629 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k188, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.import.254 2 1)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k187) 'prefix (##inline ##vcore.car (bruijn ##.import.254 2 1))) ((bruijn ##.k.629 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k187, self)))),
      _V0prefix,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.625 0 0) (bruijn ##.k.622 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.import-path.117 6 5) (bruijn ##.k.626 0 0) (##inline ##vcore.car (bruijn ##.expr.11.269 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.269 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k195) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda53) (bruijn ##.kk.1.255 3 1)) ((bruijn ##.k.622 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k195, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda53, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.623 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k194) (##inline ##vcore.cdr (bruijn ##.import.254 3 1))) ((bruijn ##.k.622 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k194, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.import.254 2 1)) ((bruijn ##.equal?.88 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k193) 'rename (##inline ##vcore.car (bruijn ##.import.254 2 1))) ((bruijn ##.k.622 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k193, self)))),
      _V0rename,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.620 0 0) (bruijn ##.import.254 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k196(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.619 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda54) (bruijn ##.kk.1.255 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda54, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k191(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k192) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k196))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k192, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k196, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k185(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k186) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k191))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k186, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k191, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k180(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k181) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k185))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k185, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k176) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k180))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k176, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k180, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.618 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda49))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda49, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.reg.703 1 0) #\#) ((bruijn ##.display.93 7 22) (bruijn ##.k.678 0 0) (##string ##.string.719) (bruijn ##.port.274 2 0)) ((bruijn ##.display.93 7 22) (bruijn ##.k.678 0 0) (##string ##.string.720) (bruijn ##.port.274 2 0)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('#')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
static void _V10_Dloop_D275_V0k202(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (bruijn ##.k.653 2 0) (bruijn ##.ret.277 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->vars[0],
      self->vars[0]);
}
static void _V10_Dloop_D275_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.91 10 20) (close _V10_Dloop_D275_V0k202) (bruijn ##.port.274 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D275_V0k202, self)))),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dloop_D275_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\#) ((bruijn ##.k.658 0 0) (##string ##.string.721)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\!) ((bruijn ##.k.658 0 0) (##string ##.string.722)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\$) ((bruijn ##.k.658 0 0) (##string ##.string.723)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\%) ((bruijn ##.k.658 0 0) (##string ##.string.724)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\&) ((bruijn ##.k.658 0 0) (##string ##.string.725)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\*) ((bruijn ##.k.658 0 0) (##string ##.string.726)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\/) ((bruijn ##.k.658 0 0) (##string ##.string.727)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\:) ((bruijn ##.k.658 0 0) (##string ##.string.728)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\<) ((bruijn ##.k.658 0 0) (##string ##.string.729)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\=) ((bruijn ##.k.658 0 0) (##string ##.string.730)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\>) ((bruijn ##.k.658 0 0) (##string ##.string.731)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\?) ((bruijn ##.k.658 0 0) (##string ##.string.732)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\^) ((bruijn ##.k.658 0 0) (##string ##.string.733)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\_) ((bruijn ##.k.658 0 0) (##string ##.string.734)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\~) ((bruijn ##.k.658 0 0) (##string ##.string.735)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\+) ((bruijn ##.k.658 0 0) (##string ##.string.736)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\-) ((bruijn ##.k.658 0 0) (##string ##.string.737)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\.) ((bruijn ##.k.658 0 0) (##string ##.string.738)) (if (##inline ##vcore.eq? (bruijn ##.reg.705 1 0) '#\@) ((bruijn ##.k.658 0 0) (##string ##.string.739)) (basic-block 1 1 (##.reg.707) ((##vcore.string-ref (bruijn ##.str.272 9 0) (bruijn ##.i.276 4 1))) ((bruijn ##.k.658 1 0) (bruijn ##.reg.707 0 0))))))))))))))))))))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('#')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('!')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('$')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D723.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('%')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('&')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D725.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('*')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D726.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('/')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D727.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar(':')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D728.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('<')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D729.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('=')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D730.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('>')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D731.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('?')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D732.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('^')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D733.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('_')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D734.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('~')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D735.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('+')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D736.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('-')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D737.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('.')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D738.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('@')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D739.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
static void _V10_Dloop_D275_V0k205(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.706) ((##vcore.+ (bruijn ##.i.276 4 1) 1)) ((bruijn ##.loop.275 5 0) (bruijn ##.k.653 4 0) (bruijn ##.reg.706 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dloop_D275_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.93 11 22) (close _V10_Dloop_D275_V0k205) (bruijn ##.x.656 0 0) (bruijn ##.port.274 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 22)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D275_V0k205, self)))),
      _var0,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dloop_D275_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.704) ((##vcore.= (bruijn ##.i.276 1 1) (bruijn ##.reg.702 5 0))) (if (bruijn ##.reg.704 0 0) ((bruijn ##.get-output-string.92 9 21) (close _V10_Dloop_D275_V0k201) (bruijn ##.port.274 4 0)) (basic-block 1 1 (##.reg.705) ((##vcore.string-ref (bruijn ##.str.272 7 0) (bruijn ##.i.276 2 1))) ((close _V10_Dloop_D275_V0k203) (close _V10_Dloop_D275_V0k204)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D275_V0k201, self)))),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D275_V0k203, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D275_V0k204, self)))));
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k200(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Dloop_D275_V0lambda55)) ((bruijn ##.loop.275 0 0) (bruijn ##.k.652 5 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D275_V0lambda55, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.703) ((##vcore.string-ref (bruijn ##.str.272 3 0) 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k199) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k200)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k199, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k200, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.702) ((##vcore.string-length (bruijn ##.str.272 1 0))) ((bruijn ##.open-output-string.94 4 23) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k198)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k198, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k197) (bruijn ##.sym.271 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k197, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.90 5 19) (bruijn ##.k.680 3 0) (##string ##.string.740) (bruijn ##.x.681 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D740.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold-right.95 4 24) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k208) (bruijn ##.string-append.90 4 19) (##string ##.string.721) (bruijn ##.x.682 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k208, self)))),
      statics->up->up->up->vars[19],
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.84 3 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k207) (##intrinsic ##vcore.symbol->string) (bruijn ##.x.683 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k207, self)))),
      _V40_V10vcore_Dsymbol___Gstring,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.84 2 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k206) (bruijn ##.mangle-symbol.118 1 6) (bruijn ##.name.279 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k206, self)))),
      statics->vars[6],
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.90 5 19) (bruijn ##.k.684 3 0) (##string ##.string.741) (bruijn ##.x.685 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D741.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold-right.95 4 24) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k211) (bruijn ##.string-append.90 4 19) (##string ##.string.721) (bruijn ##.x.686 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k211, self)))),
      statics->up->up->up->vars[19],
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.84 3 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k210) (##intrinsic ##vcore.symbol->string) (bruijn ##.x.687 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k210, self)))),
      _V40_V10vcore_Dsymbol___Gstring,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.84 2 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k209) (bruijn ##.mangle-symbol.118 1 6) (bruijn ##.name.280 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k209, self)))),
      statics->vars[6],
      _var1);
}
static void _V0vanity_V0compiler_V0variables_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 25) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity compiler variables) 9 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0memtail" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__library" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0import__path" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment" (vanity compiler variables))) ((bruijn ##.k.289 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-symbol (bruijn ##.mangle-symbol.118 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-library (bruijn ##.mangle-library.116 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-qualified-function (bruijn ##.mangle-qualified-function.119 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-environment (bruijn ##.mangle-environment.120 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'free-variables (bruijn ##.free-variables.112 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'variable-pure? (bruijn ##.variable-pure?.113 0 1)) '()))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0variables = self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment, _V60_V0vanity_V0compiler_V0variables))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0variables_V20", &_V60_V0vanity_V0compiler_V0variables);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__symbol,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__library,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__qualified__function,
        self->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__environment,
        self->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0free__variables,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0variable__pure_Q,
        self->vars[1]),
        VNULL)))))));
    }
}
static void _V0vanity_V0compiler_V0variables_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.282 0 0) (close _V0vanity_V0compiler_V0variables_V20_V0lambda2) (close _V0vanity_V0compiler_V0variables_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0variables_V20 = (VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda1;
