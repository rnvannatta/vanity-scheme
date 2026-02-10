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

VEnv * _V60_V0vanity_V0compiler_V0lower;

VWEAK VWORD _V0to__functions;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0to__functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "to-functions" };
VWEAK VWORD _V0bruijn__ify;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bruijn__ify = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "bruijn-ify" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1888 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "bruijnify-pass: No matching case" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1887 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "bruijnify-pass: No matching lambda" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1886 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "global" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1885 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "to-functions iter-apply match statement exhausted" };
VWEAK VWORD _V10qualified__call;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10qualified__call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##qualified-call" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1884 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1883 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1882 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "string" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1881 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A_V0k~A" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1880 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "~A_V0lambda~A" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1879 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1878 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1877 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1876 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1875 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1874 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1873 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1872 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0mangle__foreign;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-foreign" };
VWEAK VWORD _V0mangle__environment;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0mangle__environment = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "mangle-environment" };
VWEAK VWORD _V0drop__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-right" };
VWEAK VWORD _V0mangle__qualified__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0mangle__qualified__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "mangle-qualified-function" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1871 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0to__functions = VEncodePointer(VInternSymbol(570485858, &_VW_V0to__functions.sym), VPOINTER_OTHER);
  _V0bruijn__ify = VEncodePointer(VInternSymbol(-1215450488, &_VW_V0bruijn__ify.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V10qualified__call = VEncodePointer(VInternSymbol(1058881829, &_VW_V10qualified__call.sym), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VInternSymbol(200115236, &_VW_V0basic__block.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VInternSymbol(-1641713520, &_VW_V10inline.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VInternSymbol(871318520, &_VW_V0continuation.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0close = VEncodePointer(VInternSymbol(-786291330, &_VW_V0close.sym), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VInternSymbol(-996132237, &_VW_V0bruijn.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V10string = VEncodePointer(VInternSymbol(-434610435, &_VW_V10string.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VInternSymbol(-1001750904, &_VW_V0split__at__right.sym), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VInternSymbol(67164350, &_VW_V0num__pairs.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VInternSymbol(-1605136215, &_VW_V0number_Q.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0mangle__foreign = VEncodePointer(VInternSymbol(646216672, &_VW_V0mangle__foreign.sym), VPOINTER_OTHER);
  _V0mangle__environment = VEncodePointer(VInternSymbol(724323660, &_VW_V0mangle__environment.sym), VPOINTER_OTHER);
  _V0drop__right = VEncodePointer(VInternSymbol(-377735426, &_VW_V0drop__right.sym), VPOINTER_OTHER);
  _V0mangle__qualified__function = VEncodePointer(VInternSymbol(1519413566, &_VW_V0mangle__qualified__function.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VInternSymbol(-1891438302, &_VW_V0mangle__symbol.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VInternSymbol(-297841368, &_VW_V0list__ref.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions, _var0, _var1, _var2);
static void _V0vanity_V0compiler_V0lower_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.779 9 0) (##string ##.string.1871) (bruijn ##.x.780 0 0) 'equal? 'list 'map 'list-ref 'values 'cadr 'mangle-symbol 'reverse 'mangle-qualified-function 'drop-right 'mangle-environment 'mangle-foreign 'lookup-intrinsic-name 'error 'compiler-error 'assv 'gensym 'cdar 'number? 'assoc 'sprintf 'num-pairs 'split-at-right 'length)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 27,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1871.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0list,
      _V0map,
      _V0list__ref,
      _V0values,
      _V0cadr,
      _V0mangle__symbol,
      _V0reverse,
      _V0mangle__qualified__function,
      _V0drop__right,
      _V0mangle__environment,
      _V0mangle__foreign,
      _V0lookup__intrinsic__name,
      _V0error,
      _V0compiler__error,
      _V0assv,
      _V0gensym,
      _V0cdar,
      _V0number_Q,
      _V0assoc,
      _V0sprintf,
      _V0num__pairs,
      _V0split__at__right,
      _V0length);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0lower_V20_V0k9) (bruijn ##.x.781 7 0) (bruijn ##.x.782 6 0) (bruijn ##.x.783 5 0) (bruijn ##.x.784 4 0) (bruijn ##.x.785 3 0) (bruijn ##.x.786 2 0) (bruijn ##.x.787 1 0) (bruijn ##.x.788 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k9, self)))),
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k8) (##string ##.string.1872))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D1872.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k7) (##string ##.string.1873))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1873.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k6) (##string ##.string.1874))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1874.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k5) (##string ##.string.1875))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1875.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k4) (##string ##.string.1876))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1876.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k3) (##string ##.string.1877))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1877.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k2) (##string ##.string.1878))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1878.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k1) (##string ##.string.1879))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1879.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.791 2 0) (bruijn ##.x.792 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->vars[0],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.sprintf.253 5 21) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k11) (##string ##.string.1880) (bruijn ##.fun.301 1 1) (bruijn ##.curlambda.278 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 21)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D1880.sym, VPOINTER_OTHER),
      statics->vars[1],
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1852) ((##vcore.+ (bruijn ##.curlambda.278 4 2) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k10) (bruijn ##.curlambda.278 4 2) (bruijn ##.reg.1852 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283_V0k10, self)))),
      VEncodeInt(4l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.794 2 0) (bruijn ##.x.795 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->vars[0],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.sprintf.253 5 21) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k13) (##string ##.string.1881) (bruijn ##.fun.302 1 1) (bruijn ##.curcont.277 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 21)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k13, self)))),
      VEncodePointer(&_V10_Dstring_D1881.sym, VPOINTER_OTHER),
      statics->vars[1],
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1853) ((##vcore.+ (bruijn ##.curcont.277 4 1) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k12) (bruijn ##.curcont.277 4 1) (bruijn ##.reg.1853 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284_V0k12, self)))),
      VEncodeInt(4l), VEncodeInt(1l),
      self->vars[0]
    );
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k17(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.797 3 0) (##inline ##vcore.car (bruijn ##.lookup.307 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCar2(runtime,
        self->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k17) (bruijn ##.literal-table.289 4 6) (##inline ##vcore.cons (bruijn ##.lookup.307 0 0) (bruijn ##.literal-table.289 4 6)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k17, self)))),
      VEncodeInt(4l), VEncodeInt(6l),
      VInlineCons2(runtime,
        _var0,
        statics->up->up->up->vars[6])
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.306 0 0) ((bruijn ##.k.797 2 0) (##inline ##vcore.car (bruijn ##.lookup.306 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k16) (##inline ##vcore.cons (bruijn ##.key.305 1 0) (bruijn ##.intrin.304 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k16, self)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.252 5 20) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k15) (bruijn ##.key.305 0 0) (bruijn ##.literal-table.289 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k15, self)))),
      _var0,
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.lifting-literals?.282 2 2) ((bruijn ##.list.234 4 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k14) '##intrinsic (bruijn ##.sym.303 0 1)) ((bruijn ##.list.234 4 2) (bruijn ##.k.797 0 0) '##intrinsic (bruijn ##.sym.303 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291_V0k14, self)))),
      _V10intrinsic,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      _var0,
      _V10intrinsic,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.799 9 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (bruijn ##.x.812 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k21(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cdar.250 12 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k22) (bruijn ##.literal-table.289 9 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k22, self)))),
      VGetArg(statics, 9-1, 6));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k21) (bruijn ##.literal-table.289 9 6) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.308 8 1) (bruijn ##.x.815 0 0)) (bruijn ##.literal-table.289 9 6)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k21, self)))),
      VEncodeInt(9l), VEncodeInt(6l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 1),
        _var0),
        VGetArg(statics, 9-1, 6))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.309 0 0) ((bruijn ##.k.799 7 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.lookup.309 0 0)) '()))) ((bruijn ##.gensym.249 11 17) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k20) (##string ##.string.1882)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        VInlineCdr2(runtime,
        _var0),
        VNULL)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k20, self)))),
      VEncodePointer(&_V10_Dstring_D1882.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.821 1 0)) (set! (bruijn ##.k.818 0 0) (bruijn ##.literal-table.289 10 6) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.308 9 1) '()) (bruijn ##.literal-table.289 10 6))) ((bruijn ##.k.818 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(10l), VEncodeInt(6l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 1),
        VNULL),
        VGetArg(statics, 10-1, 6))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.799 8 0) (bruijn ##.x.308 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k24) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k25))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k25, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.801 0 0) ((bruijn ##.k.799 2 0) (bruijn ##.x.308 2 1)) (basic-block 1 1 (##.reg.1855) ((##vcore.void? (bruijn ##.x.308 3 1))) (if (bruijn ##.reg.1855 0 0) ((bruijn ##.k.799 3 0) (bruijn ##.x.308 3 1)) (basic-block 1 1 (##.reg.1856) ((##vcore.foreign-pointer? (bruijn ##.x.308 4 1))) (if (bruijn ##.reg.1856 0 0) ((bruijn ##.k.799 4 0) (bruijn ##.x.308 4 1)) (basic-block 1 1 (##.reg.1857) ((##vcore.char? (bruijn ##.x.308 5 1))) (if (bruijn ##.reg.1857 0 0) ((bruijn ##.k.799 5 0) (bruijn ##.x.308 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.308 5 1) #t) ((bruijn ##.k.799 5 0) (bruijn ##.x.308 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.308 5 1) #f) ((bruijn ##.k.799 5 0) (bruijn ##.x.308 5 1)) (if (##inline ##vcore.null? (bruijn ##.x.308 5 1)) ((bruijn ##.k.799 5 0) (bruijn ##.x.308 5 1)) (basic-block 1 1 (##.reg.1858) ((##vcore.string? (bruijn ##.x.308 6 1))) (if (bruijn ##.reg.1858 0 0) ((bruijn ##.assoc.252 10 20) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k19) (bruijn ##.x.308 6 1) (bruijn ##.literal-table.289 7 6)) (basic-block 1 1 (##.reg.1859) ((##vcore.symbol? (bruijn ##.x.308 7 1))) (if (bruijn ##.reg.1859 0 0) ((bruijn ##.assv.248 11 16) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k23) (bruijn ##.x.308 7 1) (bruijn ##.literal-table.289 8 6)) ((bruijn ##.compiler-error.247 11 15) (bruijn ##.k.799 7 0) (##string ##.string.1883) (bruijn ##.x.308 7 1))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVoidP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VForeignPointerP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(true)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k19, self)))),
      VGetArg(statics, 6-1, 1),
      VGetArg(statics, 7-1, 6));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k23, self)))),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 8-1, 6));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 15)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1883.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
    }
}
    }
}
}
}
}
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.lifting-literals?.282 2 2) (basic-block 1 1 (##.reg.1854) ((##vcore.int? (bruijn ##.x.308 1 1))) (if (bruijn ##.reg.1854 0 0) ((bruijn ##.k.799 1 0) (bruijn ##.x.308 1 1)) ((bruijn ##.number?.251 5 19) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k18) (bruijn ##.x.308 1 1)))) ((bruijn ##.k.799 0 0) (bruijn ##.x.308 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292_V0k18, self)))),
      statics->vars[1]);
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.841 0 0) (bruijn ##.k.838 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.842 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lamb.311 5 2)) (##inline ##vcore.cons (bruijn ##.x.844 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 5 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k29) (bruijn ##.fun.310 4 1) (##inline ##vcore.car (bruijn ##.expr.114.316 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k29, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.316 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.114.316 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k28) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda5) (bruijn ##.kk.111.312 2 1)) ((bruijn ##.k.838 1 0) #f)) ((bruijn ##.k.838 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k28, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda5, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.311 2 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k27) (##inline ##vcore.cdr (bruijn ##.lamb.311 2 2))) ((bruijn ##.k.838 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k27, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.830 0 0) (bruijn ##.k.825 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.831 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lamb.311 7 2)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.834 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 7 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k36) (bruijn ##.fun.310 6 1) (##inline ##vcore.car (bruijn ##.expr.117.321 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k36, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.321 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.117.321 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k35) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda6) (bruijn ##.kk.111.312 4 1)) ((bruijn ##.k.825 3 0) #f)) ((bruijn ##.k.825 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda6, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.827 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k34) (##inline ##vcore.cdr (bruijn ##.expr.116.320 1 0))) ((bruijn ##.k.825 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k34, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.320 0 0)) ((bruijn ##.equal?.233 7 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k33) '+ (##inline ##vcore.car (bruijn ##.expr.116.320 0 0))) ((bruijn ##.k.825 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k33, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.311 2 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k32) (##inline ##vcore.cdr (bruijn ##.lamb.311 2 2))) ((bruijn ##.k.825 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k32, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.246 5 14) (bruijn ##.k.823 0 0) (##string ##.string.1884))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 14)), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D1884.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k31) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k37))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k31, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k37, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k26) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k30))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0k30, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.822 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1070 0 0) (bruijn ##.k.1068 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1071 0 0) (bruijn ##.expr.324 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1069 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k40) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda8) (bruijn ##.kk.118.326 2 1)) ((bruijn ##.k.1068 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda8, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k39) 'bruijn (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.1068 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k39, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1055 0 0) (bruijn ##.k.1050 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1056 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.334 1 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k49) (bruijn ##.functions.288 9 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.334 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.122.330 4 0)) (##inline ##vcore.cons (bruijn ##.x.1064 0 0) '())) '()))) (bruijn ##.functions.288 9 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k49, self)))),
      VEncodeInt(9l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 9-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 8 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k48) (bruijn ##.fun.323 7 1) (##inline ##vcore.car (bruijn ##.expr.123.332 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k48, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.283) #f (bruijn ##.genlambda.283 7 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k47) (bruijn ##.fun.323 6 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k47, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.332 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.123.332 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k46) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda9) (bruijn ##.kk.118.326 4 1)) ((bruijn ##.k.1050 3 0) #f)) ((bruijn ##.k.1050 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k46, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda9, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.330 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k45) (##inline ##vcore.cdr (bruijn ##.expr.122.330 0 0))) ((bruijn ##.k.1050 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k45, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1051 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k44) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.1050 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k44, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k43) 'lambda (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.1050 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k43, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1035 0 0) (bruijn ##.k.1028 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1036 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.341 1 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k60) (bruijn ##.functions.288 11 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.341 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.125.336 6 0)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1045 0 0) '()))) '()))) (bruijn ##.functions.288 11 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k60, self)))),
      VEncodeInt(11l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
        VGetArg(statics, 11-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 10 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k59) (bruijn ##.fun.323 9 1) (##inline ##vcore.car (bruijn ##.expr.127.339 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k59, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.283) #f (bruijn ##.genlambda.283 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k58) (bruijn ##.fun.323 8 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k58, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.339 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.127.339 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k57) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda10) (bruijn ##.kk.118.326 6 1)) ((bruijn ##.k.1028 5 0) #f)) ((bruijn ##.k.1028 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda10, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1032 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k56) (##inline ##vcore.cdr (bruijn ##.expr.126.338 1 0))) ((bruijn ##.k.1028 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k56, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.338 0 0)) ((bruijn ##.equal?.233 9 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k55) '+ (##inline ##vcore.car (bruijn ##.expr.126.338 0 0))) ((bruijn ##.k.1028 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k55, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.336 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k54) (##inline ##vcore.cdr (bruijn ##.expr.125.336 0 0))) ((bruijn ##.k.1028 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k54, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1029 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k53) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.1028 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k53, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k52) 'lambda (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.1028 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k52, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1009 0 0) (bruijn ##.k.1002 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1010 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.351 4 0) (##inline ##vcore.cons (bruijn ##.x.1013 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-environment.243 18 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k77) (bruijn ##.x.1014 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k77, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k75(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.car (bruijn ##.expr.130.345 7 0)) ((bruijn ##.drop-right.242 17 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k76) (bruijn ##.name.344 8 0) 1) ((bruijn ##.k.1010 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.351 2 0) '()))))
if(VDecodeBool(
VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k76, self)))),
      VGetArg(statics, 8-1, 0),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k75) (bruijn ##.functions.288 14 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.351 2 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.348 5 0) (##inline ##vcore.cons (bruijn ##.x.1022 0 0) '())) '()))) (bruijn ##.functions.288 14 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k75, self)))),
      VEncodeInt(14l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 14-1, 5))
    );
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 13 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k74) (bruijn ##.lamb.351 1 0) (##inline ##vcore.car (bruijn ##.expr.132.349 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k74, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k73) (bruijn ##.qualified-functions.285 13 2) (##inline ##vcore.cons (bruijn ##.x.1024 0 0) (bruijn ##.qualified-functions.285 13 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k73, self)))),
      VEncodeInt(13l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 13-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.234 15 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k72) (bruijn ##.lamb.351 0 0) (bruijn ##.n.348 3 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k72, self)))),
      _var0,
      statics->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-qualified-function.241 14 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k71) (bruijn ##.name.344 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k71, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.132.349 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.132.349 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k70) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda11) (bruijn ##.kk.118.326 8 1)) ((bruijn ##.k.1002 7 0) #f)) ((bruijn ##.k.1002 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda11, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k69) (##inline ##vcore.cdr (bruijn ##.expr.131.347 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k69, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.347 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k68) (##inline ##vcore.car (bruijn ##.expr.131.347 0 0))) ((bruijn ##.k.1002 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k68, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.345 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k67) (##inline ##vcore.cdr (bruijn ##.expr.130.345 0 0))) ((bruijn ##.k.1002 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k67, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k66) (##inline ##vcore.cdr (bruijn ##.expr.129.343 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k66, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.343 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k65) (##inline ##vcore.car (bruijn ##.expr.129.343 0 0))) ((bruijn ##.k.1002 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k65, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1003 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k64) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.1002 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k64, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k63) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.1002 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k63, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.981 0 0) (bruijn ##.k.972 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.982 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.362 4 0) (##inline ##vcore.cons (bruijn ##.x.985 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-environment.243 20 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k96) (bruijn ##.x.986 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k96, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.car (bruijn ##.expr.135.355 9 0)) ((bruijn ##.drop-right.242 19 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k95) (bruijn ##.name.354 10 0) 1) ((bruijn ##.k.982 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.362 2 0) '()))))
if(VDecodeBool(
VInlineCar2(runtime,
        VGetArg(statics, 9-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k95, self)))),
      VGetArg(statics, 10-1, 0),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k94) (bruijn ##.functions.288 16 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.362 2 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.358 7 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.995 0 0) '()))) '()))) (bruijn ##.functions.288 16 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k94, self)))),
      VEncodeInt(16l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
        VGetArg(statics, 16-1, 5))
    );
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 15 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k93) (bruijn ##.lamb.362 1 0) (##inline ##vcore.car (bruijn ##.expr.138.360 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k93, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k92) (bruijn ##.qualified-functions.285 15 2) (##inline ##vcore.cons (bruijn ##.x.997 0 0) (bruijn ##.qualified-functions.285 15 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k92, self)))),
      VEncodeInt(15l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 15-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.234 17 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k91) (bruijn ##.lamb.362 0 0) (bruijn ##.n.358 5 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k91, self)))),
      _var0,
      VGetArg(statics, 5-1, 0),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-qualified-function.241 16 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k90) (bruijn ##.name.354 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k90, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.360 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.360 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k89) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda12) (bruijn ##.kk.118.326 10 1)) ((bruijn ##.k.972 9 0) #f)) ((bruijn ##.k.972 9 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k89, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda12, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.978 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k88) (##inline ##vcore.cdr (bruijn ##.expr.137.359 1 0))) ((bruijn ##.k.972 8 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k88, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.359 0 0)) ((bruijn ##.equal?.233 13 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k87) '+ (##inline ##vcore.car (bruijn ##.expr.137.359 0 0))) ((bruijn ##.k.972 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k87, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.136.357 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k86, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.357 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k85) (##inline ##vcore.car (bruijn ##.expr.136.357 0 0))) ((bruijn ##.k.972 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k85, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.355 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k84) (##inline ##vcore.cdr (bruijn ##.expr.135.355 0 0))) ((bruijn ##.k.972 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k84, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k83) (##inline ##vcore.cdr (bruijn ##.expr.134.353 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k83, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.353 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k82) (##inline ##vcore.car (bruijn ##.expr.134.353 0 0))) ((bruijn ##.k.972 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k82, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.973 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k81) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.972 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k81, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k80) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.972 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k80, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.962 0 0) (bruijn ##.k.960 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.963 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.365 1 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k103) (bruijn ##.functions.288 7 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.365 1 0) (##inline ##vcore.cons '#t (bruijn ##.x.968 0 0))) (bruijn ##.functions.288 7 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k103, self)))),
      VEncodeInt(7l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
        VGetArg(statics, 7-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.293) #f (bruijn ##.iter-lambda.293 7 10) (bruijn ##.k.969 0 0) (bruijn ##.fun.323 6 1) (bruijn ##.e.366 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k102) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda14) (##inline ##vcore.cdr (bruijn ##.expr.324 5 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k102, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda14, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.283) #f (bruijn ##.genlambda.283 5 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k101) (bruijn ##.fun.323 4 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k101, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.961 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k100) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda13) (bruijn ##.kk.118.326 2 1)) ((bruijn ##.k.960 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda13, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k99) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.960 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k99, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.938 0 0) (bruijn ##.k.934 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.939 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.373 4 0) (##inline ##vcore.cons (bruijn ##.x.947 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-environment.243 17 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k119) (bruijn ##.x.948 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k119, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k117(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.static?.371 5 0) ((bruijn ##.drop-right.242 16 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k118) (bruijn ##.name.369 7 0) 1) ((bruijn ##.k.939 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.373 2 0) '()))))
if(VDecodeBool(
VGetArg(statics, 5-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k118, self)))),
      VGetArg(statics, 7-1, 0),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k117) (bruijn ##.functions.288 13 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.373 2 0) (##inline ##vcore.cons '#t (bruijn ##.x.953 0 0))) (bruijn ##.functions.288 13 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k117, self)))),
      VEncodeInt(13l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
        VGetArg(statics, 13-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.293) #f (bruijn ##.iter-lambda.293 13 10) (bruijn ##.k.954 0 0) (bruijn ##.fun.323 12 1) (bruijn ##.e.374 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.235 15 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k116) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda16) (bruijn ##.cases.372 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k116, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda16, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k115) (bruijn ##.qualified-functions.285 12 2) (##inline ##vcore.cons (bruijn ##.x.956 0 0) (bruijn ##.qualified-functions.285 12 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k115, self)))),
      VEncodeInt(12l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 12-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.234 14 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k114) (bruijn ##.lamb.373 0 0) 0 #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k114, self)))),
      _var0,
      VEncodeInt(0l),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.cases.372 1 0))) (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 10 11) (bruijn ##.k.939 0 0) (bruijn ##.fun.323 9 1) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (bruijn ##.name.369 4 0) (##inline ##vcore.cons (bruijn ##.static?.371 2 0) (##inline ##vcore.car (bruijn ##.cases.372 1 0))))) (bruijn ##.func-position?.325 9 3)) ((bruijn ##.mangle-qualified-function.241 13 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k113) (bruijn ##.name.369 4 0)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCar2(runtime,
        statics->vars[0]))));
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k113, self)))),
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k112) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda15) (bruijn ##.kk.118.326 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k112, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda15, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k111) (##inline ##vcore.cdr (bruijn ##.expr.142.370 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k111, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.370 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k110) (##inline ##vcore.car (bruijn ##.expr.142.370 0 0))) ((bruijn ##.k.934 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k110, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k109) (##inline ##vcore.cdr (bruijn ##.expr.141.368 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k109, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.368 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k108) (##inline ##vcore.car (bruijn ##.expr.141.368 0 0))) ((bruijn ##.k.934 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k108, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.935 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k107) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.934 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k107, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k106) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.934 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k106, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.921 0 0) (bruijn ##.k.916 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k128(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.922 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.k.380 1 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k128) (bruijn ##.functions.288 9 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.380 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.144.376 4 0)) (##inline ##vcore.cons (bruijn ##.x.930 0 0) '())) '()))) (bruijn ##.functions.288 9 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k128, self)))),
      VEncodeInt(9l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 9-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 8 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k127) (bruijn ##.fun.323 7 1) (##inline ##vcore.car (bruijn ##.expr.145.378 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k127, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.gencont.284) #f (bruijn ##.gencont.284 7 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k126) (bruijn ##.fun.323 6 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k126, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.378 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.145.378 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k125) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda17) (bruijn ##.kk.118.326 4 1)) ((bruijn ##.k.916 3 0) #f)) ((bruijn ##.k.916 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k125, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda17, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.376 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k124) (##inline ##vcore.cdr (bruijn ##.expr.144.376 0 0))) ((bruijn ##.k.916 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k124, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.917 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k123) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.916 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k123, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k122) 'continuation (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.916 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k122, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.906 0 0) (bruijn ##.k.900 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.913 1 0)) (set! (bruijn ##.k.910 0 0) (bruijn ##.foreign-functions.286 12 3) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.mangled.391 2 0) (bruijn ##.expr.324 11 2)) (bruijn ##.foreign-functions.286 12 3))) ((bruijn ##.k.910 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(12l), VEncodeInt(3l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 11-1, 2)),
        VGetArg(statics, 12-1, 3))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.907 2 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons (bruijn ##.mangled.391 1 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k139) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k140))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k139, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k140, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.252 13 20) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k138) (bruijn ##.mangled.391 0 0) (bruijn ##.foreign-functions.286 10 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k138, self)))),
      _var0,
      VGetArg(statics, 10-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-foreign.244 12 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k137) (##inline ##vcore.car (bruijn ##.expr.150.388 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k137, self)))),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.388 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k136) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda18) (bruijn ##.kk.118.326 6 1)) ((bruijn ##.k.900 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k136, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda18, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.386 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k135) (##inline ##vcore.cdr (bruijn ##.expr.149.386 0 0))) ((bruijn ##.k.900 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k135, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.384 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k134) (##inline ##vcore.cdr (bruijn ##.expr.148.384 0 0))) ((bruijn ##.k.900 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k134, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.147.382 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k133) (##inline ##vcore.cdr (bruijn ##.expr.147.382 0 0))) ((bruijn ##.k.900 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k133, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.901 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k132) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.900 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k132, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k131) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.900 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k131, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.890 0 0) (bruijn ##.k.887 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.897 1 0)) (set! (bruijn ##.k.894 0 0) (bruijn ##.intrinsics.287 9 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.name.394 3 0) (bruijn ##.expr.324 8 2)) (bruijn ##.intrinsics.287 9 4))) ((bruijn ##.k.894 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(9l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VGetArg(statics, 8-1, 2)),
        VGetArg(statics, 9-1, 4))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.891 1 0) (##inline ##vcore.cons '##intrinsic (##inline ##vcore.cons (bruijn ##.name.394 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10intrinsic,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.291) #f (bruijn ##.lift-intrinsic!.291 8 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k150) (bruijn ##.name.394 2 0) (bruijn ##.name.394 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k150, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k148) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k149))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k149, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.252 10 20) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k147) (bruijn ##.name.394 1 0) (bruijn ##.intrinsics.287 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k147, self)))),
      statics->vars[0],
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k146) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda19) (bruijn ##.kk.118.326 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k146, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda19, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.393 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k145) (##inline ##vcore.car (bruijn ##.expr.152.393 0 0))) ((bruijn ##.k.887 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k145, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.888 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k144) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.887 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k144, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k143) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.887 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k143, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.877 0 0) (bruijn ##.k.874 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.884 1 0)) (set! (bruijn ##.k.881 0 0) (bruijn ##.intrinsics.287 9 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.name.397 3 0) (bruijn ##.expr.324 8 2)) (bruijn ##.intrinsics.287 9 4))) ((bruijn ##.k.881 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(9l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VGetArg(statics, 8-1, 2)),
        VGetArg(statics, 9-1, 4))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.878 1 0) (##inline ##vcore.cons '##basic-intrinsic (##inline ##vcore.cons (bruijn ##.name.397 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10basic__intrinsic,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.291) #f (bruijn ##.lift-intrinsic!.291 8 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k160) (bruijn ##.name.397 2 0) (bruijn ##.name.397 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k160, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k158) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k159))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k159, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.252 10 20) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k157) (bruijn ##.name.397 1 0) (bruijn ##.intrinsics.287 7 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k157, self)))),
      statics->vars[0],
      VGetArg(statics, 7-1, 4));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k156) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda20) (bruijn ##.kk.118.326 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k156, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda20, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.396 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k155) (##inline ##vcore.car (bruijn ##.expr.154.396 0 0))) ((bruijn ##.k.874 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k155, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.875 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k154) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.874 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k154, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k153) '##basic-intrinsic (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.874 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k153, self)))),
      _V10basic__intrinsic,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.867 0 0) (bruijn ##.k.863 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.868 1 0) (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.870 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.292) #f (bruijn ##.lift-literal.292 6 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k166) (##inline ##vcore.car (bruijn ##.expr.156.399 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k166, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.399 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.399 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k165) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda21) (bruijn ##.kk.118.326 3 1)) ((bruijn ##.k.863 2 0) #f)) ((bruijn ##.k.863 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k165, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda21, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.864 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k164) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.863 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k164, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k163) 'quote (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.863 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k163, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.856 0 0) (bruijn ##.k.853 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.857 1 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.158.402 2 0)) (bruijn ##.x.859 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 7 11) (bruijn ##.k.860 0 0) (bruijn ##.fun.323 6 1) (bruijn ##.x.405 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k172) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda23) (##inline ##vcore.cdr (bruijn ##.expr.158.402 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k172, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda23, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.402 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k171) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda22) (bruijn ##.kk.118.326 3 1)) ((bruijn ##.k.853 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k171, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda22, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.854 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k170) (##inline ##vcore.cdr (bruijn ##.expr.324 3 2))) ((bruijn ##.k.853 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k170, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.324 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k169) '##inline (##inline ##vcore.car (bruijn ##.expr.324 2 2))) ((bruijn ##.k.853 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k169, self)))),
      _V10inline,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k175(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.246 6 14) (bruijn ##.k.847 1 0) (##string ##.string.1884))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1884.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.848 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k175))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k175, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.intrin.407 0 0)) ((bruijn ##.k.849 2 0) (bruijn ##.expr.324 4 2)) (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.291) #f (bruijn ##.lift-intrinsic!.291 5 8) (bruijn ##.k.849 2 0) (bruijn ##.expr.324 4 2) (bruijn ##.intrin.407 0 0)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->up->up->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1860) ((##vcore.symbol? (bruijn ##.expr.324 3 2))) (if (bruijn ##.reg.1860 0 0) (if (bruijn ##.func-position?.325 3 3) ((bruijn ##.k.849 1 0) (bruijn ##.expr.324 3 2)) ((bruijn ##.lookup-intrinsic-name.245 7 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k176) (bruijn ##.expr.324 3 2))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.292) #f (bruijn ##.lift-literal.292 4 9) (bruijn ##.k.849 1 0) (bruijn ##.expr.324 3 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
if(VDecodeBool(
statics->up->up->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k176, self)))),
      statics->up->up->vars[2]);
}
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[9]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k173(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k174) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda24) (bruijn ##.kk.118.326 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k174, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda24, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k168) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k173))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k173, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k161(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k162) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k167))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k162, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k167, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k152) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k161))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k152, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k161, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k141(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k142) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k151))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k142, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k151, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k129(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k130) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k141))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k141, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k121) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k129))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k129, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k104(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k105) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k120))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k120, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k97(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k98) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k104))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k104, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k78(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k79) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k97, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k61(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k62) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k78))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k78, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k51) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k61))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k61, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k42) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k50))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k50, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k38) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0k41, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.846 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1293 0 0) (bruijn ##.k.1287 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1294 3 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.162.413 7 0)) (##inline ##vcore.cons (bruijn ##.x.1297 2 0) (##inline ##vcore.cons (bruijn ##.x.1299 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 11 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k186) (bruijn ##.x.1300 0 0) (##inline ##vcore.car (bruijn ##.expr.164.417 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k186, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.239 13 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k185) (bruijn ##.y.416 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k185, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.292) #f (bruijn ##.lift-literal.292 9 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k184) (bruijn ##.y.416 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k184, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.417 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.417 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k183) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda26) (bruijn ##.kk.159.410 6 1)) ((bruijn ##.k.1287 5 0) #f)) ((bruijn ##.k.1287 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k183, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda26, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k182) (##inline ##vcore.cdr (bruijn ##.expr.163.415 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k182, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.163.415 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k181) (##inline ##vcore.car (bruijn ##.expr.163.415 0 0))) ((bruijn ##.k.1287 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k181, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.413 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k180) (##inline ##vcore.cdr (bruijn ##.expr.162.413 0 0))) ((bruijn ##.k.1287 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k180, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1288 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k179) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1287 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k179, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k178) 'define (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1287 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k178, self)))),
      _V0define,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1273 0 0) (bruijn ##.k.1264 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1274 3 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1276 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons (bruijn ##.name.425 5 0) (##inline ##vcore.cdr (bruijn ##.expr.169.424 6 0)))) (##inline ##vcore.cons (bruijn ##.x.1280 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0set_B,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 0)))),
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 14 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k200) (bruijn ##.x.1281 0 0) (##inline ##vcore.car (bruijn ##.expr.170.427 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k200, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.239 16 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k199) (bruijn ##.name.425 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k199, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 12 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k198) (bruijn ##.fun.408 11 1) (##inline ##vcore.car (bruijn ##.expr.166.420 7 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k198, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0));
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.427 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.170.427 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k197) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda27) (bruijn ##.kk.159.410 9 1)) ((bruijn ##.k.1264 8 0) #f)) ((bruijn ##.k.1264 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k197, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda27, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k196) (##inline ##vcore.cdr (bruijn ##.expr.167.422 4 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k196, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.169.424 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k195) (##inline ##vcore.car (bruijn ##.expr.169.424 0 0))) ((bruijn ##.k.1264 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k195, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1269 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k194) (##inline ##vcore.cdr (bruijn ##.expr.168.423 1 0))) ((bruijn ##.k.1264 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k194, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.168.423 0 0)) ((bruijn ##.equal?.233 10 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k193) 'bruijn (##inline ##vcore.car (bruijn ##.expr.168.423 0 0))) ((bruijn ##.k.1264 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k193, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.167.422 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k192) (##inline ##vcore.car (bruijn ##.expr.167.422 0 0))) ((bruijn ##.k.1264 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k192, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.420 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k191) (##inline ##vcore.cdr (bruijn ##.expr.166.420 0 0))) ((bruijn ##.k.1264 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k191, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1265 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k190) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1264 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k190, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k189) 'set! (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1264 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k189, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1252 0 0) (bruijn ##.k.1246 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1253 4 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1255 3 0) (##inline ##vcore.cons (bruijn ##.x.1257 2 0) (##inline ##vcore.cons (bruijn ##.x.1259 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0set_B,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 12 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k212) (bruijn ##.x.1260 0 0) (##inline ##vcore.car (bruijn ##.expr.174.434 4 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k212, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.239 14 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k211) (bruijn ##.y.433 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k211, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.292) #f (bruijn ##.lift-literal.292 10 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k210) (bruijn ##.y.433 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k210, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 9 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k209) (bruijn ##.fun.408 8 1) (##inline ##vcore.car (bruijn ##.expr.172.430 4 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k209, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.174.434 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.174.434 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k208) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda28) (bruijn ##.kk.159.410 6 1)) ((bruijn ##.k.1246 5 0) #f)) ((bruijn ##.k.1246 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k208, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda28, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k207) (##inline ##vcore.cdr (bruijn ##.expr.173.432 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k207, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.432 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k206) (##inline ##vcore.car (bruijn ##.expr.173.432 0 0))) ((bruijn ##.k.1246 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k206, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.430 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k205) (##inline ##vcore.cdr (bruijn ##.expr.172.430 0 0))) ((bruijn ##.k.1246 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k205, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1247 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k204) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1246 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k204, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k203) 'set! (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1246 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k203, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1235 0 0) (bruijn ##.k.1229 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1236 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.1238 2 0) (##inline ##vcore.cons (bruijn ##.x.1240 1 0) (##inline ##vcore.cons (bruijn ##.x.1242 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 10 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k222) (bruijn ##.fun.408 9 1) (##inline ##vcore.car (bruijn ##.expr.178.441 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k222, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 9 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k221) (bruijn ##.fun.408 8 1) (##inline ##vcore.car (bruijn ##.expr.177.439 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k221, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 8 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k220) (bruijn ##.fun.408 7 1) (##inline ##vcore.car (bruijn ##.expr.176.437 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k220, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.178.441 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.178.441 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k219) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda29) (bruijn ##.kk.159.410 5 1)) ((bruijn ##.k.1229 4 0) #f)) ((bruijn ##.k.1229 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k219, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda29, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.177.439 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k218) (##inline ##vcore.cdr (bruijn ##.expr.177.439 0 0))) ((bruijn ##.k.1229 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k218, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.176.437 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k217) (##inline ##vcore.cdr (bruijn ##.expr.176.437 0 0))) ((bruijn ##.k.1229 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k217, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1230 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k216) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1229 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k216, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k215) 'if (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1229 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k215, self)))),
      _V0if,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1213 0 0) (bruijn ##.k.1207 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1214 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.450 2 0) '())) (bruijn ##.x.1216 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 11 11) (bruijn ##.k.1217 0 0) (bruijn ##.fun.408 10 1) (bruijn ##.x.451 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k232(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.235 13 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k233) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda31) (##inline ##vcore.cdr (bruijn ##.expr.409 9 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k233, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda31, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k232) (bruijn ##.functions.288 10 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.450 1 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.181.445 4 0)) (##inline ##vcore.cons (bruijn ##.x.1225 0 0) '())) '()))) (bruijn ##.functions.288 10 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k232, self)))),
      VEncodeInt(10l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 10-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 9 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k231) (bruijn ##.fun.408 8 1) (##inline ##vcore.car (bruijn ##.expr.182.447 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k231, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.283) #f (bruijn ##.genlambda.283 8 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k230) (bruijn ##.fun.408 7 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k230, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.182.447 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.182.447 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k229) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda30) (bruijn ##.kk.159.410 5 1)) ((bruijn ##.k.1207 4 0) #f)) ((bruijn ##.k.1207 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k229, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda30, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.181.445 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k228) (##inline ##vcore.cdr (bruijn ##.expr.181.445 0 0))) ((bruijn ##.k.1207 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k228, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1209 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k227) (##inline ##vcore.cdr (bruijn ##.expr.180.444 1 0))) ((bruijn ##.k.1207 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k227, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.180.444 0 0)) ((bruijn ##.equal?.233 7 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k226) 'lambda (##inline ##vcore.car (bruijn ##.expr.180.444 0 0))) ((bruijn ##.k.1207 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k226, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k225) (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1207 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k225, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1189 0 0) (bruijn ##.k.1181 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1190 4 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.463 3 0) '())) (bruijn ##.x.1192 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 15 11) (bruijn ##.k.1193 0 0) (bruijn ##.lamb.463 3 0) (bruijn ##.x.464 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k248(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.235 17 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k249) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda33) (##inline ##vcore.cdr (bruijn ##.expr.409 13 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k249, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda33, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k248) (bruijn ##.functions.288 14 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.463 2 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.459 5 0) (##inline ##vcore.cons (bruijn ##.x.1201 0 0) '())) '()))) (bruijn ##.functions.288 14 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k248, self)))),
      VEncodeInt(14l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 14-1, 5))
    );
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k246(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 13 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k247) (bruijn ##.lamb.463 1 0) (##inline ##vcore.car (bruijn ##.expr.188.460 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k247, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k246) (bruijn ##.qualified-functions.285 13 2) (##inline ##vcore.cons (bruijn ##.x.1203 0 0) (bruijn ##.qualified-functions.285 13 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k246, self)))),
      VEncodeInt(13l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 13-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.234 15 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k245) (bruijn ##.lamb.463 0 0) (bruijn ##.n.459 3 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k245, self)))),
      _var0,
      statics->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-qualified-function.241 14 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k244) (##inline ##vcore.car (bruijn ##.expr.185.454 5 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k244, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.188.460 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.188.460 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k243) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda32) (bruijn ##.kk.159.410 8 1)) ((bruijn ##.k.1181 7 0) #f)) ((bruijn ##.k.1181 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k243, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda32, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k242) (##inline ##vcore.cdr (bruijn ##.expr.187.458 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k242, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.187.458 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k241) (##inline ##vcore.car (bruijn ##.expr.187.458 0 0))) ((bruijn ##.k.1181 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k241, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.186.456 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k240) (##inline ##vcore.cdr (bruijn ##.expr.186.456 0 0))) ((bruijn ##.k.1181 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k240, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.185.454 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k239) (##inline ##vcore.cdr (bruijn ##.expr.185.454 0 0))) ((bruijn ##.k.1181 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k239, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1183 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k238) (##inline ##vcore.cdr (bruijn ##.expr.184.453 1 0))) ((bruijn ##.k.1181 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k238, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.184.453 0 0)) ((bruijn ##.equal?.233 7 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k237) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.184.453 0 0))) ((bruijn ##.k.1181 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k237, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k236) (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1181 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k236, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1169 0 0) (bruijn ##.k.1162 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1170 2 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.190.466 6 0)) (##inline ##vcore.cons (bruijn ##.x.1173 1 0) (##inline ##vcore.cons (bruijn ##.x.1175 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 10 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k259) (bruijn ##.fun.408 9 1) (##inline ##vcore.car (bruijn ##.expr.193.472 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k259, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 11 11) (bruijn ##.k.1176 1 0) (bruijn ##.x.1177 0 0) (bruijn ##.val.475 1 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.mangle-symbol.239 13 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k260) (bruijn ##.x.474 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k260, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 12 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k258) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda35) (##inline ##vcore.car (bruijn ##.expr.191.468 3 0)) (##inline ##vcore.car (bruijn ##.expr.192.470 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k258, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda35, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.193.472 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.193.472 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k257) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda34) (bruijn ##.kk.159.410 6 1)) ((bruijn ##.k.1162 5 0) #f)) ((bruijn ##.k.1162 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k257, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda34, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.192.470 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k256) (##inline ##vcore.cdr (bruijn ##.expr.192.470 0 0))) ((bruijn ##.k.1162 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k256, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.191.468 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k255) (##inline ##vcore.cdr (bruijn ##.expr.191.468 0 0))) ((bruijn ##.k.1162 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k255, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.190.466 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k254) (##inline ##vcore.cdr (bruijn ##.expr.190.466 0 0))) ((bruijn ##.k.1162 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k254, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1163 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k253) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1162 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k253, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k252) 'letrec (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1162 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k252, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1147 0 0) (bruijn ##.k.1139 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.path.478 6 0) (set! (bruijn ##.k.1157 0 0) (bruijn ##.static-environments.290 12 7) (##inline ##vcore.cons (bruijn ##.path.478 6 0) (bruijn ##.static-environments.290 12 7))) ((bruijn ##.k.1157 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 6-1, 0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(12l), VEncodeInt(7l),
      VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VGetArg(statics, 12-1, 7))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1148 2 0) (##inline ##vcore.cons '##letrec (##inline ##vcore.cons (bruijn ##.path.478 7 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.196.479 6 0)) (##inline ##vcore.cons (bruijn ##.x.1152 1 0) (##inline ##vcore.cons (bruijn ##.x.1154 0 0) '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10letrec,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 12 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k274) (bruijn ##.fun.408 11 1) (##inline ##vcore.car (bruijn ##.expr.199.485 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k274, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 13 11) (bruijn ##.k.1155 1 0) (bruijn ##.x.1156 0 0) (bruijn ##.val.488 1 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.mangle-symbol.239 15 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k275) (bruijn ##.x.487 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k275, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k272(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.235 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k273) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda37) (##inline ##vcore.car (bruijn ##.expr.197.481 3 0)) (##inline ##vcore.car (bruijn ##.expr.198.483 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k273, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda37, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k271) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k272))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k271, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k272, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.199.485 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.199.485 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k270) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda36) (bruijn ##.kk.159.410 8 1)) ((bruijn ##.k.1139 7 0) #f)) ((bruijn ##.k.1139 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k270, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda36, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.198.483 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k269) (##inline ##vcore.cdr (bruijn ##.expr.198.483 0 0))) ((bruijn ##.k.1139 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k269, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.197.481 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k268) (##inline ##vcore.cdr (bruijn ##.expr.197.481 0 0))) ((bruijn ##.k.1139 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k268, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.196.479 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k267) (##inline ##vcore.cdr (bruijn ##.expr.196.479 0 0))) ((bruijn ##.k.1139 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k267, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k266) (##inline ##vcore.cdr (bruijn ##.expr.195.477 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k266, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.195.477 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k265) (##inline ##vcore.car (bruijn ##.expr.195.477 0 0))) ((bruijn ##.k.1139 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k265, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1140 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k264) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1139 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k264, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k263) '##letrec (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1139 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k263, self)))),
      _V10letrec,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1121 0 0) (bruijn ##.k.1113 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1122 2 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.201.490 8 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.202.492 7 0)) (##inline ##vcore.cons (bruijn ##.xs.495 5 0) (##inline ##vcore.cons (bruijn ##.x.1127 1 0) (##inline ##vcore.cons (bruijn ##.x.1129 0 0) '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 12 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k287) (bruijn ##.fun.408 11 1) (##inline ##vcore.car (bruijn ##.expr.205.498 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k287, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1130 2 0) (##inline ##vcore.cons (bruijn ##.x.1131 1 0) (bruijn ##.x.1132 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 14 11) (bruijn ##.k.1133 0 0) (bruijn ##.fun.408 13 1) (bruijn ##.x.502 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 16 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k289) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda40) (##inline ##vcore.cdr (bruijn ##.val.501 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k289, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda40, self)))),
      VInlineCdr2(runtime,
        statics->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 12 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k288) (bruijn ##.fun.408 11 1) (##inline ##vcore.car (bruijn ##.val.501 0 2)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k288, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        _var2);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k286) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda39) (bruijn ##.xs.495 3 0) (##inline ##vcore.car (bruijn ##.expr.204.496 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k286, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda39, self)))),
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.205.498 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.205.498 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k285) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda38) (bruijn ##.kk.159.410 8 1)) ((bruijn ##.k.1113 7 0) #f)) ((bruijn ##.k.1113 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k285, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda38, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.204.496 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k284) (##inline ##vcore.cdr (bruijn ##.expr.204.496 0 0))) ((bruijn ##.k.1113 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k284, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k283) (##inline ##vcore.cdr (bruijn ##.expr.203.494 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k283, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203.494 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k282) (##inline ##vcore.car (bruijn ##.expr.203.494 0 0))) ((bruijn ##.k.1113 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k282, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.202.492 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k281) (##inline ##vcore.cdr (bruijn ##.expr.202.492 0 0))) ((bruijn ##.k.1113 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k281, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.201.490 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k280) (##inline ##vcore.cdr (bruijn ##.expr.201.490 0 0))) ((bruijn ##.k.1113 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k280, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1114 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k279) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1113 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k279, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k278) 'basic-block (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1113 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k278, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1103 0 0) (bruijn ##.k.1098 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1104 2 0) (##inline ##vcore.cons '##qualified-call (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.207.504 5 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.208.506 4 0)) (##inline ##vcore.cons (bruijn ##.x.1108 1 0) (bruijn ##.x.1109 0 0))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__call,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        statics->vars[0],
        _var0)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 10 11) (bruijn ##.k.1110 0 0) (bruijn ##.fun.408 9 1) (bruijn ##.x.511 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 12 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k298) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda42) (##inline ##vcore.cdr (bruijn ##.expr.209.508 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k298, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda42, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 8 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k297) (bruijn ##.fun.408 7 1) (##inline ##vcore.car (bruijn ##.expr.209.508 1 0)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k297, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.209.508 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k296) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda41) (bruijn ##.kk.159.410 5 1)) ((bruijn ##.k.1098 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k296, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda41, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.208.506 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k295) (##inline ##vcore.cdr (bruijn ##.expr.208.506 0 0))) ((bruijn ##.k.1098 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k295, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.207.504 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k294) (##inline ##vcore.cdr (bruijn ##.expr.207.504 0 0))) ((bruijn ##.k.1098 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k294, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1099 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k293) (##inline ##vcore.cdr (bruijn ##.expr.409 3 2))) ((bruijn ##.k.1098 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k293, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k292) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.409 2 2))) ((bruijn ##.k.1098 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k292, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.213.515 4 1) (bruijn ##.k.1087 1 0) (bruijn ##.expr.215.517 2 1) (bruijn ##.x.1088 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.215.517 1 1))) ((bruijn ##.reverse.240 11 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k302) (bruijn ##.xs.212.518 1 2)) ((bruijn ##.k.1087 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k302, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.213.515 5 1) (bruijn ##.k.1082 1 0) (bruijn ##.expr.215.517 3 1) (bruijn ##.x.1083 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k304(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 12 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k305) (bruijn ##.xs.212.518 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k305, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.214.519 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k304) (##inline ##vcore.cdr (bruijn ##.expr.215.517 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.215.517 2 1)) (bruijn ##.xs.212.518 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k304, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1081 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda46))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda46, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k303(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1080 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda45) (bruijn ##.loop.516 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0lambda45, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k301) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k303))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k301, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516_V0k303, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516")) (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295 ##.loop.516) #f (bruijn ##.loop.516 0 0) (bruijn ##.k.1079 1 0) (##inline ##vcore.cdr (bruijn ##.expr.409 5 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2));
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V10_Dloop_D516(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1078 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda44, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1092 0 0) (bruijn ##.k.1090 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1093 2 0) (##inline ##vcore.cons (bruijn ##.x.1094 1 0) (bruijn ##.x.1095 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 7 11) (bruijn ##.k.1096 0 0) (bruijn ##.fun.408 6 1) (bruijn ##.x.523 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k308) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda49) (bruijn ##.xs.522 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k308, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda49, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k307) (bruijn ##.fun.408 4 1) (##inline ##vcore.car (bruijn ##.expr.409 4 2)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k307, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda47, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.521 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k306) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda48) (bruijn ##.kk.159.410 2 1)) ((bruijn ##.k.1090 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k306, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda48, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.409 2 2)) (##vcore.call-with-values (bruijn ##.k.1077 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda43) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda47)) ((bruijn ##.k.1077 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda43, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda47, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.246 6 14) (bruijn ##.k.1075 0 0) (##string ##.string.1885) (bruijn ##.expr.409 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1885.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k309(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1074 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda50) (bruijn ##.kk.159.410 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda50, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k299(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k300) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k309))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k300, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k309, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k290(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k291) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k299))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k291, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k299, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k276(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k277) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k290))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k277, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k290, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k261(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k262) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k276))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k262, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k276, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k250(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k251) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k261))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k251, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k261, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k234(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k235) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k250))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k235, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k250, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k223(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k224) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k234))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k224, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k234, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k213(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k214) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k223))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k214, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k223, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k202) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k213))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k213, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k187(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k188) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k201))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k201, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k177) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k187))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k177, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0k187, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1073 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda25))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295_V0lambda25, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1355 0 0) (bruijn ##.k.1353 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1356 0 0) (bruijn ##.expr.525 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1354 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k312) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda52) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1353 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k312, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda52, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k311) 'bruijn (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1353 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k311, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1349 0 0) (bruijn ##.k.1347 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (bruijn ##.k.1350 0 0) (bruijn ##.fun.524 4 1) (bruijn ##.expr.525 4 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1348 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k316) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda53) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1347 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k316, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda53, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k315) 'lambda (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1347 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k315, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1343 0 0) (bruijn ##.k.1341 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (bruijn ##.k.1344 0 0) (bruijn ##.fun.524 4 1) (bruijn ##.expr.525 4 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1342 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k320) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda54) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1341 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k320, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda54, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k319) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1341 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k319, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1337 0 0) (bruijn ##.k.1335 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (bruijn ##.k.1338 0 0) (bruijn ##.fun.524 4 1) (bruijn ##.expr.525 4 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1336 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k324) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda55) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1335 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k324, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda55, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k323) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1335 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k323, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1331 0 0) (bruijn ##.k.1329 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (bruijn ##.k.1332 0 0) (bruijn ##.fun.524 4 1) (bruijn ##.expr.525 4 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1330 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k328) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda56) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1329 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k328, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda56, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k327) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1329 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k327, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1325 0 0) (bruijn ##.k.1323 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (bruijn ##.k.1326 0 0) (bruijn ##.fun.524 4 1) (bruijn ##.expr.525 4 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1324 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k332) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda57) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1323 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k332, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda57, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k331) 'continuation (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1323 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k331, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1319 0 0) (bruijn ##.k.1317 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (bruijn ##.k.1320 0 0) (bruijn ##.fun.524 4 1) (bruijn ##.expr.525 4 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1318 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k336) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda58) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1317 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k336, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda58, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k335) 'quote (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1317 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k335, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1313 0 0) (bruijn ##.k.1311 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 5 11) (bruijn ##.k.1314 0 0) (bruijn ##.fun.524 4 1) (bruijn ##.expr.525 4 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1312 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k340) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda59) (bruijn ##.kk.216.526 2 1)) ((bruijn ##.k.1311 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k340, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda59, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k339) '##inline (##inline ##vcore.car (bruijn ##.expr.525 2 2))) ((bruijn ##.k.1311 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k339, self)))),
      _V10inline,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1308 0 0) (bruijn ##.k.1307 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.295) #f (bruijn ##.iter-apply.295 4 12) (bruijn ##.k.1309 0 0) (bruijn ##.fun.524 3 1) (bruijn ##.expr.525 3 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[12]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.525 2 2)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k343) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda60) (bruijn ##.kk.216.526 1 1)) ((bruijn ##.k.1307 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k343, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda60, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.294) #f (bruijn ##.iter-atom.294 3 11) (bruijn ##.k.1305 0 0) (bruijn ##.fun.524 2 1) (bruijn ##.expr.525 2 2) #f)
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[11]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k344(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1304 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda61) (bruijn ##.kk.216.526 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda61, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k341(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k342) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k344))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k342, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k344, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k337(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k338) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k341))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k338, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k341, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k333(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k334) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k337))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k334, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k337, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k329(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k330) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k333))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k330, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k333, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k325(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k326) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k329))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k326, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k329, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k321(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k322) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k325))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k322, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k325, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k317(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k318) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k321))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k318, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k321, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k313(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k314) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k317))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k314, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k317, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k310) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k313))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k310, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0k313, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1303 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda51))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296_V0lambda51, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1375 0 0) (bruijn ##.k.1373 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1376 0 0) (bruijn ##.d.537 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1374 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k347) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda63) (bruijn ##.kk.227.538 2 1)) ((bruijn ##.k.1373 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k347, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda63, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.d.537 2 1)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k346) '##foreign.declare (##inline ##vcore.car (bruijn ##.d.537 2 1))) ((bruijn ##.k.1373 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k346, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1366 0 0) (bruijn ##.k.1361 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.234 13 2) (bruijn ##.k.1367 2 0) '##vcore.declare (bruijn ##.f.543 4 0) (bruijn ##.x.1368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 4,
      statics->up->vars[0],
      _V10vcore_Ddeclare,
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.238 12 6) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k356) (bruijn ##.x.1369 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k356, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter.296) #f (bruijn ##.iter.296 8 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k355) (bruijn ##.f.543 2 0) (##inline ##vcore.car (bruijn ##.expr.232.544 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 13));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k355, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.232.544 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.232.544 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k354) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda64) (bruijn ##.kk.227.538 5 1)) ((bruijn ##.k.1361 4 0) #f)) ((bruijn ##.k.1361 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k354, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda64, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k353) (##inline ##vcore.cdr (bruijn ##.expr.231.542 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k353, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.231.542 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k352) (##inline ##vcore.car (bruijn ##.expr.231.542 0 0))) ((bruijn ##.k.1361 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k352, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1362 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k351) (##inline ##vcore.cdr (bruijn ##.d.537 3 1))) ((bruijn ##.k.1361 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k351, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.d.537 2 1)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k350) '##vcore.declare (##inline ##vcore.car (bruijn ##.d.537 2 1))) ((bruijn ##.k.1361 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k350, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k357(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.246 5 14) (bruijn ##.k.1359 0 0) (##string ##.string.1884))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 14)), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D1884.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k348(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k349) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k357))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k349, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k357, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k345) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k348))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k345, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0k348, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1358 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda62))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297_V0lambda62, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298_V0k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1378 3 0) (##inline ##vcore.cons (bruijn ##.k.547 3 2) (bruijn ##.x.1380 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.1861) ((##vcore.= 0 (bruijn ##.n.546 1 1))) (if (bruijn ##.reg.1861 0 0) ((bruijn ##.k.1378 1 0) '()) (basic-block 1 1 (##.reg.1862) ((##vcore.- (bruijn ##.n.546 2 1) 1)) (##qualified-call (vanity compiler lower to-functions ##.make-list.298) #f (bruijn ##.make-list.298 3 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298_V0k358) (bruijn ##.reg.1862 0 0) (bruijn ##.k.547 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VEncodeInt(0l),
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
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[15]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298_V0k358, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299, got ~D~N"
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
  // (basic-block 1 1 (##.reg.1863) ((##vcore.= (bruijn ##.x.549 1 2) 0)) (if (bruijn ##.reg.1863 0 0) (##vcore.set-car! (bruijn ##.k.1382 1 0) (bruijn ##.l.548 1 1) (bruijn ##.v.550 1 3)) (basic-block 1 1 (##.reg.1864) ((##vcore.- (bruijn ##.x.549 2 2) 1)) (##qualified-call (vanity compiler lower to-functions ##.list-set!.299) #f (bruijn ##.list-set!.299 3 16) (bruijn ##.k.1382 2 0) (##inline ##vcore.cdr (bruijn ##.l.548 2 1)) (bruijn ##.reg.1864 0 0) (bruijn ##.v.550 2 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[16]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.1387 1 0) (bruijn ##.values.237 7 5) (bruijn ##.x.1389 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      VGetArg(statics, 7-1, 5),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k362(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.300 ##.loop.554) #f (bruijn ##.loop.554 3 0) (bruijn ##.k.1387 2 0) (bruijn ##.ret.555 2 1) (##inline ##vcore.cdr (bruijn ##.l.556 2 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.list-set!.299) #f (bruijn ##.list-set!.299 5 16) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k362) (bruijn ##.ret.555 2 1) (bruijn ##.split.557 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.l.556 2 2)) (bruijn ##.x.1393 0 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 16));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k362, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list-ref.236 7 4) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k361) (bruijn ##.ret.555 1 1) (bruijn ##.split.557 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k361, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.l.556 0 2)) ((bruijn ##.map.235 6 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k359) (bruijn ##.reverse.240 6 8) (bruijn ##.ret.555 0 1)) ((bruijn ##.f.551 2 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k360) (##inline ##vcore.car (bruijn ##.l.556 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k359, self)))),
      VGetArg(statics, 6-1, 8),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554_V0k360, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V0k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.300 ##.loop.554) #f (bruijn ##.loop.554 1 0) (bruijn ##.k.1386 2 0) (bruijn ##.x.1395 0 0) (bruijn ##.l.553 2 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554")) (##qualified-call (vanity compiler lower to-functions ##.make-list.298) #f (bruijn ##.make-list.298 2 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V0k363) (bruijn ##.n.552 1 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V10_Dloop_D554, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[15]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300_V0k363, self))));
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1409 0 0) (bruijn ##.k.1407 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1410 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1408 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k366) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68) (bruijn ##.kk.107.559 2 1)) ((bruijn ##.k.1407 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k366, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.558 2 1)) ((bruijn ##.equal?.233 7 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k365) '##foreign.declare (##inline ##vcore.car (bruijn ##.e.558 2 1))) ((bruijn ##.k.1407 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k365, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1403 0 0) (bruijn ##.k.1401 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1404 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1402 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k370) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69) (bruijn ##.kk.107.559 2 1)) ((bruijn ##.k.1401 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k370, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.558 2 1)) ((bruijn ##.equal?.233 7 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k369) '##vcore.declare (##inline ##vcore.car (bruijn ##.e.558 2 1))) ((bruijn ##.k.1401 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k369, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1399 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k371(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1398 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70) (bruijn ##.kk.107.559 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k367(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k368) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k371))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k368, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k371, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k364) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k367))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k364, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k367, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1397 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.300) #f (bruijn ##.multi-partition.300 1 17) (bruijn ##.k.1396 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66) 2 (bruijn ##.exprs.281 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[17]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66, self))));
    VWORD _arg2 = 
      VEncodeInt(2l);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.234 8 2) (bruijn ##.k.1412 4 0) (bruijn ##.static-environments.290 5 7) (bruijn ##.literal-table.289 5 6) (bruijn ##.x.1415 1 0) (bruijn ##.x.1416 0 0) (bruijn ##.functions.288 5 5) (bruijn ##.qualified-functions.285 5 2) (bruijn ##.x.1414 2 0) (bruijn ##.x.1413 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 9,
      statics->up->up->up->vars[0],
      VGetArg(statics, 5-1, 7),
      VGetArg(statics, 5-1, 6),
      statics->vars[0],
      _var0,
      VGetArg(statics, 5-1, 5),
      VGetArg(statics, 5-1, 2),
      statics->up->vars[0],
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 7 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k375) (##intrinsic ##vcore.cdr) (bruijn ##.intrinsics.287 4 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k375, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 6 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k374) (##intrinsic ##vcore.cdr) (bruijn ##.foreign-functions.286 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k374, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 5 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k373) (bruijn ##.iter-declare.297 2 14) (bruijn ##.declares.564 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k373, self)))),
      statics->up->vars[14],
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter.296) #f (bruijn ##.iter.296 2 13) (bruijn ##.k.1417 0 0) (##string ##.string.1886) (bruijn ##.e.567 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[13]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1886.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.235 4 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k372) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda72) (bruijn ##.globals.563 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k372, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda72, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0to__functions" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 18 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284") '() '() '() '() '() '() (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300")) (##vcore.call-with-values (bruijn ##.k.790 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[18]; } container;
    self = &container.self;
    VInitEnv(self, 18, 18, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D283, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D284, self))));
    self->vars[2] = VNULL;
    self->vars[3] = VNULL;
    self->vars[4] = VNULL;
    self->vars[5] = VNULL;
    self->vars[6] = VNULL;
    self->vars[7] = VNULL;
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D291, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D292, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D293, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D294, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D295, self))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D296, self))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D297, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D298, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D299, self))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D300, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.6.577 0 0) ((bruijn ##.list.234 5 2) (bruijn ##.k.1419 1 0) 'bruijn (bruijn ##.x.576 1 3) (bruijn ##.depth.574 1 1) (bruijn ##.x.6.577 0 0)) (basic-block 1 1 (##.reg.1865) ((##vcore.+ 1 (bruijn ##.depth.574 2 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.569) #f (bruijn ##.lookup.569 3 0) (bruijn ##.k.1419 2 0) (bruijn ##.reg.1865 0 0) (##inline ##vcore.cdr (bruijn ##.env.575 2 2)) (bruijn ##.x.576 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 5,
      statics->vars[0],
      _V0bruijn,
      statics->vars[3],
      statics->vars[1],
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    VWORD _arg3 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1423 0 0) (##inline ##vcore.eq? (bruijn ##.x.576 1 3) (bruijn ##.e.579 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineEq2(runtime,
        statics->vars[3],
        _var1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.env.575 0 2)) ((bruijn ##.k.1419 0 0) (bruijn ##.x.576 0 3)) (##qualified-call (vanity compiler lower list-index) #t (bruijn ##.list-index.280 3 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0k376) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0lambda73) (##inline ##vcore.car (bruijn ##.env.575 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0k376, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569_V0lambda73, self))));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        _var2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index, _V60_V0vanity_V0compiler_V0lower)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570_V0k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1425 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.580 1 1)) (bruijn ##.x.1428 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.580 0 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.570) #f (bruijn ##.undot.570 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570_V0k377) (##inline ##vcore.cdr (bruijn ##.lst.580 0 1))) (if (##inline ##vcore.null? (bruijn ##.lst.580 0 1)) ((bruijn ##.k.1425 0 0) '()) ((bruijn ##.k.1425 0 0) (##inline ##vcore.cons (bruijn ##.lst.580 0 1) '()))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570_V0k377, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VNULL));
}
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.12.587 4 1) (bruijn ##.k.1458 1 0) (bruijn ##.expr.14.589 2 1) (bruijn ##.x.1459 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.14.589 1 1))) ((bruijn ##.reverse.240 11 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k380) (bruijn ##.xs.11.590 1 2)) ((bruijn ##.k.1458 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k380, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.12.587 5 1) (bruijn ##.k.1453 1 0) (bruijn ##.expr.14.589 3 1) (bruijn ##.x.1454 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k382(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 12 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k383) (bruijn ##.xs.11.590 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k383, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.13.591 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k382) (##inline ##vcore.cdr (bruijn ##.expr.14.589 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.589 2 1)) (bruijn ##.xs.11.590 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k382, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1452 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda78))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda78, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k381(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1451 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda77) (bruijn ##.loop.588 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0lambda77, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k379) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k381))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k379, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588_V0k381, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.571 ##.loop.588) #f (bruijn ##.loop.588 0 0) (bruijn ##.k.1450 1 0) (##inline ##vcore.car (bruijn ##.lamb.582 5 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2));
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V10_Dloop_D588(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1449 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda76))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda76, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1465 0 0) (bruijn ##.k.1461 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1466 2 0) (##inline ##vcore.cons (bruijn ##.x.1467 1 0) (##inline ##vcore.cons (bruijn ##.x.1469 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 7 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k387) (##inline ##vcore.cons (bruijn ##.xs.594 3 2) (bruijn ##.env.581 6 1)) (##inline ##vcore.car (bruijn ##.expr.15.595 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k387, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 9 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k386) (bruijn ##.xs.594 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k386, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.595 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.595 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k385) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda80) (bruijn ##.kk.7.583 3 1)) ((bruijn ##.k.1461 1 0) #f)) ((bruijn ##.k.1461 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k385, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda80, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda79, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.593 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k384) (##inline ##vcore.cdr (bruijn ##.lamb.582 3 2))) ((bruijn ##.k.1461 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k384, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.582 2 2)) (##vcore.call-with-values (bruijn ##.k.1448 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda75) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda79)) ((bruijn ##.k.1448 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda75, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda79, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1438 0 0) (bruijn ##.k.1435 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1439 4 0) (##inline ##vcore.cons (bruijn ##.reg.1866 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1443 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1866) ((##vcore.- (bruijn ##.x.1445 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 8 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k394) (##inline ##vcore.cons (bruijn ##.proper-xs.601 2 0) (bruijn ##.env.581 7 1)) (##inline ##vcore.car (bruijn ##.expr.17.599 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k394, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 9 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k393) (bruijn ##.proper-xs.601 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k393, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.570) #f (bruijn ##.undot.570 5 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k392) (##inline ##vcore.car (bruijn ##.lamb.582 4 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k392, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.599 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.17.599 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k391) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda81) (bruijn ##.kk.7.583 2 1)) ((bruijn ##.k.1435 1 0) #f)) ((bruijn ##.k.1435 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k391, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda81, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.582 2 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k390) (##inline ##vcore.cdr (bruijn ##.lamb.582 2 2))) ((bruijn ##.k.1435 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k390, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.247 6 15) (bruijn ##.k.1433 0 0) (##string ##.string.1887) (bruijn ##.lamb.582 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1887.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k395(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1432 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda82) (bruijn ##.kk.7.583 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda82, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k388(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k389) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k395))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k389, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k395, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k378) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k388))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k378, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0k388, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1431 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda74))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571_V0lambda74, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.24.609 4 1) (bruijn ##.k.1804 1 0) (bruijn ##.expr.26.611 2 1) (bruijn ##.x.1805 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.26.611 1 1))) ((bruijn ##.reverse.240 13 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k400) (bruijn ##.xs.23.612 1 2)) ((bruijn ##.k.1804 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k400, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.24.609 5 1) (bruijn ##.k.1799 1 0) (bruijn ##.expr.26.611 3 1) (bruijn ##.x.1800 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k402(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 14 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k403) (bruijn ##.xs.23.612 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k403, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.25.613 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k402) (##inline ##vcore.cdr (bruijn ##.expr.26.611 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.26.611 2 1)) (bruijn ##.xs.23.612 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k402, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1798 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda87))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda87, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k401(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1797 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda86) (bruijn ##.loop.610 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0lambda86, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k399) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k401))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k399, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610_V0k401, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572 ##.loop.610) #f (bruijn ##.loop.610 0 0) (bruijn ##.k.1796 1 0) (##inline ##vcore.car (bruijn ##.expr.21.607 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610, self))));
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D610(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1795 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda85))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda85, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1811 0 0) (bruijn ##.k.1807 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1812 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.1814 1 0) (##inline ##vcore.cons (bruijn ##.x.1816 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k407) (##inline ##vcore.cons (bruijn ##.xs.616 3 2) (bruijn ##.env.602 8 1)) (##inline ##vcore.car (bruijn ##.expr.27.617 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k407, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 11 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k406) (bruijn ##.xs.616 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k406, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.617 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.27.617 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k405) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda89) (bruijn ##.kk.18.604 5 1)) ((bruijn ##.k.1807 1 0) #f)) ((bruijn ##.k.1807 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k405, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda89, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda88, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.615 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k404) (##inline ##vcore.cdr (bruijn ##.expr.21.607 1 0))) ((bruijn ##.k.1807 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k404, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.607 0 0)) (##vcore.call-with-values (bruijn ##.k.1792 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda84) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda88)) ((bruijn ##.k.1792 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda84, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda88, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1793 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k398) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1792 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k398, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k397) 'lambda (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1792 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k397, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1780 0 0) (bruijn ##.k.1775 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1781 4 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.reg.1869 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1786 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1869) ((##vcore.- (bruijn ##.x.1788 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 10 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k416) (##inline ##vcore.cons (bruijn ##.proper-xs.624 2 0) (bruijn ##.env.602 9 1)) (##inline ##vcore.car (bruijn ##.expr.30.622 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k416, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 9-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 11 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k415) (bruijn ##.proper-xs.624 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k415, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.570) #f (bruijn ##.undot.570 7 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k414) (##inline ##vcore.car (bruijn ##.expr.29.620 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k414, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.622 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.30.622 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k413) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda90) (bruijn ##.kk.18.604 4 1)) ((bruijn ##.k.1775 3 0) #f)) ((bruijn ##.k.1775 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k413, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda90, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.620 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k412) (##inline ##vcore.cdr (bruijn ##.expr.29.620 0 0))) ((bruijn ##.k.1775 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k412, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1776 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k411) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1775 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k411, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k410) 'lambda (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1775 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k410, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.37.632 4 1) (bruijn ##.k.1756 1 0) (bruijn ##.expr.39.634 2 1) (bruijn ##.x.1757 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.39.634 1 1))) ((bruijn ##.reverse.240 15 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k424) (bruijn ##.xs.36.635 1 2)) ((bruijn ##.k.1756 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k424, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.37.632 5 1) (bruijn ##.k.1751 1 0) (bruijn ##.expr.39.634 3 1) (bruijn ##.x.1752 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k426(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 16 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k427) (bruijn ##.xs.36.635 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k427, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.38.636 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k426) (##inline ##vcore.cdr (bruijn ##.expr.39.634 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.39.634 2 1)) (bruijn ##.xs.36.635 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k426, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1750 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda94))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda94, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k425(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1749 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda93) (bruijn ##.loop.633 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0lambda93, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k423) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k425))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k423, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633_V0k425, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572 ##.loop.633) #f (bruijn ##.loop.633 0 0) (bruijn ##.k.1748 1 0) (##inline ##vcore.car (bruijn ##.expr.34.630 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633, self))));
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D633(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1747 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda92))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda92, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1763 0 0) (bruijn ##.k.1759 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1764 2 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.32.626 7 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.33.628 6 0)) (##inline ##vcore.cons (bruijn ##.x.1768 1 0) (##inline ##vcore.cons (bruijn ##.x.1770 0 0) '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 11 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k431) (##inline ##vcore.cons (bruijn ##.xs.639 3 2) (bruijn ##.env.602 10 1)) (##inline ##vcore.car (bruijn ##.expr.40.640 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k431, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 13 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k430) (bruijn ##.xs.639 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k430, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.640 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.640 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k429) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda96) (bruijn ##.kk.18.604 7 1)) ((bruijn ##.k.1759 1 0) #f)) ((bruijn ##.k.1759 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k429, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda96, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda95, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.638 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k428) (##inline ##vcore.cdr (bruijn ##.expr.34.630 1 0))) ((bruijn ##.k.1759 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k428, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.630 0 0)) (##vcore.call-with-values (bruijn ##.k.1742 4 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda91) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda95)) ((bruijn ##.k.1742 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda91, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda95, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.628 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k422) (##inline ##vcore.cdr (bruijn ##.expr.33.628 0 0))) ((bruijn ##.k.1742 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k422, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.626 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k421) (##inline ##vcore.cdr (bruijn ##.expr.32.626 0 0))) ((bruijn ##.k.1742 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k421, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1743 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k420) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1742 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k420, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k419) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1742 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k419, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1728 0 0) (bruijn ##.k.1721 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1729 4 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.42.643 8 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.43.645 7 0)) (##inline ##vcore.cons (bruijn ##.reg.1868 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1736 0 0) '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL)))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1868) ((##vcore.- (bruijn ##.x.1738 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 12 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k442) (##inline ##vcore.cons (bruijn ##.proper-xs.651 2 0) (bruijn ##.env.602 11 1)) (##inline ##vcore.car (bruijn ##.expr.45.649 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k442, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 13 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k441) (bruijn ##.proper-xs.651 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k441, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.570) #f (bruijn ##.undot.570 9 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k440) (##inline ##vcore.car (bruijn ##.expr.44.647 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k440, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.649 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.45.649 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k439) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda97) (bruijn ##.kk.18.604 6 1)) ((bruijn ##.k.1721 5 0) #f)) ((bruijn ##.k.1721 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k439, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda97, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.647 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k438) (##inline ##vcore.cdr (bruijn ##.expr.44.647 0 0))) ((bruijn ##.k.1721 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k438, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.645 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k437) (##inline ##vcore.cdr (bruijn ##.expr.43.645 0 0))) ((bruijn ##.k.1721 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k437, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.643 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k436) (##inline ##vcore.cdr (bruijn ##.expr.42.643 0 0))) ((bruijn ##.k.1721 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k436, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1722 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k435) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1721 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k435, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k434) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1721 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k434, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1715 0 0) (bruijn ##.k.1713 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1716 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.1717 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.571) #f (bruijn ##.bruijn-lambda.571 6 2) (bruijn ##.k.1718 0 0) (bruijn ##.env.602 5 1) (bruijn ##.e.654 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 8 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k447) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda99) (##inline ##vcore.cdr (bruijn ##.expr.603 4 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k447, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda99, self)))),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1714 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k446) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda98) (bruijn ##.kk.18.604 2 1)) ((bruijn ##.k.1713 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k446, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda98, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k445) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1713 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k445, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1705 0 0) (bruijn ##.k.1701 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1706 1 0) (##inline ##vcore.cons '##qualified-case-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.48.656 3 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.49.658 2 0)) (bruijn ##.x.1709 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.571) #f (bruijn ##.bruijn-lambda.571 8 2) (bruijn ##.k.1710 0 0) (bruijn ##.env.602 7 1) (bruijn ##.e.661 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 10 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k454) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda101) (##inline ##vcore.cdr (bruijn ##.expr.49.658 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k454, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda101, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.658 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k453) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda100) (bruijn ##.kk.18.604 4 1)) ((bruijn ##.k.1701 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k453, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda100, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.656 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k452) (##inline ##vcore.cdr (bruijn ##.expr.48.656 0 0))) ((bruijn ##.k.1701 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k452, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1702 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k451) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1701 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k451, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k450) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1701 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k450, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1690 0 0) (bruijn ##.k.1683 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1691 2 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons '1 (##inline ##vcore.cons (bruijn ##.x.1694 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VEncodeInt(1l),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k463) (##inline ##vcore.cons (bruijn ##.x.1696 0 0) (bruijn ##.env.602 8 1)) (##inline ##vcore.car (bruijn ##.expr.53.666 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k463, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.234 11 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k462) (##inline ##vcore.car (bruijn ##.expr.52.664 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k462, self)))),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.666 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.53.666 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k461) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda102) (bruijn ##.kk.18.604 5 1)) ((bruijn ##.k.1683 4 0) #f)) ((bruijn ##.k.1683 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k461, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda102, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.664 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.664 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k460) (##inline ##vcore.cdr (bruijn ##.expr.51.663 1 0))) ((bruijn ##.k.1683 3 0) #f)) ((bruijn ##.k.1683 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k460, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.663 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k459) (##inline ##vcore.car (bruijn ##.expr.51.663 0 0))) ((bruijn ##.k.1683 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k459, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1684 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k458) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1683 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k458, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k457) 'continuation (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1683 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k457, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1675 0 0) (bruijn ##.k.1671 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1676 1 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons '#f (##inline ##vcore.cons (bruijn ##.x.1679 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 6 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k469) (bruijn ##.env.602 5 1) (##inline ##vcore.car (bruijn ##.expr.55.669 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k469, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.669 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.55.669 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k468) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda103) (bruijn ##.kk.18.604 3 1)) ((bruijn ##.k.1671 2 0) #f)) ((bruijn ##.k.1671 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k468, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda103, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1672 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k467) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1671 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k467, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k466) 'continuation (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1671 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k466, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.61.674 5 1) (bruijn ##.k.1648 2 0) (bruijn ##.expr.63.676 3 1) (bruijn ##.x.1649 1 0) (bruijn ##.x.1650 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.240 14 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k476) (bruijn ##.vals.60.678 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k476, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.63.676 1 1))) ((bruijn ##.reverse.240 13 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k475) (bruijn ##.xs.59.677 1 2)) ((bruijn ##.k.1648 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k475, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.682 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.682 0 0))) ((bruijn ##.kk.62.679 3 1) (bruijn ##.k.1640 1 0) (##inline ##vcore.cdr (bruijn ##.expr.63.676 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.64.680 2 0)) (bruijn ##.xs.59.677 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.65.682 0 0)) (bruijn ##.vals.60.678 5 3))) ((bruijn ##.k.1640 1 0) #f)) ((bruijn ##.k.1640 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.680 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k480) (##inline ##vcore.cdr (bruijn ##.expr.64.680 1 0))) ((bruijn ##.k.1640 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k480, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.61.674 7 1) (bruijn ##.k.1636 3 0) (bruijn ##.expr.63.676 5 1) (bruijn ##.x.1637 1 0) (bruijn ##.x.1638 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.240 16 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k483) (bruijn ##.vals.60.678 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k483, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k481(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 15 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k482) (bruijn ##.xs.59.677 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k482, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k479) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k481))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k479, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k481, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k478) (##inline ##vcore.car (bruijn ##.expr.63.676 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k478, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1635 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda107))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda107, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k477(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1634 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda106) (bruijn ##.loop.675 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0lambda106, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k474) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k477))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k474, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675_V0k477, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572 ##.loop.675) #f (bruijn ##.loop.675 0 0) (bruijn ##.k.1633 1 0) (##inline ##vcore.car (bruijn ##.expr.57.672 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D675(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1632 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda105))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda105, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1656 0 0) (bruijn ##.k.1652 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1657 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1659 2 0) (##inline ##vcore.cons (bruijn ##.xs.685 5 2) (##inline ##vcore.cons (bruijn ##.x.1662 1 0) (##inline ##vcore.cons (bruijn ##.x.1664 0 0) '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 2),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 10 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k488) (##inline ##vcore.cons (bruijn ##.xs.685 4 2) (bruijn ##.env.602 9 1)) (##inline ##vcore.car (bruijn ##.expr.66.687 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k488, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VGetArg(statics, 9-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 10 3) (bruijn ##.k.1666 0 0) (##inline ##vcore.cons (bruijn ##.xs.685 4 2) (bruijn ##.env.602 9 1)) (bruijn ##.e.689 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VGetArg(statics, 9-1, 1));
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 12 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k487) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda110) (bruijn ##.vals.686 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k487, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda110, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 11 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k486) (bruijn ##.xs.685 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k486, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.687 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.66.687 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k485) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda109) (bruijn ##.kk.18.604 5 1)) ((bruijn ##.k.1652 1 0) #f)) ((bruijn ##.k.1652 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k485, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda109, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda108, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.684 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k484) (##inline ##vcore.cdr (bruijn ##.expr.57.672 1 0))) ((bruijn ##.k.1652 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k484, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.672 0 0)) (##vcore.call-with-values (bruijn ##.k.1629 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda104) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda108)) ((bruijn ##.k.1629 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda104, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda108, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1630 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k473) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1629 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k473, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k472) 'letrec (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1629 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k472, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.73.695 5 1) (bruijn ##.k.1605 2 0) (bruijn ##.expr.75.697 3 1) (bruijn ##.x.1606 1 0) (bruijn ##.x.1607 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.240 15 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k496) (bruijn ##.vals.72.699 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k496, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.75.697 1 1))) ((bruijn ##.reverse.240 14 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k495) (bruijn ##.xs.71.698 1 2)) ((bruijn ##.k.1605 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k495, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.703 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.703 0 0))) ((bruijn ##.kk.74.700 3 1) (bruijn ##.k.1597 1 0) (##inline ##vcore.cdr (bruijn ##.expr.75.697 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.76.701 2 0)) (bruijn ##.xs.71.698 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.77.703 0 0)) (bruijn ##.vals.72.699 5 3))) ((bruijn ##.k.1597 1 0) #f)) ((bruijn ##.k.1597 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.701 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k500) (##inline ##vcore.cdr (bruijn ##.expr.76.701 1 0))) ((bruijn ##.k.1597 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k500, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.73.695 7 1) (bruijn ##.k.1593 3 0) (bruijn ##.expr.75.697 5 1) (bruijn ##.x.1594 1 0) (bruijn ##.x.1595 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.240 17 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k503) (bruijn ##.vals.72.699 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k503, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k501(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 16 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k502) (bruijn ##.xs.71.698 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k502, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k499) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k501))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k499, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k501, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k498) (##inline ##vcore.car (bruijn ##.expr.75.697 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k498, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1592 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda114))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda114, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k497(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1591 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda113) (bruijn ##.loop.696 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0lambda113, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k494) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k497))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k494, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696_V0k497, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572 ##.loop.696) #f (bruijn ##.loop.696 0 0) (bruijn ##.k.1590 1 0) (##inline ##vcore.car (bruijn ##.expr.69.693 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D696(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1589 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda112))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda112, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1613 0 0) (bruijn ##.k.1609 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1614 3 0) (##inline ##vcore.cons '##letrec (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.68.691 7 0)) (##inline ##vcore.cons (bruijn ##.x.1617 2 0) (##inline ##vcore.cons (bruijn ##.xs.706 5 2) (##inline ##vcore.cons (bruijn ##.x.1620 1 0) (##inline ##vcore.cons (bruijn ##.x.1622 0 0) '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10letrec,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 2),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 11 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k508) (##inline ##vcore.cons (bruijn ##.xs.706 4 2) (bruijn ##.env.602 10 1)) (##inline ##vcore.car (bruijn ##.expr.78.708 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k508, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 11 3) (bruijn ##.k.1624 0 0) (##inline ##vcore.cons (bruijn ##.xs.706 4 2) (bruijn ##.env.602 10 1)) (bruijn ##.e.710 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 13 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k507) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda117) (bruijn ##.vals.707 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k507, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda117, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 12 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k506) (bruijn ##.xs.706 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k506, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.78.708 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.78.708 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k505) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda116) (bruijn ##.kk.18.604 6 1)) ((bruijn ##.k.1609 1 0) #f)) ((bruijn ##.k.1609 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k505, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda116, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda115, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.705 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k504) (##inline ##vcore.cdr (bruijn ##.expr.69.693 1 0))) ((bruijn ##.k.1609 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k504, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.693 0 0)) (##vcore.call-with-values (bruijn ##.k.1585 3 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda111) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda115)) ((bruijn ##.k.1585 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda111, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda115, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.691 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k493) (##inline ##vcore.cdr (bruijn ##.expr.68.691 0 0))) ((bruijn ##.k.1585 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k493, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1586 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k492) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1585 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k492, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k491) '##letrec (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1585 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k491, self)))),
      _V10letrec,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.split-at-right.255 12 23) (bruijn ##.k.1541 0 0) (bruijn ##.expr.81.714 3 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 23)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.87.718 5 1) (bruijn ##.k.1559 2 0) (bruijn ##.expr.89.720 3 1) (bruijn ##.x.1560 1 0) (bruijn ##.x.1561 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.240 18 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k518) (bruijn ##.vals.86.722 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k518, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.89.720 1 1))) ((bruijn ##.reverse.240 17 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k517) (bruijn ##.xs.85.721 1 2)) ((bruijn ##.k.1559 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k517, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.726 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.91.726 0 0))) ((bruijn ##.kk.88.723 3 1) (bruijn ##.k.1551 1 0) (##inline ##vcore.cdr (bruijn ##.expr.89.720 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.90.724 2 0)) (bruijn ##.xs.85.721 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.91.726 0 0)) (bruijn ##.vals.86.722 5 3))) ((bruijn ##.k.1551 1 0) #f)) ((bruijn ##.k.1551 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.724 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k522) (##inline ##vcore.cdr (bruijn ##.expr.90.724 1 0))) ((bruijn ##.k.1551 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k522, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.87.718 7 1) (bruijn ##.k.1547 3 0) (bruijn ##.expr.89.720 5 1) (bruijn ##.x.1548 1 0) (bruijn ##.x.1549 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.240 20 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k525) (bruijn ##.vals.86.722 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k525, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k523(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 19 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k524) (bruijn ##.xs.85.721 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k524, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k521) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k523))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k521, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k523, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k520) (##inline ##vcore.car (bruijn ##.expr.89.720 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k520, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1546 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda123))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda123, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k519(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1545 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda122) (bruijn ##.loop.719 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0lambda122, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k516) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k519))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k516, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719_V0k519, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572 ##.loop.719) #f (bruijn ##.loop.719 0 0) (bruijn ##.k.1544 1 0) (bruijn ##.head.82.715 3 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D719(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1543 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda121))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda121, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1567 0 0) (bruijn ##.k.1563 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1568 3 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.80.712 9 0)) (##inline ##vcore.cons (bruijn ##.x.1571 2 0) (##inline ##vcore.cons (bruijn ##.xs.729 4 2) (##inline ##vcore.cons (bruijn ##.x.1574 1 0) (##inline ##vcore.cons (bruijn ##.x.1576 0 0) '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 9-1, 0)),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 13 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k529) (##inline ##vcore.cons (bruijn ##.xs.729 3 2) (bruijn ##.env.602 12 1)) (##inline ##vcore.car (bruijn ##.tail.83.716 4 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k529, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 12-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 13 3) (bruijn ##.k.1578 0 0) (##inline ##vcore.cons (bruijn ##.xs.729 3 2) (bruijn ##.env.602 12 1)) (bruijn ##.e.733 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 12-1, 1));
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 15 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k528) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda126) (bruijn ##.vals.730 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k528, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda126, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.256 14 24) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k527) (bruijn ##.xs.729 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k527, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda124, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.728 0 1)) (if (##inline ##vcore.pair? (bruijn ##.tail.83.716 1 2)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.tail.83.716 1 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k526) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda125) (bruijn ##.kk.18.604 8 1)) ((bruijn ##.k.1563 0 0) #f)) ((bruijn ##.k.1563 0 0) #f)) ((bruijn ##.k.1563 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[2]))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[2])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k526, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda125, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.1542 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda120) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda124))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda120, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda124, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1581 0 0) -1) ((bruijn ##.k.1537 5 0) #f) (##vcore.call-with-values (bruijn ##.k.1537 5 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda118) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda119)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda118, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda119, self)))));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k515) (bruijn ##.x.1582 0 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k515, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.num-pairs.254 9 22) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k514) (bruijn ##.expr.81.714 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k514, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.712 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k513) (##inline ##vcore.cdr (bruijn ##.expr.80.712 0 0))) ((bruijn ##.k.1537 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k513, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1538 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k512) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1537 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k512, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k511) 'basic-block (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1537 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k511, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1533 0 0) (bruijn ##.k.1531 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1534 0 0) (bruijn ##.expr.603 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1532 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k533) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda127) (bruijn ##.kk.18.604 2 1)) ((bruijn ##.k.1531 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k533, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda127, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k532) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1531 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k532, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1527 0 0) (bruijn ##.k.1525 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1528 0 0) (bruijn ##.expr.603 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1526 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k537) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda128) (bruijn ##.kk.18.604 2 1)) ((bruijn ##.k.1525 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k537, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda128, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k536) 'quote (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1525 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k536, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k542" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1518 0 0) (bruijn ##.k.1515 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k543" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1519 1 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.96.737 2 0)) (bruijn ##.x.1521 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 7 3) (bruijn ##.k.1522 0 0) (bruijn ##.env.602 6 1) (bruijn ##.x.740 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k543) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda130) (##inline ##vcore.cdr (bruijn ##.expr.96.737 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k543, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda130, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k541" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.737 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k542) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda129) (bruijn ##.kk.18.604 3 1)) ((bruijn ##.k.1515 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k542, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda129, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1516 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k541) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1515 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k541, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k540) '##inline (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1515 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k540, self)))),
      _V10inline,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k550" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1505 0 0) (bruijn ##.k.1500 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k552" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1506 2 0) (##inline ##vcore.cons '##qualified-call (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.98.742 5 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.99.744 4 0)) (##inline ##vcore.cons (bruijn ##.x.1510 1 0) (bruijn ##.x.1511 0 0))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__call,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        statics->vars[0],
        _var0)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 10 3) (bruijn ##.k.1512 0 0) (bruijn ##.env.602 9 1) (bruijn ##.x.749 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k551" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 12 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k552) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda132) (##inline ##vcore.cdr (bruijn ##.expr.100.746 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k552, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda132, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 8 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k551) (bruijn ##.env.602 7 1) (##inline ##vcore.car (bruijn ##.expr.100.746 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k551, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k549" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.746 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k550) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda131) (bruijn ##.kk.18.604 5 1)) ((bruijn ##.k.1500 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k550, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda131, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k548" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.744 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k549) (##inline ##vcore.cdr (bruijn ##.expr.99.744 0 0))) ((bruijn ##.k.1500 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k549, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k547" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.742 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k548) (##inline ##vcore.cdr (bruijn ##.expr.98.742 0 0))) ((bruijn ##.k.1500 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k548, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k546" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1501 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k547) (##inline ##vcore.cdr (bruijn ##.expr.603 3 2))) ((bruijn ##.k.1500 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k547, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k545" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) ((bruijn ##.equal?.233 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k546) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.603 2 2))) ((bruijn ##.k.1500 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k546, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k556" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.104.753 4 1) (bruijn ##.k.1489 1 0) (bruijn ##.expr.106.755 2 1) (bruijn ##.x.1490 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k555" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.106.755 1 1))) ((bruijn ##.reverse.240 11 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k556) (bruijn ##.xs.103.756 1 2)) ((bruijn ##.k.1489 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k556, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k559" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.104.753 5 1) (bruijn ##.k.1484 1 0) (bruijn ##.expr.106.755 3 1) (bruijn ##.x.1485 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k558(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.240 12 8) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k559) (bruijn ##.xs.103.756 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k559, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda136, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.105.757 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k558) (##inline ##vcore.cdr (bruijn ##.expr.106.755 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.106.755 2 1)) (bruijn ##.xs.103.756 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k558, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1483 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda136))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda136, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k557(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1482 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda135) (bruijn ##.loop.754 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0lambda135, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k555) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k557))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k555, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754_V0k557, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572 ##.loop.754) #f (bruijn ##.loop.754 0 0) (bruijn ##.k.1481 1 0) (##inline ##vcore.cdr (bruijn ##.expr.603 5 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2));
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V10_Dloop_D754(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1480 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda134))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda134, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k560" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1494 0 0) (bruijn ##.k.1492 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k562" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1495 2 0) (##inline ##vcore.cons (bruijn ##.x.1496 1 0) (bruijn ##.x.1497 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 7 3) (bruijn ##.k.1498 0 0) (bruijn ##.env.602 6 1) (bruijn ##.x.761 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k561" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.235 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k562) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda139) (bruijn ##.xs.760 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k562, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda139, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 5 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k561) (bruijn ##.env.602 4 1) (##inline ##vcore.car (bruijn ##.expr.603 4 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k561, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda137, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.759 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k560) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda138) (bruijn ##.kk.18.604 2 1)) ((bruijn ##.k.1492 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k560, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda138, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.603 2 2)) (##vcore.call-with-values (bruijn ##.k.1479 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda133) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda137)) ((bruijn ##.k.1479 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda133, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda137, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.247 7 15) (bruijn ##.k.1474 0 0) (##string ##.string.1888) (bruijn ##.expr.603 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 15)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1888.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k565(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1473 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda140) (bruijn ##.kk.18.604 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda140, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k564" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1475 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k565))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k565, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1867) ((##vcore.symbol? (bruijn ##.expr.603 3 2))) (if (bruijn ##.reg.1867 0 0) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.569) #f (bruijn ##.lookup.569 4 0) (bruijn ##.k.1476 1 0) 0 (bruijn ##.env.602 3 1) (bruijn ##.expr.603 3 2)) ((bruijn ##.k.1476 1 0) (bruijn ##.expr.603 3 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[2]);
}
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k563(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k564) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda141) (bruijn ##.kk.18.604 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k564, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda141, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k553(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k554) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k563))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k554, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k563, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k544(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k545) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k553))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k545, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k553, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k538(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k539) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k544))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k539, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k544, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k534(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k535) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k538))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k535, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k538, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k530(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k531) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k534))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k531, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k534, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k509(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k510) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k530))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k510, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k530, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k489(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k490) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k509))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k490, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k509, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k470(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k471) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k489))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k471, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k489, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k464(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k465) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k470))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k465, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k470, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k455(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k456) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k464))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k456, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k464, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k448(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k449) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k455))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k449, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k455, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k443(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k444) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k448))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k444, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k448, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k432(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k433) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k443))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k433, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k443, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k417(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k418) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k432))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k418, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k432, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k408(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k409) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k417))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k409, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k417, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k396) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k408))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k396, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0k408, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1472 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda83))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572_V0lambda83, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.572) #f (bruijn ##.iter.572 1 3) (bruijn ##.k.1820 0 0) '() (bruijn ##.expr.763 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[3]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k568" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1839 0 0) (bruijn ##.k.1837 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1840 0 0) (bruijn ##.expr.568 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k567" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1838 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k568) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda143) (bruijn ##.kk.0.764 2 1)) ((bruijn ##.k.1837 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k568, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda143, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k566" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.568 3 1)) ((bruijn ##.equal?.233 5 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k567) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.568 3 1))) ((bruijn ##.k.1837 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k567, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k574" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1829 0 0) (bruijn ##.k.1824 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k575" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1830 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.768 3 0)) (##inline ##vcore.cons (bruijn ##.x.1833 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.573) #f (bruijn ##.doit.573 6 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k575) (##inline ##vcore.car (bruijn ##.expr.5.770 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k575, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k573" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.770 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.770 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k574) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda144) (bruijn ##.kk.0.764 4 1)) ((bruijn ##.k.1824 3 0) #f)) ((bruijn ##.k.1824 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k574, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda144, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k572" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.768 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k573) (##inline ##vcore.cdr (bruijn ##.expr.4.768 0 0))) ((bruijn ##.k.1824 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k573, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k571" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1825 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k572) (##inline ##vcore.cdr (bruijn ##.expr.568 4 1))) ((bruijn ##.k.1824 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k572, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k570" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.568 3 1)) ((bruijn ##.equal?.233 5 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k571) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.568 3 1))) ((bruijn ##.k.1824 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k571, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.573) #f (bruijn ##.doit.573 2 4) (bruijn ##.k.1822 0 0) (bruijn ##.expr.568 3 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[4]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k576(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.1821 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda145) (bruijn ##.kk.0.764 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda145, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k569(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k570) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k576))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k570, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k576, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k566) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k569))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k566, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k569, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573")) (##vcore.call/cc (bruijn ##.k.1418 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda142)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D569, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D570, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D571, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D572, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D573, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda142, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774_V0k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774_V0k577" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774_V0k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1845 0 0) ((bruijn ##.k.1843 1 0) (bruijn ##.i.776 1 2)) (basic-block 1 1 (##.reg.1870) ((##vcore.+ (bruijn ##.i.776 2 2) 1)) (##qualified-call (vanity compiler lower list-index ##.loop.774) #f (bruijn ##.loop.774 3 0) (bruijn ##.k.1843 2 0) (##inline ##vcore.cdr (bruijn ##.l.775 2 1)) (bruijn ##.reg.1870 0 0))))
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
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.l.775 0 1)) ((bruijn ##.k.1843 0 0) #f) ((bruijn ##.p.772 2 1) (close _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774_V0k577) (##inline ##vcore.car (bruijn ##.l.775 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774_V0k577, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0lower_V0list__index" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774")) (##qualified-call (vanity compiler lower list-index ##.loop.774) #f (bruijn ##.loop.774 0 0) (bruijn ##.k.1842 1 0) (bruijn ##.l.773 1 2) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D774(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V0vanity_V0compiler_V0lower_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 25) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity compiler lower) 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions" "_V60_V0vanity_V0compiler_V0lower") 0 0 (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify" "_V60_V0vanity_V0compiler_V0lower") (close "_V50_V0vanity_V0compiler_V0lower_V0list__index" "_V60_V0vanity_V0compiler_V0lower")) ((bruijn ##.k.789 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn-ify (bruijn ##.bruijn-ify.279 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'to-functions (bruijn ##.to-functions.276 0 0)) '()))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0lower = self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions, _V60_V0vanity_V0compiler_V0lower))));
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = VEncodeInt(0l);
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, _V60_V0vanity_V0compiler_V0lower))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index, _V60_V0vanity_V0compiler_V0lower))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0lower_V20", &_V60_V0vanity_V0compiler_V0lower);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn__ify,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__functions,
        self->vars[0]),
        VNULL)));
    }
}
static void _V0vanity_V0compiler_V0lower_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.778 0 0) (close _V0vanity_V0compiler_V0lower_V20_V0lambda2) (close _V0vanity_V0compiler_V0lower_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0lower_V20 = (VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda1;
