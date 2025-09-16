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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D574 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D573 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D572 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D571 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D570 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0fold__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fold-right" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0variable__pure_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0variable__pure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "variable-pure\?" };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "free-variables" };
VWEAK VWORD _V0mangle__qualified__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0mangle__qualified__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "mangle-qualified-function" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D569 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D568 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V20" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D567 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "non-symbol in library path:" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D566 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D565 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D564 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D563 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D562 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D561 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D560 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D559 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D558 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D555 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D553 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D552 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D551 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D550 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D549 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_B" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D548 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D547 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V10" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V50" };
static __attribute__((constructor)) void VDllMain1() {
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0fold__right = VEncodePointer(VLookupConstant("_V0fold__right", &_VW_V0fold__right), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VLookupConstant("_V0cdddr", &_VW_V0cdddr), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0variable__pure_Q = VEncodePointer(VLookupConstant("_V0variable__pure_Q", &_VW_V0variable__pure_Q), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VLookupConstant("_V0free__variables", &_VW_V0free__variables), VPOINTER_OTHER);
  _V0mangle__qualified__function = VEncodePointer(VLookupConstant("_V0mangle__qualified__function", &_VW_V0mangle__qualified__function), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VLookupConstant("_V10qualified__case__lambda", &_VW_V10qualified__case__lambda), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VLookupConstant("_V10qualified__lambda", &_VW_V10qualified__lambda), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VLookupConstant("_V10basic__intrinsic", &_VW_V10basic__intrinsic), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VLookupConstant("_V10intrinsic", &_VW_V10intrinsic), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0memtail, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__library, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, _var0, _var1);
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.192 27 0) (bruijn ##.k.215 3 0) (##string ##.string.545) (bruijn ##.x.216 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D545.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.194 24 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k31) (bruijn ##.x.192 26 0) (##string ##.string.546) (bruijn ##.x.217 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k31, self)))),
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D546.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.193 24 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k30) (##intrinsic ##vcore.symbol->string) (bruijn ##.x.218 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k30, self)))),
      _V40_V10vcore_Dsymbol___Gstring,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##.x.193 23 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k29) (bruijn ##.mangle-symbol.80 1 1) (bruijn ##.name.86 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k29, self)))),
      statics->vars[1],
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.reg.537 1 0) #\#) ((bruijn ##.x.197 24 0) (bruijn ##.k.248 0 0) (##string ##.string.547) (bruijn ##.port.90 2 0)) ((bruijn ##.x.197 24 0) (bruijn ##.k.248 0 0) (##string ##.string.548) (bruijn ##.port.90 2 0)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('#')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D547.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D548.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.221 3 0) (bruijn ##.ret.93 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->up->vars[0],
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.195 30 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k37) (bruijn ##.port.90 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k37, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.246 0 0) ((bruijn ##.k.228 18 0) (##string ##.string.566)) (basic-block 1 1 (##.reg.541) ((##vcore.string-ref (bruijn ##.str.88 29 0) (bruijn ##.i.92 23 1))) ((bruijn ##.k.228 19 0) (bruijn ##.reg.541 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D566.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 29-1, 0),
      VGetArg(statics, 23-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.245 0 0) ((bruijn ##.k.228 17 0) (##string ##.string.565)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k57) (bruijn ##.reg.539 19 0) '#\@))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D565.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k57, self)))),
      VGetArg(statics, 19-1, 0),
      VEncodeChar('@'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.244 0 0) ((bruijn ##.k.228 16 0) (##string ##.string.564)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k56) (bruijn ##.reg.539 18 0) '#\.))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D564.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k56, self)))),
      VGetArg(statics, 18-1, 0),
      VEncodeChar('.'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.243 0 0) ((bruijn ##.k.228 15 0) (##string ##.string.563)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k55) (bruijn ##.reg.539 17 0) '#\-))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D563.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k55, self)))),
      VGetArg(statics, 17-1, 0),
      VEncodeChar('-'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.242 0 0) ((bruijn ##.k.228 14 0) (##string ##.string.562)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k54) (bruijn ##.reg.539 16 0) '#\+))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D562.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k54, self)))),
      VGetArg(statics, 16-1, 0),
      VEncodeChar('+'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.241 0 0) ((bruijn ##.k.228 13 0) (##string ##.string.561)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k53) (bruijn ##.reg.539 15 0) '#\~))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D561.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k53, self)))),
      VGetArg(statics, 15-1, 0),
      VEncodeChar('~'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) ((bruijn ##.k.228 12 0) (##string ##.string.560)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k52) (bruijn ##.reg.539 14 0) '#\_))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D560.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k52, self)))),
      VGetArg(statics, 14-1, 0),
      VEncodeChar('_'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.239 0 0) ((bruijn ##.k.228 11 0) (##string ##.string.559)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k51) (bruijn ##.reg.539 13 0) '#\^))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D559.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k51, self)))),
      VGetArg(statics, 13-1, 0),
      VEncodeChar('^'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.238 0 0) ((bruijn ##.k.228 10 0) (##string ##.string.558)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k50) (bruijn ##.reg.539 12 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D558.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k50, self)))),
      VGetArg(statics, 12-1, 0),
      VEncodeChar('?'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.237 0 0) ((bruijn ##.k.228 9 0) (##string ##.string.557)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k49) (bruijn ##.reg.539 11 0) '#\>))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D557.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k49, self)))),
      VGetArg(statics, 11-1, 0),
      VEncodeChar('>'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.236 0 0) ((bruijn ##.k.228 8 0) (##string ##.string.556)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k48) (bruijn ##.reg.539 10 0) '#\=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D556.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k48, self)))),
      VGetArg(statics, 10-1, 0),
      VEncodeChar('='));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.235 0 0) ((bruijn ##.k.228 7 0) (##string ##.string.555)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k47) (bruijn ##.reg.539 9 0) '#\<))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D555.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k47, self)))),
      VGetArg(statics, 9-1, 0),
      VEncodeChar('<'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.234 0 0) ((bruijn ##.k.228 6 0) (##string ##.string.554)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k46) (bruijn ##.reg.539 8 0) '#\:))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D554.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k46, self)))),
      VGetArg(statics, 8-1, 0),
      VEncodeChar(':'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.233 0 0) ((bruijn ##.k.228 5 0) (##string ##.string.553)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k45) (bruijn ##.reg.539 7 0) '#\/))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D553.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k45, self)))),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('/'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) ((bruijn ##.k.228 4 0) (##string ##.string.552)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k44) (bruijn ##.reg.539 6 0) '#\*))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D552.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k44, self)))),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('*'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.231 0 0) ((bruijn ##.k.228 3 0) (##string ##.string.551)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k43) (bruijn ##.reg.539 5 0) '#\&))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D551.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k43, self)))),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('&'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.230 0 0) ((bruijn ##.k.228 2 0) (##string ##.string.550)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k42) (bruijn ##.reg.539 4 0) '#\%))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D550.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k42, self)))),
      statics->up->up->up->vars[0],
      VEncodeChar('%'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.229 0 0) ((bruijn ##.k.228 1 0) (##string ##.string.549)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k41) (bruijn ##.reg.539 3 0) '#\$))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D549.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k41, self)))),
      statics->up->up->vars[0],
      VEncodeChar('$'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.227 1 0) ((bruijn ##.k.228 0 0) (##string ##.string.546)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k40) (bruijn ##.reg.539 2 0) '#\!))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D546.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k40, self)))),
      statics->up->vars[0],
      VEncodeChar('!'));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.540) ((##vcore.+ (bruijn ##.i.92 6 1) 1)) (##qualified-call (vanity compiler variables mangle-symbol ##.loop.91) (bruijn ##.loop.91 7 0) (bruijn ##.k.221 6 0) (bruijn ##.reg.540 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.197 30 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k59) (bruijn ##.x.226 0 0) (bruijn ##.port.90 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k59, self)))),
      _var0,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k39) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k58))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k39, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k58, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.538) ((##vcore.= (bruijn ##.i.92 1 1) (bruijn ##.reg.536 6 0))) (if (bruijn ##.reg.538 0 0) ((bruijn ##.x.196 28 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k36) (bruijn ##.port.90 5 0)) (basic-block 1 1 (##.reg.539) ((##vcore.string-ref (bruijn ##.str.88 8 0) (bruijn ##.i.92 2 1))) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k38) (bruijn ##.reg.539 0 0) '#\#))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k36, self)))),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      statics->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91_V0k38, self)))),
      self->vars[0],
      VEncodeChar('#'));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91")) (##qualified-call (vanity compiler variables mangle-symbol ##.loop.91) (bruijn ##.loop.91 0 0) (bruijn ##.k.219 6 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D91(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.537) ((##vcore.string-ref (bruijn ##.str.88 3 0) 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k34) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k35)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k35, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.536) ((##vcore.string-length (bruijn ##.str.88 1 0))) ((bruijn ##.x.198 20 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k33)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k33, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k32) (bruijn ##.sym.87 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k32, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.symbol->string (bruijn ##.k.259 1 0) (bruijn ##.x.260 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.543 1 0) (##qualified-call (vanity compiler variables mangle-symbol) (bruijn ##.mangle-symbol.80 7 1) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k62) (bruijn ##.e.99 2 0)) ((bruijn ##.x.199 23 0) (bruijn ##.k.259 0 0) (##string ##.string.567) (bruijn ##.e.99 2 0)))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k62, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D567.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables mangle-library ##.loop.96) (bruijn ##.loop.96 5 0) (bruijn ##.k.253 4 0) (bruijn ##.x.255 0 0) (##inline ##vcore.cdr (bruijn ##.ks.98 4 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.192 30 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k64) (bruijn ##.x.257 0 0) (bruijn ##.knil.97 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k64, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.543) ((##vcore.symbol? (bruijn ##.e.99 1 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k61) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k63)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k61, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k63, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.ks.98 0 2)) ((bruijn ##.k.253 0 0) (bruijn ##.knil.97 0 1)) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k60) (##inline ##vcore.car (bruijn ##.ks.98 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96_V0k60, self)), 1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables mangle-library ##.loop.96) (bruijn ##.loop.96 1 0) (bruijn ##.k.250 3 0) (##string ##.string.568) (bruijn ##.x.261 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D568.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (basic-block 1 1 (##.reg.542) ((##vcore.string? (bruijn ##.lib.95 1 1))) (if (bruijn ##.reg.542 0 0) ((bruijn ##.k.250 1 0) (bruijn ##.lib.95 1 1)) (if (##inline ##vcore.pair? (bruijn ##.lib.95 1 1)) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96")) ((bruijn ##.x.200 18 0) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k65) (bruijn ##.lib.95 2 1))) ((bruijn ##.x.199 18 0) (bruijn ##.k.250 1 0) (##string ##.string.569) (bruijn ##.lib.95 1 1)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D96, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k65, self)))),
      statics->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D569.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.264 0 0) ((bruijn ##.k.262 1 0) (bruijn ##.p.264 0 0)) (##qualified-call (vanity compiler variables memtail) (bruijn ##.memtail.82 2 3) (bruijn ##.k.262 1 0) (bruijn ##.x.100 1 1) (##inline ##vcore.cdr (bruijn ##.args.101 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[3]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0memtail(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0memtail(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.101 0 2)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0memtail_V0k66) (bruijn ##.x.100 0 1) (##inline ##vcore.car (bruijn ##.args.101 0 2))) (##vcore.eqv? (bruijn ##.k.262 0 0) (bruijn ##.x.100 0 1) (bruijn ##.args.101 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail_V0k66, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      _var1,
      _var2);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.268 0 0) ((bruijn ##.k.267 1 0) #t) (##qualified-call (vanity compiler variables variable-pure?) (bruijn ##.variable-pure?.84 2 5) (bruijn ##.k.267 1 0) (bruijn ##.k.102 1 1) (bruijn ##.body.104 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[5]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
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
  // (##qualified-call (vanity compiler variables memtail) (bruijn ##.memtail.82 1 3) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k67) (bruijn ##.k.102 0 1) (bruijn ##.xs.103 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[3]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k67, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0memtail(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.423 0 0) (bruijn ##.k.421 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.424 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.422 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda3) (bruijn ##.kk.1.107 2 1)) ((bruijn ##.k.421 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda3, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 2 2)) ((bruijn ##.x.202 16 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69) 'quote (##inline ##vcore.car (bruijn ##.expr.106 2 2))) ((bruijn ##.k.421 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.417 0 0) (bruijn ##.k.415 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.418 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.416 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda4) (bruijn ##.kk.1.107 3 1)) ((bruijn ##.k.415 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda4, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 3 2)) ((bruijn ##.x.202 17 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.106 3 2))) ((bruijn ##.k.415 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.411 0 0) (bruijn ##.k.409 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.412 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.410 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5) (bruijn ##.kk.1.107 4 1)) ((bruijn ##.k.409 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 4 2)) ((bruijn ##.x.202 18 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.106 4 2))) ((bruijn ##.k.409 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.405 0 0) (bruijn ##.k.403 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.406 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.404 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6) (bruijn ##.kk.1.107 5 1)) ((bruijn ##.k.403 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 5 2)) ((bruijn ##.x.202 19 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81) '##basic-intrinsic (##inline ##vcore.car (bruijn ##.expr.106 5 2))) ((bruijn ##.k.403 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81, self)))),
      _V10basic__intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.398 0 0) (bruijn ##.k.393 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) (bruijn ##.variable-pure-body?.83 11 4) (bruijn ##.k.399 0 0) (bruijn ##.k.105 10 1) (##inline ##vcore.car (bruijn ##.expr.8.114 2 0)) (##inline ##vcore.car (bruijn ##.expr.9.116 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 4));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.116 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.116 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7) (bruijn ##.kk.1.107 8 1)) ((bruijn ##.k.393 3 0) #f)) ((bruijn ##.k.393 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.114 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87) (##inline ##vcore.cdr (bruijn ##.expr.8.114 0 0))) ((bruijn ##.k.393 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.394 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.106 7 2))) ((bruijn ##.k.393 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 6 2)) ((bruijn ##.x.202 20 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85) 'lambda (##inline ##vcore.car (bruijn ##.expr.106 6 2))) ((bruijn ##.k.393 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.386 0 0) (bruijn ##.k.384 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) (bruijn ##.variable-pure-body?.83 12 4) (bruijn ##.k.388 1 0) (bruijn ##.k.105 11 1) (##inline ##vcore.car (bruijn ##.body.120 1 1)) (bruijn ##.x.390 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 4));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.p.121 0 2) ((bruijn ##.x.203 23 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93) (bruijn ##.body.120 0 1)) ((bruijn ##.k.388 0 0) #f))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93, self)))),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.201 24 0) (bruijn ##.k.387 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9) #t (##inline ##vcore.cdr (bruijn ##.expr.106 9 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9, self)))),
      VEncodeBool(true),
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.385 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8) (bruijn ##.kk.1.107 7 1)) ((bruijn ##.k.384 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 7 2)) ((bruijn ##.x.202 21 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.106 7 2))) ((bruijn ##.k.384 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.379 0 0) (bruijn ##.k.373 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) (bruijn ##.variable-pure-body?.83 14 4) (bruijn ##.k.380 0 0) (bruijn ##.k.105 13 1) (##inline ##vcore.car (bruijn ##.expr.13.125 2 0)) (##inline ##vcore.car (bruijn ##.expr.14.127 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 4));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.127 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.127 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10) (bruijn ##.kk.1.107 11 1)) ((bruijn ##.k.373 4 0) #f)) ((bruijn ##.k.373 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.125 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99) (##inline ##vcore.cdr (bruijn ##.expr.13.125 0 0))) ((bruijn ##.k.373 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.123 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98) (##inline ##vcore.cdr (bruijn ##.expr.12.123 0 0))) ((bruijn ##.k.373 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.374 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97) (##inline ##vcore.cdr (bruijn ##.expr.106 9 2))) ((bruijn ##.k.373 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 8 2)) ((bruijn ##.x.202 22 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.106 8 2))) ((bruijn ##.k.373 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.366 0 0) (bruijn ##.k.363 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) (bruijn ##.variable-pure-body?.83 15 4) (bruijn ##.k.368 1 0) (bruijn ##.k.105 14 1) (##inline ##vcore.car (bruijn ##.body.133 1 1)) (bruijn ##.x.370 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 4));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (bruijn ##.p.134 0 2) ((bruijn ##.x.203 26 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106) (bruijn ##.body.133 0 1)) ((bruijn ##.k.368 0 0) #f))
if(VDecodeBool(
_var2)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106, self)))),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.201 27 0) (bruijn ##.k.367 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12) #t (##inline ##vcore.cdr (bruijn ##.expr.16.130 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, self)))),
      VEncodeBool(true),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.130 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11) (bruijn ##.kk.1.107 10 1)) ((bruijn ##.k.363 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.364 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104) (##inline ##vcore.cdr (bruijn ##.expr.106 10 2))) ((bruijn ##.k.363 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 9 2)) ((bruijn ##.x.202 23 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.106 9 2))) ((bruijn ##.k.363 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.356 0 0) (bruijn ##.k.351 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.359 0 0)) (##qualified-call (vanity compiler variables variable-pure?) (bruijn ##.variable-pure?.84 16 5) (bruijn ##.k.357 1 0) (bruijn ##.k.105 15 1) (##inline ##vcore.car (bruijn ##.expr.19.138 2 0))) ((bruijn ##.k.357 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 5));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113) (##inline ##vcore.car (bruijn ##.expr.18.136 2 0)) (bruijn ##.k.105 14 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k113, self)))),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.138 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.19.138 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13) (bruijn ##.kk.1.107 12 1)) ((bruijn ##.k.351 3 0) #f)) ((bruijn ##.k.351 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k112, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.136 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111) (##inline ##vcore.cdr (bruijn ##.expr.18.136 0 0))) ((bruijn ##.k.351 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k111, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.352 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110) (##inline ##vcore.cdr (bruijn ##.expr.106 11 2))) ((bruijn ##.k.351 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k110, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 10 2)) ((bruijn ##.x.202 24 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k109) 'set! (##inline ##vcore.car (bruijn ##.expr.106 10 2))) ((bruijn ##.k.351 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k109, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.345 0 0) (bruijn ##.k.340 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.347 0 0) ((bruijn ##.k.346 1 0) (bruijn ##.p.347 0 0)) (##qualified-call (vanity compiler variables variable-pure?) (bruijn ##.variable-pure?.84 17 5) (bruijn ##.k.346 1 0) (bruijn ##.k.105 16 1) (##inline ##vcore.car (bruijn ##.expr.22.143 2 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 5));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120) (##inline ##vcore.car (bruijn ##.expr.21.141 2 0)) (bruijn ##.k.105 15 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120, self)))),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VGetArg(statics, 15-1, 1));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.143 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.143 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14) (bruijn ##.kk.1.107 13 1)) ((bruijn ##.k.340 3 0) #f)) ((bruijn ##.k.340 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.141 0 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118) (##inline ##vcore.cdr (bruijn ##.expr.21.141 0 0))) ((bruijn ##.k.340 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.341 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117) (##inline ##vcore.cdr (bruijn ##.expr.106 12 2))) ((bruijn ##.k.340 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 11 2)) ((bruijn ##.x.202 25 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116) 'define (##inline ##vcore.car (bruijn ##.expr.106 11 2))) ((bruijn ##.k.340 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k116, self)))),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.148 5 1) (bruijn ##.k.325 2 0) (bruijn ##.expr.30.150 3 1) (bruijn ##.x.326 1 0) (bruijn ##.x.327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.200 36 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k127) (bruijn ##.vals.27.152 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k127, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.30.150 1 1))) ((bruijn ##.x.200 35 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k126) (bruijn ##.xs.26.151 1 2)) ((bruijn ##.k.325 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k126, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.156 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.32.156 0 0))) ((bruijn ##.kk.29.153 3 1) (bruijn ##.k.317 1 0) (##inline ##vcore.cdr (bruijn ##.expr.30.150 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.31.154 2 0)) (bruijn ##.xs.26.151 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.32.156 0 0)) (bruijn ##.vals.27.152 6 3))) ((bruijn ##.k.317 1 0) #f)) ((bruijn ##.k.317 1 0) #f))
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
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.154 1 0)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k131) (##inline ##vcore.cdr (bruijn ##.expr.31.154 1 0))) ((bruijn ##.k.317 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k131, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.148 9 1) (bruijn ##.k.312 4 0) (bruijn ##.expr.30.150 7 1) (bruijn ##.x.314 1 0) (bruijn ##.x.315 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.200 40 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k134) (bruijn ##.vals.27.152 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k134, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.200 39 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k133) (bruijn ##.xs.26.151 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k133, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k130) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k132))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k132, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k129) (##inline ##vcore.car (bruijn ##.expr.30.150 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k129, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.311 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda18, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.309 1 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda17) (bruijn ##.loop.149 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0lambda17, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k125) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k128))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k125, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149_V0k128, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.149) (bruijn ##.loop.149 0 0) (bruijn ##.k.308 1 0) (##inline ##vcore.car (bruijn ##.expr.24.146 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D149(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.307 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.333 0 0) (bruijn ##.k.329 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) (bruijn ##.variable-pure-body?.83 18 4) (bruijn ##.k.334 0 0) (bruijn ##.k.105 17 1) (bruijn ##.xs.159 2 2) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.33.161 1 0)) (bruijn ##.vals.160 2 3))))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 4));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        statics->up->vars[3]));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.161 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.161 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k136) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20) (bruijn ##.kk.1.107 15 1)) ((bruijn ##.k.329 1 0) #f)) ((bruijn ##.k.329 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k136, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.158 0 1)) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k135) (##inline ##vcore.cdr (bruijn ##.expr.24.146 1 0))) ((bruijn ##.k.329 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k135, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.146 0 0)) (##vcore.call-with-values (bruijn ##.k.304 2 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19)) ((bruijn ##.k.304 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.305 0 0) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124) (##inline ##vcore.cdr (bruijn ##.expr.106 13 2))) ((bruijn ##.k.304 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k124, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106 12 2)) ((bruijn ##.x.202 26 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123) 'letrec (##inline ##vcore.car (bruijn ##.expr.106 12 2))) ((bruijn ##.k.304 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k123, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.283 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.270 12 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21) (bruijn ##.kk.1.107 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 12-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, self)))),
      VGetArg(statics, 12-1, 1));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.36.164 4 1) (bruijn ##.k.295 1 0) (bruijn ##.expr.38.166 2 1) (bruijn ##.x.296 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.38.166 1 1))) ((bruijn ##.x.200 33 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k140) (bruijn ##.xs.35.167 1 2)) ((bruijn ##.k.295 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k140, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.36.164 7 1) (bruijn ##.k.289 2 0) (bruijn ##.expr.38.166 5 1) (bruijn ##.x.291 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.200 36 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k143) (bruijn ##.xs.35.167 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k143, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.37.168 0 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k142) (##inline ##vcore.cdr (bruijn ##.expr.38.166 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.38.166 3 1)) (bruijn ##.xs.35.167 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k142, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.288 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda25))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda25, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.286 1 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda24) (bruijn ##.loop.165 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0lambda24, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k139) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k141))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k139, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165_V0k141, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.165) (bruijn ##.loop.165 0 0) (bruijn ##.k.285 1 0) (bruijn ##.expr.106 15 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 2);
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D165(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.284 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda23, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.300 0 0) (bruijn ##.k.298 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.p.173 0 2) (##qualified-call (vanity compiler variables variable-pure?) (bruijn ##.variable-pure?.84 16 5) (bruijn ##.k.302 0 0) (bruijn ##.k.105 15 1) (bruijn ##.x.172 0 1)) ((bruijn ##.k.302 0 0) #f))
if(VDecodeBool(
_var2)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 5));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.201 29 0) (bruijn ##.k.301 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda28) #t (bruijn ##.xs.171 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda28, self)))),
      VEncodeBool(true),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.170 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27) (bruijn ##.kk.1.107 12 1)) ((bruijn ##.k.298 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k144, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k138) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k122, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k115, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k121, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k114, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (##vcore.call/cc (bruijn ##.k.269 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda2, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.429 0 0) (##qualified-call (vanity compiler variables free-variables ##.merge.175) (bruijn ##.merge.175 3 0) (bruijn ##.k.427 2 0) (##inline ##vcore.cdr (bruijn ##.a.177 2 1)) (bruijn ##.b.178 2 2)) (##qualified-call (vanity compiler variables free-variables ##.merge.175) (bruijn ##.merge.175 3 0) (bruijn ##.k.427 2 0) (##inline ##vcore.cdr (bruijn ##.a.177 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.177 2 1)) (bruijn ##.b.178 2 2))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
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
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.214 5 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k146) (bruijn ##.x.434 0 0) (bruijn ##.b.178 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k146, self)))),
      _var0,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.a.177 0 1)) ((bruijn ##.k.427 0 0) (bruijn ##.b.178 0 2)) ((bruijn ##.x.211 7 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k145) (bruijn ##.a.177 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175_V0k145, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.435 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.179 1 1)) (bruijn ##.x.438 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.a.179 0 1)) (##qualified-call (vanity compiler variables free-variables ##.append-improper.176) (bruijn ##.append-improper.176 1 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176_V0k147) (##inline ##vcore.cdr (bruijn ##.a.179 0 1)) (bruijn ##.b.180 0 2)) (if (##inline ##vcore.null? (bruijn ##.a.179 0 1)) ((bruijn ##.k.435 0 0) (bruijn ##.b.180 0 2)) ((bruijn ##.k.435 0 0) (##inline ##vcore.cons (bruijn ##.a.179 0 1) (bruijn ##.b.180 0 2)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176_V0k147, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
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
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.445 1 0) ((bruijn ##.k.446 0 0) (bruijn ##.p.445 1 0)) ((bruijn ##.x.205 17 0) (bruijn ##.k.446 0 0) (bruijn ##.expr.183 3 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      _var0,
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.443 0 0) ((bruijn ##.k.441 3 0) '()) ((bruijn ##.x.204 18 0) (bruijn ##.k.441 3 0) (##inline ##vcore.cons (bruijn ##.expr.183 3 2) (bruijn ##.context.184 3 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        statics->up->up->vars[3]));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k149) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k150, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.175) (bruijn ##.merge.175 16 0) (bruijn ##.k.441 14 0) (bruijn ##.x.453 2 0) (bruijn ##.x.454 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 14 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k163) (bruijn ##.bound.182 13 1) (bruijn ##.x.455 0 0) (bruijn ##.expr.183 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k163, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.207 24 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k162) (bruijn ##.expr.183 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k162, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.merge.175) (bruijn ##.merge.175 13 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k161) (bruijn ##.x.456 2 0) (bruijn ##.x.457 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k161, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 11 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k160) (bruijn ##.bound.182 10 1) (bruijn ##.x.458 0 0) (bruijn ##.expr.183 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k160, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.209 19 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k159) (bruijn ##.expr.183 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k159, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 9 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k158) (bruijn ##.bound.182 8 1) (bruijn ##.x.459 0 0) (bruijn ##.expr.183 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k158, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.175) (bruijn ##.merge.175 14 0) (bruijn ##.k.441 12 0) (bruijn ##.x.461 2 0) (bruijn ##.x.462 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 12 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k168) (bruijn ##.bound.182 11 1) (bruijn ##.x.463 0 0) (bruijn ##.expr.183 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k168, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.209 20 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k167) (bruijn ##.expr.183 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k167, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 10 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k166) (bruijn ##.bound.182 9 1) (bruijn ##.x.464 0 0) (bruijn ##.expr.183 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k166, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 13 0) (bruijn ##.k.441 12 0) (bruijn ##.x.466 1 0) (bruijn ##.x.467 0 0) (bruijn ##.expr.183 12 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.213 17 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k172) (bruijn ##.expr.183 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k172, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.176) (bruijn ##.append-improper.176 12 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k171) (bruijn ##.x.468 0 0) (bruijn ##.bound.182 10 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k171, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 14 0) (bruijn ##.k.441 13 0) (bruijn ##.x.470 1 0) (bruijn ##.x.471 0 0) (bruijn ##.expr.183 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 13-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.210 21 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k176) (bruijn ##.expr.183 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k176, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.176) (bruijn ##.append-improper.176 13 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k175) (bruijn ##.x.472 0 0) (bruijn ##.bound.182 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k175, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.175) (bruijn ##.merge.175 20 0) (bruijn ##.k.474 5 0) (bruijn ##.x.476 1 0) (bruijn ##.x.477 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181 ##.loop2.185) (bruijn ##.loop2.185 5 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k182) (##inline ##vcore.cdr (bruijn ##.cases.186 4 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k182, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 17 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k181) (bruijn ##.x.479 1 0) (bruijn ##.x.480 0 0) (##inline ##vcore.car (bruijn ##.cases.186 3 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k181, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.212 22 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k180) (bruijn ##.cases.186 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k180, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.176) (bruijn ##.append-improper.176 16 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k179) (bruijn ##.x.482 0 0) (bruijn ##.bound.182 14 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k179, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.cases.186 0 1)) ((bruijn ##.k.474 0 0) '()) ((bruijn ##.x.211 21 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k178) (bruijn ##.cases.186 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185_V0k178, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.175) (bruijn ##.merge.175 21 0) (bruijn ##.k.485 5 0) (bruijn ##.x.487 1 0) (bruijn ##.x.488 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181 ##.loop2.187) (bruijn ##.loop2.187 5 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k188) (##inline ##vcore.cdr (bruijn ##.cases.188 4 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k188, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 18 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k187) (bruijn ##.x.490 1 0) (bruijn ##.x.491 0 0) (##inline ##vcore.car (bruijn ##.cases.188 3 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k187, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.212 23 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k186) (bruijn ##.cases.188 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k186, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.176) (bruijn ##.append-improper.176 17 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k185) (bruijn ##.x.493 0 0) (bruijn ##.bound.182 15 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k185, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.cases.188 0 1)) ((bruijn ##.k.485 0 0) '()) ((bruijn ##.x.211 22 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k184) (bruijn ##.cases.188 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187_V0k184, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181 ##.loop2.187) (bruijn ##.loop2.187 1 0) (bruijn ##.k.441 14 0) (bruijn ##.x.494 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 20 0) (bruijn ##.k.441 19 0) (bruijn ##.x.496 3 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.499 1 0) (bruijn ##.x.500 0 0))) (bruijn ##.expr.183 19 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 19-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        _var0));
    VWORD _arg3 = 
      VGetArg(statics, 19-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.213 24 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k196) (bruijn ##.expr.183 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k196, self)))),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.193 43 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k195) (bruijn ##.x.203 33 0) (bruijn ##.x.501 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k195, self)))),
      VGetArg(statics, 33-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.203 32 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k194) (bruijn ##.expr.183 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k194, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.176) (bruijn ##.append-improper.176 17 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k193) (bruijn ##.x.502 0 0) (bruijn ##.bound.182 15 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k193, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.193 40 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k192) (##intrinsic ##vcore.car) (bruijn ##.x.503 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k192, self)))),
      _V40_V10vcore_Dcar,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.201 33 0) (bruijn ##.k.441 15 0) (bruijn ##.merge.175 17 0) '() (bruijn ##.x.506 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      VGetArg(statics, 15-1, 0),
      VGetArg(statics, 17-1, 0),
      VNULL,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 16 0) (bruijn ##.k.507 0 0) (bruijn ##.bound.182 15 1) (bruijn ##.e.189 0 1) (bruijn ##.expr.183 15 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VGetArg(statics, 15-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.504 0 0) (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 15 0) (bruijn ##.k.441 14 0) (bruijn ##.bound.182 14 1) (##inline ##vcore.cdr (bruijn ##.expr.183 14 2)) (bruijn ##.expr.183 14 2)) ((bruijn ##.x.193 40 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k198) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0lambda29) (bruijn ##.expr.183 14 2)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2));
    VWORD _arg3 = 
      VGetArg(statics, 14-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k198, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0lambda29, self)))),
      VGetArg(statics, 14-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.495 0 0) ((bruijn ##.x.203 29 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k191) (bruijn ##.expr.183 13 2)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k197) (##inline ##vcore.car (bruijn ##.expr.183 13 2)) 'set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k191, self)))),
      VGetArg(statics, 13-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k197, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 2)),
      _V0set_B);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.484 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187")) ((bruijn ##.x.213 19 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k189) (bruijn ##.expr.183 13 2))) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k190) (##inline ##vcore.car (bruijn ##.expr.183 12 2)) 'letrec))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D187, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k189, self)))),
      VGetArg(statics, 13-1, 2));
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k190, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)),
      _V0letrec);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.473 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185")) (##qualified-call (vanity compiler variables free-variables ##.loop.181 ##.loop2.185) (bruijn ##.loop2.185 0 0) (bruijn ##.k.441 12 0) (##inline ##vcore.cdr (bruijn ##.expr.183 12 2)))) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k183) (##inline ##vcore.car (bruijn ##.expr.183 11 2)) '##qualified-case-lambda))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V10_Dloop2_D185(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k183, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 2)),
      _V10qualified__case__lambda);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.469 0 0) ((bruijn ##.x.209 20 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k174) (bruijn ##.expr.183 10 2)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k177) (##inline ##vcore.car (bruijn ##.expr.183 10 2)) 'case-lambda))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k174, self)))),
      VGetArg(statics, 10-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k177, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)),
      _V0case__lambda);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.465 0 0) ((bruijn ##.x.203 25 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k170) (bruijn ##.expr.183 9 2)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k173) (##inline ##vcore.car (bruijn ##.expr.183 9 2)) '##qualified-lambda))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k170, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k173, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)),
      _V10qualified__lambda);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.460 0 0) ((bruijn ##.x.203 24 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k165) (bruijn ##.expr.183 8 2)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k169) (##inline ##vcore.car (bruijn ##.expr.183 8 2)) 'lambda))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k165, self)))),
      VGetArg(statics, 8-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k169, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)),
      _V0lambda);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.452 0 0) ((bruijn ##.x.203 23 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k157) (bruijn ##.expr.183 7 2)) ((bruijn ##.x.208 18 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k164) (##inline ##vcore.car (bruijn ##.expr.183 7 2)) (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'and (##inline ##vcore.qcons 'or '())))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k157, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k164, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)),
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        _V0and,
        VInlineCons2(runtime,
        _V0or,
        VNULL))));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.451 0 0) ((bruijn ##.k.441 6 0) '()) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k156) (##inline ##vcore.car (bruijn ##.expr.183 6 2)) 'if))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k156, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)),
      _V0if);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.450 0 0) ((bruijn ##.k.441 5 0) '()) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k155) (##inline ##vcore.car (bruijn ##.expr.183 5 2)) '##basic-intrinsic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k155, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)),
      _V10basic__intrinsic);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.449 0 0) ((bruijn ##.k.441 4 0) '()) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k154) (##inline ##vcore.car (bruijn ##.expr.183 4 2)) '##intrinsic))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k154, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]),
      _V10intrinsic);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.448 0 0) ((bruijn ##.k.441 3 0) '()) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k153) (##inline ##vcore.car (bruijn ##.expr.183 3 2)) '##foreign.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k153, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[2]),
      _V10foreign_Dfunction);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.447 0 0) ((bruijn ##.k.441 2 0) '()) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k152) (##inline ##vcore.car (bruijn ##.expr.183 2 2)) 'quote))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k152, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      _V0quote);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181, got ~D~N"
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
  // (basic-block 1 1 (##.reg.544) ((##vcore.symbol? (bruijn ##.expr.183 1 2))) (if (bruijn ##.reg.544 0 0) ((bruijn ##.x.208 12 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k148) (bruijn ##.expr.183 1 2) (bruijn ##.bound.182 1 1)) ((bruijn ##.x.206 14 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k151) (bruijn ##.expr.183 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k148, self)))),
      statics->vars[2],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181_V0k151, self)))),
      statics->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175") (close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181")) (##qualified-call (vanity compiler variables free-variables ##.loop.181) (bruijn ##.loop.181 0 0) (bruijn ##.k.426 2 0) '() (bruijn ##.expr.174 2 1) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D175, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D176, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D181(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
    }
}
static void _V0vanity_V0compiler_V0variables_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((close "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function") (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol") (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__library") (close "_V50_V0vanity_V0compiler_V0variables_V0memtail") (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q") (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q") (close "_V50_V0vanity_V0compiler_V0variables_V0free__variables")) ((bruijn ##.k.191 29 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-symbol (bruijn ##.mangle-symbol.80 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-library (bruijn ##.mangle-library.81 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-qualified-function (bruijn ##.mangle-qualified-function.79 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'free-variables (bruijn ##.free-variables.85 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'variable-pure? (bruijn ##.variable-pure?.84 0 5)) '())))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__symbol,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__library,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__qualified__function,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0free__variables,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0variable__pure_Q,
        self->vars[5]),
        VNULL))))));
    }
}
static void _V0vanity_V0compiler_V0variables_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 22 0) (close _V0vanity_V0compiler_V0variables_V20_V0k28) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k28, self)))),
      _V0assv);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 21 0) (close _V0vanity_V0compiler_V0variables_V20_V0k27) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k27, self)))),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 20 0) (close _V0vanity_V0compiler_V0variables_V20_V0k26) 'cdar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k26, self)))),
      _V0cdar);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 19 0) (close _V0vanity_V0compiler_V0variables_V20_V0k25) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k25, self)))),
      _V0caar);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 18 0) (close _V0vanity_V0compiler_V0variables_V20_V0k24) 'cdddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k24, self)))),
      _V0cdddr);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 17 0) (close _V0vanity_V0compiler_V0variables_V20_V0k23) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k23, self)))),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 16 0) (close _V0vanity_V0compiler_V0variables_V20_V0k22) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k22, self)))),
      _V0memv);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 15 0) (close _V0vanity_V0compiler_V0variables_V20_V0k21) 'cadddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k21, self)))),
      _V0cadddr);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 14 0) (close _V0vanity_V0compiler_V0variables_V20_V0k20) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k20, self)))),
      _V0atom_Q);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 13 0) (close _V0vanity_V0compiler_V0variables_V20_V0k19) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k19, self)))),
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 12 0) (close _V0vanity_V0compiler_V0variables_V20_V0k18) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k18, self)))),
      _V0list);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 11 0) (close _V0vanity_V0compiler_V0variables_V20_V0k17) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k17, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 10 0) (close _V0vanity_V0compiler_V0variables_V20_V0k16) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k16, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 9 0) (close _V0vanity_V0compiler_V0variables_V20_V0k15) 'fold)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k15, self)))),
      _V0fold);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 8 0) (close _V0vanity_V0compiler_V0variables_V20_V0k14) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k14, self)))),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 7 0) (close _V0vanity_V0compiler_V0variables_V20_V0k13) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k13, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 6 0) (close _V0vanity_V0compiler_V0variables_V20_V0k12) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k12, self)))),
      _V0open__output__string);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 5 0) (close _V0vanity_V0compiler_V0variables_V20_V0k11) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k11, self)))),
      _V0display);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 4 0) (close _V0vanity_V0compiler_V0variables_V20_V0k10) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k10, self)))),
      _V0get__output__string);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 3 0) (close _V0vanity_V0compiler_V0variables_V20_V0k9) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k9, self)))),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 2 0) (close _V0vanity_V0compiler_V0variables_V20_V0k8) 'fold-right)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k8, self)))),
      _V0fold__right);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 1 0) (close _V0vanity_V0compiler_V0variables_V20_V0k7) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k7, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.39 0 0) (close _V0vanity_V0compiler_V0variables_V20_V0k6) 'string-append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k6, self)))),
      _V0string__append);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0variables_V20_V0k5) (##string ##.string.570) (bruijn ##.x.532 3 0) (bruijn ##.x.533 2 0) (bruijn ##.x.534 1 0) (bruijn ##.x.535 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D570.sym, VPOINTER_OTHER),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k4) (##string ##.string.571))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D571.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k3) (##string ##.string.572))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D572.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k2) (##string ##.string.573))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D573.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k1) (##string ##.string.574))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D574.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0variables_V20 = (VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda1;
