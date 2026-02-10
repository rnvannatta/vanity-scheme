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
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V60" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V50" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V10" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V20" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "non-symbol in library path:" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
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
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D647 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0variable__pure_Q = VEncodePointer(VInternSymbol(426375154, &_VW_V0variable__pure_Q.sym), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VInternSymbol(1452788755, &_VW_V0free__variables.sym), VPOINTER_OTHER);
  _V0mangle__environment = VEncodePointer(VInternSymbol(724323660, &_VW_V0mangle__environment.sym), VPOINTER_OTHER);
  _V0mangle__qualified__function = VEncodePointer(VInternSymbol(1519413566, &_VW_V0mangle__qualified__function.sym), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VInternSymbol(471189069, &_VW_V0mangle__library.sym), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VInternSymbol(-1891438302, &_VW_V0mangle__symbol.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
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
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__environment, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__library, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0memtail, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables, _var0, _var1);
static void _V0vanity_V0compiler_V0variables_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.253 5 0) (##string ##.string.647) (bruijn ##.x.254 0 0) 'list 'lookup-intrinsic-name 'atom? 'memv 'cadddr 'cddddr 'caar 'cdar 'cddr 'caddr 'cadr 'cdddr 'map 'fold 'assv 'reverse 'equal? 'compiler-error 'string-append 'close-port 'get-output-string 'display 'open-output-string 'fold-right)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 27,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D647.sym, VPOINTER_OTHER),
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
  // (##vcore.vector (close _V0vanity_V0compiler_V0variables_V20_V0k5) (bruijn ##.x.255 3 0) (bruijn ##.x.256 2 0) (bruijn ##.x.257 1 0) (bruijn ##.x.258 0 0))
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k4) (##string ##.string.648))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k3) (##string ##.string.649))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D649.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k2) (##string ##.string.650))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k1) (##string ##.string.651))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D651.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.263 0 0) (##qualified-call (vanity compiler variables free-variables ##.merge.110) #f (bruijn ##.merge.110 3 0) (bruijn ##.k.261 2 0) (##inline ##vcore.cdr (bruijn ##.a.112 2 1)) (bruijn ##.b.113 2 2)) (##qualified-call (vanity compiler variables free-variables ##.merge.110) #f (bruijn ##.merge.110 3 0) (bruijn ##.k.261 2 0) (##inline ##vcore.cdr (bruijn ##.a.112 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.112 2 1)) (bruijn ##.b.113 2 2))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assv.75 5 15) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k7) (bruijn ##.x.268 0 0) (bruijn ##.b.113 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k7, self)))),
      _var0,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.a.112 0 1)) ((bruijn ##.k.261 0 0) (bruijn ##.b.113 0 2)) ((bruijn ##.caar.67 4 7) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k6) (bruijn ##.a.112 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110_V0k6, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.269 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.114 1 1)) (bruijn ##.x.272 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.a.114 0 1)) (##qualified-call (vanity compiler variables free-variables ##.append-improper.111) #f (bruijn ##.append-improper.111 1 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111_V0k8) (##inline ##vcore.cdr (bruijn ##.a.114 0 1)) (bruijn ##.b.115 0 2)) (if (##inline ##vcore.null? (bruijn ##.a.114 0 1)) ((bruijn ##.k.269 0 0) (bruijn ##.b.115 0 2)) ((bruijn ##.k.269 0 0) (##inline ##vcore.cons (bruijn ##.a.114 0 1) (bruijn ##.b.115 0 2)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111_V0k8, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.279 1 0) ((bruijn ##.k.280 0 0) (bruijn ##.p.279 1 0)) ((bruijn ##.lookup-intrinsic-name.62 8 2) (bruijn ##.k.280 0 0) (bruijn ##.expr.118 3 2)))
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
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.277 0 0) ((bruijn ##.k.275 3 0) '()) ((bruijn ##.list.61 8 1) (bruijn ##.k.275 3 0) (##inline ##vcore.cons (bruijn ##.expr.118 3 2) (bruijn ##.context.119 3 3))))
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
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k10, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k11, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.110) #f (bruijn ##.merge.110 11 0) (bruijn ##.k.275 9 0) (bruijn ##.x.287 2 0) (bruijn ##.x.288 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 9 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k19) (bruijn ##.bound.117 8 1) (bruijn ##.x.289 0 0) (bruijn ##.expr.118 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k19, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadddr.65 12 5) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k18) (bruijn ##.expr.118 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k18, self)))),
      VGetArg(statics, 7-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.merge.110) #f (bruijn ##.merge.110 8 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k17) (bruijn ##.x.290 2 0) (bruijn ##.x.291 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k17, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 6 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k16) (bruijn ##.bound.117 5 1) (bruijn ##.x.292 0 0) (bruijn ##.expr.118 5 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k16, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.70 9 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k15) (bruijn ##.expr.118 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k15, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 4 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k14) (bruijn ##.bound.117 3 1) (bruijn ##.x.293 0 0) (bruijn ##.expr.118 3 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k14, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.110) #f (bruijn ##.merge.110 9 0) (bruijn ##.k.275 7 0) (bruijn ##.x.295 2 0) (bruijn ##.x.296 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 7 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k24) (bruijn ##.bound.117 6 1) (bruijn ##.x.297 0 0) (bruijn ##.expr.118 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k24, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.70 10 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k23) (bruijn ##.expr.118 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k23, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 5 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k22) (bruijn ##.bound.117 4 1) (bruijn ##.x.298 0 0) (bruijn ##.expr.118 4 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k22, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 7 0) (bruijn ##.k.275 6 0) (bruijn ##.x.300 1 0) (bruijn ##.x.301 0 0) (bruijn ##.expr.118 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.69 10 9) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k27) (bruijn ##.expr.118 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k27, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.111) #f (bruijn ##.append-improper.111 6 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k26) (bruijn ##.x.302 0 0) (bruijn ##.bound.117 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k26, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 7 0) (bruijn ##.k.275 6 0) (bruijn ##.x.304 1 0) (bruijn ##.x.305 0 0) (bruijn ##.expr.118 6 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddddr.66 10 6) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k30) (bruijn ##.expr.118 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k30, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.111) #f (bruijn ##.append-improper.111 6 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k29) (bruijn ##.x.306 0 0) (bruijn ##.bound.117 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k29, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.110) #f (bruijn ##.merge.110 12 0) (bruijn ##.k.308 5 0) (bruijn ##.x.310 1 0) (bruijn ##.x.311 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116 ##.loop2.120) #f (bruijn ##.loop2.120 5 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k35) (##inline ##vcore.cdr (bruijn ##.cases.121 4 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k35, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 9 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k34) (bruijn ##.x.313 1 0) (bruijn ##.x.314 0 0) (##inline ##vcore.car (bruijn ##.cases.121 3 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k34, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.68 12 8) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k33) (bruijn ##.cases.121 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k33, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.111) #f (bruijn ##.append-improper.111 8 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k32) (bruijn ##.x.316 0 0) (bruijn ##.bound.117 6 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k32, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.cases.121 0 1)) ((bruijn ##.k.308 0 0) '()) ((bruijn ##.caar.67 10 7) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k31) (bruijn ##.cases.121 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120_V0k31, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.110) #f (bruijn ##.merge.110 12 0) (bruijn ##.k.319 5 0) (bruijn ##.x.321 1 0) (bruijn ##.x.322 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116 ##.loop2.122) #f (bruijn ##.loop2.122 5 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k40) (##inline ##vcore.cdr (bruijn ##.cases.123 4 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k40, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 9 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k39) (bruijn ##.x.324 1 0) (bruijn ##.x.325 0 0) (##inline ##vcore.car (bruijn ##.cases.123 3 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k39, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.68 12 8) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k38) (bruijn ##.cases.123 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k38, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.111) #f (bruijn ##.append-improper.111 8 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k37) (bruijn ##.x.327 0 0) (bruijn ##.bound.117 6 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k37, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.cases.123 0 1)) ((bruijn ##.k.319 0 0) '()) ((bruijn ##.caar.67 10 7) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k36) (bruijn ##.cases.123 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122_V0k36, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116 ##.loop2.122) #f (bruijn ##.loop2.122 1 0) (bruijn ##.k.275 5 0) (bruijn ##.x.328 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 10 0) (bruijn ##.k.275 9 0) (bruijn ##.x.330 3 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.333 1 0) (bruijn ##.x.334 0 0))) (bruijn ##.expr.118 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        _var0));
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.69 13 9) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k47) (bruijn ##.expr.118 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k47, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.73 12 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k46) (bruijn ##.cadr.71 12 11) (bruijn ##.x.335 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k46, self)))),
      VGetArg(statics, 12-1, 11),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.71 11 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k45) (bruijn ##.expr.118 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k45, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.111) #f (bruijn ##.append-improper.111 7 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k44) (bruijn ##.x.336 0 0) (bruijn ##.bound.117 5 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k44, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.73 9 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k43) (##intrinsic ##vcore.car) (bruijn ##.x.337 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k43, self)))),
      _V40_V10vcore_Dcar,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 10 0) (bruijn ##.k.275 9 0) (bruijn ##.x.339 3 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.342 1 0) (bruijn ##.x.343 0 0))) (bruijn ##.expr.118 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        _var0));
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdddr.72 13 12) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k53) (bruijn ##.expr.118 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k53, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.73 12 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k52) (bruijn ##.cadr.71 12 11) (bruijn ##.x.344 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k52, self)))),
      VGetArg(statics, 12-1, 11),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.70 11 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k51) (bruijn ##.expr.118 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k51, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.111) #f (bruijn ##.append-improper.111 7 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k50) (bruijn ##.x.345 0 0) (bruijn ##.bound.117 5 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k50, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.73 9 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k49) (##intrinsic ##vcore.car) (bruijn ##.x.346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k49, self)))),
      _V40_V10vcore_Dcar,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.74 9 14) (bruijn ##.k.275 4 0) (bruijn ##.merge.110 6 0) '() (bruijn ##.x.349 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 14)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VNULL,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 5 0) (bruijn ##.k.350 0 0) (bruijn ##.bound.117 4 1) (bruijn ##.e.124 0 1) (bruijn ##.expr.118 4 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.294 0 0) ((bruijn ##.cadr.71 8 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k21) (bruijn ##.expr.118 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 3 2)) 'lambda) ((bruijn ##.cadr.71 8 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k25) (bruijn ##.expr.118 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 3 2)) '##qualified-lambda) ((bruijn ##.cadddr.65 8 5) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k28) (bruijn ##.expr.118 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 3 2)) 'case-lambda) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120")) (##qualified-call (vanity compiler variables free-variables ##.loop.116 ##.loop2.120) #f (bruijn ##.loop2.120 0 0) (bruijn ##.k.275 4 0) (##inline ##vcore.cdr (bruijn ##.expr.118 4 2)))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 3 2)) '##qualified-case-lambda) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122")) ((bruijn ##.cdddr.72 9 12) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k41) (bruijn ##.expr.118 4 2))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 3 2)) 'letrec) ((bruijn ##.cadr.71 8 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k42) (bruijn ##.expr.118 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 3 2)) '##letrec) ((bruijn ##.caddr.70 8 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k48) (bruijn ##.expr.118 3 2)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 3 2)) 'set!) (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 4 0) (bruijn ##.k.275 3 0) (bruijn ##.bound.117 3 1) (##inline ##vcore.cdr (bruijn ##.expr.118 3 2)) (bruijn ##.expr.118 3 2)) ((bruijn ##.map.73 8 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k54) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0lambda4) (bruijn ##.expr.118 3 2))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k21, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V0lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k25, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V10qualified__lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k28, self)))),
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D120(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V10_Dloop2_D122, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k41, self)))),
      statics->up->up->up->vars[2]);
    }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V0letrec))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k42, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V10letrec))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k48, self)))),
      statics->up->up->vars[2]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _V0set_B))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    VWORD _arg3 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0lambda4, self)))),
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
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.281 0 0) ((bruijn ##.k.275 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 2 2)) 'quote) ((bruijn ##.k.275 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 2 2)) '##foreign.function) ((bruijn ##.k.275 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 2 2)) '##intrinsic) ((bruijn ##.k.275 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 2 2)) '##basic-intrinsic) ((bruijn ##.k.275 2 0) '()) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.118 2 2)) 'if) ((bruijn ##.cadr.71 7 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k13) (bruijn ##.expr.118 2 2)) ((bruijn ##.memv.64 7 4) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k20) (##inline ##vcore.car (bruijn ##.expr.118 2 2)) (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'and (##inline ##vcore.qcons 'or '()))))))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k13, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k20, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        _V0and,
        VInlineCons2(runtime,
        _V0or,
        VNULL))));
}
}
}
}
}
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116, got ~D~N"
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
  // (basic-block 1 1 (##.reg.638) ((##vcore.symbol? (bruijn ##.expr.118 1 2))) (if (bruijn ##.reg.638 0 0) ((bruijn ##.memv.64 6 4) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k9) (bruijn ##.expr.118 1 2) (bruijn ##.bound.117 1 1)) ((bruijn ##.atom?.63 6 3) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k12) (bruijn ##.expr.118 1 2))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k9, self)))),
      statics->vars[2],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116_V0k12, self)))),
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
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110") (close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116")) (##qualified-call (vanity compiler variables free-variables ##.loop.116) #f (bruijn ##.loop.116 0 0) (bruijn ##.k.260 2 0) '() (bruijn ##.expr.109 2 1) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D110, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D111, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D116(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  // ((bruijn ##.x.569 0 0) (bruijn ##.k.567 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.570 0 0) #t)
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
  // (if (bruijn ##.p.568 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6) (bruijn ##.kk.1.127 2 1)) ((bruijn ##.k.567 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56) 'quote (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.567 0 0) #f))
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
  // ((bruijn ##.x.563 0 0) (bruijn ##.k.561 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.564 0 0) #t)
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
  // (if (bruijn ##.p.562 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7) (bruijn ##.kk.1.127 2 1)) ((bruijn ##.k.561 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.561 0 0) #f))
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
  // ((bruijn ##.x.557 0 0) (bruijn ##.k.555 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.558 0 0) #t)
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
  // (if (bruijn ##.p.556 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8) (bruijn ##.kk.1.127 2 1)) ((bruijn ##.k.555 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.555 0 0) #f))
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
  // ((bruijn ##.x.551 0 0) (bruijn ##.k.549 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.552 0 0) #t)
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
  // (if (bruijn ##.p.550 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9) (bruijn ##.kk.1.127 2 1)) ((bruijn ##.k.549 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68) '##basic-intrinsic (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.549 0 0) #f))
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
  // ((bruijn ##.x.544 0 0) (bruijn ##.k.539 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.103 7 2) (bruijn ##.k.545 0 0) (bruijn ##.k.125 6 1) (##inline ##vcore.car (bruijn ##.expr.8.134 2 0)) (##inline ##vcore.car (bruijn ##.expr.9.136 1 0)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.136 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.136 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10) (bruijn ##.kk.1.127 4 1)) ((bruijn ##.k.539 3 0) #f)) ((bruijn ##.k.539 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.134 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74) (##inline ##vcore.cdr (bruijn ##.expr.8.134 0 0))) ((bruijn ##.k.539 2 0) #f))
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
  // (if (bruijn ##.p.540 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.539 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72) 'lambda (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.539 0 0) #f))
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
  // ((bruijn ##.x.532 0 0) (bruijn ##.k.530 2 0))
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
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.103 7 2) (bruijn ##.k.534 1 0) (bruijn ##.k.125 6 1) (##inline ##vcore.car (bruijn ##.body.140 1 1)) (bruijn ##.x.536 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.p.141 0 2) ((bruijn ##.cadr.71 7 11) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80) (bruijn ##.body.140 0 1)) ((bruijn ##.k.534 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.74 6 14) (bruijn ##.k.533 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12) #t (##inline ##vcore.cdr (bruijn ##.expr.126 4 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, self)))),
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
  // (if (bruijn ##.p.531 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11) (bruijn ##.kk.1.127 2 1)) ((bruijn ##.k.530 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.530 0 0) #f))
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
  // ((bruijn ##.x.525 0 0) (bruijn ##.k.518 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.103 9 2) (bruijn ##.k.526 0 0) (bruijn ##.k.125 8 1) (##inline ##vcore.car (bruijn ##.expr.14.147 2 0)) (##inline ##vcore.car (bruijn ##.expr.15.149 1 0)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.149 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.149 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13) (bruijn ##.kk.1.127 6 1)) ((bruijn ##.k.518 5 0) #f)) ((bruijn ##.k.518 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.147 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87) (##inline ##vcore.cdr (bruijn ##.expr.14.147 0 0))) ((bruijn ##.k.518 4 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.145 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.13.145 0 0))) ((bruijn ##.k.518 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.143 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85) (##inline ##vcore.cdr (bruijn ##.expr.12.143 0 0))) ((bruijn ##.k.518 2 0) #f))
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
  // (if (bruijn ##.p.519 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.518 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.518 0 0) #f))
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
  // ((bruijn ##.x.511 0 0) (bruijn ##.k.507 4 0))
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
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.103 9 2) (bruijn ##.k.513 1 0) (bruijn ##.k.125 8 1) (##inline ##vcore.car (bruijn ##.body.157 1 1)) (bruijn ##.x.515 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.p.158 0 2) ((bruijn ##.cadr.71 9 11) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95) (bruijn ##.body.157 0 1)) ((bruijn ##.k.513 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.74 8 14) (bruijn ##.k.512 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15) #t (##inline ##vcore.cdr (bruijn ##.expr.18.154 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.154 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14) (bruijn ##.kk.1.127 4 1)) ((bruijn ##.k.507 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.152 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93) (##inline ##vcore.cdr (bruijn ##.expr.17.152 0 0))) ((bruijn ##.k.507 2 0) #f))
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
  // (if (bruijn ##.p.508 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.507 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.507 0 0) #f))
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
  // ((bruijn ##.x.500 0 0) (bruijn ##.k.495 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.20.160 2 0)) (bruijn ##.k.125 6 1))) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 7 1) (bruijn ##.k.501 0 0) (bruijn ##.k.125 6 1) (##inline ##vcore.car (bruijn ##.expr.21.162 1 0))) ((bruijn ##.k.501 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 1))))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.162 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.21.162 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16) (bruijn ##.kk.1.127 4 1)) ((bruijn ##.k.495 3 0) #f)) ((bruijn ##.k.495 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.160 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100) (##inline ##vcore.cdr (bruijn ##.expr.20.160 0 0))) ((bruijn ##.k.495 2 0) #f))
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
  // (if (bruijn ##.p.496 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.495 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98) 'set! (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.495 0 0) #f))
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
  // ((bruijn ##.x.489 0 0) (bruijn ##.k.484 4 0))
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
  // (if (bruijn ##.p.491 0 0) ((bruijn ##.k.490 1 0) (bruijn ##.p.491 0 0)) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 8 1) (bruijn ##.k.490 1 0) (bruijn ##.k.125 7 1) (##inline ##vcore.car (bruijn ##.expr.24.167 2 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108) (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.23.165 2 0)) (bruijn ##.k.125 6 1)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.167 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.24.167 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17) (bruijn ##.kk.1.127 4 1)) ((bruijn ##.k.484 3 0) #f)) ((bruijn ##.k.484 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.165 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106) (##inline ##vcore.cdr (bruijn ##.expr.23.165 0 0))) ((bruijn ##.k.484 2 0) #f))
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
  // (if (bruijn ##.p.485 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.484 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104) 'define (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.484 0 0) #f))
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
  // ((bruijn ##.x.476 0 0) (bruijn ##.k.470 5 0))
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
  // (if (bruijn ##.p.479 0 0) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 9 1) (bruijn ##.k.477 1 0) (bruijn ##.k.125 8 1) (##inline ##vcore.car (bruijn ##.expr.28.174 2 0))) ((bruijn ##.k.477 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.27.172 2 0)) (bruijn ##.k.125 7 1))) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 8 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116) (bruijn ##.k.125 7 1) (##inline ##vcore.car (bruijn ##.expr.26.170 3 0))) ((bruijn ##.k.477 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 7-1, 1))))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.174 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.174 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18) (bruijn ##.kk.1.127 5 1)) ((bruijn ##.k.470 4 0) #f)) ((bruijn ##.k.470 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.172 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114) (##inline ##vcore.cdr (bruijn ##.expr.27.172 0 0))) ((bruijn ##.k.470 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.170 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113) (##inline ##vcore.cdr (bruijn ##.expr.26.170 0 0))) ((bruijn ##.k.470 2 0) #f))
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
  // (if (bruijn ##.p.471 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.470 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111) 'set! (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.470 0 0) #f))
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
  // ((bruijn ##.x.463 0 0) (bruijn ##.k.457 5 0))
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
  // (if (bruijn ##.p.466 0 0) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 10 1) (bruijn ##.k.464 2 0) (bruijn ##.k.125 9 1) (##inline ##vcore.car (bruijn ##.expr.32.181 3 0))) ((bruijn ##.k.464 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (if (bruijn ##.p.465 0 0) ((bruijn ##.k.464 1 0) (bruijn ##.p.465 0 0)) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 9 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k125) (bruijn ##.k.125 8 1) (##inline ##vcore.car (bruijn ##.expr.30.177 4 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k125, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124) (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.31.179 2 0)) (bruijn ##.k.125 7 1)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.181 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.32.181 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19) (bruijn ##.kk.1.127 5 1)) ((bruijn ##.k.457 4 0) #f)) ((bruijn ##.k.457 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.179 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122) (##inline ##vcore.cdr (bruijn ##.expr.31.179 0 0))) ((bruijn ##.k.457 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.177 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121) (##inline ##vcore.cdr (bruijn ##.expr.30.177 0 0))) ((bruijn ##.k.457 2 0) #f))
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
  // (if (bruijn ##.p.458 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.457 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119) 'define (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.457 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.38.186 5 1) (bruijn ##.k.442 2 0) (bruijn ##.expr.40.188 3 1) (bruijn ##.x.443 1 0) (bruijn ##.x.444 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.76 12 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k132) (bruijn ##.vals.37.190 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k132, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.40.188 1 1))) ((bruijn ##.reverse.76 11 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k131) (bruijn ##.xs.36.189 1 2)) ((bruijn ##.k.442 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k131, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.194 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.194 0 0))) ((bruijn ##.kk.39.191 3 1) (bruijn ##.k.434 1 0) (##inline ##vcore.cdr (bruijn ##.expr.40.188 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.41.192 2 0)) (bruijn ##.xs.36.189 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.42.194 0 0)) (bruijn ##.vals.37.190 5 3))) ((bruijn ##.k.434 1 0) #f)) ((bruijn ##.k.434 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.192 1 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k136) (##inline ##vcore.cdr (bruijn ##.expr.41.192 1 0))) ((bruijn ##.k.434 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k136, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.38.186 7 1) (bruijn ##.k.430 3 0) (bruijn ##.expr.40.188 5 1) (bruijn ##.x.431 1 0) (bruijn ##.x.432 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.76 14 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k139) (bruijn ##.vals.37.190 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k139, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.76 13 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k138) (bruijn ##.xs.36.189 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k138, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k135) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k137))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k137, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k134) (##inline ##vcore.car (bruijn ##.expr.40.188 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k134, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.429 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda23, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.428 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda22) (bruijn ##.loop.187 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0lambda22, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k130) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k133))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187_V0k133, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.187) #f (bruijn ##.loop.187 0 0) (bruijn ##.k.427 1 0) (##inline ##vcore.car (bruijn ##.expr.34.184 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D187(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.426 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.450 0 0) (bruijn ##.k.446 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.103 8 2) (bruijn ##.k.451 0 0) (bruijn ##.k.125 7 1) (bruijn ##.xs.197 2 2) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.43.199 1 0)) (bruijn ##.vals.198 2 3))))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        statics->up->vars[3]));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.199 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.43.199 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25) (bruijn ##.kk.1.127 5 1)) ((bruijn ##.k.446 1 0) #f)) ((bruijn ##.k.446 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k141, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25, self)))),
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.196 0 1)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k140) (##inline ##vcore.cdr (bruijn ##.expr.34.184 1 0))) ((bruijn ##.k.446 0 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.184 0 0)) (##vcore.call-with-values (bruijn ##.k.423 2 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24)) ((bruijn ##.k.423 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24, self)))));
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
  // (if (bruijn ##.p.424 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.423 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k128) 'letrec (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.423 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.50.205 5 1) (bruijn ##.k.408 2 0) (bruijn ##.expr.52.207 3 1) (bruijn ##.x.409 1 0) (bruijn ##.x.410 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.76 13 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k149) (bruijn ##.vals.49.209 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k149, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.52.207 1 1))) ((bruijn ##.reverse.76 12 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k148) (bruijn ##.xs.48.208 1 2)) ((bruijn ##.k.408 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k148, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.213 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.54.213 0 0))) ((bruijn ##.kk.51.210 3 1) (bruijn ##.k.400 1 0) (##inline ##vcore.cdr (bruijn ##.expr.52.207 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.53.211 2 0)) (bruijn ##.xs.48.208 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.54.213 0 0)) (bruijn ##.vals.49.209 5 3))) ((bruijn ##.k.400 1 0) #f)) ((bruijn ##.k.400 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.211 1 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k153) (##inline ##vcore.cdr (bruijn ##.expr.53.211 1 0))) ((bruijn ##.k.400 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k153, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.50.205 7 1) (bruijn ##.k.396 3 0) (bruijn ##.expr.52.207 5 1) (bruijn ##.x.397 1 0) (bruijn ##.x.398 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.76 15 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k156) (bruijn ##.vals.49.209 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k156, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.76 14 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k155) (bruijn ##.xs.48.208 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k155, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k152) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k154))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k152, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k154, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k151) (##inline ##vcore.car (bruijn ##.expr.52.207 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k151, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.395 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda29, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.394 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda28) (bruijn ##.loop.206 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0lambda28, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k147) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206_V0k150, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.206) #f (bruijn ##.loop.206 0 0) (bruijn ##.k.393 1 0) (##inline ##vcore.car (bruijn ##.expr.46.203 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D206(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.392 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.416 0 0) (bruijn ##.k.412 2 0))
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
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.103 9 2) (bruijn ##.k.417 0 0) (bruijn ##.k.125 8 1) (bruijn ##.xs.216 2 2) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.55.218 1 0)) (bruijn ##.vals.217 2 3))))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        statics->up->vars[3]));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.218 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.55.218 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31) (bruijn ##.kk.1.127 6 1)) ((bruijn ##.k.412 1 0) #f)) ((bruijn ##.k.412 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k158, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31, self)))),
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.215 0 1)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k157) (##inline ##vcore.cdr (bruijn ##.expr.46.203 1 0))) ((bruijn ##.k.412 0 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.203 0 0)) (##vcore.call-with-values (bruijn ##.k.388 3 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30)) ((bruijn ##.k.388 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30, self)))));
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.202 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k146) (##inline ##vcore.cdr (bruijn ##.expr.45.202 0 0))) ((bruijn ##.k.388 2 0) #f))
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
  // (if (bruijn ##.p.389 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k145) (##inline ##vcore.cdr (bruijn ##.expr.126 3 2))) ((bruijn ##.k.388 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126 2 2)) ((bruijn ##.equal?.77 4 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144) '##letrec (##inline ##vcore.car (bruijn ##.expr.126 2 2))) ((bruijn ##.k.388 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.369 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.368 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32) (bruijn ##.kk.1.127 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32, self)))),
      self->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.58.221 4 1) (bruijn ##.k.379 1 0) (bruijn ##.expr.60.223 2 1) (bruijn ##.x.380 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.60.223 1 1))) ((bruijn ##.reverse.76 8 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k162) (bruijn ##.xs.57.224 1 2)) ((bruijn ##.k.379 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k162, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.58.221 5 1) (bruijn ##.k.374 1 0) (bruijn ##.expr.60.223 3 1) (bruijn ##.x.375 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.76 9 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k165) (bruijn ##.xs.57.224 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k165, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.59.225 0 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k164) (##inline ##vcore.cdr (bruijn ##.expr.60.223 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.60.223 2 1)) (bruijn ##.xs.57.224 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k164, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.373 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda36, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.372 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda35) (bruijn ##.loop.222 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0lambda35, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k161) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k163))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222_V0k163, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.222) #f (bruijn ##.loop.222 0 0) (bruijn ##.k.371 1 0) (bruijn ##.expr.126 4 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D222(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.370 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.384 0 0) (bruijn ##.k.382 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.p.230 0 2) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 5 1) (bruijn ##.k.386 0 0) (bruijn ##.k.125 4 1) (bruijn ##.x.229 0 1)) ((bruijn ##.k.386 0 0) #f))
if(VDecodeBool(
_var2)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.74 5 14) (bruijn ##.k.385 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39) #t (bruijn ##.xs.228 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39, self)))),
      VEncodeBool(true),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.227 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38) (bruijn ##.kk.1.127 1 1)) ((bruijn ##.k.382 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k166, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k160) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k160, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37, self)))));
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
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.367 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.573 0 0) ((bruijn ##.k.572 1 0) #t) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.102 2 1) (bruijn ##.k.572 1 0) (bruijn ##.k.231 1 1) (bruijn ##.body.233 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (##qualified-call (vanity compiler variables memtail) #t (bruijn ##.memtail.104 1 3) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167) (bruijn ##.k.231 0 1) (bruijn ##.xs.232 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k167, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0memtail(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.576 0 0) ((bruijn ##.k.574 1 0) (bruijn ##.p.576 0 0)) (##qualified-call (vanity compiler variables memtail) #t (bruijn ##.memtail.104 2 3) (bruijn ##.k.574 1 0) (bruijn ##.x.234 1 1) (##inline ##vcore.cdr (bruijn ##.args.235 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0memtail(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.235 0 2)) ((close _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k168) (##inline ##vcore.eq? (bruijn ##.x.234 0 1) (##inline ##vcore.car (bruijn ##.args.235 0 2)))) ((bruijn ##.k.574 0 0) (##inline ##vcore.eq? (bruijn ##.x.234 0 1) (bruijn ##.args.235 0 2))))
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
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.symbol->string (bruijn ##.k.588 1 0) (bruijn ##.x.589 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.640 1 0) (##qualified-call (vanity compiler variables mangle-symbol) #t (bruijn ##.mangle-symbol.106 7 5) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k171) (bruijn ##.e.240 2 0)) ((bruijn ##.compiler-error.78 8 18) (bruijn ##.k.588 0 0) (##string ##.string.652) (bruijn ##.e.240 2 0)))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k171, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _V60_V0vanity_V0compiler_V0variables)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 18)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D652.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables mangle-library ##.loop.237) #f (bruijn ##.loop.237 5 0) (bruijn ##.k.582 4 0) (bruijn ##.x.584 0 0) (##inline ##vcore.cdr (bruijn ##.ks.239 4 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.string-append.79 8 19) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k173) (bruijn ##.x.586 0 0) (bruijn ##.knil.238 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 19)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k173, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.640) ((##vcore.symbol? (bruijn ##.e.240 1 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k170) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k172)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k172, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.ks.239 0 2)) ((bruijn ##.k.582 0 0) (bruijn ##.knil.238 0 1)) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k169) (##inline ##vcore.car (bruijn ##.ks.239 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237_V0k169, self)), 1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables mangle-library ##.loop.237) #f (bruijn ##.loop.237 1 0) (bruijn ##.k.579 3 0) (##string ##.string.653) (bruijn ##.x.590 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D653.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // (basic-block 1 1 (##.reg.639) ((##vcore.string? (bruijn ##.lib.236 1 1))) (if (bruijn ##.reg.639 0 0) ((bruijn ##.k.579 1 0) (bruijn ##.lib.236 1 1)) (if (##inline ##vcore.pair? (bruijn ##.lib.236 1 1)) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237")) ((bruijn ##.reverse.76 4 16) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k174) (bruijn ##.lib.236 2 1))) ((bruijn ##.compiler-error.78 3 18) (bruijn ##.k.579 1 0) (##string ##.string.654) (bruijn ##.lib.236 1 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D237, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[16]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k174, self)))),
      statics->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[18]), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D654.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.reg.642 1 0) #\#) ((bruijn ##.display.82 7 22) (bruijn ##.k.617 0 0) (##string ##.string.655) (bruijn ##.port.244 2 0)) ((bruijn ##.display.82 7 22) (bruijn ##.k.617 0 0) (##string ##.string.656) (bruijn ##.port.244 2 0)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('#')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D655.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D656.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
static void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k180(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (bruijn ##.k.592 2 0) (bruijn ##.ret.247 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->vars[0],
      self->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.80 10 20) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k180) (bruijn ##.port.244 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k180, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\#) ((bruijn ##.k.597 0 0) (##string ##.string.657)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\!) ((bruijn ##.k.597 0 0) (##string ##.string.658)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\$) ((bruijn ##.k.597 0 0) (##string ##.string.659)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\%) ((bruijn ##.k.597 0 0) (##string ##.string.660)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\&) ((bruijn ##.k.597 0 0) (##string ##.string.661)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\*) ((bruijn ##.k.597 0 0) (##string ##.string.662)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\/) ((bruijn ##.k.597 0 0) (##string ##.string.663)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\:) ((bruijn ##.k.597 0 0) (##string ##.string.664)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\<) ((bruijn ##.k.597 0 0) (##string ##.string.665)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\=) ((bruijn ##.k.597 0 0) (##string ##.string.666)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\>) ((bruijn ##.k.597 0 0) (##string ##.string.667)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\?) ((bruijn ##.k.597 0 0) (##string ##.string.668)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\^) ((bruijn ##.k.597 0 0) (##string ##.string.669)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\_) ((bruijn ##.k.597 0 0) (##string ##.string.670)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\~) ((bruijn ##.k.597 0 0) (##string ##.string.671)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\+) ((bruijn ##.k.597 0 0) (##string ##.string.672)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\-) ((bruijn ##.k.597 0 0) (##string ##.string.673)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\.) ((bruijn ##.k.597 0 0) (##string ##.string.674)) (if (##inline ##vcore.eq? (bruijn ##.reg.644 1 0) '#\@) ((bruijn ##.k.597 0 0) (##string ##.string.675)) (basic-block 1 1 (##.reg.646) ((##vcore.string-ref (bruijn ##.str.242 9 0) (bruijn ##.i.246 4 1))) ((bruijn ##.k.597 1 0) (bruijn ##.reg.646 0 0))))))))))))))))))))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('#')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('!')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D658.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('$')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('%')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D660.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('&')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D661.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('*')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D662.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('/')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D663.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar(':')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D664.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('<')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D665.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('=')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D666.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('>')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D667.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('?')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D668.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('^')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('_')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D670.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('~')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D671.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('+')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D672.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('-')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D673.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('.')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D674.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('@')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D675.sym, VPOINTER_OTHER));
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
static void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k183(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.645) ((##vcore.+ (bruijn ##.i.246 4 1) 1)) (##qualified-call (vanity compiler variables mangle-symbol ##.loop.245) #f (bruijn ##.loop.245 5 0) (bruijn ##.k.592 4 0) (bruijn ##.reg.645 0 0)))
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
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.82 11 22) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k183) (bruijn ##.x.595 0 0) (bruijn ##.port.244 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 22)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k183, self)))),
      _var0,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.643) ((##vcore.= (bruijn ##.i.246 1 1) (bruijn ##.reg.641 5 0))) (if (bruijn ##.reg.643 0 0) ((bruijn ##.get-output-string.81 9 21) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k179) (bruijn ##.port.244 4 0)) (basic-block 1 1 (##.reg.644) ((##vcore.string-ref (bruijn ##.str.242 7 0) (bruijn ##.i.246 2 1))) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k181) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k182)))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k179, self)))),
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245_V0k182, self)))));
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k178(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245")) (##qualified-call (vanity compiler variables mangle-symbol ##.loop.245) #f (bruijn ##.loop.245 0 0) (bruijn ##.k.591 5 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245, self))));
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
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D245(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.642) ((##vcore.string-ref (bruijn ##.str.242 3 0) 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k177) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k178)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k177, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k178, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.641) ((##vcore.string-length (bruijn ##.str.242 1 0))) ((bruijn ##.open-output-string.83 4 23) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k176)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k176, self)))));
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
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k175) (bruijn ##.sym.241 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k175, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.79 5 19) (bruijn ##.k.619 3 0) (##string ##.string.676) (bruijn ##.x.620 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D676.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold-right.84 4 24) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k186) (bruijn ##.string-append.79 4 19) (##string ##.string.657) (bruijn ##.x.621 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k186, self)))),
      statics->up->up->up->vars[19],
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.73 3 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k185) (##intrinsic ##vcore.symbol->string) (bruijn ##.x.622 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k185, self)))),
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
  // ((bruijn ##.map.73 2 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k184) (bruijn ##.mangle-symbol.106 1 5) (bruijn ##.name.249 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k184, self)))),
      statics->vars[5],
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.79 5 19) (bruijn ##.k.623 3 0) (##string ##.string.677) (bruijn ##.x.624 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D677.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold-right.84 4 24) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k189) (bruijn ##.string-append.79 4 19) (##string ##.string.657) (bruijn ##.x.625 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k189, self)))),
      statics->up->up->up->vars[19],
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.73 3 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k188) (##intrinsic ##vcore.symbol->string) (bruijn ##.x.626 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k188, self)))),
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
  // ((bruijn ##.map.73 2 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k187) (bruijn ##.mangle-symbol.106 1 5) (bruijn ##.name.250 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k187, self)))),
      statics->vars[5],
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
  // (##letrec (vanity compiler variables) 8 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables" "_V60_V0vanity_V0compiler_V0variables") (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q" "_V60_V0vanity_V0compiler_V0variables") (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q" "_V60_V0vanity_V0compiler_V0variables") (close "_V50_V0vanity_V0compiler_V0variables_V0memtail" "_V60_V0vanity_V0compiler_V0variables") (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__library" "_V60_V0vanity_V0compiler_V0variables") (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol" "_V60_V0vanity_V0compiler_V0variables") (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function" "_V60_V0vanity_V0compiler_V0variables") (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment" "_V60_V0vanity_V0compiler_V0variables")) ((bruijn ##.k.259 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-symbol (bruijn ##.mangle-symbol.106 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-library (bruijn ##.mangle-library.105 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-qualified-function (bruijn ##.mangle-qualified-function.107 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-environment (bruijn ##.mangle-environment.108 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'free-variables (bruijn ##.free-variables.101 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'variable-pure? (bruijn ##.variable-pure?.102 0 1)) '()))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0variables = self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment, _V60_V0vanity_V0compiler_V0variables))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0variables_V20", &_V60_V0vanity_V0compiler_V0variables);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__symbol,
        self->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__library,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__qualified__function,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__environment,
        self->vars[7]),
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
  // (##vcore.call-with-values (bruijn ##.k.252 0 0) (close _V0vanity_V0compiler_V0variables_V20_V0lambda2) (close _V0vanity_V0compiler_V0variables_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0variables_V20 = (VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda1;
