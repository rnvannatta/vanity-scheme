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
static VPair _V10_Dpair_D712 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D711 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D710 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D709 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D705 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D704 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D703 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D702 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D700 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D699 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D698 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D697 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D696 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D695 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D694 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D693 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D692 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D691 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D690 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D689 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D688 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D687 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D686 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D685 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D684 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D683 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D682 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D681 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D680 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D679 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D678 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D677 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D676 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D675 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D674 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D673 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D672 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D671 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D670 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D669 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D668 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D667 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D666 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D665 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D664 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D663 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D662 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D661 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D660 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D659 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D658 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D657 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D656 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D655 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D654 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D653 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0scheme_V0r7rs_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D650 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D649 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D648 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D647 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D646 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D645 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D644 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D643 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D642 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D641 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D640 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
static void _V0scheme_V0r7rs_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0scheme_V0r7rs_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.128 2 0) (##string ##.string.651) (bruijn ##.%x.129 0 0) 'number? 'max 'cadr 'cddr 'caadr 'caddr 'cdadr 'cdddr 'caaadr 'caaddr 'cadadr 'cadddr 'cdaadr 'cdaddr 'cddadr 'cddddr 'length 'map 'append 'memq 'member 'assv 'string->list 'string-append 'current-error-port 'open-input-file 'close-port 'get-output-string 'with-input-from-file 'read-line 'newline 'write 'error 'values 'display 'read 'read-char 'with-output-to-file 'open-output-string 'open-output-file 'current-input-port 'current-output-port 'vector-for-each 'list->string 'assoc 'assq 'memv 'reverse 'for-each 'list-ref 'list 'cdddar 'cddaar 'cdadar 'cdaaar 'caddar 'cadaar 'caadar 'caaaar 'cddar 'cdaar 'cadar 'caaar 'cdar 'caar 'min 'complex? 'equal? 'symbol=? 'boolean?)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 73,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D651.sym, VPOINTER_OTHER),
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
  // (##vcore.vector (close _V0scheme_V0r7rs_V20_V0k2) (bruijn ##.%x.130 0 0))
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
  // (##vcore.load-library (close _V0scheme_V0r7rs_V20_V0k1) (##string ##.string.652))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D652.sym, VPOINTER_OTHER));
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
  // (##letrec (scheme r7rs) 0 () (basic-block 252 252 (##.%x.383 ##.%x.384 ##.%x.385 ##.%x.386 ##.%x.387 ##.%x.388 ##.%x.389 ##.%x.390 ##.%x.391 ##.%x.392 ##.%x.393 ##.%x.394 ##.%x.395 ##.%x.396 ##.%x.397 ##.%x.398 ##.%x.399 ##.%x.400 ##.%x.401 ##.%x.402 ##.%x.403 ##.%x.404 ##.%x.405 ##.%x.406 ##.%x.407 ##.%x.408 ##.%x.409 ##.%x.410 ##.%x.411 ##.%x.412 ##.%x.413 ##.%x.414 ##.%x.415 ##.%x.416 ##.%x.417 ##.%x.418 ##.%x.419 ##.%x.420 ##.%x.421 ##.%x.422 ##.%x.423 ##.%x.424 ##.%x.425 ##.%x.426 ##.%x.427 ##.%x.428 ##.%x.429 ##.%x.430 ##.%x.431 ##.%x.432 ##.%x.433 ##.%x.434 ##.%x.435 ##.%x.436 ##.%x.437 ##.%x.438 ##.%x.439 ##.%x.440 ##.%x.441 ##.%x.442 ##.%x.443 ##.%x.444 ##.%x.445 ##.%x.446 ##.%x.447 ##.%x.448 ##.%x.449 ##.%x.450 ##.%x.451 ##.%x.452 ##.%x.453 ##.%x.454 ##.%x.455 ##.%x.456 ##.%x.457 ##.%x.458 ##.%x.459 ##.%x.460 ##.%x.461 ##.%x.462 ##.%x.463 ##.%x.464 ##.%x.465 ##.%x.466 ##.%x.467 ##.%x.468 ##.%x.469 ##.%x.470 ##.%x.471 ##.%x.472 ##.%x.473 ##.%x.474 ##.%x.475 ##.%x.476 ##.%x.477 ##.%x.478 ##.%x.479 ##.%x.480 ##.%x.481 ##.%x.482 ##.%x.483 ##.%x.484 ##.%x.485 ##.%x.486 ##.%x.487 ##.%x.488 ##.%x.489 ##.%x.490 ##.%x.491 ##.%x.492 ##.%x.493 ##.%x.494 ##.%x.495 ##.%x.496 ##.%x.497 ##.%x.498 ##.%x.499 ##.%x.500 ##.%x.501 ##.%x.502 ##.%x.503 ##.%x.504 ##.%x.505 ##.%x.506 ##.%x.507 ##.%x.508 ##.%x.509 ##.%x.510 ##.%x.511 ##.%x.512 ##.%x.513 ##.%x.514 ##.%x.515 ##.%x.516 ##.%x.517 ##.%x.518 ##.%x.519 ##.%x.520 ##.%x.521 ##.%x.522 ##.%x.523 ##.%x.524 ##.%x.525 ##.%x.526 ##.%x.527 ##.%x.528 ##.%x.529 ##.%x.530 ##.%x.531 ##.%x.532 ##.%x.533 ##.%x.534 ##.%x.535 ##.%x.536 ##.%x.537 ##.%x.538 ##.%x.539 ##.%x.540 ##.%x.541 ##.%x.542 ##.%x.543 ##.%x.544 ##.%x.545 ##.%x.546 ##.%x.547 ##.%x.548 ##.%x.549 ##.%x.550 ##.%x.551 ##.%x.552 ##.%x.553 ##.%x.554 ##.%x.555 ##.%x.556 ##.%x.557 ##.%x.558 ##.%x.559 ##.%x.560 ##.%x.561 ##.%x.562 ##.%x.563 ##.%x.564 ##.%x.565 ##.%x.566 ##.%x.567 ##.%x.568 ##.%x.569 ##.%x.570 ##.%x.571 ##.%x.572 ##.%x.573 ##.%x.574 ##.%x.575 ##.%x.576 ##.%x.577 ##.%x.578 ##.%x.579 ##.%x.580 ##.%x.581 ##.%x.582 ##.%x.583 ##.%x.584 ##.%x.585 ##.%x.586 ##.%x.587 ##.%x.588 ##.%x.589 ##.%x.590 ##.%x.591 ##.%x.592 ##.%x.593 ##.%x.594 ##.%x.595 ##.%x.596 ##.%x.597 ##.%x.598 ##.%x.599 ##.%x.600 ##.%x.601 ##.%x.602 ##.%x.603 ##.%x.604 ##.%x.605 ##.%x.606 ##.%x.607 ##.%x.608 ##.%x.609 ##.%x.610 ##.%x.611 ##.%x.612 ##.%x.613 ##.%x.614 ##.%x.615 ##.%x.616 ##.%x.617 ##.%x.618 ##.%x.619 ##.%x.620 ##.%x.621 ##.%x.622 ##.%x.623 ##.%x.624 ##.%x.625 ##.%x.626 ##.%x.627 ##.%x.628 ##.%x.629 ##.%x.630 ##.%x.631 ##.%x.632 ##.%x.633 ##.%r.634) ((##vcore.cons 'null? (##intrinsic ##vcore.null?)) (##vcore.cons 'eof-object? (##intrinsic ##vcore.eof-object?)) (##vcore.cons 'boolean? (bruijn ##.boolean?.70 2 70)) (##vcore.cons 'pair? (##intrinsic ##vcore.pair?)) (##vcore.cons 'vector? (##intrinsic ##vcore.vector?)) (##vcore.cons 'procedure? (##intrinsic ##vcore.procedure?)) (##vcore.cons 'symbol? (##intrinsic ##vcore.symbol?)) (##vcore.cons 'string? (##intrinsic ##vcore.string?)) (##vcore.cons 'exact? (##intrinsic ##vcore.int?)) (##vcore.cons 'inexact? (##intrinsic ##vcore.double?)) (##vcore.cons 'real? (##intrinsic ##vcore.double?)) (##vcore.cons 'integer? (##intrinsic ##vcore.int?)) (##vcore.cons 'char? (##intrinsic ##vcore.char?)) (##vcore.cons 'eq? (##intrinsic ##vcore.eq?)) (##vcore.cons 'symbol=? (bruijn ##.symbol=?.69 2 69)) (##vcore.cons 'eqv? (##intrinsic ##vcore.eq?)) (##vcore.cons 'equal? (bruijn ##.equal?.68 2 68)) (##vcore.cons 'not (##intrinsic ##vcore.not)) (##vcore.cons '< (##intrinsic ##vcore.<)) (##vcore.cons '= (##intrinsic ##vcore.=)) (##vcore.cons '> (##intrinsic ##vcore.>)) (##vcore.cons '<= (##intrinsic ##vcore.<=)) (##vcore.cons '>= (##intrinsic ##vcore.>=)) (##vcore.cons 'inexact (##intrinsic ##vcore.inexact)) (##vcore.cons 'exact->inexact (##intrinsic ##vcore.inexact)) (##vcore.cons 'number? (bruijn ##.number?.1 2 1)) (##vcore.cons 'complex? (bruijn ##.complex?.67 2 67)) (##vcore.cons '+ (##intrinsic ##vcore.+)) (##vcore.cons '- (##intrinsic ##vcore.-)) (##vcore.cons '* (##intrinsic ##vcore.*)) (##vcore.cons '/ (##intrinsic ##vcore./)) (##vcore.cons 'quotient (##intrinsic ##vcore.quotient)) (##vcore.cons 'remainder (##intrinsic ##vcore.remainder)) (##vcore.cons 'max (bruijn ##.max.2 2 2)) (##vcore.cons 'min (bruijn ##.min.66 2 66)) (##vcore.cons 'cons (##intrinsic ##vcore.cons)) (##vcore.cons 'car (##intrinsic ##vcore.car)) (##vcore.cons 'cdr (##intrinsic ##vcore.cdr)) (##vcore.cons 'set-car! (##intrinsic ##vcore.set-car!)) (##vcore.cons 'set-cdr! (##intrinsic ##vcore.set-cdr!)) (##vcore.cons 'caar (bruijn ##.caar.65 2 65)) (##vcore.cons 'cadr (bruijn ##.cadr.3 2 3)) (##vcore.cons 'cdar (bruijn ##.cdar.64 2 64)) (##vcore.cons 'cddr (bruijn ##.cddr.4 2 4)) (##vcore.cons 'caaar (bruijn ##.caaar.63 2 63)) (##vcore.cons 'caadr (bruijn ##.caadr.5 2 5)) (##vcore.cons 'cadar (bruijn ##.cadar.62 2 62)) (##vcore.cons 'caddr (bruijn ##.caddr.6 2 6)) (##vcore.cons 'cdaar (bruijn ##.cdaar.61 2 61)) (##vcore.cons 'cdadr (bruijn ##.cdadr.7 2 7)) (##vcore.cons 'cddar (bruijn ##.cddar.60 2 60)) (##vcore.cons 'cdddr (bruijn ##.cdddr.8 2 8)) (##vcore.cons 'caaaar (bruijn ##.caaaar.59 2 59)) (##vcore.cons 'caaadr (bruijn ##.caaadr.9 2 9)) (##vcore.cons 'caadar (bruijn ##.caadar.58 2 58)) (##vcore.cons 'caaddr (bruijn ##.caaddr.10 2 10)) (##vcore.cons 'cadaar (bruijn ##.cadaar.57 2 57)) (##vcore.cons 'cadadr (bruijn ##.cadadr.11 2 11)) (##vcore.cons 'caddar (bruijn ##.caddar.56 2 56)) (##vcore.cons 'cadddr (bruijn ##.cadddr.12 2 12)) (##vcore.cons 'cdaaar (bruijn ##.cdaaar.55 2 55)) (##vcore.cons 'cdaadr (bruijn ##.cdaadr.13 2 13)) (##vcore.cons 'cdadar (bruijn ##.cdadar.54 2 54)) (##vcore.cons 'cdaddr (bruijn ##.cdaddr.14 2 14)) (##vcore.cons 'cddaar (bruijn ##.cddaar.53 2 53)) (##vcore.cons 'cddadr (bruijn ##.cddadr.15 2 15)) (##vcore.cons 'cdddar (bruijn ##.cdddar.52 2 52)) (##vcore.cons 'cddddr (bruijn ##.cddddr.16 2 16)) (##vcore.cons 'list (bruijn ##.list.51 2 51)) (##vcore.cons 'length (bruijn ##.length.17 2 17)) (##vcore.cons 'list-ref (bruijn ##.list-ref.50 2 50)) (##vcore.cons 'map (bruijn ##.map.18 2 18)) (##vcore.cons 'for-each (bruijn ##.for-each.49 2 49)) (##vcore.cons 'append (bruijn ##.append.19 2 19)) (##vcore.cons 'reverse (bruijn ##.reverse.48 2 48)) (##vcore.cons 'memq (bruijn ##.memq.20 2 20)) (##vcore.cons 'memv (bruijn ##.memv.47 2 47)) (##vcore.cons 'member (bruijn ##.member.21 2 21)) (##vcore.cons 'assq (bruijn ##.assq.46 2 46)) (##vcore.cons 'assv (bruijn ##.assv.22 2 22)) (##vcore.cons 'assoc (bruijn ##.assoc.45 2 45)) (##vcore.cons 'string->list (bruijn ##.string->list.23 2 23)) (##vcore.cons 'list->string (bruijn ##.list->string.44 2 44)) (##vcore.cons 'make-string (##intrinsic ##vcore.make-string)) (##vcore.cons 'substring (##intrinsic ##vcore.substring)) (##vcore.cons 'string-copy (##intrinsic ##vcore.substring)) (##vcore.cons 'string-copy! (##intrinsic ##vcore.string-copy!)) (##vcore.cons 'string-ref (##intrinsic ##vcore.string-ref)) (##vcore.cons 'string-set! (##intrinsic ##vcore.string-set!)) (##vcore.cons 'string-length (##intrinsic ##vcore.string-length)) (##vcore.cons 'string->symbol (##intrinsic ##vcore.string->symbol)) (##vcore.cons 'string->number (##intrinsic ##vcore.string->number)) (##vcore.cons 'string->list (bruijn ##.string->list.23 2 23)) (##vcore.cons 'string-append (bruijn ##.string-append.24 2 24)) (##vcore.cons 'symbol->string (##intrinsic ##vcore.symbol->string)) (##vcore.cons 'list->vector (##intrinsic ##vcore.list->vector)) (##vcore.cons 'vector (##intrinsic ##vcore.vector)) (##vcore.cons 'vector-ref (##intrinsic ##vcore.vector-ref)) (##vcore.cons 'vector-set! (##intrinsic ##vcore.vector-set!)) (##vcore.cons 'vector-length (##intrinsic ##vcore.vector-length)) (##vcore.cons 'vector-for-each (bruijn ##.vector-for-each.43 2 43)) (##vcore.cons 'char->integer (##intrinsic ##vcore.char-integer)) (##vcore.cons 'current-output-port (bruijn ##.current-output-port.42 2 42)) (##vcore.cons 'current-error-port (bruijn ##.current-error-port.25 2 25)) (##vcore.cons 'current-input-port (bruijn ##.current-input-port.41 2 41)) (##vcore.cons 'open-input-file (bruijn ##.open-input-file.26 2 26)) (##vcore.cons 'open-output-file (bruijn ##.open-output-file.40 2 40)) (##vcore.cons 'close-port (bruijn ##.close-port.27 2 27)) (##vcore.cons 'open-output-string (bruijn ##.open-output-string.39 2 39)) (##vcore.cons 'get-output-string (bruijn ##.get-output-string.28 2 28)) (##vcore.cons 'with-output-to-file (bruijn ##.with-output-to-file.38 2 38)) (##vcore.cons 'with-input-from-file (bruijn ##.with-input-from-file.29 2 29)) (##vcore.cons 'read-char (bruijn ##.read-char.37 2 37)) (##vcore.cons 'read-line (bruijn ##.read-line.30 2 30)) (##vcore.cons 'read (bruijn ##.read.36 2 36)) (##vcore.cons 'newline (bruijn ##.newline.31 2 31)) (##vcore.cons 'display (bruijn ##.display.35 2 35)) (##vcore.cons 'write (bruijn ##.write.32 2 32)) (##vcore.cons 'call/cc (##intrinsic ##vcore.call/cc)) (##vcore.cons 'call-with-current-continuation (##intrinsic ##vcore.call/cc)) (##vcore.cons 'call-with-values (##intrinsic ##vcore.call-with-values)) (##vcore.cons 'apply (##intrinsic ##vcore.apply)) (##vcore.cons 'values (bruijn ##.values.34 2 34)) (##vcore.cons 'command-line (##intrinsic ##vcore.command-line)) (##vcore.cons 'exit (##intrinsic ##vcore.exit)) (##vcore.cons 'error (bruijn ##.error.33 2 33)) (##vcore.cons (bruijn ##.%x.508 0 125) '()) (##vcore.cons (bruijn ##.%x.507 0 124) (bruijn ##.%x.509 0 126)) (##vcore.cons (bruijn ##.%x.506 0 123) (bruijn ##.%x.510 0 127)) (##vcore.cons (bruijn ##.%x.505 0 122) (bruijn ##.%x.511 0 128)) (##vcore.cons (bruijn ##.%x.504 0 121) (bruijn ##.%x.512 0 129)) (##vcore.cons (bruijn ##.%x.503 0 120) (bruijn ##.%x.513 0 130)) (##vcore.cons (bruijn ##.%x.502 0 119) (bruijn ##.%x.514 0 131)) (##vcore.cons (bruijn ##.%x.501 0 118) (bruijn ##.%x.515 0 132)) (##vcore.cons (bruijn ##.%x.500 0 117) (bruijn ##.%x.516 0 133)) (##vcore.cons (bruijn ##.%x.499 0 116) (bruijn ##.%x.517 0 134)) (##vcore.cons (bruijn ##.%x.498 0 115) (bruijn ##.%x.518 0 135)) (##vcore.cons (bruijn ##.%x.497 0 114) (bruijn ##.%x.519 0 136)) (##vcore.cons (bruijn ##.%x.496 0 113) (bruijn ##.%x.520 0 137)) (##vcore.cons (bruijn ##.%x.495 0 112) (bruijn ##.%x.521 0 138)) (##vcore.cons (bruijn ##.%x.494 0 111) (bruijn ##.%x.522 0 139)) (##vcore.cons (bruijn ##.%x.493 0 110) (bruijn ##.%x.523 0 140)) (##vcore.cons (bruijn ##.%x.492 0 109) (bruijn ##.%x.524 0 141)) (##vcore.cons (bruijn ##.%x.491 0 108) (bruijn ##.%x.525 0 142)) (##vcore.cons (bruijn ##.%x.490 0 107) (bruijn ##.%x.526 0 143)) (##vcore.cons (bruijn ##.%x.489 0 106) (bruijn ##.%x.527 0 144)) (##vcore.cons (bruijn ##.%x.488 0 105) (bruijn ##.%x.528 0 145)) (##vcore.cons (bruijn ##.%x.487 0 104) (bruijn ##.%x.529 0 146)) (##vcore.cons (bruijn ##.%x.486 0 103) (bruijn ##.%x.530 0 147)) (##vcore.cons (bruijn ##.%x.485 0 102) (bruijn ##.%x.531 0 148)) (##vcore.cons (bruijn ##.%x.484 0 101) (bruijn ##.%x.532 0 149)) (##vcore.cons (bruijn ##.%x.483 0 100) (bruijn ##.%x.533 0 150)) (##vcore.cons (bruijn ##.%x.482 0 99) (bruijn ##.%x.534 0 151)) (##vcore.cons (bruijn ##.%x.481 0 98) (bruijn ##.%x.535 0 152)) (##vcore.cons (bruijn ##.%x.480 0 97) (bruijn ##.%x.536 0 153)) (##vcore.cons (bruijn ##.%x.479 0 96) (bruijn ##.%x.537 0 154)) (##vcore.cons (bruijn ##.%x.478 0 95) (bruijn ##.%x.538 0 155)) (##vcore.cons (bruijn ##.%x.477 0 94) (bruijn ##.%x.539 0 156)) (##vcore.cons (bruijn ##.%x.476 0 93) (bruijn ##.%x.540 0 157)) (##vcore.cons (bruijn ##.%x.475 0 92) (bruijn ##.%x.541 0 158)) (##vcore.cons (bruijn ##.%x.474 0 91) (bruijn ##.%x.542 0 159)) (##vcore.cons (bruijn ##.%x.473 0 90) (bruijn ##.%x.543 0 160)) (##vcore.cons (bruijn ##.%x.472 0 89) (bruijn ##.%x.544 0 161)) (##vcore.cons (bruijn ##.%x.471 0 88) (bruijn ##.%x.545 0 162)) (##vcore.cons (bruijn ##.%x.470 0 87) (bruijn ##.%x.546 0 163)) (##vcore.cons (bruijn ##.%x.469 0 86) (bruijn ##.%x.547 0 164)) (##vcore.cons (bruijn ##.%x.468 0 85) (bruijn ##.%x.548 0 165)) (##vcore.cons (bruijn ##.%x.467 0 84) (bruijn ##.%x.549 0 166)) (##vcore.cons (bruijn ##.%x.466 0 83) (bruijn ##.%x.550 0 167)) (##vcore.cons (bruijn ##.%x.465 0 82) (bruijn ##.%x.551 0 168)) (##vcore.cons (bruijn ##.%x.464 0 81) (bruijn ##.%x.552 0 169)) (##vcore.cons (bruijn ##.%x.463 0 80) (bruijn ##.%x.553 0 170)) (##vcore.cons (bruijn ##.%x.462 0 79) (bruijn ##.%x.554 0 171)) (##vcore.cons (bruijn ##.%x.461 0 78) (bruijn ##.%x.555 0 172)) (##vcore.cons (bruijn ##.%x.460 0 77) (bruijn ##.%x.556 0 173)) (##vcore.cons (bruijn ##.%x.459 0 76) (bruijn ##.%x.557 0 174)) (##vcore.cons (bruijn ##.%x.458 0 75) (bruijn ##.%x.558 0 175)) (##vcore.cons (bruijn ##.%x.457 0 74) (bruijn ##.%x.559 0 176)) (##vcore.cons (bruijn ##.%x.456 0 73) (bruijn ##.%x.560 0 177)) (##vcore.cons (bruijn ##.%x.455 0 72) (bruijn ##.%x.561 0 178)) (##vcore.cons (bruijn ##.%x.454 0 71) (bruijn ##.%x.562 0 179)) (##vcore.cons (bruijn ##.%x.453 0 70) (bruijn ##.%x.563 0 180)) (##vcore.cons (bruijn ##.%x.452 0 69) (bruijn ##.%x.564 0 181)) (##vcore.cons (bruijn ##.%x.451 0 68) (bruijn ##.%x.565 0 182)) (##vcore.cons (bruijn ##.%x.450 0 67) (bruijn ##.%x.566 0 183)) (##vcore.cons (bruijn ##.%x.449 0 66) (bruijn ##.%x.567 0 184)) (##vcore.cons (bruijn ##.%x.448 0 65) (bruijn ##.%x.568 0 185)) (##vcore.cons (bruijn ##.%x.447 0 64) (bruijn ##.%x.569 0 186)) (##vcore.cons (bruijn ##.%x.446 0 63) (bruijn ##.%x.570 0 187)) (##vcore.cons (bruijn ##.%x.445 0 62) (bruijn ##.%x.571 0 188)) (##vcore.cons (bruijn ##.%x.444 0 61) (bruijn ##.%x.572 0 189)) (##vcore.cons (bruijn ##.%x.443 0 60) (bruijn ##.%x.573 0 190)) (##vcore.cons (bruijn ##.%x.442 0 59) (bruijn ##.%x.574 0 191)) (##vcore.cons (bruijn ##.%x.441 0 58) (bruijn ##.%x.575 0 192)) (##vcore.cons (bruijn ##.%x.440 0 57) (bruijn ##.%x.576 0 193)) (##vcore.cons (bruijn ##.%x.439 0 56) (bruijn ##.%x.577 0 194)) (##vcore.cons (bruijn ##.%x.438 0 55) (bruijn ##.%x.578 0 195)) (##vcore.cons (bruijn ##.%x.437 0 54) (bruijn ##.%x.579 0 196)) (##vcore.cons (bruijn ##.%x.436 0 53) (bruijn ##.%x.580 0 197)) (##vcore.cons (bruijn ##.%x.435 0 52) (bruijn ##.%x.581 0 198)) (##vcore.cons (bruijn ##.%x.434 0 51) (bruijn ##.%x.582 0 199)) (##vcore.cons (bruijn ##.%x.433 0 50) (bruijn ##.%x.583 0 200)) (##vcore.cons (bruijn ##.%x.432 0 49) (bruijn ##.%x.584 0 201)) (##vcore.cons (bruijn ##.%x.431 0 48) (bruijn ##.%x.585 0 202)) (##vcore.cons (bruijn ##.%x.430 0 47) (bruijn ##.%x.586 0 203)) (##vcore.cons (bruijn ##.%x.429 0 46) (bruijn ##.%x.587 0 204)) (##vcore.cons (bruijn ##.%x.428 0 45) (bruijn ##.%x.588 0 205)) (##vcore.cons (bruijn ##.%x.427 0 44) (bruijn ##.%x.589 0 206)) (##vcore.cons (bruijn ##.%x.426 0 43) (bruijn ##.%x.590 0 207)) (##vcore.cons (bruijn ##.%x.425 0 42) (bruijn ##.%x.591 0 208)) (##vcore.cons (bruijn ##.%x.424 0 41) (bruijn ##.%x.592 0 209)) (##vcore.cons (bruijn ##.%x.423 0 40) (bruijn ##.%x.593 0 210)) (##vcore.cons (bruijn ##.%x.422 0 39) (bruijn ##.%x.594 0 211)) (##vcore.cons (bruijn ##.%x.421 0 38) (bruijn ##.%x.595 0 212)) (##vcore.cons (bruijn ##.%x.420 0 37) (bruijn ##.%x.596 0 213)) (##vcore.cons (bruijn ##.%x.419 0 36) (bruijn ##.%x.597 0 214)) (##vcore.cons (bruijn ##.%x.418 0 35) (bruijn ##.%x.598 0 215)) (##vcore.cons (bruijn ##.%x.417 0 34) (bruijn ##.%x.599 0 216)) (##vcore.cons (bruijn ##.%x.416 0 33) (bruijn ##.%x.600 0 217)) (##vcore.cons (bruijn ##.%x.415 0 32) (bruijn ##.%x.601 0 218)) (##vcore.cons (bruijn ##.%x.414 0 31) (bruijn ##.%x.602 0 219)) (##vcore.cons (bruijn ##.%x.413 0 30) (bruijn ##.%x.603 0 220)) (##vcore.cons (bruijn ##.%x.412 0 29) (bruijn ##.%x.604 0 221)) (##vcore.cons (bruijn ##.%x.411 0 28) (bruijn ##.%x.605 0 222)) (##vcore.cons (bruijn ##.%x.410 0 27) (bruijn ##.%x.606 0 223)) (##vcore.cons (bruijn ##.%x.409 0 26) (bruijn ##.%x.607 0 224)) (##vcore.cons (bruijn ##.%x.408 0 25) (bruijn ##.%x.608 0 225)) (##vcore.cons (bruijn ##.%x.407 0 24) (bruijn ##.%x.609 0 226)) (##vcore.cons (bruijn ##.%x.406 0 23) (bruijn ##.%x.610 0 227)) (##vcore.cons (bruijn ##.%x.405 0 22) (bruijn ##.%x.611 0 228)) (##vcore.cons (bruijn ##.%x.404 0 21) (bruijn ##.%x.612 0 229)) (##vcore.cons (bruijn ##.%x.403 0 20) (bruijn ##.%x.613 0 230)) (##vcore.cons (bruijn ##.%x.402 0 19) (bruijn ##.%x.614 0 231)) (##vcore.cons (bruijn ##.%x.401 0 18) (bruijn ##.%x.615 0 232)) (##vcore.cons (bruijn ##.%x.400 0 17) (bruijn ##.%x.616 0 233)) (##vcore.cons (bruijn ##.%x.399 0 16) (bruijn ##.%x.617 0 234)) (##vcore.cons (bruijn ##.%x.398 0 15) (bruijn ##.%x.618 0 235)) (##vcore.cons (bruijn ##.%x.397 0 14) (bruijn ##.%x.619 0 236)) (##vcore.cons (bruijn ##.%x.396 0 13) (bruijn ##.%x.620 0 237)) (##vcore.cons (bruijn ##.%x.395 0 12) (bruijn ##.%x.621 0 238)) (##vcore.cons (bruijn ##.%x.394 0 11) (bruijn ##.%x.622 0 239)) (##vcore.cons (bruijn ##.%x.393 0 10) (bruijn ##.%x.623 0 240)) (##vcore.cons (bruijn ##.%x.392 0 9) (bruijn ##.%x.624 0 241)) (##vcore.cons (bruijn ##.%x.391 0 8) (bruijn ##.%x.625 0 242)) (##vcore.cons (bruijn ##.%x.390 0 7) (bruijn ##.%x.626 0 243)) (##vcore.cons (bruijn ##.%x.389 0 6) (bruijn ##.%x.627 0 244)) (##vcore.cons (bruijn ##.%x.388 0 5) (bruijn ##.%x.628 0 245)) (##vcore.cons (bruijn ##.%x.387 0 4) (bruijn ##.%x.629 0 246)) (##vcore.cons (bruijn ##.%x.386 0 3) (bruijn ##.%x.630 0 247)) (##vcore.cons (bruijn ##.%x.385 0 2) (bruijn ##.%x.631 0 248)) (##vcore.cons (bruijn ##.%x.384 0 1) (bruijn ##.%x.632 0 249)) (##vcore.cons (bruijn ##.%x.383 0 0) (bruijn ##.%x.633 0 250))) ((bruijn ##.%k.131 2 0) (bruijn ##.%r.634 0 251))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[0]; } container;
    self = &container.self;
    _V60_V0scheme_V0r7rs = self;
    VInitEnv(self, 0, 0, statics);
    VRegisterStaticEnv("_V0scheme_V0r7rs_V20", &_V60_V0scheme_V0r7rs);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[252]; } container;
    self = &container.self;
    VInitEnv(self, 252, 252, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0null_Q,
      _V40_V10vcore_Dnull_Q);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0eof__object_Q,
      _V40_V10vcore_Deof__object_Q);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0boolean_Q,
      statics->up->vars[70]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0pair_Q,
      _V40_V10vcore_Dpair_Q);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0vector_Q,
      _V40_V10vcore_Dvector_Q);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0procedure_Q,
      _V40_V10vcore_Dprocedure_Q);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0symbol_Q,
      _V40_V10vcore_Dsymbol_Q);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0string_Q,
      _V40_V10vcore_Dstring_Q);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0exact_Q,
      _V40_V10vcore_Dint_Q);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0inexact_Q,
      _V40_V10vcore_Ddouble_Q);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0real_Q,
      _V40_V10vcore_Ddouble_Q);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0integer_Q,
      _V40_V10vcore_Dint_Q);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0char_Q,
      _V40_V10vcore_Dchar_Q);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0eq_Q,
      _V40_V10vcore_Deq_Q);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0symbol_E_Q,
      statics->up->vars[69]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0eqv_Q,
      _V40_V10vcore_Deq_Q);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0equal_Q,
      statics->up->vars[68]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0not,
      _V40_V10vcore_Dnot);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0_L,
      _V40_V10vcore_D_L);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      _V0_E,
      _V40_V10vcore_D_E);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      _V0_G,
      _V40_V10vcore_D_G);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0_L_E,
      _V40_V10vcore_D_L_E);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      _V0_G_E,
      _V40_V10vcore_D_G_E);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V0inexact,
      _V40_V10vcore_Dinexact);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      _V0exact___Ginexact,
      _V40_V10vcore_Dinexact);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      _V0number_Q,
      statics->up->vars[1]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0complex_Q,
      statics->up->vars[67]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      _V40_V10vcore_D_P);
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      _V0__,
      _V40_V10vcore_D__);
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      _V0_S,
      _V40_V10vcore_D_S);
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      _V0_W,
      _V40_V10vcore_D_W);
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      _V0quotient,
      _V40_V10vcore_Dquotient);
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      _V0remainder,
      _V40_V10vcore_Dremainder);
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      _V0max,
      statics->up->vars[2]);
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      _V0min,
      statics->up->vars[66]);
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      _V0cons,
      _V40_V10vcore_Dcons);
    self->vars[36] = _VBasic_VCons2(runtime, NULL,
      _V0car,
      _V40_V10vcore_Dcar);
    self->vars[37] = _VBasic_VCons2(runtime, NULL,
      _V0cdr,
      _V40_V10vcore_Dcdr);
    self->vars[38] = _VBasic_VCons2(runtime, NULL,
      _V0set__car_B,
      _V40_V10vcore_Dset__car_B);
    self->vars[39] = _VBasic_VCons2(runtime, NULL,
      _V0set__cdr_B,
      _V40_V10vcore_Dset__cdr_B);
    self->vars[40] = _VBasic_VCons2(runtime, NULL,
      _V0caar,
      statics->up->vars[65]);
    self->vars[41] = _VBasic_VCons2(runtime, NULL,
      _V0cadr,
      statics->up->vars[3]);
    self->vars[42] = _VBasic_VCons2(runtime, NULL,
      _V0cdar,
      statics->up->vars[64]);
    self->vars[43] = _VBasic_VCons2(runtime, NULL,
      _V0cddr,
      statics->up->vars[4]);
    self->vars[44] = _VBasic_VCons2(runtime, NULL,
      _V0caaar,
      statics->up->vars[63]);
    self->vars[45] = _VBasic_VCons2(runtime, NULL,
      _V0caadr,
      statics->up->vars[5]);
    self->vars[46] = _VBasic_VCons2(runtime, NULL,
      _V0cadar,
      statics->up->vars[62]);
    self->vars[47] = _VBasic_VCons2(runtime, NULL,
      _V0caddr,
      statics->up->vars[6]);
    self->vars[48] = _VBasic_VCons2(runtime, NULL,
      _V0cdaar,
      statics->up->vars[61]);
    self->vars[49] = _VBasic_VCons2(runtime, NULL,
      _V0cdadr,
      statics->up->vars[7]);
    self->vars[50] = _VBasic_VCons2(runtime, NULL,
      _V0cddar,
      statics->up->vars[60]);
    self->vars[51] = _VBasic_VCons2(runtime, NULL,
      _V0cdddr,
      statics->up->vars[8]);
    self->vars[52] = _VBasic_VCons2(runtime, NULL,
      _V0caaaar,
      statics->up->vars[59]);
    self->vars[53] = _VBasic_VCons2(runtime, NULL,
      _V0caaadr,
      statics->up->vars[9]);
    self->vars[54] = _VBasic_VCons2(runtime, NULL,
      _V0caadar,
      statics->up->vars[58]);
    self->vars[55] = _VBasic_VCons2(runtime, NULL,
      _V0caaddr,
      statics->up->vars[10]);
    self->vars[56] = _VBasic_VCons2(runtime, NULL,
      _V0cadaar,
      statics->up->vars[57]);
    self->vars[57] = _VBasic_VCons2(runtime, NULL,
      _V0cadadr,
      statics->up->vars[11]);
    self->vars[58] = _VBasic_VCons2(runtime, NULL,
      _V0caddar,
      statics->up->vars[56]);
    self->vars[59] = _VBasic_VCons2(runtime, NULL,
      _V0cadddr,
      statics->up->vars[12]);
    self->vars[60] = _VBasic_VCons2(runtime, NULL,
      _V0cdaaar,
      statics->up->vars[55]);
    self->vars[61] = _VBasic_VCons2(runtime, NULL,
      _V0cdaadr,
      statics->up->vars[13]);
    self->vars[62] = _VBasic_VCons2(runtime, NULL,
      _V0cdadar,
      statics->up->vars[54]);
    self->vars[63] = _VBasic_VCons2(runtime, NULL,
      _V0cdaddr,
      statics->up->vars[14]);
    self->vars[64] = _VBasic_VCons2(runtime, NULL,
      _V0cddaar,
      statics->up->vars[53]);
    self->vars[65] = _VBasic_VCons2(runtime, NULL,
      _V0cddadr,
      statics->up->vars[15]);
    self->vars[66] = _VBasic_VCons2(runtime, NULL,
      _V0cdddar,
      statics->up->vars[52]);
    self->vars[67] = _VBasic_VCons2(runtime, NULL,
      _V0cddddr,
      statics->up->vars[16]);
    self->vars[68] = _VBasic_VCons2(runtime, NULL,
      _V0list,
      statics->up->vars[51]);
    self->vars[69] = _VBasic_VCons2(runtime, NULL,
      _V0length,
      statics->up->vars[17]);
    self->vars[70] = _VBasic_VCons2(runtime, NULL,
      _V0list__ref,
      statics->up->vars[50]);
    self->vars[71] = _VBasic_VCons2(runtime, NULL,
      _V0map,
      statics->up->vars[18]);
    self->vars[72] = _VBasic_VCons2(runtime, NULL,
      _V0for__each,
      statics->up->vars[49]);
    self->vars[73] = _VBasic_VCons2(runtime, NULL,
      _V0append,
      statics->up->vars[19]);
    self->vars[74] = _VBasic_VCons2(runtime, NULL,
      _V0reverse,
      statics->up->vars[48]);
    self->vars[75] = _VBasic_VCons2(runtime, NULL,
      _V0memq,
      statics->up->vars[20]);
    self->vars[76] = _VBasic_VCons2(runtime, NULL,
      _V0memv,
      statics->up->vars[47]);
    self->vars[77] = _VBasic_VCons2(runtime, NULL,
      _V0member,
      statics->up->vars[21]);
    self->vars[78] = _VBasic_VCons2(runtime, NULL,
      _V0assq,
      statics->up->vars[46]);
    self->vars[79] = _VBasic_VCons2(runtime, NULL,
      _V0assv,
      statics->up->vars[22]);
    self->vars[80] = _VBasic_VCons2(runtime, NULL,
      _V0assoc,
      statics->up->vars[45]);
    self->vars[81] = _VBasic_VCons2(runtime, NULL,
      _V0string___Glist,
      statics->up->vars[23]);
    self->vars[82] = _VBasic_VCons2(runtime, NULL,
      _V0list___Gstring,
      statics->up->vars[44]);
    self->vars[83] = _VBasic_VCons2(runtime, NULL,
      _V0make__string,
      _V40_V10vcore_Dmake__string);
    self->vars[84] = _VBasic_VCons2(runtime, NULL,
      _V0substring,
      _V40_V10vcore_Dsubstring);
    self->vars[85] = _VBasic_VCons2(runtime, NULL,
      _V0string__copy,
      _V40_V10vcore_Dsubstring);
    self->vars[86] = _VBasic_VCons2(runtime, NULL,
      _V0string__copy_B,
      _V40_V10vcore_Dstring__copy_B);
    self->vars[87] = _VBasic_VCons2(runtime, NULL,
      _V0string__ref,
      _V40_V10vcore_Dstring__ref);
    self->vars[88] = _VBasic_VCons2(runtime, NULL,
      _V0string__set_B,
      _V40_V10vcore_Dstring__set_B);
    self->vars[89] = _VBasic_VCons2(runtime, NULL,
      _V0string__length,
      _V40_V10vcore_Dstring__length);
    self->vars[90] = _VBasic_VCons2(runtime, NULL,
      _V0string___Gsymbol,
      _V40_V10vcore_Dstring___Gsymbol);
    self->vars[91] = _VBasic_VCons2(runtime, NULL,
      _V0string___Gnumber,
      _V40_V10vcore_Dstring___Gnumber);
    self->vars[92] = _VBasic_VCons2(runtime, NULL,
      _V0string___Glist,
      statics->up->vars[23]);
    self->vars[93] = _VBasic_VCons2(runtime, NULL,
      _V0string__append,
      statics->up->vars[24]);
    self->vars[94] = _VBasic_VCons2(runtime, NULL,
      _V0symbol___Gstring,
      _V40_V10vcore_Dsymbol___Gstring);
    self->vars[95] = _VBasic_VCons2(runtime, NULL,
      _V0list___Gvector,
      _V40_V10vcore_Dlist___Gvector);
    self->vars[96] = _VBasic_VCons2(runtime, NULL,
      _V0vector,
      _V40_V10vcore_Dvector);
    self->vars[97] = _VBasic_VCons2(runtime, NULL,
      _V0vector__ref,
      _V40_V10vcore_Dvector__ref);
    self->vars[98] = _VBasic_VCons2(runtime, NULL,
      _V0vector__set_B,
      _V40_V10vcore_Dvector__set_B);
    self->vars[99] = _VBasic_VCons2(runtime, NULL,
      _V0vector__length,
      _V40_V10vcore_Dvector__length);
    self->vars[100] = _VBasic_VCons2(runtime, NULL,
      _V0vector__for__each,
      statics->up->vars[43]);
    self->vars[101] = _VBasic_VCons2(runtime, NULL,
      _V0char___Ginteger,
      _V40_V10vcore_Dchar__integer);
    self->vars[102] = _VBasic_VCons2(runtime, NULL,
      _V0current__output__port,
      statics->up->vars[42]);
    self->vars[103] = _VBasic_VCons2(runtime, NULL,
      _V0current__error__port,
      statics->up->vars[25]);
    self->vars[104] = _VBasic_VCons2(runtime, NULL,
      _V0current__input__port,
      statics->up->vars[41]);
    self->vars[105] = _VBasic_VCons2(runtime, NULL,
      _V0open__input__file,
      statics->up->vars[26]);
    self->vars[106] = _VBasic_VCons2(runtime, NULL,
      _V0open__output__file,
      statics->up->vars[40]);
    self->vars[107] = _VBasic_VCons2(runtime, NULL,
      _V0close__port,
      statics->up->vars[27]);
    self->vars[108] = _VBasic_VCons2(runtime, NULL,
      _V0open__output__string,
      statics->up->vars[39]);
    self->vars[109] = _VBasic_VCons2(runtime, NULL,
      _V0get__output__string,
      statics->up->vars[28]);
    self->vars[110] = _VBasic_VCons2(runtime, NULL,
      _V0with__output__to__file,
      statics->up->vars[38]);
    self->vars[111] = _VBasic_VCons2(runtime, NULL,
      _V0with__input__from__file,
      statics->up->vars[29]);
    self->vars[112] = _VBasic_VCons2(runtime, NULL,
      _V0read__char,
      statics->up->vars[37]);
    self->vars[113] = _VBasic_VCons2(runtime, NULL,
      _V0read__line,
      statics->up->vars[30]);
    self->vars[114] = _VBasic_VCons2(runtime, NULL,
      _V0read,
      statics->up->vars[36]);
    self->vars[115] = _VBasic_VCons2(runtime, NULL,
      _V0newline,
      statics->up->vars[31]);
    self->vars[116] = _VBasic_VCons2(runtime, NULL,
      _V0display,
      statics->up->vars[35]);
    self->vars[117] = _VBasic_VCons2(runtime, NULL,
      _V0write,
      statics->up->vars[32]);
    self->vars[118] = _VBasic_VCons2(runtime, NULL,
      _V0call_Wcc,
      _V40_V10vcore_Dcall_Wcc);
    self->vars[119] = _VBasic_VCons2(runtime, NULL,
      _V0call__with__current__continuation,
      _V40_V10vcore_Dcall_Wcc);
    self->vars[120] = _VBasic_VCons2(runtime, NULL,
      _V0call__with__values,
      _V40_V10vcore_Dcall__with__values);
    self->vars[121] = _VBasic_VCons2(runtime, NULL,
      _V0apply,
      _V40_V10vcore_Dapply);
    self->vars[122] = _VBasic_VCons2(runtime, NULL,
      _V0values,
      statics->up->vars[34]);
    self->vars[123] = _VBasic_VCons2(runtime, NULL,
      _V0command__line,
      _V40_V10vcore_Dcommand__line);
    self->vars[124] = _VBasic_VCons2(runtime, NULL,
      _V0exit,
      _V40_V10vcore_Dexit);
    self->vars[125] = _VBasic_VCons2(runtime, NULL,
      _V0error,
      statics->up->vars[33]);
    self->vars[126] = _VBasic_VCons2(runtime, NULL,
      self->vars[125],
      VNULL);
    self->vars[127] = _VBasic_VCons2(runtime, NULL,
      self->vars[124],
      self->vars[126]);
    self->vars[128] = _VBasic_VCons2(runtime, NULL,
      self->vars[123],
      self->vars[127]);
    self->vars[129] = _VBasic_VCons2(runtime, NULL,
      self->vars[122],
      self->vars[128]);
    self->vars[130] = _VBasic_VCons2(runtime, NULL,
      self->vars[121],
      self->vars[129]);
    self->vars[131] = _VBasic_VCons2(runtime, NULL,
      self->vars[120],
      self->vars[130]);
    self->vars[132] = _VBasic_VCons2(runtime, NULL,
      self->vars[119],
      self->vars[131]);
    self->vars[133] = _VBasic_VCons2(runtime, NULL,
      self->vars[118],
      self->vars[132]);
    self->vars[134] = _VBasic_VCons2(runtime, NULL,
      self->vars[117],
      self->vars[133]);
    self->vars[135] = _VBasic_VCons2(runtime, NULL,
      self->vars[116],
      self->vars[134]);
    self->vars[136] = _VBasic_VCons2(runtime, NULL,
      self->vars[115],
      self->vars[135]);
    self->vars[137] = _VBasic_VCons2(runtime, NULL,
      self->vars[114],
      self->vars[136]);
    self->vars[138] = _VBasic_VCons2(runtime, NULL,
      self->vars[113],
      self->vars[137]);
    self->vars[139] = _VBasic_VCons2(runtime, NULL,
      self->vars[112],
      self->vars[138]);
    self->vars[140] = _VBasic_VCons2(runtime, NULL,
      self->vars[111],
      self->vars[139]);
    self->vars[141] = _VBasic_VCons2(runtime, NULL,
      self->vars[110],
      self->vars[140]);
    self->vars[142] = _VBasic_VCons2(runtime, NULL,
      self->vars[109],
      self->vars[141]);
    self->vars[143] = _VBasic_VCons2(runtime, NULL,
      self->vars[108],
      self->vars[142]);
    self->vars[144] = _VBasic_VCons2(runtime, NULL,
      self->vars[107],
      self->vars[143]);
    self->vars[145] = _VBasic_VCons2(runtime, NULL,
      self->vars[106],
      self->vars[144]);
    self->vars[146] = _VBasic_VCons2(runtime, NULL,
      self->vars[105],
      self->vars[145]);
    self->vars[147] = _VBasic_VCons2(runtime, NULL,
      self->vars[104],
      self->vars[146]);
    self->vars[148] = _VBasic_VCons2(runtime, NULL,
      self->vars[103],
      self->vars[147]);
    self->vars[149] = _VBasic_VCons2(runtime, NULL,
      self->vars[102],
      self->vars[148]);
    self->vars[150] = _VBasic_VCons2(runtime, NULL,
      self->vars[101],
      self->vars[149]);
    self->vars[151] = _VBasic_VCons2(runtime, NULL,
      self->vars[100],
      self->vars[150]);
    self->vars[152] = _VBasic_VCons2(runtime, NULL,
      self->vars[99],
      self->vars[151]);
    self->vars[153] = _VBasic_VCons2(runtime, NULL,
      self->vars[98],
      self->vars[152]);
    self->vars[154] = _VBasic_VCons2(runtime, NULL,
      self->vars[97],
      self->vars[153]);
    self->vars[155] = _VBasic_VCons2(runtime, NULL,
      self->vars[96],
      self->vars[154]);
    self->vars[156] = _VBasic_VCons2(runtime, NULL,
      self->vars[95],
      self->vars[155]);
    self->vars[157] = _VBasic_VCons2(runtime, NULL,
      self->vars[94],
      self->vars[156]);
    self->vars[158] = _VBasic_VCons2(runtime, NULL,
      self->vars[93],
      self->vars[157]);
    self->vars[159] = _VBasic_VCons2(runtime, NULL,
      self->vars[92],
      self->vars[158]);
    self->vars[160] = _VBasic_VCons2(runtime, NULL,
      self->vars[91],
      self->vars[159]);
    self->vars[161] = _VBasic_VCons2(runtime, NULL,
      self->vars[90],
      self->vars[160]);
    self->vars[162] = _VBasic_VCons2(runtime, NULL,
      self->vars[89],
      self->vars[161]);
    self->vars[163] = _VBasic_VCons2(runtime, NULL,
      self->vars[88],
      self->vars[162]);
    self->vars[164] = _VBasic_VCons2(runtime, NULL,
      self->vars[87],
      self->vars[163]);
    self->vars[165] = _VBasic_VCons2(runtime, NULL,
      self->vars[86],
      self->vars[164]);
    self->vars[166] = _VBasic_VCons2(runtime, NULL,
      self->vars[85],
      self->vars[165]);
    self->vars[167] = _VBasic_VCons2(runtime, NULL,
      self->vars[84],
      self->vars[166]);
    self->vars[168] = _VBasic_VCons2(runtime, NULL,
      self->vars[83],
      self->vars[167]);
    self->vars[169] = _VBasic_VCons2(runtime, NULL,
      self->vars[82],
      self->vars[168]);
    self->vars[170] = _VBasic_VCons2(runtime, NULL,
      self->vars[81],
      self->vars[169]);
    self->vars[171] = _VBasic_VCons2(runtime, NULL,
      self->vars[80],
      self->vars[170]);
    self->vars[172] = _VBasic_VCons2(runtime, NULL,
      self->vars[79],
      self->vars[171]);
    self->vars[173] = _VBasic_VCons2(runtime, NULL,
      self->vars[78],
      self->vars[172]);
    self->vars[174] = _VBasic_VCons2(runtime, NULL,
      self->vars[77],
      self->vars[173]);
    self->vars[175] = _VBasic_VCons2(runtime, NULL,
      self->vars[76],
      self->vars[174]);
    self->vars[176] = _VBasic_VCons2(runtime, NULL,
      self->vars[75],
      self->vars[175]);
    self->vars[177] = _VBasic_VCons2(runtime, NULL,
      self->vars[74],
      self->vars[176]);
    self->vars[178] = _VBasic_VCons2(runtime, NULL,
      self->vars[73],
      self->vars[177]);
    self->vars[179] = _VBasic_VCons2(runtime, NULL,
      self->vars[72],
      self->vars[178]);
    self->vars[180] = _VBasic_VCons2(runtime, NULL,
      self->vars[71],
      self->vars[179]);
    self->vars[181] = _VBasic_VCons2(runtime, NULL,
      self->vars[70],
      self->vars[180]);
    self->vars[182] = _VBasic_VCons2(runtime, NULL,
      self->vars[69],
      self->vars[181]);
    self->vars[183] = _VBasic_VCons2(runtime, NULL,
      self->vars[68],
      self->vars[182]);
    self->vars[184] = _VBasic_VCons2(runtime, NULL,
      self->vars[67],
      self->vars[183]);
    self->vars[185] = _VBasic_VCons2(runtime, NULL,
      self->vars[66],
      self->vars[184]);
    self->vars[186] = _VBasic_VCons2(runtime, NULL,
      self->vars[65],
      self->vars[185]);
    self->vars[187] = _VBasic_VCons2(runtime, NULL,
      self->vars[64],
      self->vars[186]);
    self->vars[188] = _VBasic_VCons2(runtime, NULL,
      self->vars[63],
      self->vars[187]);
    self->vars[189] = _VBasic_VCons2(runtime, NULL,
      self->vars[62],
      self->vars[188]);
    self->vars[190] = _VBasic_VCons2(runtime, NULL,
      self->vars[61],
      self->vars[189]);
    self->vars[191] = _VBasic_VCons2(runtime, NULL,
      self->vars[60],
      self->vars[190]);
    self->vars[192] = _VBasic_VCons2(runtime, NULL,
      self->vars[59],
      self->vars[191]);
    self->vars[193] = _VBasic_VCons2(runtime, NULL,
      self->vars[58],
      self->vars[192]);
    self->vars[194] = _VBasic_VCons2(runtime, NULL,
      self->vars[57],
      self->vars[193]);
    self->vars[195] = _VBasic_VCons2(runtime, NULL,
      self->vars[56],
      self->vars[194]);
    self->vars[196] = _VBasic_VCons2(runtime, NULL,
      self->vars[55],
      self->vars[195]);
    self->vars[197] = _VBasic_VCons2(runtime, NULL,
      self->vars[54],
      self->vars[196]);
    self->vars[198] = _VBasic_VCons2(runtime, NULL,
      self->vars[53],
      self->vars[197]);
    self->vars[199] = _VBasic_VCons2(runtime, NULL,
      self->vars[52],
      self->vars[198]);
    self->vars[200] = _VBasic_VCons2(runtime, NULL,
      self->vars[51],
      self->vars[199]);
    self->vars[201] = _VBasic_VCons2(runtime, NULL,
      self->vars[50],
      self->vars[200]);
    self->vars[202] = _VBasic_VCons2(runtime, NULL,
      self->vars[49],
      self->vars[201]);
    self->vars[203] = _VBasic_VCons2(runtime, NULL,
      self->vars[48],
      self->vars[202]);
    self->vars[204] = _VBasic_VCons2(runtime, NULL,
      self->vars[47],
      self->vars[203]);
    self->vars[205] = _VBasic_VCons2(runtime, NULL,
      self->vars[46],
      self->vars[204]);
    self->vars[206] = _VBasic_VCons2(runtime, NULL,
      self->vars[45],
      self->vars[205]);
    self->vars[207] = _VBasic_VCons2(runtime, NULL,
      self->vars[44],
      self->vars[206]);
    self->vars[208] = _VBasic_VCons2(runtime, NULL,
      self->vars[43],
      self->vars[207]);
    self->vars[209] = _VBasic_VCons2(runtime, NULL,
      self->vars[42],
      self->vars[208]);
    self->vars[210] = _VBasic_VCons2(runtime, NULL,
      self->vars[41],
      self->vars[209]);
    self->vars[211] = _VBasic_VCons2(runtime, NULL,
      self->vars[40],
      self->vars[210]);
    self->vars[212] = _VBasic_VCons2(runtime, NULL,
      self->vars[39],
      self->vars[211]);
    self->vars[213] = _VBasic_VCons2(runtime, NULL,
      self->vars[38],
      self->vars[212]);
    self->vars[214] = _VBasic_VCons2(runtime, NULL,
      self->vars[37],
      self->vars[213]);
    self->vars[215] = _VBasic_VCons2(runtime, NULL,
      self->vars[36],
      self->vars[214]);
    self->vars[216] = _VBasic_VCons2(runtime, NULL,
      self->vars[35],
      self->vars[215]);
    self->vars[217] = _VBasic_VCons2(runtime, NULL,
      self->vars[34],
      self->vars[216]);
    self->vars[218] = _VBasic_VCons2(runtime, NULL,
      self->vars[33],
      self->vars[217]);
    self->vars[219] = _VBasic_VCons2(runtime, NULL,
      self->vars[32],
      self->vars[218]);
    self->vars[220] = _VBasic_VCons2(runtime, NULL,
      self->vars[31],
      self->vars[219]);
    self->vars[221] = _VBasic_VCons2(runtime, NULL,
      self->vars[30],
      self->vars[220]);
    self->vars[222] = _VBasic_VCons2(runtime, NULL,
      self->vars[29],
      self->vars[221]);
    self->vars[223] = _VBasic_VCons2(runtime, NULL,
      self->vars[28],
      self->vars[222]);
    self->vars[224] = _VBasic_VCons2(runtime, NULL,
      self->vars[27],
      self->vars[223]);
    self->vars[225] = _VBasic_VCons2(runtime, NULL,
      self->vars[26],
      self->vars[224]);
    self->vars[226] = _VBasic_VCons2(runtime, NULL,
      self->vars[25],
      self->vars[225]);
    self->vars[227] = _VBasic_VCons2(runtime, NULL,
      self->vars[24],
      self->vars[226]);
    self->vars[228] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      self->vars[227]);
    self->vars[229] = _VBasic_VCons2(runtime, NULL,
      self->vars[22],
      self->vars[228]);
    self->vars[230] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      self->vars[229]);
    self->vars[231] = _VBasic_VCons2(runtime, NULL,
      self->vars[20],
      self->vars[230]);
    self->vars[232] = _VBasic_VCons2(runtime, NULL,
      self->vars[19],
      self->vars[231]);
    self->vars[233] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      self->vars[232]);
    self->vars[234] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      self->vars[233]);
    self->vars[235] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[234]);
    self->vars[236] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[235]);
    self->vars[237] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[236]);
    self->vars[238] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[237]);
    self->vars[239] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[238]);
    self->vars[240] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[239]);
    self->vars[241] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[240]);
    self->vars[242] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[241]);
    self->vars[243] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[242]);
    self->vars[244] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[243]);
    self->vars[245] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[244]);
    self->vars[246] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[245]);
    self->vars[247] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[246]);
    self->vars[248] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[247]);
    self->vars[249] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[248]);
    self->vars[250] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[249]);
    self->vars[251] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[250]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[251]);
    }
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
  // (##vcore.call-with-values (bruijn ##.%k.127 0 0) (close _V0scheme_V0r7rs_V20_V0lambda2) (close _V0scheme_V0r7rs_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_V0lambda3, self)))));
}
VFunc _V0scheme_V0r7rs_V20 = (VFunc)_V0scheme_V0r7rs_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0exit = VEncodePointer(VInternSymbol(-1180165472, &_VW_V0exit.sym), VPOINTER_OTHER);
  _V0command__line = VEncodePointer(VInternSymbol(-528197701, &_VW_V0command__line.sym), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VInternSymbol(-593882881, &_VW_V0apply.sym), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VInternSymbol(1941194234, &_VW_V0call__with__values.sym), VPOINTER_OTHER);
  _V0call__with__current__continuation = VEncodePointer(VInternSymbol(1282580218, &_VW_V0call__with__current__continuation.sym), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VInternSymbol(122341816, &_VW_V0call_Wcc.sym), VPOINTER_OTHER);
  _V0char___Ginteger = VEncodePointer(VInternSymbol(1804103901, &_VW_V0char___Ginteger.sym), VPOINTER_OTHER);
  _V0vector__length = VEncodePointer(VInternSymbol(992023749, &_VW_V0vector__length.sym), VPOINTER_OTHER);
  _V0vector__set_B = VEncodePointer(VInternSymbol(940022757, &_VW_V0vector__set_B.sym), VPOINTER_OTHER);
  _V0vector__ref = VEncodePointer(VInternSymbol(1088741906, &_VW_V0vector__ref.sym), VPOINTER_OTHER);
  _V0vector = VEncodePointer(VInternSymbol(2121585365, &_VW_V0vector.sym), VPOINTER_OTHER);
  _V0list___Gvector = VEncodePointer(VInternSymbol(-1621476658, &_VW_V0list___Gvector.sym), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VInternSymbol(1686099966, &_VW_V0symbol___Gstring.sym), VPOINTER_OTHER);
  _V0string___Gnumber = VEncodePointer(VInternSymbol(-2037572785, &_VW_V0string___Gnumber.sym), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VInternSymbol(2140599123, &_VW_V0string___Gsymbol.sym), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VInternSymbol(1181039324, &_VW_V0string__length.sym), VPOINTER_OTHER);
  _V0string__set_B = VEncodePointer(VInternSymbol(1393432733, &_VW_V0string__set_B.sym), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VInternSymbol(-398164284, &_VW_V0string__ref.sym), VPOINTER_OTHER);
  _V0string__copy_B = VEncodePointer(VInternSymbol(-2113239574, &_VW_V0string__copy_B.sym), VPOINTER_OTHER);
  _V0string__copy = VEncodePointer(VInternSymbol(-1345957753, &_VW_V0string__copy.sym), VPOINTER_OTHER);
  _V0substring = VEncodePointer(VInternSymbol(806341036, &_VW_V0substring.sym), VPOINTER_OTHER);
  _V0make__string = VEncodePointer(VInternSymbol(-681842748, &_VW_V0make__string.sym), VPOINTER_OTHER);
  _V0set__cdr_B = VEncodePointer(VInternSymbol(-1220981645, &_VW_V0set__cdr_B.sym), VPOINTER_OTHER);
  _V0set__car_B = VEncodePointer(VInternSymbol(1093388680, &_VW_V0set__car_B.sym), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VInternSymbol(-27845161, &_VW_V0cdr.sym), VPOINTER_OTHER);
  _V0car = VEncodePointer(VInternSymbol(-5179575, &_VW_V0car.sym), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VInternSymbol(943237530, &_VW_V0cons.sym), VPOINTER_OTHER);
  _V0remainder = VEncodePointer(VInternSymbol(2045946545, &_VW_V0remainder.sym), VPOINTER_OTHER);
  _V0quotient = VEncodePointer(VInternSymbol(91253952, &_VW_V0quotient.sym), VPOINTER_OTHER);
  _V0_W = VEncodePointer(VInternSymbol(-1980900630, &_VW_V0_W.sym), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VInternSymbol(-1095746844, &_VW_V0_S.sym), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VInternSymbol(1290206293, &_VW_V0__.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V0exact___Ginexact = VEncodePointer(VInternSymbol(1699583945, &_VW_V0exact___Ginexact.sym), VPOINTER_OTHER);
  _V0inexact = VEncodePointer(VInternSymbol(-1954126255, &_VW_V0inexact.sym), VPOINTER_OTHER);
  _V0_G_E = VEncodePointer(VInternSymbol(1925865613, &_VW_V0_G_E.sym), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VInternSymbol(-2106268102, &_VW_V0_L_E.sym), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VInternSymbol(-990041482, &_VW_V0_G.sym), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VInternSymbol(91122933, &_VW_V0_E.sym), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VInternSymbol(1057406733, &_VW_V0_L.sym), VPOINTER_OTHER);
  _V0not = VEncodePointer(VInternSymbol(1947793232, &_VW_V0not.sym), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VInternSymbol(232208272, &_VW_V0eqv_Q.sym), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VInternSymbol(-1583738215, &_VW_V0eq_Q.sym), VPOINTER_OTHER);
  _V0char_Q = VEncodePointer(VInternSymbol(-1122637333, &_VW_V0char_Q.sym), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VInternSymbol(112972720, &_VW_V0integer_Q.sym), VPOINTER_OTHER);
  _V0real_Q = VEncodePointer(VInternSymbol(-591947109, &_VW_V0real_Q.sym), VPOINTER_OTHER);
  _V0inexact_Q = VEncodePointer(VInternSymbol(288726745, &_VW_V0inexact_Q.sym), VPOINTER_OTHER);
  _V0exact_Q = VEncodePointer(VInternSymbol(210465295, &_VW_V0exact_Q.sym), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VInternSymbol(-344327502, &_VW_V0string_Q.sym), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VInternSymbol(1804847899, &_VW_V0symbol_Q.sym), VPOINTER_OTHER);
  _V0procedure_Q = VEncodePointer(VInternSymbol(1068598657, &_VW_V0procedure_Q.sym), VPOINTER_OTHER);
  _V0vector_Q = VEncodePointer(VInternSymbol(-1692453913, &_VW_V0vector_Q.sym), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VInternSymbol(1000447642, &_VW_V0pair_Q.sym), VPOINTER_OTHER);
  _V0eof__object_Q = VEncodePointer(VInternSymbol(-516941403, &_VW_V0eof__object_Q.sym), VPOINTER_OTHER);
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
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gnumber", &_VW_V40_V10vcore_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gsymbol", &_VW_V40_V10vcore_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__length", &_VW_V40_V10vcore_Dstring__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__copy_B", &_VW_V40_V10vcore_Dstring__copy_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsubstring", &_VW_V40_V10vcore_Dsubstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__string", &_VW_V40_V10vcore_Dmake__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V40_V10vcore_Dremainder", &_VW_V40_V10vcore_Dremainder), VPOINTER_CLOSURE);
  _V40_V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V40_V10vcore_Dquotient", &_VW_V40_V10vcore_Dquotient), VPOINTER_CLOSURE);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V40_V10vcore_Dinexact = VEncodePointer(VLookupConstant("_V40_V10vcore_Dinexact", &_VW_V40_V10vcore_Dinexact), VPOINTER_CLOSURE);
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnot = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnot", &_VW_V40_V10vcore_Dnot), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V10_Dpair_D726.first = VEncodePointer(&_V10_Dpair_D725, VPOINTER_PAIR);
  _V10_Dpair_D726.rest = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D725.first = VEncodeBool(false);
  _V10_Dpair_D725.rest = VEncodePointer(&_V10_Dpair_D724, VPOINTER_PAIR);
  _V10_Dpair_D724.first = VEncodePointer(&_V10_Dpair_D723, VPOINTER_PAIR);
  _V10_Dpair_D724.rest = VNULL;
  _V10_Dpair_D723.first = _V0_Mk;
  _V10_Dpair_D723.rest = VEncodePointer(&_V10_Dpair_D722, VPOINTER_PAIR);
  _V10_Dpair_D722.first = _V0number_Q;
  _V10_Dpair_D722.rest = VEncodePointer(&_V10_Dpair_D721, VPOINTER_PAIR);
  _V10_Dpair_D721.first = _V0max;
  _V10_Dpair_D721.rest = VEncodePointer(&_V10_Dpair_D720, VPOINTER_PAIR);
  _V10_Dpair_D720.first = _V0cadr;
  _V10_Dpair_D720.rest = VEncodePointer(&_V10_Dpair_D719, VPOINTER_PAIR);
  _V10_Dpair_D719.first = _V0cddr;
  _V10_Dpair_D719.rest = VEncodePointer(&_V10_Dpair_D718, VPOINTER_PAIR);
  _V10_Dpair_D718.first = _V0caadr;
  _V10_Dpair_D718.rest = VEncodePointer(&_V10_Dpair_D717, VPOINTER_PAIR);
  _V10_Dpair_D717.first = _V0caddr;
  _V10_Dpair_D717.rest = VEncodePointer(&_V10_Dpair_D716, VPOINTER_PAIR);
  _V10_Dpair_D716.first = _V0cdadr;
  _V10_Dpair_D716.rest = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D715.first = _V0cdddr;
  _V10_Dpair_D715.rest = VEncodePointer(&_V10_Dpair_D714, VPOINTER_PAIR);
  _V10_Dpair_D714.first = _V0caaadr;
  _V10_Dpair_D714.rest = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D713.first = _V0caaddr;
  _V10_Dpair_D713.rest = VEncodePointer(&_V10_Dpair_D712, VPOINTER_PAIR);
  _V10_Dpair_D712.first = _V0cadadr;
  _V10_Dpair_D712.rest = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D711.first = _V0cadddr;
  _V10_Dpair_D711.rest = VEncodePointer(&_V10_Dpair_D710, VPOINTER_PAIR);
  _V10_Dpair_D710.first = _V0cdaadr;
  _V10_Dpair_D710.rest = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D709.first = _V0cdaddr;
  _V10_Dpair_D709.rest = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D708.first = _V0cddadr;
  _V10_Dpair_D708.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D707.first = _V0cddddr;
  _V10_Dpair_D707.rest = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D706.first = _V0length;
  _V10_Dpair_D706.rest = VEncodePointer(&_V10_Dpair_D705, VPOINTER_PAIR);
  _V10_Dpair_D705.first = _V0map;
  _V10_Dpair_D705.rest = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D704.first = _V0append;
  _V10_Dpair_D704.rest = VEncodePointer(&_V10_Dpair_D703, VPOINTER_PAIR);
  _V10_Dpair_D703.first = _V0memq;
  _V10_Dpair_D703.rest = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D702.first = _V0member;
  _V10_Dpair_D702.rest = VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR);
  _V10_Dpair_D701.first = _V0assv;
  _V10_Dpair_D701.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D700.first = _V0string___Glist;
  _V10_Dpair_D700.rest = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D699.first = _V0string__append;
  _V10_Dpair_D699.rest = VEncodePointer(&_V10_Dpair_D698, VPOINTER_PAIR);
  _V10_Dpair_D698.first = _V0current__error__port;
  _V10_Dpair_D698.rest = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D697.first = _V0open__input__file;
  _V10_Dpair_D697.rest = VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR);
  _V10_Dpair_D696.first = _V0close__port;
  _V10_Dpair_D696.rest = VEncodePointer(&_V10_Dpair_D695, VPOINTER_PAIR);
  _V10_Dpair_D695.first = _V0get__output__string;
  _V10_Dpair_D695.rest = VEncodePointer(&_V10_Dpair_D694, VPOINTER_PAIR);
  _V10_Dpair_D694.first = _V0with__input__from__file;
  _V10_Dpair_D694.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D693.first = _V0read__line;
  _V10_Dpair_D693.rest = VEncodePointer(&_V10_Dpair_D692, VPOINTER_PAIR);
  _V10_Dpair_D692.first = _V0newline;
  _V10_Dpair_D692.rest = VEncodePointer(&_V10_Dpair_D691, VPOINTER_PAIR);
  _V10_Dpair_D691.first = _V0write;
  _V10_Dpair_D691.rest = VEncodePointer(&_V10_Dpair_D690, VPOINTER_PAIR);
  _V10_Dpair_D690.first = _V0error;
  _V10_Dpair_D690.rest = VEncodePointer(&_V10_Dpair_D689, VPOINTER_PAIR);
  _V10_Dpair_D689.first = _V0values;
  _V10_Dpair_D689.rest = VEncodePointer(&_V10_Dpair_D688, VPOINTER_PAIR);
  _V10_Dpair_D688.first = _V0display;
  _V10_Dpair_D688.rest = VEncodePointer(&_V10_Dpair_D687, VPOINTER_PAIR);
  _V10_Dpair_D687.first = _V0read;
  _V10_Dpair_D687.rest = VEncodePointer(&_V10_Dpair_D686, VPOINTER_PAIR);
  _V10_Dpair_D686.first = _V0read__char;
  _V10_Dpair_D686.rest = VEncodePointer(&_V10_Dpair_D685, VPOINTER_PAIR);
  _V10_Dpair_D685.first = _V0with__output__to__file;
  _V10_Dpair_D685.rest = VEncodePointer(&_V10_Dpair_D684, VPOINTER_PAIR);
  _V10_Dpair_D684.first = _V0open__output__string;
  _V10_Dpair_D684.rest = VEncodePointer(&_V10_Dpair_D683, VPOINTER_PAIR);
  _V10_Dpair_D683.first = _V0open__output__file;
  _V10_Dpair_D683.rest = VEncodePointer(&_V10_Dpair_D682, VPOINTER_PAIR);
  _V10_Dpair_D682.first = _V0current__input__port;
  _V10_Dpair_D682.rest = VEncodePointer(&_V10_Dpair_D681, VPOINTER_PAIR);
  _V10_Dpair_D681.first = _V0current__output__port;
  _V10_Dpair_D681.rest = VEncodePointer(&_V10_Dpair_D680, VPOINTER_PAIR);
  _V10_Dpair_D680.first = _V0vector__for__each;
  _V10_Dpair_D680.rest = VEncodePointer(&_V10_Dpair_D679, VPOINTER_PAIR);
  _V10_Dpair_D679.first = _V0list___Gstring;
  _V10_Dpair_D679.rest = VEncodePointer(&_V10_Dpair_D678, VPOINTER_PAIR);
  _V10_Dpair_D678.first = _V0assoc;
  _V10_Dpair_D678.rest = VEncodePointer(&_V10_Dpair_D677, VPOINTER_PAIR);
  _V10_Dpair_D677.first = _V0assq;
  _V10_Dpair_D677.rest = VEncodePointer(&_V10_Dpair_D676, VPOINTER_PAIR);
  _V10_Dpair_D676.first = _V0memv;
  _V10_Dpair_D676.rest = VEncodePointer(&_V10_Dpair_D675, VPOINTER_PAIR);
  _V10_Dpair_D675.first = _V0reverse;
  _V10_Dpair_D675.rest = VEncodePointer(&_V10_Dpair_D674, VPOINTER_PAIR);
  _V10_Dpair_D674.first = _V0for__each;
  _V10_Dpair_D674.rest = VEncodePointer(&_V10_Dpair_D673, VPOINTER_PAIR);
  _V10_Dpair_D673.first = _V0list__ref;
  _V10_Dpair_D673.rest = VEncodePointer(&_V10_Dpair_D672, VPOINTER_PAIR);
  _V10_Dpair_D672.first = _V0list;
  _V10_Dpair_D672.rest = VEncodePointer(&_V10_Dpair_D671, VPOINTER_PAIR);
  _V10_Dpair_D671.first = _V0cdddar;
  _V10_Dpair_D671.rest = VEncodePointer(&_V10_Dpair_D670, VPOINTER_PAIR);
  _V10_Dpair_D670.first = _V0cddaar;
  _V10_Dpair_D670.rest = VEncodePointer(&_V10_Dpair_D669, VPOINTER_PAIR);
  _V10_Dpair_D669.first = _V0cdadar;
  _V10_Dpair_D669.rest = VEncodePointer(&_V10_Dpair_D668, VPOINTER_PAIR);
  _V10_Dpair_D668.first = _V0cdaaar;
  _V10_Dpair_D668.rest = VEncodePointer(&_V10_Dpair_D667, VPOINTER_PAIR);
  _V10_Dpair_D667.first = _V0caddar;
  _V10_Dpair_D667.rest = VEncodePointer(&_V10_Dpair_D666, VPOINTER_PAIR);
  _V10_Dpair_D666.first = _V0cadaar;
  _V10_Dpair_D666.rest = VEncodePointer(&_V10_Dpair_D665, VPOINTER_PAIR);
  _V10_Dpair_D665.first = _V0caadar;
  _V10_Dpair_D665.rest = VEncodePointer(&_V10_Dpair_D664, VPOINTER_PAIR);
  _V10_Dpair_D664.first = _V0caaaar;
  _V10_Dpair_D664.rest = VEncodePointer(&_V10_Dpair_D663, VPOINTER_PAIR);
  _V10_Dpair_D663.first = _V0cddar;
  _V10_Dpair_D663.rest = VEncodePointer(&_V10_Dpair_D662, VPOINTER_PAIR);
  _V10_Dpair_D662.first = _V0cdaar;
  _V10_Dpair_D662.rest = VEncodePointer(&_V10_Dpair_D661, VPOINTER_PAIR);
  _V10_Dpair_D661.first = _V0cadar;
  _V10_Dpair_D661.rest = VEncodePointer(&_V10_Dpair_D660, VPOINTER_PAIR);
  _V10_Dpair_D660.first = _V0caaar;
  _V10_Dpair_D660.rest = VEncodePointer(&_V10_Dpair_D659, VPOINTER_PAIR);
  _V10_Dpair_D659.first = _V0cdar;
  _V10_Dpair_D659.rest = VEncodePointer(&_V10_Dpair_D658, VPOINTER_PAIR);
  _V10_Dpair_D658.first = _V0caar;
  _V10_Dpair_D658.rest = VEncodePointer(&_V10_Dpair_D657, VPOINTER_PAIR);
  _V10_Dpair_D657.first = _V0min;
  _V10_Dpair_D657.rest = VEncodePointer(&_V10_Dpair_D656, VPOINTER_PAIR);
  _V10_Dpair_D656.first = _V0complex_Q;
  _V10_Dpair_D656.rest = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D655.first = _V0equal_Q;
  _V10_Dpair_D655.rest = VEncodePointer(&_V10_Dpair_D654, VPOINTER_PAIR);
  _V10_Dpair_D654.first = _V0symbol_E_Q;
  _V10_Dpair_D654.rest = VEncodePointer(&_V10_Dpair_D653, VPOINTER_PAIR);
  _V10_Dpair_D653.first = _V0boolean_Q;
  _V10_Dpair_D653.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D650.first = VEncodePointer(&_V10_Dpair_D644, VPOINTER_PAIR);
  _V10_Dpair_D650.rest = VEncodePointer(&_V10_Dpair_D649, VPOINTER_PAIR);
  _V10_Dpair_D649.first = VEncodePointer(&_V10_Dpair_D648, VPOINTER_PAIR);
  _V10_Dpair_D649.rest = VNULL;
  _V10_Dpair_D648.first = VEncodePointer(&_V10_Dpair_D642, VPOINTER_PAIR);
  _V10_Dpair_D648.rest = VEncodePointer(&_V10_Dpair_D645, VPOINTER_PAIR);
  _V10_Dpair_D647.first = VEncodePointer(&_V10_Dpair_D644, VPOINTER_PAIR);
  _V10_Dpair_D647.rest = VEncodePointer(&_V10_Dpair_D646, VPOINTER_PAIR);
  _V10_Dpair_D646.first = VEncodePointer(&_V10_Dpair_D645, VPOINTER_PAIR);
  _V10_Dpair_D646.rest = VNULL;
  _V10_Dpair_D645.first = VEncodePointer(&_V10_Dpair_D635, VPOINTER_PAIR);
  _V10_Dpair_D645.rest = VEncodePointer(&_V10_Dpair_D636, VPOINTER_PAIR);
  _V10_Dpair_D644.first = VEncodeBool(false);
  _V10_Dpair_D644.rest = VEncodePointer(&_V10_Dpair_D643, VPOINTER_PAIR);
  _V10_Dpair_D643.first = VEncodePointer(&_V10_Dpair_D642, VPOINTER_PAIR);
  _V10_Dpair_D643.rest = VNULL;
  _V10_Dpair_D642.first = _V0_Mx;
  _V10_Dpair_D642.rest = VNULL;
  _V10_Dpair_D641.first = VEncodePointer(&_V10_Dpair_D637, VPOINTER_PAIR);
  _V10_Dpair_D641.rest = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D640.first = VEncodePointer(&_V10_Dpair_D636, VPOINTER_PAIR);
  _V10_Dpair_D640.rest = VNULL;
  _V10_Dpair_D639.first = VEncodePointer(&_V10_Dpair_D637, VPOINTER_PAIR);
  _V10_Dpair_D639.rest = VEncodePointer(&_V10_Dpair_D638, VPOINTER_PAIR);
  _V10_Dpair_D638.first = VNULL;
  _V10_Dpair_D638.rest = VNULL;
  _V10_Dpair_D637.first = VEncodeBool(false);
  _V10_Dpair_D637.rest = VEncodePointer(&_V10_Dpair_D636, VPOINTER_PAIR);
  _V10_Dpair_D636.first = VEncodePointer(&_V10_Dpair_D635, VPOINTER_PAIR);
  _V10_Dpair_D636.rest = VNULL;
  _V10_Dpair_D635.first = _V0_Mk;
  _V10_Dpair_D635.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0scheme_V0r7rs_V20_V0k2, VEncodePointer(&_V10_Dpair_D650, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0scheme_V0r7rs_V20_V0k1, VEncodePointer(&_V10_Dpair_D647, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0scheme_V0r7rs_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0scheme_V0r7rs_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0scheme_V0r7rs_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D639, VPOINTER_PAIR));
}
