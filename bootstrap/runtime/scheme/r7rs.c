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

VEnv * _V60_V0scheme_V0r7rs;

VWEAK VWORD _V40_V10vcore_Dexit;
VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V0exit;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0exit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "exit" };
VWEAK VWORD _V40_V10vcore_Dcommand__line;
VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V0command__line;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0command__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "command-line" };
VWEAK VWORD _V40_V10vcore_Dapply;
VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;
VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0call__with__current__continuation;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V0call__with__current__continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "call-with-current-continuation" };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;
VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V40_V10vcore_Dchar__integer;
VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V0char___Ginteger;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0char___Ginteger = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "char->integer" };
VWEAK VWORD _V40_V10vcore_Dvector__length;
VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V40_V10vcore_Dvector__ref;
VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V40_V10vcore_Dvector;
VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V0vector;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vector" };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;
VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
VWEAK VWORD _V0list___Gvector;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->vector" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V40_V10vcore_Dstring___Gnumber;
VWEAK VClosure _VW_V40_V10vcore_Dstring___Gnumber = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringNumber2, NULL };
VWEAK VWORD _V0string___Gnumber;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->number" };
VWEAK VWORD _V40_V10vcore_Dstring___Gsymbol;
VWEAK VClosure _VW_V40_V10vcore_Dstring___Gsymbol = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSymbol2, NULL };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V40_V10vcore_Dstring__length;
VWEAK VClosure _VW_V40_V10vcore_Dstring__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringLength2, NULL };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V0string__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-set!" };
VWEAK VWORD _V40_V10vcore_Dstring__ref;
VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V40_V10vcore_Dstring__copy_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__copy_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringCopy2, NULL };
VWEAK VWORD _V0string__copy_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string-copy!" };
VWEAK VWORD _V0string__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-copy" };
VWEAK VWORD _V40_V10vcore_Dsubstring;
VWEAK VClosure _VW_V40_V10vcore_Dsubstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSubstring2, NULL };
VWEAK VWORD _V0substring;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0substring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "substring" };
VWEAK VWORD _V40_V10vcore_Dmake__string;
VWEAK VClosure _VW_V40_V10vcore_Dmake__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeString2, NULL };
VWEAK VWORD _V0make__string;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-string" };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V0set__cdr_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-cdr!" };
VWEAK VWORD _V40_V10vcore_Dset__car_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V0set__car_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-car!" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V40_V10vcore_Dremainder;
VWEAK VClosure _VW_V40_V10vcore_Dremainder = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRem2, NULL };
VWEAK VWORD _V0remainder;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0remainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "remainder" };
VWEAK VWORD _V40_V10vcore_Dquotient;
VWEAK VClosure _VW_V40_V10vcore_Dquotient = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VQuot2, NULL };
VWEAK VWORD _V0quotient;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0quotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "quotient" };
VWEAK VWORD _V40_V10vcore_D_W;
VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V0_W;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "/" };
VWEAK VWORD _V40_V10vcore_D_S;
VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V40_V10vcore_D__;
VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V40_V10vcore_D_P;
VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0exact___Ginexact;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0exact___Ginexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "exact->inexact" };
VWEAK VWORD _V40_V10vcore_Dinexact;
VWEAK VClosure _VW_V40_V10vcore_Dinexact = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VInexact, NULL };
VWEAK VWORD _V0inexact;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0inexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "inexact" };
VWEAK VWORD _V40_V10vcore_D_G_E;
VWEAK VClosure _VW_V40_V10vcore_D_G_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGe, NULL };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V40_V10vcore_D_L_E;
VWEAK VClosure _VW_V40_V10vcore_D_L_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLe, NULL };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V40_V10vcore_D_G;
VWEAK VClosure _VW_V40_V10vcore_D_G = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGt, NULL };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V40_V10vcore_D_E;
VWEAK VClosure _VW_V40_V10vcore_D_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpEq, NULL };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V40_V10vcore_D_L;
VWEAK VClosure _VW_V40_V10vcore_D_L = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLt, NULL };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V40_V10vcore_Dnot;
VWEAK VClosure _VW_V40_V10vcore_Dnot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNot2, NULL };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V40_V10vcore_Dchar_Q;
VWEAK VClosure _VW_V40_V10vcore_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "char\?" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0real_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0real_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "real\?" };
VWEAK VWORD _V40_V10vcore_Ddouble_Q;
VWEAK VClosure _VW_V40_V10vcore_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V0inexact_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0inexact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "inexact\?" };
VWEAK VWORD _V40_V10vcore_Dint_Q;
VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
VWEAK VWORD _V0exact_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0exact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "exact\?" };
VWEAK VWORD _V40_V10vcore_Dstring_Q;
VWEAK VClosure _VW_V40_V10vcore_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V40_V10vcore_Dsymbol_Q;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;
VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V0procedure_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0procedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "procedure\?" };
VWEAK VWORD _V40_V10vcore_Dvector_Q;
VWEAK VClosure _VW_V40_V10vcore_Dvector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorP2, NULL };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V40_V10vcore_Dpair_Q;
VWEAK VClosure _VW_V40_V10vcore_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V40_V10vcore_Deof__object_Q;
VWEAK VClosure _VW_V40_V10vcore_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V40_V10vcore_Dnull_Q;
VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D383 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0boolean_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0boolean_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "boolean\?" };
VWEAK VWORD _V0symbol_E_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0symbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "symbol=\?" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0complex_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0complex_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "complex\?" };
VWEAK VWORD _V0min;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0min = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "min" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0caaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caaar" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cdaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdaar" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0caaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaaar" };
VWEAK VWORD _V0caadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caadar" };
VWEAK VWORD _V0cadaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadaar" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0cdaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaaar" };
VWEAK VWORD _V0cdadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdadar" };
VWEAK VWORD _V0cddaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddaar" };
VWEAK VWORD _V0cdddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdddar" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0assq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assq" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0list___Gstring;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->string" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
VWEAK VWORD _V0current__output__port;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0current__output__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "current-output-port" };
VWEAK VWORD _V0current__input__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__input__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-input-port" };
VWEAK VWORD _V0open__output__file;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0open__output__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "open-output-file" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0with__output__to__file;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0with__output__to__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "with-output-to-file" };
VWEAK VWORD _V0read__char;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-char" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0read__line;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-line" };
VWEAK VWORD _V0with__input__from__file;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0with__input__from__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "with-input-from-file" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0cddddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddddr" };
VWEAK VWORD _V0cddadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddadr" };
VWEAK VWORD _V0cdaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaddr" };
VWEAK VWORD _V0cdaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaadr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0cadadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadadr" };
VWEAK VWORD _V0caaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaddr" };
VWEAK VWORD _V0caaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaadr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0caadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caadr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D382 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0scheme_V0r7rs_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V0exit = VEncodePointer(VInternSymbol(-1180165472, &_VW_V0exit.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V0command__line = VEncodePointer(VInternSymbol(-528197701, &_VW_V0command__line.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V0apply = VEncodePointer(VInternSymbol(-593882881, &_VW_V0apply.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V0call__with__values = VEncodePointer(VInternSymbol(1941194234, &_VW_V0call__with__values.sym), VPOINTER_OTHER);
  _V0call__with__current__continuation = VEncodePointer(VInternSymbol(1282580218, &_VW_V0call__with__current__continuation.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V0call_Wcc = VEncodePointer(VInternSymbol(122341816, &_VW_V0call_Wcc.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V0char___Ginteger = VEncodePointer(VInternSymbol(1804103901, &_VW_V0char___Ginteger.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V0vector__length = VEncodePointer(VInternSymbol(992023749, &_VW_V0vector__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V0vector__set_B = VEncodePointer(VInternSymbol(940022757, &_VW_V0vector__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V0vector__ref = VEncodePointer(VInternSymbol(1088741906, &_VW_V0vector__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V0vector = VEncodePointer(VInternSymbol(2121585365, &_VW_V0vector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V0list___Gvector = VEncodePointer(VInternSymbol(-1621476658, &_VW_V0list___Gvector.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V0symbol___Gstring = VEncodePointer(VInternSymbol(1686099966, &_VW_V0symbol___Gstring.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gnumber", &_VW_V40_V10vcore_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V0string___Gnumber = VEncodePointer(VInternSymbol(-2037572785, &_VW_V0string___Gnumber.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gsymbol", &_VW_V40_V10vcore_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V0string___Gsymbol = VEncodePointer(VInternSymbol(2140599123, &_VW_V0string___Gsymbol.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__length", &_VW_V40_V10vcore_Dstring__length), VPOINTER_CLOSURE);
  _V0string__length = VEncodePointer(VInternSymbol(1181039324, &_VW_V0string__length.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V0string__set_B = VEncodePointer(VInternSymbol(1393432733, &_VW_V0string__set_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V0string__ref = VEncodePointer(VInternSymbol(-398164284, &_VW_V0string__ref.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__copy_B", &_VW_V40_V10vcore_Dstring__copy_B), VPOINTER_CLOSURE);
  _V0string__copy_B = VEncodePointer(VInternSymbol(-2113239574, &_VW_V0string__copy_B.sym), VPOINTER_OTHER);
  _V0string__copy = VEncodePointer(VInternSymbol(-1345957753, &_VW_V0string__copy.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsubstring", &_VW_V40_V10vcore_Dsubstring), VPOINTER_CLOSURE);
  _V0substring = VEncodePointer(VInternSymbol(806341036, &_VW_V0substring.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__string", &_VW_V40_V10vcore_Dmake__string), VPOINTER_CLOSURE);
  _V0make__string = VEncodePointer(VInternSymbol(-681842748, &_VW_V0make__string.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V0set__cdr_B = VEncodePointer(VInternSymbol(-1220981645, &_VW_V0set__cdr_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V0set__car_B = VEncodePointer(VInternSymbol(1093388680, &_VW_V0set__car_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V0cdr = VEncodePointer(VInternSymbol(-27845161, &_VW_V0cdr.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V0car = VEncodePointer(VInternSymbol(-5179575, &_VW_V0car.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V0cons = VEncodePointer(VInternSymbol(943237530, &_VW_V0cons.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V40_V10vcore_Dremainder", &_VW_V40_V10vcore_Dremainder), VPOINTER_CLOSURE);
  _V0remainder = VEncodePointer(VInternSymbol(2045946545, &_VW_V0remainder.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V40_V10vcore_Dquotient", &_VW_V40_V10vcore_Dquotient), VPOINTER_CLOSURE);
  _V0quotient = VEncodePointer(VInternSymbol(91253952, &_VW_V0quotient.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V0_W = VEncodePointer(VInternSymbol(-1980900630, &_VW_V0_W.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V0_S = VEncodePointer(VInternSymbol(-1095746844, &_VW_V0_S.sym), VPOINTER_OTHER);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V0__ = VEncodePointer(VInternSymbol(1290206293, &_VW_V0__.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V0exact___Ginexact = VEncodePointer(VInternSymbol(1699583945, &_VW_V0exact___Ginexact.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dinexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinexact", &_VW_V40_V10vcore_Dinexact), VPOINTER_CLOSURE);
  _V0inexact = VEncodePointer(VInternSymbol(-1954126255, &_VW_V0inexact.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V0_G_E = VEncodePointer(VInternSymbol(1925865613, &_VW_V0_G_E.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
  _V0_L_E = VEncodePointer(VInternSymbol(-2106268102, &_VW_V0_L_E.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V0_G = VEncodePointer(VInternSymbol(-990041482, &_VW_V0_G.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V0_E = VEncodePointer(VInternSymbol(91122933, &_VW_V0_E.sym), VPOINTER_OTHER);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V0_L = VEncodePointer(VInternSymbol(1057406733, &_VW_V0_L.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnot = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnot", &_VW_V40_V10vcore_Dnot), VPOINTER_CLOSURE);
  _V0not = VEncodePointer(VInternSymbol(1947793232, &_VW_V0not.sym), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VInternSymbol(232208272, &_VW_V0eqv_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V0eq_Q = VEncodePointer(VInternSymbol(-1583738215, &_VW_V0eq_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V0char_Q = VEncodePointer(VInternSymbol(-1122637333, &_VW_V0char_Q.sym), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VInternSymbol(112972720, &_VW_V0integer_Q.sym), VPOINTER_OTHER);
  _V0real_Q = VEncodePointer(VInternSymbol(-591947109, &_VW_V0real_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V0inexact_Q = VEncodePointer(VInternSymbol(288726745, &_VW_V0inexact_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V0exact_Q = VEncodePointer(VInternSymbol(210465295, &_VW_V0exact_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V0string_Q = VEncodePointer(VInternSymbol(-344327502, &_VW_V0string_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V0symbol_Q = VEncodePointer(VInternSymbol(1804847899, &_VW_V0symbol_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V0procedure_Q = VEncodePointer(VInternSymbol(1068598657, &_VW_V0procedure_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V0vector_Q = VEncodePointer(VInternSymbol(-1692453913, &_VW_V0vector_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V0pair_Q = VEncodePointer(VInternSymbol(1000447642, &_VW_V0pair_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V0eof__object_Q = VEncodePointer(VInternSymbol(-516941403, &_VW_V0eof__object_Q.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V0null_Q = VEncodePointer(VInternSymbol(1722024332, &_VW_V0null_Q.sym), VPOINTER_OTHER);
  _V0boolean_Q = VEncodePointer(VInternSymbol(746476144, &_VW_V0boolean_Q.sym), VPOINTER_OTHER);
  _V0symbol_E_Q = VEncodePointer(VInternSymbol(-328940355, &_VW_V0symbol_E_Q.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0complex_Q = VEncodePointer(VInternSymbol(-1403003604, &_VW_V0complex_Q.sym), VPOINTER_OTHER);
  _V0min = VEncodePointer(VInternSymbol(1503276295, &_VW_V0min.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0caaar = VEncodePointer(VInternSymbol(-380092063, &_VW_V0caaar.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0cdaar = VEncodePointer(VInternSymbol(128292593, &_VW_V0cdaar.sym), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VInternSymbol(-1851430374, &_VW_V0cddar.sym), VPOINTER_OTHER);
  _V0caaaar = VEncodePointer(VInternSymbol(1780001564, &_VW_V0caaaar.sym), VPOINTER_OTHER);
  _V0caadar = VEncodePointer(VInternSymbol(118144657, &_VW_V0caadar.sym), VPOINTER_OTHER);
  _V0cadaar = VEncodePointer(VInternSymbol(-789146610, &_VW_V0cadaar.sym), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VInternSymbol(-974166901, &_VW_V0caddar.sym), VPOINTER_OTHER);
  _V0cdaaar = VEncodePointer(VInternSymbol(1380569715, &_VW_V0cdaaar.sym), VPOINTER_OTHER);
  _V0cdadar = VEncodePointer(VInternSymbol(-1207654366, &_VW_V0cdadar.sym), VPOINTER_OTHER);
  _V0cddaar = VEncodePointer(VInternSymbol(-2001026799, &_VW_V0cddaar.sym), VPOINTER_OTHER);
  _V0cdddar = VEncodePointer(VInternSymbol(-1552563578, &_VW_V0cdddar.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VInternSymbol(-297841368, &_VW_V0list__ref.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0assq = VEncodePointer(VInternSymbol(456349189, &_VW_V0assq.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0list___Gstring = VEncodePointer(VInternSymbol(2100125314, &_VW_V0list___Gstring.sym), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VInternSymbol(2135063694, &_VW_V0vector__for__each.sym), VPOINTER_OTHER);
  _V0current__output__port = VEncodePointer(VInternSymbol(-743992098, &_VW_V0current__output__port.sym), VPOINTER_OTHER);
  _V0current__input__port = VEncodePointer(VInternSymbol(-1971432926, &_VW_V0current__input__port.sym), VPOINTER_OTHER);
  _V0open__output__file = VEncodePointer(VInternSymbol(528133132, &_VW_V0open__output__file.sym), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VInternSymbol(1528859113, &_VW_V0open__output__string.sym), VPOINTER_OTHER);
  _V0with__output__to__file = VEncodePointer(VInternSymbol(-1427892565, &_VW_V0with__output__to__file.sym), VPOINTER_OTHER);
  _V0read__char = VEncodePointer(VInternSymbol(374894470, &_VW_V0read__char.sym), VPOINTER_OTHER);
  _V0read = VEncodePointer(VInternSymbol(974172663, &_VW_V0read.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V0read__line = VEncodePointer(VInternSymbol(1153339911, &_VW_V0read__line.sym), VPOINTER_OTHER);
  _V0with__input__from__file = VEncodePointer(VInternSymbol(2104461252, &_VW_V0with__input__from__file.sym), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VInternSymbol(-1094109327, &_VW_V0get__output__string.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VInternSymbol(165226251, &_VW_V0open__input__file.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VInternSymbol(-2018065631, &_VW_V0string___Glist.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0cddddr = VEncodePointer(VInternSymbol(-1400798210, &_VW_V0cddddr.sym), VPOINTER_OTHER);
  _V0cddadr = VEncodePointer(VInternSymbol(253578786, &_VW_V0cddadr.sym), VPOINTER_OTHER);
  _V0cdaddr = VEncodePointer(VInternSymbol(-940068257, &_VW_V0cdaddr.sym), VPOINTER_OTHER);
  _V0cdaadr = VEncodePointer(VInternSymbol(-1890799430, &_VW_V0cdaadr.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0cadadr = VEncodePointer(VInternSymbol(879370799, &_VW_V0cadadr.sym), VPOINTER_OTHER);
  _V0caaddr = VEncodePointer(VInternSymbol(-1166727585, &_VW_V0caaddr.sym), VPOINTER_OTHER);
  _V0caaadr = VEncodePointer(VInternSymbol(-260616953, &_VW_V0caaadr.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VInternSymbol(-1987367307, &_VW_V0cdadr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0caadr = VEncodePointer(VInternSymbol(1112754322, &_VW_V0caadr.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0max = VEncodePointer(VInternSymbol(-606210272, &_VW_V0max.sym), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VInternSymbol(-1605136215, &_VW_V0number_Q.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
static void _V0scheme_V0r7rs_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.127 2 0) (##string ##.string.382) (bruijn ##.x.128 0 0) 'number? 'max 'cadr 'cddr 'caadr 'caddr 'cdadr 'cdddr 'caaadr 'caaddr 'cadadr 'cadddr 'cdaadr 'cdaddr 'cddadr 'cddddr 'length 'map 'append 'memq 'member 'assv 'string->list 'string-append 'current-error-port 'open-input-file 'close-port 'get-output-string 'with-input-from-file 'read-line 'newline 'write 'error 'values 'display 'read 'read-char 'with-output-to-file 'open-output-string 'open-output-file 'current-input-port 'current-output-port 'vector-for-each 'list->string 'assoc 'assq 'memv 'reverse 'for-each 'list-ref 'list 'cdddar 'cddaar 'cdadar 'cdaaar 'caddar 'cadaar 'caadar 'caaaar 'cddar 'cdaar 'cadar 'caaar 'cdar 'caar 'min 'complex? 'equal? 'symbol=? 'boolean?)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 73,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D382.sym, VPOINTER_OTHER),
      _var0,
      _V0number_Q,
      _V0max,
      _V0cadr,
      _V0cddr,
      _V0caadr,
      _V0caddr,
      _V0cdadr,
      _V0cdddr,
      _V0caaadr,
      _V0caaddr,
      _V0cadadr,
      _V0cadddr,
      _V0cdaadr,
      _V0cdaddr,
      _V0cddadr,
      _V0cddddr,
      _V0length,
      _V0map,
      _V0append,
      _V0memq,
      _V0member,
      _V0assv,
      _V0string___Glist,
      _V0string__append,
      _V0current__error__port,
      _V0open__input__file,
      _V0close__port,
      _V0get__output__string,
      _V0with__input__from__file,
      _V0read__line,
      _V0newline,
      _V0write,
      _V0error,
      _V0values,
      _V0display,
      _V0read,
      _V0read__char,
      _V0with__output__to__file,
      _V0open__output__string,
      _V0open__output__file,
      _V0current__input__port,
      _V0current__output__port,
      _V0vector__for__each,
      _V0list___Gstring,
      _V0assoc,
      _V0assq,
      _V0memv,
      _V0reverse,
      _V0for__each,
      _V0list__ref,
      _V0list,
      _V0cdddar,
      _V0cddaar,
      _V0cdadar,
      _V0cdaaar,
      _V0caddar,
      _V0cadaar,
      _V0caadar,
      _V0caaaar,
      _V0cddar,
      _V0cdaar,
      _V0cadar,
      _V0caaar,
      _V0cdar,
      _V0caar,
      _V0min,
      _V0complex_Q,
      _V0equal_Q,
      _V0symbol_E_Q,
      _V0boolean_Q);
}
static void _V0scheme_V0r7rs_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0scheme_V0r7rs_V20_V0k2) (bruijn ##.x.129 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_V0k2, self)))),
      _var0);
}
static void _V0scheme_V0r7rs_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0scheme_V0r7rs_V20_V0k1) (##string ##.string.383))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D383.sym, VPOINTER_OTHER));
}
static void _V0scheme_V0r7rs_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61, VWORD _var62, VWORD _var63, VWORD _var64, VWORD _var65, VWORD _var66, VWORD _var67, VWORD _var68, VWORD _var69, VWORD _var70) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 71) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_V0lambda3, got ~D~N"
  "-- expected 71~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[71]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 71, 71, statics);
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
  self->vars[62] = _var62;
  self->vars[63] = _var63;
  self->vars[64] = _var64;
  self->vars[65] = _var65;
  self->vars[66] = _var66;
  self->vars[67] = _var67;
  self->vars[68] = _var68;
  self->vars[69] = _var69;
  self->vars[70] = _var70;
  // (##letrec (scheme r7rs) 0 () ((bruijn ##.k.130 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (##intrinsic ##vcore.null?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (##intrinsic ##vcore.eof-object?)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn ##.boolean?.69 1 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (##intrinsic ##vcore.pair?)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (##intrinsic ##vcore.vector?)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (##intrinsic ##vcore.procedure?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (##intrinsic ##vcore.symbol?)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (##intrinsic ##vcore.string?)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (##intrinsic ##vcore.double?)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (##intrinsic ##vcore.int?)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (##intrinsic ##vcore.char?)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn ##.symbol=?.68 1 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.equal?.67 1 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (##intrinsic ##vcore.not)) (##inline ##vcore.cons (##inline ##vcore.cons '< (##intrinsic ##vcore.<)) (##inline ##vcore.cons (##inline ##vcore.cons '= (##intrinsic ##vcore.=)) (##inline ##vcore.cons (##inline ##vcore.cons '> (##intrinsic ##vcore.>)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (##intrinsic ##vcore.<=)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (##intrinsic ##vcore.>=)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (##intrinsic ##vcore.inexact)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn ##.number?.0 1 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn ##.complex?.66 1 67)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (##intrinsic ##vcore.+)) (##inline ##vcore.cons (##inline ##vcore.cons '- (##intrinsic ##vcore.-)) (##inline ##vcore.cons (##inline ##vcore.cons '* (##intrinsic ##vcore.*)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (##intrinsic ##vcore./)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (##intrinsic ##vcore.quotient)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (##intrinsic ##vcore.remainder)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn ##.max.1 1 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn ##.min.65 1 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (##intrinsic ##vcore.cons)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (##intrinsic ##vcore.car)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (##intrinsic ##vcore.cdr)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (##intrinsic ##vcore.set-car!)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (##intrinsic ##vcore.set-cdr!)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.caar.64 1 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.cadr.2 1 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.cdar.63 1 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.cddr.3 1 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.caaar.62 1 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.caadr.4 1 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.cadar.61 1 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.caddr.5 1 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.cdaar.60 1 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.cdadr.6 1 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.cddar.59 1 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.cdddr.7 1 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.caaaar.58 1 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.caaadr.8 1 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.caadar.57 1 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.caaddr.9 1 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.cadaar.56 1 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.cadadr.10 1 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.caddar.55 1 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.cadddr.11 1 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.cdaaar.54 1 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.cdaadr.12 1 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.cdadar.53 1 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.cdaddr.13 1 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.cddaar.52 1 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.cddadr.14 1 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.cdddar.51 1 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.cddddr.15 1 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.list.50 1 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.length.16 1 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn ##.list-ref.49 1 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.map.17 1 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.for-each.48 1 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.append.18 1 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.reverse.47 1 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.memq.19 1 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.memv.46 1 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.member.20 1 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.assq.45 1 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.assv.21 1 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.assoc.44 1 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.22 1 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn ##.list->string.43 1 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (##intrinsic ##vcore.make-string)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (##intrinsic ##vcore.substring)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (##intrinsic ##vcore.string-copy!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (##intrinsic ##vcore.string-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (##intrinsic ##vcore.string-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (##intrinsic ##vcore.string-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (##intrinsic ##vcore.string->symbol)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (##intrinsic ##vcore.string->number)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.22 1 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn ##.string-append.23 1 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (##intrinsic ##vcore.symbol->string)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (##intrinsic ##vcore.list->vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (##intrinsic ##vcore.vector)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (##intrinsic ##vcore.vector-ref)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (##intrinsic ##vcore.vector-set!)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (##intrinsic ##vcore.vector-length)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn ##.vector-for-each.42 1 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (##intrinsic ##vcore.char-integer)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn ##.current-output-port.41 1 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn ##.current-error-port.24 1 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn ##.current-input-port.40 1 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn ##.open-input-file.25 1 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn ##.open-output-file.39 1 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn ##.close-port.26 1 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn ##.open-output-string.38 1 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn ##.get-output-string.27 1 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn ##.with-output-to-file.37 1 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn ##.with-input-from-file.28 1 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn ##.read-char.36 1 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn ##.read-line.29 1 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn ##.read.35 1 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn ##.newline.30 1 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn ##.display.34 1 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn ##.write.31 1 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (##intrinsic ##vcore.call/cc)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (##intrinsic ##vcore.call-with-values)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (##intrinsic ##vcore.apply)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn ##.values.33 1 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (##intrinsic ##vcore.command-line)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (##intrinsic ##vcore.exit)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.error.32 1 33)) '()))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[0]; } container;
    self = &container.self;
    _V60_V0scheme_V0r7rs = self;
    VInitEnv(self, 0, 0, statics);
    VRegisterStaticEnv("_V0scheme_V0r7rs_V20", &_V60_V0scheme_V0r7rs);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        _V40_V10vcore_Dnull_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eof__object_Q,
        _V40_V10vcore_Deof__object_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0boolean_Q,
        statics->vars[70]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair_Q,
        _V40_V10vcore_Dpair_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector_Q,
        _V40_V10vcore_Dvector_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0procedure_Q,
        _V40_V10vcore_Dprocedure_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_Q,
        _V40_V10vcore_Dsymbol_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string_Q,
        _V40_V10vcore_Dstring_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact_Q,
        _V40_V10vcore_Dint_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact_Q,
        _V40_V10vcore_Ddouble_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0real_Q,
        _V40_V10vcore_Ddouble_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0integer_Q,
        _V40_V10vcore_Dint_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char_Q,
        _V40_V10vcore_Dchar_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eq_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_E_Q,
        statics->vars[69]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eqv_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        statics->vars[68]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0not,
        _V40_V10vcore_Dnot),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L,
        _V40_V10vcore_D_L),
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
        _V0_L_E,
        _V40_V10vcore_D_L_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        _V40_V10vcore_D_G_E),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact,
        _V40_V10vcore_Dinexact),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact___Ginexact,
        _V40_V10vcore_Dinexact),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number_Q,
        statics->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        statics->vars[67]),
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
        _V0quotient,
        _V40_V10vcore_Dquotient),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remainder,
        _V40_V10vcore_Dremainder),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0max,
        statics->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        statics->vars[66]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        _V40_V10vcore_Dcons),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        _V40_V10vcore_Dcar),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        _V40_V10vcore_Dcdr),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__car_B,
        _V40_V10vcore_Dset__car_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__cdr_B,
        _V40_V10vcore_Dset__cdr_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        statics->vars[65]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        statics->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        statics->vars[64]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        statics->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        statics->vars[63]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        statics->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        statics->vars[62]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        statics->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        statics->vars[61]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        statics->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        statics->vars[60]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        statics->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        statics->vars[59]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        statics->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        statics->vars[58]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        statics->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        statics->vars[57]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        statics->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        statics->vars[56]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        statics->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        statics->vars[55]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        statics->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        statics->vars[54]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        statics->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        statics->vars[53]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        statics->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        statics->vars[52]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        statics->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        statics->vars[51]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        statics->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        statics->vars[50]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        statics->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        statics->vars[49]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        statics->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        statics->vars[48]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        statics->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        statics->vars[47]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        statics->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        statics->vars[46]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        statics->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        statics->vars[45]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        statics->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        statics->vars[44]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__string,
        _V40_V10vcore_Dmake__string),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0substring,
        _V40_V10vcore_Dsubstring),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy,
        _V40_V10vcore_Dsubstring),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy_B,
        _V40_V10vcore_Dstring__copy_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__ref,
        _V40_V10vcore_Dstring__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__set_B,
        _V40_V10vcore_Dstring__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__length,
        _V40_V10vcore_Dstring__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gsymbol,
        _V40_V10vcore_Dstring___Gsymbol),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gnumber,
        _V40_V10vcore_Dstring___Gnumber),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        statics->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__append,
        statics->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol___Gstring,
        _V40_V10vcore_Dsymbol___Gstring),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gvector,
        _V40_V10vcore_Dlist___Gvector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        _V40_V10vcore_Dvector),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__ref,
        _V40_V10vcore_Dvector__ref),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__set_B,
        _V40_V10vcore_Dvector__set_B),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__length,
        _V40_V10vcore_Dvector__length),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        statics->vars[43]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char___Ginteger,
        _V40_V10vcore_Dchar__integer),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        statics->vars[42]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        statics->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        statics->vars[41]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        statics->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        statics->vars[40]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        statics->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        statics->vars[39]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        statics->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        statics->vars[38]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        statics->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        statics->vars[37]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        statics->vars[30]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        statics->vars[36]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        statics->vars[31]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        statics->vars[35]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        statics->vars[32]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        _V40_V10vcore_Dcall_Wcc),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__current__continuation,
        _V40_V10vcore_Dcall_Wcc),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__values,
        _V40_V10vcore_Dcall__with__values),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0apply,
        _V40_V10vcore_Dapply),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0values,
        statics->vars[34]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0command__line,
        _V40_V10vcore_Dcommand__line),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exit,
        _V40_V10vcore_Dexit),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        statics->vars[33]),
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    }
}
static void _V0scheme_V0r7rs_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.126 0 0) (close _V0scheme_V0r7rs_V20_V0lambda2) (close _V0scheme_V0r7rs_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_V0lambda3, self)))));
}
VFunc _V0scheme_V0r7rs_V20 = (VFunc)_V0scheme_V0r7rs_V20_V0lambda1;
