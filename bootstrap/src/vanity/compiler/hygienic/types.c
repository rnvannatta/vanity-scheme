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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0types;

VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector;
VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeVector, NULL };
VWEAK VWORD _V0scope_E_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0scope_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "scope=\?" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
static VPair _V10_Dpair_D1078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1077 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0scope;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "scope" };
static VPair _V10_Dpair_D1072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dscope_Q_D2;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dscope_Q_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.scope\?.2" };
static VPair _V10_Dpair_D1065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bindings;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bindings" };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D1030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dsyntax_Q_D4;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10_Dsyntax_Q_D4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##.syntax\?.4" };
static VPair _V10_Dpair_D1027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0flips;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0flips = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "flips" };
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
static VPair _V10_Dpair_D1009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D985 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
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
VWEAK VWORD _V0rec;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0rec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "rec" };
static VPair _V10_Dpair_D972 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D948 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D947 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D946 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D945 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
static VPair _V10_Dpair_D944 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D943 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D942 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D941 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0flip;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0flip = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "flip" };
VWEAK VWORD _V0data;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "data" };
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dflip_D114;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dflip_D114 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.flip.114" };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0scopes;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "scopes" };
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
VWEAK VWORD _V10_Dloop_D108;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D108 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.108" };
static VPair _V10_Dpair_D872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0set = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "set" };
static VPair _V10_Dpair_D864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D863 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0stx;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0stx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "stx" };
static VPair _V10_Dpair_D835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D826 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static VPair _V10_Dpair_D823 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0sc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0sc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "sc" };
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
static VPair _V10_Dpair_D731 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D730 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D729 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D728 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D726 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D725 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D724 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0pair;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0pair = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "pair" };
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
VWEAK VWORD _V10_Dloop_D89;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D89 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.89" };
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
VWEAK VWORD _V10_Dloop_D85;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D85 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.85" };
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
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D654 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D653 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D652 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D651 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D650 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D649 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D648 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D647 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D646 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D645 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D81;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D81 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.81" };
static VPair _V10_Dpair_D644 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D643 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D642 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D641 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D640 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D634 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D633 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D632 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D631 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D630 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D629 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D628 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D627 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D626 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D625 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D624 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0xss;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0xss = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "xss" };
static VPair _V10_Dpair_D623 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D622 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D621 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0xs;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0xs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "xs" };
static VPair _V10_Dpair_D620 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D619 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D618 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D617 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D616 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D615 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D614 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D613 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D612 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D611 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D610 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D609 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D608 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D607 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D606 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D605 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D604 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D603 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D602 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D601 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D600 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D599 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D598 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D597 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D596 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D595 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D593 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D592 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D587 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
VWEAK VWORD _V0v;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0v = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "v" };
static VPair _V10_Dpair_D586 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D580 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D579 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D573 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D571 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D570 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D569 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D568 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D559 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D558 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D557 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D556 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D555 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D554 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D553 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D552 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D551 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D550 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D549 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D548 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D547 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D546 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D545 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D539 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0scope_D1;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0scope_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "scope.1" };
VWEAK VWORD _V0scope_Q_D2;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0scope_Q_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "scope\?.2" };
VWEAK VWORD _V0scope_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0scope_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "scope\?" };
VWEAK VWORD _V0make__scope__impl;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__scope__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-scope-impl" };
VWEAK VWORD _V0get__scope__bindings;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0get__scope__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "get-scope-bindings" };
VWEAK VWORD _V0set__scope__bindings_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0set__scope__bindings_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "set-scope-bindings!" };
VWEAK VWORD _V0make__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0make__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "make-scope" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0syntax_D3;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0syntax_D3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "syntax.3" };
VWEAK VWORD _V0syntax_Q_D4;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0syntax_Q_D4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "syntax\?.4" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0get__syntax__data__impl;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__syntax__data__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-syntax-data-impl" };
VWEAK VWORD _V0set__syntax__data_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0set__syntax__data_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "set-syntax-data!" };
VWEAK VWORD _V0get__syntax__scopes;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__syntax__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-syntax-scopes" };
VWEAK VWORD _V0set__syntax__scopes_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0set__syntax__scopes_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "set-syntax-scopes!" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0propogate__flips;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0propogate__flips = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "propogate-flips" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0flip__scope__set;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0flip__scope__set = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "flip-scope-set" };
VWEAK VWORD _V0lazy__flip__scope;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0lazy__flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "lazy-flip-scope" };
VWEAK VWORD _V0eager__flip__scope;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0eager__flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "eager-flip-scope" };
VWEAK VWORD _V0syntax__unpack;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0syntax__unpack = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "syntax-unpack" };
VWEAK VWORD _V0flip__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "flip-scope" };
VWEAK VWORD _V0syntax__null_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-null\?" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0syntax__cons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cons" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
VWEAK VWORD _V0syntax__cdar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cdar" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__caddr;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-caddr" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0syntax__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "syntax-for-each" };
VWEAK VWORD _V0syntax__list;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-list" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax__vector;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0syntax__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "syntax-vector" };
VWEAK VWORD _V0syntax__make__vector;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0syntax__make__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "syntax-make-vector" };
VWEAK VWORD _V0syntax__vector__ref;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-ref" };
VWEAK VWORD _V0syntax__vector__map;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-map" };
static VPair _V10_Dpair_D521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0args = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "args" };
VWEAK VWORD _V0f;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0f = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "f" };
static VPair _V10_Dpair_D517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0syntax__vector__for__each;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0syntax__vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "syntax-vector-for-each" };
VWEAK VWORD _V0types;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0types = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "types" };
VWEAK VWORD _V0hygienic;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0hygienic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "hygienic" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
VWEAK VWORD _V0lset__xor;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0lset__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "lset-xor" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0list_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list\?" };
VWEAK VWORD _V0any;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0any = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "any" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _var0, _var1);
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.133 3 0) (##string ##.string.497) (bruijn ##.%x.134 0 0) 'vector-for-each 'map 'vector-map 'any 'list? 'memq 'lset-xor 'make-parameter 'list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 12,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D497.sym, VPOINTER_OTHER),
      _var0,
      _V0vector__for__each,
      _V0map,
      _V0vector__map,
      _V0any,
      _V0list_Q,
      _V0memq,
      _V0lset__xor,
      _V0make__parameter,
      _V0list);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3) (bruijn ##.%x.135 1 0) (bruijn ##.%x.136 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2) (##string ##.string.498))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D498.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1) (##string ##.string.499))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D499.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.138 1 0) (bruijn ##.vector-for-each.5 3 1) (bruijn ##.f.70 1 1) (bruijn ##.%x.139 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, got ~D~N"
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
  // ((bruijn ##.map.6 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4) (bruijn ##.syntax-unpack.47 1 20) (bruijn ##.args.71 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4, self)))),
      statics->vars[20],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.140 1 0) (bruijn ##.vector-map.7 3 3) (bruijn ##.f.72 1 1) (bruijn ##.%x.141 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[3],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, got ~D~N"
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
  // ((bruijn ##.map.6 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5) (bruijn ##.syntax-unpack.47 1 20) (bruijn ##.args.73 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5, self)))),
      statics->vars[20],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.356) ((##vcore.vector-ref (bruijn ##.%x.143 1 0) (bruijn ##.i.75 2 2))) ((bruijn ##.%k.142 2 0) (bruijn ##.%r.356 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[0],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.47 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6) (bruijn ##.v.74 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.358) ((##vcore.vector? (bruijn ##.%x.147 1 0))) ((bruijn ##.%k.144 4 0) (bruijn ##.%r.358 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.146 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8) (bruijn ##.x.76 2 1)) ((bruijn ##.%k.144 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.357) ((##vcore.vector? (bruijn ##.x.76 1 1))) (if (bruijn ##.%p.357 0 0) ((bruijn ##.%k.144 1 0) (bruijn ##.%p.357 0 0)) ((bruijn ##.syntax?.59 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7) (bruijn ##.x.76 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7, self)))),
      statics->vars[1]);
}
    }
}
static void _V10_Dsyntax__for__each_D34_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsyntax__for__each_D34_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D34_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-for-each) #t (bruijn ##.syntax-for-each.34 4 7) (bruijn ##.%k.148 3 0) (bruijn ##.f.77 3 1) (bruijn ##.%x.150 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dsyntax__for__each_D34_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 3 14) (close _V10_Dsyntax__for__each_D34_V0k12) (bruijn ##.xs.78 2 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k12, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V10_Dsyntax__for__each_D34_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsyntax__for__each_D34_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D34_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.77 2 1) (close _V10_Dsyntax__for__each_D34_V0k11) (bruijn ##.%x.151 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k11, self)))),
      _var0);
}
static void _V10_Dsyntax__for__each_D34_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsyntax__for__each_D34_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D34_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.149 0 0) ((bruijn ##.%k.148 1 0) #void) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 2 15) (close _V10_Dsyntax__for__each_D34_V0k10) (bruijn ##.xs.78 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k10, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.81) #f (bruijn ##.loop.81 4 0) (bruijn ##.%k.153 3 0) (bruijn ##.%x.155 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.6 6 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16) (bruijn ##.syntax-cdr.41 5 14) (bruijn ##.xss.82 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16, self)))),
      VGetArg(statics, 5-1, 14),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k15) (bruijn ##.f.79 4 1) (bruijn ##.%x.156 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k15, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.154 0 0) ((bruijn ##.%k.153 1 0) #void) ((bruijn ##.map.6 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14) (bruijn ##.syntax-car.42 4 15) (bruijn ##.xss.82 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14, self)))),
      statics->up->up->up->vars[15],
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.8 4 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13) (bruijn ##.syntax-null?.45 3 18) (bruijn ##.xss.82 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13, self)))),
      statics->up->up->vars[18],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" #t (##pair ##.pair.629) (3 (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.45 1 18) (close _V10_Dsyntax__for__each_D34_V0k9) (bruijn ##.xs.78 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81")) (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.81) #f (bruijn ##.loop.81 0 0) (bruijn ##.%k.152 1 0) (bruijn ##.xss.80 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.45 1 18) (close _V10_Dsyntax__for__each_D34_V0k9) (bruijn ##.xs.78 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k9, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81")) (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.81) #f (bruijn ##.loop.81 0 0) (bruijn ##.%k.152 1 0) (bruijn ##.xss.80 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, @function\n"
#endif
".globl _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"    jmp _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.359) ((##vcore.cons (bruijn ##.%x.160 3 0) (bruijn ##.%x.161 1 0))) ((bruijn ##.%k.158 6 0) (bruijn ##.%r.359 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.85) #f (bruijn ##.loop.85 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21) (bruijn ##.%x.162 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 6 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20) (bruijn ##.xs.86 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.83 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19) (bruijn ##.%x.163 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.159 0 0) ((bruijn ##.%k.158 1 0) '()) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 4 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18) (bruijn ##.xs.86 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.45 3 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17) (bruijn ##.xs.86 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.360) ((##vcore.cons (bruijn ##.%x.167 3 0) (bruijn ##.%x.168 1 0))) ((bruijn ##.%k.165 6 0) (bruijn ##.%r.360 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.89) #f (bruijn ##.loop.89 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26) (bruijn ##.%x.169 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.6 7 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25) (bruijn ##.syntax-cdr.41 6 14) (bruijn ##.xss.90 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25, self)))),
      VGetArg(statics, 6-1, 14),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24) (bruijn ##.f.87 4 1) (bruijn ##.%x.170 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.166 0 0) ((bruijn ##.%k.165 1 0) '()) ((bruijn ##.map.6 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23) (bruijn ##.syntax-car.42 4 15) (bruijn ##.xss.90 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23, self)))),
      statics->up->up->up->vars[15],
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.8 4 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22) (bruijn ##.syntax-null?.45 3 18) (bruijn ##.xss.90 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22, self)))),
      statics->up->up->vars[18],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" #t (##pair ##.pair.677) (3 (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.85) #f (bruijn ##.loop.85 0 0) (bruijn ##.%k.157 1 0) (bruijn ##.xs.84 1 2)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.89) #f (bruijn ##.loop.89 0 0) (bruijn ##.%k.164 1 0) (bruijn ##.xss.88 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.85) #f (bruijn ##.loop.85 0 0) (bruijn ##.%k.157 1 0) (bruijn ##.xs.84 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.89) #f (bruijn ##.loop.89 0 0) (bruijn ##.%k.164 1 0) (bruijn ##.xss.88 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, @function\n"
#endif
".globl _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"    jmp _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 3 15) (bruijn ##.%k.171 2 0) (bruijn ##.%x.172 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 2 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28) (bruijn ##.%x.173 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27) (bruijn ##.pair.91 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 2 14) (bruijn ##.%k.174 1 0) (bruijn ##.%x.175 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29) (bruijn ##.pair.92 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 2 14) (bruijn ##.%k.176 1 0) (bruijn ##.%x.177 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 1 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30) (bruijn ##.pair.93 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 2 15) (bruijn ##.%k.178 1 0) (bruijn ##.%x.179 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31) (bruijn ##.pair.94 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 2 15) (bruijn ##.%k.180 1 0) (bruijn ##.%x.181 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 1 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32) (bruijn ##.pair.95 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.361) ((##vcore.cdr (bruijn ##.%x.183 1 0))) ((bruijn ##.%k.182 2 0) (bruijn ##.%r.361 0 0)))
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
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.47 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33) (bruijn ##.pair.96 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.362) ((##vcore.car (bruijn ##.%x.185 1 0))) ((bruijn ##.%k.184 2 0) (bruijn ##.%r.362 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.47 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34) (bruijn ##.pair.97 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.364) ((##vcore.pair? (bruijn ##.%x.189 1 0))) ((bruijn ##.%k.186 4 0) (bruijn ##.%r.364 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.188 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36) (bruijn ##.x.98 2 1)) ((bruijn ##.%k.186 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.363) ((##vcore.pair? (bruijn ##.x.98 1 1))) (if (bruijn ##.%p.363 0 0) ((bruijn ##.%k.186 1 0) #t) ((bruijn ##.syntax?.59 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35) (bruijn ##.x.98 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.366) ((##vcore.null? (bruijn ##.%x.193 1 0))) ((bruijn ##.%k.190 4 0) (bruijn ##.%r.366 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.192 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38) (bruijn ##.x.99 2 1)) ((bruijn ##.%k.190 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.365) ((##vcore.null? (bruijn ##.x.99 1 1))) (if (bruijn ##.%p.365 0 0) ((bruijn ##.%k.190 1 0) #t) ((bruijn ##.syntax?.59 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37) (bruijn ##.x.99 1 1))))
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
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37, self)))),
      statics->vars[1]);
}
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (bruijn ##.%k.194 1 0) (bruijn ##.x.100 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.195 0 0) (##qualified-call (vanity compiler hygienic types propogate-flips) #t (bruijn ##.propogate-flips.52 2 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40) (bruijn ##.x.100 1 1)) ((bruijn ##.%k.194 1 0) (bruijn ##.x.100 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.59 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39) (bruijn ##.x.100 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 5 31) (bruijn ##.%k.196 4 0) (bruijn ##.%x.198 2 0) (bruijn ##.%x.199 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types flip-scope-set) #t (bruijn ##.flip-scope-set.50 4 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44) (bruijn ##.%x.200 0 0) (bruijn ##.sc.102 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 3 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43) (bruijn ##.v.101 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types eager-flip-scope) #t (bruijn ##.eager-flip-scope.48 4 21) (bruijn ##.%k.202 0 0) (bruijn ##.e.103 0 1) (bruijn ##.sc.102 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.201 0 0) ((bruijn ##.map.6 4 2) (bruijn ##.%k.196 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4) (bruijn ##.v.101 2 1)) ((bruijn ##.%k.196 2 0) (bruijn ##.v.101 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.197 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42) (bruijn ##.v.101 1 1)) ((bruijn ##.list?.9 3 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45) (bruijn ##.v.101 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types identifier?) #t (bruijn ##.identifier?.53 1 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41) (bruijn ##.v.101 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 5 31) (bruijn ##.%k.203 4 0) (bruijn ##.%x.205 2 0) (bruijn ##.%x.206 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types flip-scope-set) #t (bruijn ##.flip-scope-set.50 4 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49) (bruijn ##.%x.207 0 0) (bruijn ##.x.105 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 3 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48) (bruijn ##.stx.104 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.367 1 0) ((bruijn ##.%k.211 0 0) (bruijn ##.%p.367 1 0)) (basic-block 1 1 (##.%r.368) ((##vcore.pair? (bruijn ##.stx.104 4 1))) ((bruijn ##.%k.211 1 0) (bruijn ##.%r.368 0 0))))
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
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 5 31) (bruijn ##.%k.203 4 0) (bruijn ##.stx.104 4 1) (bruijn ##.%x.209 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.208 0 0) ((bruijn ##.list.13 5 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52) (bruijn ##.x.105 3 2)) ((bruijn ##.%k.203 3 0) (bruijn ##.stx.104 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52, self)))),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.204 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47) (bruijn ##.stx.104 1 1)) (basic-block 1 1 (##.%p.367) ((##vcore.symbol? (bruijn ##.stx.104 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax?.59 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46) (bruijn ##.stx.104 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.374) ((##vcore.cons (bruijn ##.%x.372 2 0) (bruijn ##.%x.217 1 0))) ((bruijn ##.%k.214 4 0) (bruijn ##.%r.374 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.369 ##.%p.370) ((##vcore.car (bruijn ##.set.109 1 1)) (##vcore.eq? (bruijn ##.%x.369 0 0) (bruijn ##.x.107 4 2))) (if (bruijn ##.%p.370 0 1) (basic-block 1 1 (##.%r.371) ((##vcore.cdr (bruijn ##.set.109 2 1))) ((bruijn ##.%k.214 2 0) (bruijn ##.%r.371 0 0))) (basic-block 2 2 (##.%x.372 ##.%x.373) ((##vcore.car (bruijn ##.set.109 2 1)) (##vcore.cdr (bruijn ##.set.109 2 1))) (##qualified-call (vanity compiler hygienic types flip-scope-set ##.loop.108) #f (bruijn ##.loop.108 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54) (bruijn ##.%x.373 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.213 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108")) (##qualified-call (vanity compiler hygienic types flip-scope-set ##.loop.108) #f (bruijn ##.loop.108 0 0) (bruijn ##.%k.212 2 0) (bruijn ##.set.106 2 1))) (basic-block 1 1 (##.%r.375) ((##vcore.cons (bruijn ##.x.107 2 2) (bruijn ##.set.106 2 1))) ((bruijn ##.%k.212 2 0) (bruijn ##.%r.375 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.memq.10 2 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53) (bruijn ##.x.107 0 2) (bruijn ##.set.106 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53, self)))),
      _var2,
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 1 30) (bruijn ##.%k.220 0 0) (bruijn ##.stx.110 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types propogate-flips) #t (bruijn ##.propogate-flips.52 1 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55) (bruijn ##.stx.110 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 11 31) (bruijn ##.%k.225 4 0) (bruijn ##.%x.227 2 0) (bruijn ##.%x.228 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lset-xor.11 11 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61) (##intrinsic ##vcore.eq?) (bruijn ##.%x.229 0 0) (bruijn ##.scopes.112 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61, self)))),
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 9 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60) (bruijn ##.stx.115 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.377 1 0) ((bruijn ##.%k.232 0 0) (bruijn ##.%p.377 1 0)) (basic-block 1 1 (##.%r.378) ((##vcore.pair? (bruijn ##.stx.115 4 1))) ((bruijn ##.%k.232 1 0) (bruijn ##.%r.378 0 0))))
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
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.230 0 0) (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 10 31) (bruijn ##.%k.225 3 0) (bruijn ##.stx.115 3 1) (bruijn ##.scopes.112 7 0)) ((bruijn ##.%k.225 3 0) (bruijn ##.stx.115 3 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.226 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 8 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59) (bruijn ##.stx.115 1 1)) (basic-block 1 1 (##.%p.377) ((##vcore.symbol? (bruijn ##.stx.115 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.59 7 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58) (bruijn ##.stx.115 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.382) ((##vcore.cons (bruijn ##.%x.235 3 0) (bruijn ##.%x.236 1 0))) (##qualified-call (vanity compiler hygienic types set-syntax-data!) #t (bruijn ##.set-syntax-data!.56 12 29) (bruijn ##.%k.221 11 0) (bruijn ##.stx.111 11 1) (bruijn ##.%x.382 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.381) ((##vcore.cdr (bruijn ##.data.113 4 0))) (##qualified-call (vanity compiler hygienic types propogate-flips ##.flip.114) #f (bruijn ##.flip.114 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66) (bruijn ##.%x.381 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.380) ((##vcore.car (bruijn ##.data.113 2 0))) (##qualified-call (vanity compiler hygienic types propogate-flips ##.flip.114) #f (bruijn ##.flip.114 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65) (bruijn ##.%x.380 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types set-syntax-data!) #t (bruijn ##.set-syntax-data!.56 9 29) (bruijn ##.%k.221 8 0) (bruijn ##.stx.111 8 1) (bruijn ##.%x.240 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.vector-map.7 9 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68) (bruijn ##.flip.114 2 1) (bruijn ##.data.113 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68, self)))),
      statics->up->vars[1],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.224 1 0) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114")) (basic-block 1 1 (##.%p.379) ((##vcore.pair? (bruijn ##.data.113 1 0))) (if (bruijn ##.%p.379 0 0) (##qualified-call (vanity compiler hygienic types set-syntax-scopes!) #t (bruijn ##.set-syntax-scopes!.54 7 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64) (bruijn ##.stx.111 6 1) '()) (basic-block 1 1 (##.%p.383) ((##vcore.vector? (bruijn ##.data.113 2 0))) (if (bruijn ##.%p.383 0 0) (##qualified-call (vanity compiler hygienic types set-syntax-scopes!) #t (bruijn ##.set-syntax-scopes!.54 8 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67) (bruijn ##.stx.111 7 1) '()) ((bruijn ##.%k.221 7 0) #f))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.222 1 0)) (basic-block 1 1 (##.%p.376) ((##vcore.null? (bruijn ##.scopes.112 1 0))) (if (bruijn ##.%p.376 0 0) ((bruijn ##.%k.221 3 0) #void) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 4 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57) (bruijn ##.stx.111 3 1)))))
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 1 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56) (bruijn ##.stx.111 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.384) ((##vcore.symbol? (bruijn ##.%x.243 1 0))) ((bruijn ##.%k.241 3 0) (bruijn ##.%r.384 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.242 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70) (bruijn ##.x.116 1 1)) ((bruijn ##.%k.241 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.59 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69) (bruijn ##.x.116 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.244 3 0) (bruijn ##.%x.246 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.245 0 0) (##vcore.record-set! (bruijn ##.%k.244 1 0) (bruijn ##.rec.117 1 1) 2 (bruijn ##.x.118 1 2)) (basic-block 2 2 (##.%x.385 ##.%x.386) ((##vcore.cons (bruijn ##.rec.117 2 1) '()) (##vcore.cons 'set-syntax-scopes! (bruijn ##.%x.385 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72) #f 'error (##string ##.string.985) (bruijn ##.%x.386 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(2l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__scopes_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D985.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71) (bruijn ##.rec.117 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.249 3 0) (bruijn ##.%x.251 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.250 0 0) (basic-block 1 1 (##.%r.387) ((##vcore.record-ref (bruijn ##.rec.119 2 1) 2)) ((bruijn ##.%k.249 2 0) (bruijn ##.%r.387 0 0))) (basic-block 2 2 (##.%x.388 ##.%x.389) ((##vcore.cons (bruijn ##.rec.119 2 1) '()) (##vcore.cons 'get-syntax-scopes (bruijn ##.%x.388 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74) #f 'error (##string ##.string.985) (bruijn ##.%x.389 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__scopes,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D985.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73) (bruijn ##.rec.119 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.254 3 0) (bruijn ##.%x.256 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.255 0 0) (##vcore.record-set! (bruijn ##.%k.254 1 0) (bruijn ##.rec.120 1 1) 1 (bruijn ##.x.121 1 2)) (basic-block 2 2 (##.%x.390 ##.%x.391) ((##vcore.cons (bruijn ##.rec.120 2 1) '()) (##vcore.cons 'set-syntax-data! (bruijn ##.%x.390 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76) #f 'error (##string ##.string.985) (bruijn ##.%x.391 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__data_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D985.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75) (bruijn ##.rec.120 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.259 3 0) (bruijn ##.%x.261 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.260 0 0) (basic-block 1 1 (##.%r.392) ((##vcore.record-ref (bruijn ##.rec.122 2 1) 1)) ((bruijn ##.%k.259 2 0) (bruijn ##.%r.392 0 0))) (basic-block 2 2 (##.%x.393 ##.%x.394) ((##vcore.cons (bruijn ##.rec.122 2 1) '()) (##vcore.cons 'get-syntax-data-impl (bruijn ##.%x.393 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78) #f 'error (##string ##.string.985) (bruijn ##.%x.394 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__data__impl,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D985.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77) (bruijn ##.rec.122 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.264 0 0) (bruijn ##.syntax.3.61 1 34) (bruijn ##.data.123 0 1) (bruijn ##.flips.124 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 4,
      _var0,
      statics->vars[34],
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.395) ((##vcore.record? (bruijn ##.x.125 1 1))) (if (bruijn ##.%p.395 0 0) (basic-block 2 2 (##.%x.396 ##.%r.397) ((##vcore.record-ref (bruijn ##.x.125 2 1) 0) (##vcore.eqv? (bruijn ##.%x.396 0 0) (bruijn ##.syntax.3.61 3 34))) ((bruijn ##.%k.265 2 0) (bruijn ##.%r.397 0 1))) ((bruijn ##.%k.265 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[34]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-scope-impl) #t (bruijn ##.make-scope-impl.66 1 39) (bruijn ##.%k.268 0 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.269 3 0) (bruijn ##.%x.271 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.270 0 0) (##vcore.record-set! (bruijn ##.%k.269 1 0) (bruijn ##.rec.126 1 1) 1 (bruijn ##.x.127 1 2)) (basic-block 2 2 (##.%x.398 ##.%x.399) ((##vcore.cons (bruijn ##.rec.126 2 1) '()) (##vcore.cons 'set-scope-bindings! (bruijn ##.%x.398 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80) #f 'error (##string ##.string.985) (bruijn ##.%x.399 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__scope__bindings_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D985.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.68 1 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79) (bruijn ##.rec.126 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.274 3 0) (bruijn ##.%x.276 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.275 0 0) (basic-block 1 1 (##.%r.400) ((##vcore.record-ref (bruijn ##.rec.128 2 1) 1)) ((bruijn ##.%k.274 2 0) (bruijn ##.%r.400 0 0))) (basic-block 2 2 (##.%x.401 ##.%x.402) ((##vcore.cons (bruijn ##.rec.128 2 1) '()) (##vcore.cons 'get-scope-bindings (bruijn ##.%x.401 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82) #f 'error (##string ##.string.985) (bruijn ##.%x.402 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__bindings,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D985.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.68 1 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81) (bruijn ##.rec.128 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.279 0 0) (bruijn ##.scope.1.69 1 42) (bruijn ##.bindings.129 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[42],
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.403) ((##vcore.record? (bruijn ##.x.130 1 1))) (if (bruijn ##.%p.403 0 0) (basic-block 2 2 (##.%x.404 ##.%r.405) ((##vcore.record-ref (bruijn ##.x.130 2 1) 0) (##vcore.eqv? (bruijn ##.%x.404 0 0) (bruijn ##.scope.1.69 3 42))) ((bruijn ##.%k.280 2 0) (bruijn ##.%r.405 0 1))) ((bruijn ##.%k.280 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[42]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 70 70 (##.%x.408 ##.%x.409 ##.%x.410 ##.%x.411 ##.%x.412 ##.%x.413 ##.%x.414 ##.%x.415 ##.%x.416 ##.%x.417 ##.%x.418 ##.%x.419 ##.%x.420 ##.%x.421 ##.%x.422 ##.%x.423 ##.%x.424 ##.%x.425 ##.%x.426 ##.%x.427 ##.%x.428 ##.%x.429 ##.%x.430 ##.%x.431 ##.%x.432 ##.%x.433 ##.%x.434 ##.%x.435 ##.%x.436 ##.%x.437 ##.%x.438 ##.%x.439 ##.%x.440 ##.%x.441 ##.%x.442 ##.%x.443 ##.%x.444 ##.%x.445 ##.%x.446 ##.%x.447 ##.%x.448 ##.%x.449 ##.%x.450 ##.%x.451 ##.%x.452 ##.%x.453 ##.%x.454 ##.%x.455 ##.%x.456 ##.%x.457 ##.%x.458 ##.%x.459 ##.%x.460 ##.%x.461 ##.%x.462 ##.%x.463 ##.%x.464 ##.%x.465 ##.%x.466 ##.%x.467 ##.%x.468 ##.%x.469 ##.%x.470 ##.%x.471 ##.%x.472 ##.%x.473 ##.%x.474 ##.%x.475 ##.%x.476 ##.%r.477) ((##vcore.cons 'make-scope (bruijn ##.make-scope.63 5 36)) (##vcore.cons 'scope? (bruijn ##.scope?.67 5 40)) (##vcore.cons 'scope=? (##intrinsic ##vcore.eq?)) (##vcore.cons 'get-scope-bindings (bruijn ##.get-scope-bindings.65 5 38)) (##vcore.cons 'set-scope-bindings! (bruijn ##.set-scope-bindings!.64 5 37)) (##vcore.cons 'global-scope (bruijn ##.global-scope.62 5 35)) (##vcore.cons 'identifier? (bruijn ##.identifier?.53 5 26)) (##vcore.cons 'get-syntax-scopes (bruijn ##.get-syntax-scopes.55 5 28)) (##vcore.cons 'set-syntax-scopes! (bruijn ##.set-syntax-scopes!.54 5 27)) (##vcore.cons 'make-syntax (bruijn ##.make-syntax.58 5 31)) (##vcore.cons 'syntax? (bruijn ##.syntax?.59 5 32)) (##vcore.cons 'get-syntax-data (bruijn ##.get-syntax-data.51 5 24)) (##vcore.cons 'set-syntax-data! (bruijn ##.set-syntax-data!.56 5 29)) (##vcore.cons 'syntax-null? (bruijn ##.syntax-null?.45 5 18)) (##vcore.cons 'syntax-pair? (bruijn ##.syntax-pair?.44 5 17)) (##vcore.cons 'syntax-cons (bruijn ##.syntax-cons.43 5 16)) (##vcore.cons 'syntax-car (bruijn ##.syntax-car.42 5 15)) (##vcore.cons 'syntax-cdr (bruijn ##.syntax-cdr.41 5 14)) (##vcore.cons 'syntax-caar (bruijn ##.syntax-caar.40 5 13)) (##vcore.cons 'syntax-cadr (bruijn ##.syntax-cadr.39 5 12)) (##vcore.cons 'syntax-cdar (bruijn ##.syntax-cdar.38 5 11)) (##vcore.cons 'syntax-cddr (bruijn ##.syntax-cddr.37 5 10)) (##vcore.cons 'syntax-map (bruijn ##.syntax-map.35 5 8)) (##vcore.cons 'syntax-for-each (bruijn ##.syntax-for-each.34 5 7)) (##vcore.cons 'syntax-list (bruijn ##.syntax-list.33 5 6)) (##vcore.cons 'syntax-caddr (bruijn ##.syntax-caddr.36 5 9)) (##vcore.cons 'syntax-vector? (bruijn ##.syntax-vector?.32 5 5)) (##vcore.cons 'syntax-vector (bruijn ##.syntax-vector.31 5 4)) (##vcore.cons 'syntax-make-vector (bruijn ##.syntax-make-vector.30 5 3)) (##vcore.cons 'syntax-vector-ref (bruijn ##.syntax-vector-ref.29 5 2)) (##vcore.cons 'syntax-vector-map (bruijn ##.syntax-vector-map.28 5 1)) (##vcore.cons 'syntax-vector-for-each (bruijn ##.syntax-vector-for-each.27 5 0)) (##vcore.cons 'lazy-flip-scope (bruijn ##.lazy-flip-scope.49 5 22)) (##vcore.cons 'eager-flip-scope (bruijn ##.eager-flip-scope.48 5 21)) (##vcore.cons 'flip-scope (bruijn ##.flip-scope.46 5 19)) (##vcore.cons (bruijn ##.%x.442 0 34) '()) (##vcore.cons (bruijn ##.%x.441 0 33) (bruijn ##.%x.443 0 35)) (##vcore.cons (bruijn ##.%x.440 0 32) (bruijn ##.%x.444 0 36)) (##vcore.cons (bruijn ##.%x.439 0 31) (bruijn ##.%x.445 0 37)) (##vcore.cons (bruijn ##.%x.438 0 30) (bruijn ##.%x.446 0 38)) (##vcore.cons (bruijn ##.%x.437 0 29) (bruijn ##.%x.447 0 39)) (##vcore.cons (bruijn ##.%x.436 0 28) (bruijn ##.%x.448 0 40)) (##vcore.cons (bruijn ##.%x.435 0 27) (bruijn ##.%x.449 0 41)) (##vcore.cons (bruijn ##.%x.434 0 26) (bruijn ##.%x.450 0 42)) (##vcore.cons (bruijn ##.%x.433 0 25) (bruijn ##.%x.451 0 43)) (##vcore.cons (bruijn ##.%x.432 0 24) (bruijn ##.%x.452 0 44)) (##vcore.cons (bruijn ##.%x.431 0 23) (bruijn ##.%x.453 0 45)) (##vcore.cons (bruijn ##.%x.430 0 22) (bruijn ##.%x.454 0 46)) (##vcore.cons (bruijn ##.%x.429 0 21) (bruijn ##.%x.455 0 47)) (##vcore.cons (bruijn ##.%x.428 0 20) (bruijn ##.%x.456 0 48)) (##vcore.cons (bruijn ##.%x.427 0 19) (bruijn ##.%x.457 0 49)) (##vcore.cons (bruijn ##.%x.426 0 18) (bruijn ##.%x.458 0 50)) (##vcore.cons (bruijn ##.%x.425 0 17) (bruijn ##.%x.459 0 51)) (##vcore.cons (bruijn ##.%x.424 0 16) (bruijn ##.%x.460 0 52)) (##vcore.cons (bruijn ##.%x.423 0 15) (bruijn ##.%x.461 0 53)) (##vcore.cons (bruijn ##.%x.422 0 14) (bruijn ##.%x.462 0 54)) (##vcore.cons (bruijn ##.%x.421 0 13) (bruijn ##.%x.463 0 55)) (##vcore.cons (bruijn ##.%x.420 0 12) (bruijn ##.%x.464 0 56)) (##vcore.cons (bruijn ##.%x.419 0 11) (bruijn ##.%x.465 0 57)) (##vcore.cons (bruijn ##.%x.418 0 10) (bruijn ##.%x.466 0 58)) (##vcore.cons (bruijn ##.%x.417 0 9) (bruijn ##.%x.467 0 59)) (##vcore.cons (bruijn ##.%x.416 0 8) (bruijn ##.%x.468 0 60)) (##vcore.cons (bruijn ##.%x.415 0 7) (bruijn ##.%x.469 0 61)) (##vcore.cons (bruijn ##.%x.414 0 6) (bruijn ##.%x.470 0 62)) (##vcore.cons (bruijn ##.%x.413 0 5) (bruijn ##.%x.471 0 63)) (##vcore.cons (bruijn ##.%x.412 0 4) (bruijn ##.%x.472 0 64)) (##vcore.cons (bruijn ##.%x.411 0 3) (bruijn ##.%x.473 0 65)) (##vcore.cons (bruijn ##.%x.410 0 2) (bruijn ##.%x.474 0 66)) (##vcore.cons (bruijn ##.%x.409 0 1) (bruijn ##.%x.475 0 67)) (##vcore.cons (bruijn ##.%x.408 0 0) (bruijn ##.%x.476 0 68))) ((bruijn ##.%k.137 6 0) (bruijn ##.%r.477 0 69)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[70]; } container;
    self = &container.self;
    VInitEnv(self, 70, 70, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0make__scope,
      VGetArg(statics, 5-1, 36));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0scope_Q,
      VGetArg(statics, 5-1, 40));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0scope_E_Q,
      _V40_V10vcore_Deq_Q);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__bindings,
      VGetArg(statics, 5-1, 38));
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0set__scope__bindings_B,
      VGetArg(statics, 5-1, 37));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0global__scope,
      VGetArg(statics, 5-1, 35));
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0identifier_Q,
      VGetArg(statics, 5-1, 26));
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__scopes,
      VGetArg(statics, 5-1, 28));
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__scopes_B,
      VGetArg(statics, 5-1, 27));
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0make__syntax,
      VGetArg(statics, 5-1, 31));
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0syntax_Q,
      VGetArg(statics, 5-1, 32));
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__data,
      VGetArg(statics, 5-1, 24));
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__data_B,
      VGetArg(statics, 5-1, 29));
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__null_Q,
      VGetArg(statics, 5-1, 18));
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__pair_Q,
      VGetArg(statics, 5-1, 17));
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cons,
      VGetArg(statics, 5-1, 16));
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__car,
      VGetArg(statics, 5-1, 15));
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cdr,
      VGetArg(statics, 5-1, 14));
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__caar,
      VGetArg(statics, 5-1, 13));
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cadr,
      VGetArg(statics, 5-1, 12));
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cdar,
      VGetArg(statics, 5-1, 11));
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cddr,
      VGetArg(statics, 5-1, 10));
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__map,
      VGetArg(statics, 5-1, 8));
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__for__each,
      VGetArg(statics, 5-1, 7));
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__list,
      VGetArg(statics, 5-1, 6));
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__caddr,
      VGetArg(statics, 5-1, 9));
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector_Q,
      VGetArg(statics, 5-1, 5));
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector,
      VGetArg(statics, 5-1, 4));
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__make__vector,
      VGetArg(statics, 5-1, 3));
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__ref,
      VGetArg(statics, 5-1, 2));
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__map,
      VGetArg(statics, 5-1, 1));
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__for__each,
      VGetArg(statics, 5-1, 0));
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      _V0lazy__flip__scope,
      VGetArg(statics, 5-1, 22));
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      _V0eager__flip__scope,
      VGetArg(statics, 5-1, 21));
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      _V0flip__scope,
      VGetArg(statics, 5-1, 19));
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      self->vars[34],
      VNULL);
    self->vars[36] = _VBasic_VCons2(runtime, NULL,
      self->vars[33],
      self->vars[35]);
    self->vars[37] = _VBasic_VCons2(runtime, NULL,
      self->vars[32],
      self->vars[36]);
    self->vars[38] = _VBasic_VCons2(runtime, NULL,
      self->vars[31],
      self->vars[37]);
    self->vars[39] = _VBasic_VCons2(runtime, NULL,
      self->vars[30],
      self->vars[38]);
    self->vars[40] = _VBasic_VCons2(runtime, NULL,
      self->vars[29],
      self->vars[39]);
    self->vars[41] = _VBasic_VCons2(runtime, NULL,
      self->vars[28],
      self->vars[40]);
    self->vars[42] = _VBasic_VCons2(runtime, NULL,
      self->vars[27],
      self->vars[41]);
    self->vars[43] = _VBasic_VCons2(runtime, NULL,
      self->vars[26],
      self->vars[42]);
    self->vars[44] = _VBasic_VCons2(runtime, NULL,
      self->vars[25],
      self->vars[43]);
    self->vars[45] = _VBasic_VCons2(runtime, NULL,
      self->vars[24],
      self->vars[44]);
    self->vars[46] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      self->vars[45]);
    self->vars[47] = _VBasic_VCons2(runtime, NULL,
      self->vars[22],
      self->vars[46]);
    self->vars[48] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      self->vars[47]);
    self->vars[49] = _VBasic_VCons2(runtime, NULL,
      self->vars[20],
      self->vars[48]);
    self->vars[50] = _VBasic_VCons2(runtime, NULL,
      self->vars[19],
      self->vars[49]);
    self->vars[51] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      self->vars[50]);
    self->vars[52] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      self->vars[51]);
    self->vars[53] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[52]);
    self->vars[54] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[53]);
    self->vars[55] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[54]);
    self->vars[56] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[55]);
    self->vars[57] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[56]);
    self->vars[58] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[57]);
    self->vars[59] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[58]);
    self->vars[60] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[59]);
    self->vars[61] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[60]);
    self->vars[62] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[61]);
    self->vars[63] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[62]);
    self->vars[64] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[63]);
    self->vars[65] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[64]);
    self->vars[66] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[65]);
    self->vars[67] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[66]);
    self->vars[68] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[67]);
    self->vars[69] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[68]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[69]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94) (bruijn ##.syntax-make-vector.30 4 3) (##intrinsic ##vcore.make-vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94, self)))),
      VEncodeInt(4l), VEncodeInt(3l),
      _V40_V10vcore_Dmake__vector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93) (bruijn ##.syntax-vector.31 4 4) (##intrinsic ##vcore.vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93, self)))),
      VEncodeInt(4l), VEncodeInt(4l),
      _V40_V10vcore_Dvector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92) (bruijn ##.syntax-list.33 4 6) (bruijn ##.list.13 5 9))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92, self)))),
      VEncodeInt(4l), VEncodeInt(6l),
      VGetArg(statics, 5-1, 9)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91) (bruijn ##.syntax-cons.43 4 16) (##intrinsic ##vcore.cons))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91, self)))),
      VEncodeInt(4l), VEncodeInt(16l),
      _V40_V10vcore_Dcons
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90) (bruijn ##.flip-scope.46 4 19) (bruijn ##.lazy-flip-scope.49 4 22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90, self)))),
      VEncodeInt(4l), VEncodeInt(19l),
      statics->up->up->up->vars[22]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89) (bruijn ##.syntax?.59 4 32) (bruijn ##.syntax?.4.60 4 33))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89, self)))),
      VEncodeInt(4l), VEncodeInt(32l),
      statics->up->up->up->vars[33]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.407) ((##vcore.cons 'syntax '(##pair ##.pair.1023))) (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88) (bruijn ##.syntax.3.61 4 34) (bruijn ##.%x.407 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0syntax,
      VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88, self)))),
      VEncodeInt(4l), VEncodeInt(34l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87) (bruijn ##.global-scope.62 3 35) (bruijn ##.%x.353 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87, self)))),
      VEncodeInt(3l), VEncodeInt(35l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.12 3 8) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86) (bruijn ##.%x.354 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types make-scope) #t (bruijn ##.make-scope.63 1 36) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(runtime, _closure_env, 1, _arg0);
    }
  }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84) (bruijn ##.scope?.67 1 40) (bruijn ##.scope?.2.68 1 41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84, self)))),
      VEncodeInt(1l), VEncodeInt(40l),
      statics->vars[41]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 10) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3, got ~D~N"
  "-- expected 10~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[10]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 10, 10, statics);
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
  // (##letrec (vanity compiler hygienic types) 43 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2" (vanity compiler hygienic types)) #f) (basic-block 1 1 (##.%x.406) ((##vcore.cons 'scope '(##pair ##.pair.1061))) (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83) (bruijn ##.scope.1.69 1 42) (bruijn ##.%x.406 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[43]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0types = self;
    VInitEnv(self, 43, 43, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[16] = VEncodeBool(false);
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[19] = VEncodeBool(false);
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[26] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[32] = VEncodeBool(false);
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[34] = VEncodeBool(false);
    self->vars[35] = VEncodeBool(false);
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[40] = VEncodeBool(false);
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[42] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0types_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0types);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0scope,
      VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83, self)))),
      VEncodeInt(1l), VEncodeInt(42l),
      self->vars[0]
    );
    }
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.132 0 0) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0types_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0scope_E_Q = VEncodePointer(VInternSymbol(-1451629464, &_VW_V0scope_E_Q.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V0scope = VEncodePointer(VInternSymbol(70154970, &_VW_V0scope.sym), VPOINTER_OTHER);
  _V10_Dscope_Q_D2 = VEncodePointer(VInternSymbol(494396594, &_VW_V10_Dscope_Q_D2.sym), VPOINTER_OTHER);
  _V0bindings = VEncodePointer(VInternSymbol(-448679587, &_VW_V0bindings.sym), VPOINTER_OTHER);
  _V10_Dsyntax_Q_D4 = VEncodePointer(VInternSymbol(526750844, &_VW_V10_Dsyntax_Q_D4.sym), VPOINTER_OTHER);
  _V0flips = VEncodePointer(VInternSymbol(-1883505206, &_VW_V0flips.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0rec = VEncodePointer(VInternSymbol(-370118234, &_VW_V0rec.sym), VPOINTER_OTHER);
  _V0flip = VEncodePointer(VInternSymbol(-559848493, &_VW_V0flip.sym), VPOINTER_OTHER);
  _V0data = VEncodePointer(VInternSymbol(1429020067, &_VW_V0data.sym), VPOINTER_OTHER);
  _V10_Dflip_D114 = VEncodePointer(VInternSymbol(-690021533, &_VW_V10_Dflip_D114.sym), VPOINTER_OTHER);
  _V0scopes = VEncodePointer(VInternSymbol(2143980828, &_VW_V0scopes.sym), VPOINTER_OTHER);
  _V10_Dloop_D108 = VEncodePointer(VInternSymbol(-992304295, &_VW_V10_Dloop_D108.sym), VPOINTER_OTHER);
  _V0set = VEncodePointer(VInternSymbol(1350197739, &_VW_V0set.sym), VPOINTER_OTHER);
  _V0stx = VEncodePointer(VInternSymbol(81053177, &_VW_V0stx.sym), VPOINTER_OTHER);
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V0sc = VEncodePointer(VInternSymbol(1487425455, &_VW_V0sc.sym), VPOINTER_OTHER);
  _V0pair = VEncodePointer(VInternSymbol(-766571036, &_VW_V0pair.sym), VPOINTER_OTHER);
  _V10_Dloop_D89 = VEncodePointer(VInternSymbol(495372068, &_VW_V10_Dloop_D89.sym), VPOINTER_OTHER);
  _V10_Dloop_D85 = VEncodePointer(VInternSymbol(298208199, &_VW_V10_Dloop_D85.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V10_Dloop_D81 = VEncodePointer(VInternSymbol(1720890841, &_VW_V10_Dloop_D81.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0xss = VEncodePointer(VInternSymbol(428587118, &_VW_V0xss.sym), VPOINTER_OTHER);
  _V0xs = VEncodePointer(VInternSymbol(-55341891, &_VW_V0xs.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V0v = VEncodePointer(VInternSymbol(1106345665, &_VW_V0v.sym), VPOINTER_OTHER);
  _V0scope_D1 = VEncodePointer(VInternSymbol(1308264919, &_VW_V0scope_D1.sym), VPOINTER_OTHER);
  _V0scope_Q_D2 = VEncodePointer(VInternSymbol(-1594911122, &_VW_V0scope_Q_D2.sym), VPOINTER_OTHER);
  _V0scope_Q = VEncodePointer(VInternSymbol(1860486257, &_VW_V0scope_Q.sym), VPOINTER_OTHER);
  _V0make__scope__impl = VEncodePointer(VInternSymbol(1276724236, &_VW_V0make__scope__impl.sym), VPOINTER_OTHER);
  _V0get__scope__bindings = VEncodePointer(VInternSymbol(706853436, &_VW_V0get__scope__bindings.sym), VPOINTER_OTHER);
  _V0set__scope__bindings_B = VEncodePointer(VInternSymbol(-32175007, &_VW_V0set__scope__bindings_B.sym), VPOINTER_OTHER);
  _V0make__scope = VEncodePointer(VInternSymbol(1685021352, &_VW_V0make__scope.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0syntax_D3 = VEncodePointer(VInternSymbol(-215598279, &_VW_V0syntax_D3.sym), VPOINTER_OTHER);
  _V0syntax_Q_D4 = VEncodePointer(VInternSymbol(1464801739, &_VW_V0syntax_Q_D4.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0get__syntax__data__impl = VEncodePointer(VInternSymbol(-1401117803, &_VW_V0get__syntax__data__impl.sym), VPOINTER_OTHER);
  _V0set__syntax__data_B = VEncodePointer(VInternSymbol(1171015389, &_VW_V0set__syntax__data_B.sym), VPOINTER_OTHER);
  _V0get__syntax__scopes = VEncodePointer(VInternSymbol(1433535723, &_VW_V0get__syntax__scopes.sym), VPOINTER_OTHER);
  _V0set__syntax__scopes_B = VEncodePointer(VInternSymbol(-1743293188, &_VW_V0set__syntax__scopes_B.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0propogate__flips = VEncodePointer(VInternSymbol(1955248888, &_VW_V0propogate__flips.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0flip__scope__set = VEncodePointer(VInternSymbol(-113313105, &_VW_V0flip__scope__set.sym), VPOINTER_OTHER);
  _V0lazy__flip__scope = VEncodePointer(VInternSymbol(24378627, &_VW_V0lazy__flip__scope.sym), VPOINTER_OTHER);
  _V0eager__flip__scope = VEncodePointer(VInternSymbol(-1453646135, &_VW_V0eager__flip__scope.sym), VPOINTER_OTHER);
  _V0syntax__unpack = VEncodePointer(VInternSymbol(-1517782154, &_VW_V0syntax__unpack.sym), VPOINTER_OTHER);
  _V0flip__scope = VEncodePointer(VInternSymbol(-1341584941, &_VW_V0flip__scope.sym), VPOINTER_OTHER);
  _V0syntax__null_Q = VEncodePointer(VInternSymbol(-1668028446, &_VW_V0syntax__null_Q.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0syntax__cons = VEncodePointer(VInternSymbol(-713299037, &_VW_V0syntax__cons.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V0syntax__cdar = VEncodePointer(VInternSymbol(528412582, &_VW_V0syntax__cdar.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__caddr = VEncodePointer(VInternSymbol(43375589, &_VW_V0syntax__caddr.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__for__each = VEncodePointer(VInternSymbol(-248708222, &_VW_V0syntax__for__each.sym), VPOINTER_OTHER);
  _V0syntax__list = VEncodePointer(VInternSymbol(-605002697, &_VW_V0syntax__list.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax__vector = VEncodePointer(VInternSymbol(2095870854, &_VW_V0syntax__vector.sym), VPOINTER_OTHER);
  _V0syntax__make__vector = VEncodePointer(VInternSymbol(1757627800, &_VW_V0syntax__make__vector.sym), VPOINTER_OTHER);
  _V0syntax__vector__ref = VEncodePointer(VInternSymbol(1415884220, &_VW_V0syntax__vector__ref.sym), VPOINTER_OTHER);
  _V0syntax__vector__map = VEncodePointer(VInternSymbol(-1500491324, &_VW_V0syntax__vector__map.sym), VPOINTER_OTHER);
  _V0args = VEncodePointer(VInternSymbol(-1952811398, &_VW_V0args.sym), VPOINTER_OTHER);
  _V0f = VEncodePointer(VInternSymbol(-265621939, &_VW_V0f.sym), VPOINTER_OTHER);
  _V0syntax__vector__for__each = VEncodePointer(VInternSymbol(1789865652, &_VW_V0syntax__vector__for__each.sym), VPOINTER_OTHER);
  _V0types = VEncodePointer(VInternSymbol(1763748288, &_VW_V0types.sym), VPOINTER_OTHER);
  _V0hygienic = VEncodePointer(VInternSymbol(1358647835, &_VW_V0hygienic.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VInternSymbol(57061984, &_VW_V0make__parameter.sym), VPOINTER_OTHER);
  _V0lset__xor = VEncodePointer(VInternSymbol(1623232448, &_VW_V0lset__xor.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0list_Q = VEncodePointer(VInternSymbol(746894953, &_VW_V0list_Q.sym), VPOINTER_OTHER);
  _V0any = VEncodePointer(VInternSymbol(1273566383, &_VW_V0any.sym), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VInternSymbol(848807183, &_VW_V0vector__map.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VInternSymbol(2135063694, &_VW_V0vector__for__each.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__vector", &_VW_V40_V10vcore_Dmake__vector), VPOINTER_CLOSURE);
  _V10_Dpair_D1078.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D1078.rest = VEncodePointer(&_V10_Dpair_D1077, VPOINTER_PAIR);
  _V10_Dpair_D1077.first = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1077.rest = VNULL;
  _V10_Dpair_D1076.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D1076.rest = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1075.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D1075.rest = VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR);
  _V10_Dpair_D1074.first = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1074.rest = VNULL;
  _V10_Dpair_D1073.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D1073.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D1072.first = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1072.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1071.first = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1071.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D1070.first = _V0vanity;
  _V10_Dpair_D1070.rest = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1069.first = _V0compiler;
  _V10_Dpair_D1069.rest = VEncodePointer(&_V10_Dpair_D1068, VPOINTER_PAIR);
  _V10_Dpair_D1068.first = _V0hygienic;
  _V10_Dpair_D1068.rest = VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR);
  _V10_Dpair_D1067.first = _V0types;
  _V10_Dpair_D1067.rest = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1066.first = _V10_Dscope_Q_D2;
  _V10_Dpair_D1066.rest = VNULL;
  _V10_Dpair_D1065.first = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1065.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1064.first = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1064.rest = VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR);
  _V10_Dpair_D1063.first = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1063.rest = VNULL;
  _V10_Dpair_D1062.first = _V0_Mk;
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = _V0bindings;
  _V10_Dpair_D1061.rest = VNULL;
  _V10_Dpair_D1060.first = _V0vanity;
  _V10_Dpair_D1060.rest = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1059.first = _V0compiler;
  _V10_Dpair_D1059.rest = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1058.first = _V0hygienic;
  _V10_Dpair_D1058.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1057.first = _V0types;
  _V10_Dpair_D1057.rest = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1056.first = _V0make__scope__impl;
  _V10_Dpair_D1056.rest = VNULL;
  _V10_Dpair_D1055.first = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1055.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1054.first = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1054.rest = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1053.first = _V0vanity;
  _V10_Dpair_D1053.rest = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1052.first = _V0compiler;
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = _V0hygienic;
  _V10_Dpair_D1051.rest = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1050.first = _V0types;
  _V10_Dpair_D1050.rest = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1049.first = _V0get__scope__bindings;
  _V10_Dpair_D1049.rest = VNULL;
  _V10_Dpair_D1048.first = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1048.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1047.first = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1047.rest = VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR);
  _V10_Dpair_D1046.first = _V0vanity;
  _V10_Dpair_D1046.rest = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1045.first = _V0compiler;
  _V10_Dpair_D1045.rest = VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR);
  _V10_Dpair_D1044.first = _V0hygienic;
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = _V0types;
  _V10_Dpair_D1043.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1042.first = _V0set__scope__bindings_B;
  _V10_Dpair_D1042.rest = VNULL;
  _V10_Dpair_D1041.first = VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR);
  _V10_Dpair_D1041.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1040.first = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1040.rest = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D1039.first = _V0vanity;
  _V10_Dpair_D1039.rest = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1038.first = _V0compiler;
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR);
  _V10_Dpair_D1037.first = _V0hygienic;
  _V10_Dpair_D1037.rest = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1036.first = _V0types;
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = _V0make__scope;
  _V10_Dpair_D1035.rest = VNULL;
  _V10_Dpair_D1034.first = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1033.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D1032.first = _V0vanity;
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = _V0compiler;
  _V10_Dpair_D1031.rest = VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR);
  _V10_Dpair_D1030.first = _V0hygienic;
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = _V0types;
  _V10_Dpair_D1029.rest = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1028.first = _V10_Dsyntax_Q_D4;
  _V10_Dpair_D1028.rest = VNULL;
  _V10_Dpair_D1027.first = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1027.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1026.first = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1026.rest = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VNULL;
  _V10_Dpair_D1024.first = _V0_Mk;
  _V10_Dpair_D1024.rest = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1023.first = _V0data;
  _V10_Dpair_D1023.rest = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1022.first = _V0flips;
  _V10_Dpair_D1022.rest = VNULL;
  _V10_Dpair_D1021.first = _V0vanity;
  _V10_Dpair_D1021.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1020.first = _V0compiler;
  _V10_Dpair_D1020.rest = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1019.first = _V0hygienic;
  _V10_Dpair_D1019.rest = VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR);
  _V10_Dpair_D1018.first = _V0types;
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = _V0make__syntax;
  _V10_Dpair_D1017.rest = VNULL;
  _V10_Dpair_D1016.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = _V0vanity;
  _V10_Dpair_D1014.rest = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1013.first = _V0compiler;
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = _V0hygienic;
  _V10_Dpair_D1012.rest = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1011.first = _V0types;
  _V10_Dpair_D1011.rest = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1010.first = _V0get__syntax__data__impl;
  _V10_Dpair_D1010.rest = VNULL;
  _V10_Dpair_D1009.first = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1009.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D1008.first = VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR);
  _V10_Dpair_D1008.rest = VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR);
  _V10_Dpair_D1007.first = _V0vanity;
  _V10_Dpair_D1007.rest = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1006.first = _V0compiler;
  _V10_Dpair_D1006.rest = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1005.first = _V0hygienic;
  _V10_Dpair_D1005.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1004.first = _V0types;
  _V10_Dpair_D1004.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1003.first = _V0set__syntax__data_B;
  _V10_Dpair_D1003.rest = VNULL;
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VNULL;
  _V10_Dpair_D1000.first = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D1000.rest = VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR);
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D998.rest = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D997.first = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D997.rest = VNULL;
  _V10_Dpair_D996.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D996.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D995.first = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D995.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D994.first = VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR);
  _V10_Dpair_D994.rest = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D993.first = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D993.rest = VNULL;
  _V10_Dpair_D992.first = _V0_Mk;
  _V10_Dpair_D992.rest = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D991.first = _V0rec;
  _V10_Dpair_D991.rest = VNULL;
  _V10_Dpair_D990.first = _V0vanity;
  _V10_Dpair_D990.rest = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D989.first = _V0compiler;
  _V10_Dpair_D989.rest = VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR);
  _V10_Dpair_D988.first = _V0hygienic;
  _V10_Dpair_D988.rest = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D987.first = _V0types;
  _V10_Dpair_D987.rest = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D986.first = _V0get__syntax__scopes;
  _V10_Dpair_D986.rest = VNULL;
  _V10_Dpair_D984.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D984.rest = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D983.first = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D983.rest = VNULL;
  _V10_Dpair_D982.first = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D982.rest = VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR);
  _V10_Dpair_D981.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D981.rest = VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR);
  _V10_Dpair_D980.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D980.rest = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D979.first = VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR);
  _V10_Dpair_D979.rest = VNULL;
  _V10_Dpair_D978.first = VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR);
  _V10_Dpair_D978.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D977.first = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D977.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D976.first = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D976.rest = VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR);
  _V10_Dpair_D975.first = VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR);
  _V10_Dpair_D975.rest = VNULL;
  _V10_Dpair_D974.first = _V0_Mk;
  _V10_Dpair_D974.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D973.first = _V0rec;
  _V10_Dpair_D973.rest = VEncodePointer(&_V10_Dpair_D601, VPOINTER_PAIR);
  _V10_Dpair_D972.first = _V0vanity;
  _V10_Dpair_D972.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D971.first = _V0compiler;
  _V10_Dpair_D971.rest = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D970.first = _V0hygienic;
  _V10_Dpair_D970.rest = VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR);
  _V10_Dpair_D969.first = _V0types;
  _V10_Dpair_D969.rest = VEncodePointer(&_V10_Dpair_D968, VPOINTER_PAIR);
  _V10_Dpair_D968.first = _V0set__syntax__scopes_B;
  _V10_Dpair_D968.rest = VNULL;
  _V10_Dpair_D967.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D967.rest = VEncodePointer(&_V10_Dpair_D611, VPOINTER_PAIR);
  _V10_Dpair_D966.first = VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR);
  _V10_Dpair_D966.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D965.first = VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR);
  _V10_Dpair_D965.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D964.first = _V0vanity;
  _V10_Dpair_D964.rest = VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR);
  _V10_Dpair_D963.first = _V0compiler;
  _V10_Dpair_D963.rest = VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR);
  _V10_Dpair_D962.first = _V0hygienic;
  _V10_Dpair_D962.rest = VEncodePointer(&_V10_Dpair_D961, VPOINTER_PAIR);
  _V10_Dpair_D961.first = _V0types;
  _V10_Dpair_D961.rest = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D960.first = _V0identifier_Q;
  _V10_Dpair_D960.rest = VNULL;
  _V10_Dpair_D959.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D959.rest = VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR);
  _V10_Dpair_D958.first = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D958.rest = VNULL;
  _V10_Dpair_D957.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D957.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D956.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D956.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D955.first = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D955.rest = VNULL;
  _V10_Dpair_D954.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D954.rest = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D953.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D953.rest = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D952.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D952.rest = VEncodePointer(&_V10_Dpair_D951, VPOINTER_PAIR);
  _V10_Dpair_D951.first = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D951.rest = VNULL;
  _V10_Dpair_D950.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D950.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D949.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D949.rest = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D948.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D948.rest = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D947.first = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D947.rest = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D946.first = VEncodePointer(&_V10_Dpair_D945, VPOINTER_PAIR);
  _V10_Dpair_D946.rest = VNULL;
  _V10_Dpair_D945.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D945.rest = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V10_Dpair_D944.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D944.rest = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D943.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D943.rest = VNULL;
  _V10_Dpair_D942.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D942.rest = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D941.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D941.rest = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D940.first = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D940.rest = VNULL;
  _V10_Dpair_D939.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D939.rest = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D938.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D938.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D937.first = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D937.rest = VNULL;
  _V10_Dpair_D936.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D936.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D935.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D935.rest = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D934.first = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D934.rest = VNULL;
  _V10_Dpair_D933.first = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D933.rest = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D932.first = VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR);
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR);
  _V10_Dpair_D931.first = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D931.rest = VNULL;
  _V10_Dpair_D930.first = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D930.rest = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D929.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D929.rest = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D928.first = _V0data;
  _V10_Dpair_D928.rest = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D927.first = _V0flip;
  _V10_Dpair_D927.rest = VNULL;
  _V10_Dpair_D926.first = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D926.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D925.first = _V0vanity;
  _V10_Dpair_D925.rest = VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR);
  _V10_Dpair_D924.first = _V0compiler;
  _V10_Dpair_D924.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D923.first = _V0hygienic;
  _V10_Dpair_D923.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D922.first = _V0types;
  _V10_Dpair_D922.rest = VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR);
  _V10_Dpair_D921.first = _V0propogate__flips;
  _V10_Dpair_D921.rest = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D920.first = _V10_Dflip_D114;
  _V10_Dpair_D920.rest = VNULL;
  _V10_Dpair_D919.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D919.rest = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D918.first = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D918.rest = VNULL;
  _V10_Dpair_D917.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D917.rest = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D916.first = VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR);
  _V10_Dpair_D916.rest = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D915.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D915.rest = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D914.first = _V0scopes;
  _V10_Dpair_D914.rest = VNULL;
  _V10_Dpair_D913.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D913.rest = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D912.first = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D912.rest = VNULL;
  _V10_Dpair_D911.first = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D911.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D910.first = VEncodePointer(&_V10_Dpair_D909, VPOINTER_PAIR);
  _V10_Dpair_D910.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D909.first = VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR);
  _V10_Dpair_D909.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D908.first = _V0vanity;
  _V10_Dpair_D908.rest = VEncodePointer(&_V10_Dpair_D907, VPOINTER_PAIR);
  _V10_Dpair_D907.first = _V0compiler;
  _V10_Dpair_D907.rest = VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR);
  _V10_Dpair_D906.first = _V0hygienic;
  _V10_Dpair_D906.rest = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D905.first = _V0types;
  _V10_Dpair_D905.rest = VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR);
  _V10_Dpair_D904.first = _V0propogate__flips;
  _V10_Dpair_D904.rest = VNULL;
  _V10_Dpair_D903.first = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D903.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D902.first = VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR);
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D901.first = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D901.rest = VNULL;
  _V10_Dpair_D900.first = _V0_Mk;
  _V10_Dpair_D900.rest = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D899.first = _V0stx;
  _V10_Dpair_D899.rest = VNULL;
  _V10_Dpair_D898.first = _V0vanity;
  _V10_Dpair_D898.rest = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D897.first = _V0compiler;
  _V10_Dpair_D897.rest = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D896.first = _V0hygienic;
  _V10_Dpair_D896.rest = VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR);
  _V10_Dpair_D895.first = _V0types;
  _V10_Dpair_D895.rest = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D894.first = _V0get__syntax__data;
  _V10_Dpair_D894.rest = VNULL;
  _V10_Dpair_D893.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D892.rest = VNULL;
  _V10_Dpair_D891.first = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D891.rest = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D890.first = VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR);
  _V10_Dpair_D890.rest = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D889.first = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D889.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D888.first = _V0_Mx;
  _V10_Dpair_D888.rest = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D887.first = _V0_Mx;
  _V10_Dpair_D887.rest = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D886.first = VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR);
  _V10_Dpair_D886.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D885.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D885.rest = VNULL;
  _V10_Dpair_D884.first = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D884.rest = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D883.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D883.rest = VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR);
  _V10_Dpair_D882.first = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D882.rest = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D881.first = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D881.rest = VNULL;
  _V10_Dpair_D880.first = _V0_Mk;
  _V10_Dpair_D880.rest = VEncodePointer(&_V10_Dpair_D879, VPOINTER_PAIR);
  _V10_Dpair_D879.first = _V0set;
  _V10_Dpair_D879.rest = VNULL;
  _V10_Dpair_D878.first = _V0vanity;
  _V10_Dpair_D878.rest = VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR);
  _V10_Dpair_D877.first = _V0compiler;
  _V10_Dpair_D877.rest = VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR);
  _V10_Dpair_D876.first = _V0hygienic;
  _V10_Dpair_D876.rest = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D875.first = _V0types;
  _V10_Dpair_D875.rest = VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR);
  _V10_Dpair_D874.first = _V0flip__scope__set;
  _V10_Dpair_D874.rest = VEncodePointer(&_V10_Dpair_D873, VPOINTER_PAIR);
  _V10_Dpair_D873.first = _V10_Dloop_D108;
  _V10_Dpair_D873.rest = VNULL;
  _V10_Dpair_D872.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D872.rest = VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR);
  _V10_Dpair_D871.first = VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR);
  _V10_Dpair_D871.rest = VNULL;
  _V10_Dpair_D870.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D870.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D869.first = VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR);
  _V10_Dpair_D869.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D868.first = VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR);
  _V10_Dpair_D868.rest = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D867.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D867.rest = VNULL;
  _V10_Dpair_D866.first = _V0_Mk;
  _V10_Dpair_D866.rest = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D865.first = _V0set;
  _V10_Dpair_D865.rest = VEncodePointer(&_V10_Dpair_D601, VPOINTER_PAIR);
  _V10_Dpair_D864.first = _V0vanity;
  _V10_Dpair_D864.rest = VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR);
  _V10_Dpair_D863.first = _V0compiler;
  _V10_Dpair_D863.rest = VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR);
  _V10_Dpair_D862.first = _V0hygienic;
  _V10_Dpair_D862.rest = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D861.first = _V0types;
  _V10_Dpair_D861.rest = VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR);
  _V10_Dpair_D860.first = _V0flip__scope__set;
  _V10_Dpair_D860.rest = VNULL;
  _V10_Dpair_D859.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D859.rest = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D858.first = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D858.rest = VNULL;
  _V10_Dpair_D857.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D857.rest = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D856.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D856.rest = VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR);
  _V10_Dpair_D855.first = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D855.rest = VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR);
  _V10_Dpair_D854.first = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D854.rest = VNULL;
  _V10_Dpair_D853.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D853.rest = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D852.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D852.rest = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D851.first = VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR);
  _V10_Dpair_D851.rest = VNULL;
  _V10_Dpair_D850.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D850.rest = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D849.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D849.rest = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D848.first = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D848.rest = VNULL;
  _V10_Dpair_D847.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D847.rest = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D846.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D846.rest = VEncodePointer(&_V10_Dpair_D845, VPOINTER_PAIR);
  _V10_Dpair_D845.first = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D845.rest = VNULL;
  _V10_Dpair_D844.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D844.rest = VEncodePointer(&_V10_Dpair_D841, VPOINTER_PAIR);
  _V10_Dpair_D843.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D843.rest = VEncodePointer(&_V10_Dpair_D842, VPOINTER_PAIR);
  _V10_Dpair_D842.first = VEncodePointer(&_V10_Dpair_D841, VPOINTER_PAIR);
  _V10_Dpair_D842.rest = VNULL;
  _V10_Dpair_D841.first = VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR);
  _V10_Dpair_D841.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D840.first = VEncodePointer(&_V10_Dpair_D839, VPOINTER_PAIR);
  _V10_Dpair_D840.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D839.first = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D839.rest = VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR);
  _V10_Dpair_D838.first = VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR);
  _V10_Dpair_D838.rest = VNULL;
  _V10_Dpair_D837.first = _V0_Mk;
  _V10_Dpair_D837.rest = VEncodePointer(&_V10_Dpair_D836, VPOINTER_PAIR);
  _V10_Dpair_D836.first = _V0stx;
  _V10_Dpair_D836.rest = VEncodePointer(&_V10_Dpair_D601, VPOINTER_PAIR);
  _V10_Dpair_D835.first = _V0vanity;
  _V10_Dpair_D835.rest = VEncodePointer(&_V10_Dpair_D834, VPOINTER_PAIR);
  _V10_Dpair_D834.first = _V0compiler;
  _V10_Dpair_D834.rest = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D833.first = _V0hygienic;
  _V10_Dpair_D833.rest = VEncodePointer(&_V10_Dpair_D832, VPOINTER_PAIR);
  _V10_Dpair_D832.first = _V0types;
  _V10_Dpair_D832.rest = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V10_Dpair_D831.first = _V0lazy__flip__scope;
  _V10_Dpair_D831.rest = VNULL;
  _V10_Dpair_D830.first = VEncodePointer(&_V10_Dpair_D827, VPOINTER_PAIR);
  _V10_Dpair_D830.rest = VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR);
  _V10_Dpair_D829.first = VEncodePointer(&_V10_Dpair_D828, VPOINTER_PAIR);
  _V10_Dpair_D829.rest = VNULL;
  _V10_Dpair_D828.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D828.rest = VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR);
  _V10_Dpair_D827.first = VEncodeBool(false);
  _V10_Dpair_D827.rest = VEncodePointer(&_V10_Dpair_D826, VPOINTER_PAIR);
  _V10_Dpair_D826.first = VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR);
  _V10_Dpair_D826.rest = VNULL;
  _V10_Dpair_D825.first = _V0_Mk;
  _V10_Dpair_D825.rest = VEncodePointer(&_V10_Dpair_D824, VPOINTER_PAIR);
  _V10_Dpair_D824.first = _V0e;
  _V10_Dpair_D824.rest = VNULL;
  _V10_Dpair_D823.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D823.rest = VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR);
  _V10_Dpair_D822.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D822.rest = VEncodePointer(&_V10_Dpair_D821, VPOINTER_PAIR);
  _V10_Dpair_D821.first = VEncodePointer(&_V10_Dpair_D820, VPOINTER_PAIR);
  _V10_Dpair_D821.rest = VNULL;
  _V10_Dpair_D820.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D820.rest = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D819.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D819.rest = VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR);
  _V10_Dpair_D818.first = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D818.rest = VNULL;
  _V10_Dpair_D817.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D817.rest = VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR);
  _V10_Dpair_D816.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D816.rest = VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR);
  _V10_Dpair_D815.first = VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR);
  _V10_Dpair_D815.rest = VNULL;
  _V10_Dpair_D814.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D814.rest = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D813.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D813.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D812.first = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D812.rest = VNULL;
  _V10_Dpair_D811.first = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D811.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D810.first = VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR);
  _V10_Dpair_D810.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D809.first = VEncodePointer(&_V10_Dpair_D804, VPOINTER_PAIR);
  _V10_Dpair_D809.rest = VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR);
  _V10_Dpair_D808.first = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D808.rest = VNULL;
  _V10_Dpair_D807.first = _V0_Mk;
  _V10_Dpair_D807.rest = VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR);
  _V10_Dpair_D806.first = _V0v;
  _V10_Dpair_D806.rest = VEncodePointer(&_V10_Dpair_D805, VPOINTER_PAIR);
  _V10_Dpair_D805.first = _V0sc;
  _V10_Dpair_D805.rest = VNULL;
  _V10_Dpair_D804.first = _V0vanity;
  _V10_Dpair_D804.rest = VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR);
  _V10_Dpair_D803.first = _V0compiler;
  _V10_Dpair_D803.rest = VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR);
  _V10_Dpair_D802.first = _V0hygienic;
  _V10_Dpair_D802.rest = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D801.first = _V0types;
  _V10_Dpair_D801.rest = VEncodePointer(&_V10_Dpair_D800, VPOINTER_PAIR);
  _V10_Dpair_D800.first = _V0eager__flip__scope;
  _V10_Dpair_D800.rest = VNULL;
  _V10_Dpair_D799.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D799.rest = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D798.first = VEncodePointer(&_V10_Dpair_D609, VPOINTER_PAIR);
  _V10_Dpair_D798.rest = VNULL;
  _V10_Dpair_D797.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D797.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D796.first = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D796.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D795.first = _V0vanity;
  _V10_Dpair_D795.rest = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D794.first = _V0compiler;
  _V10_Dpair_D794.rest = VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR);
  _V10_Dpair_D793.first = _V0hygienic;
  _V10_Dpair_D793.rest = VEncodePointer(&_V10_Dpair_D792, VPOINTER_PAIR);
  _V10_Dpair_D792.first = _V0types;
  _V10_Dpair_D792.rest = VEncodePointer(&_V10_Dpair_D791, VPOINTER_PAIR);
  _V10_Dpair_D791.first = _V0syntax__unpack;
  _V10_Dpair_D791.rest = VNULL;
  _V10_Dpair_D790.first = VEncodePointer(&_V10_Dpair_D789, VPOINTER_PAIR);
  _V10_Dpair_D790.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D789.first = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D789.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D788.first = _V0vanity;
  _V10_Dpair_D788.rest = VEncodePointer(&_V10_Dpair_D787, VPOINTER_PAIR);
  _V10_Dpair_D787.first = _V0compiler;
  _V10_Dpair_D787.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D786.first = _V0hygienic;
  _V10_Dpair_D786.rest = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D785.first = _V0types;
  _V10_Dpair_D785.rest = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D784.first = _V0syntax__null_Q;
  _V10_Dpair_D784.rest = VNULL;
  _V10_Dpair_D783.first = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D783.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D782.first = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D782.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D781.first = _V0vanity;
  _V10_Dpair_D781.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D780.first = _V0compiler;
  _V10_Dpair_D780.rest = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D779.first = _V0hygienic;
  _V10_Dpair_D779.rest = VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR);
  _V10_Dpair_D778.first = _V0types;
  _V10_Dpair_D778.rest = VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR);
  _V10_Dpair_D777.first = _V0syntax__pair_Q;
  _V10_Dpair_D777.rest = VNULL;
  _V10_Dpair_D776.first = VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR);
  _V10_Dpair_D776.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D775.first = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D775.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D774.first = _V0vanity;
  _V10_Dpair_D774.rest = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D773.first = _V0compiler;
  _V10_Dpair_D773.rest = VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR);
  _V10_Dpair_D772.first = _V0hygienic;
  _V10_Dpair_D772.rest = VEncodePointer(&_V10_Dpair_D771, VPOINTER_PAIR);
  _V10_Dpair_D771.first = _V0types;
  _V10_Dpair_D771.rest = VEncodePointer(&_V10_Dpair_D770, VPOINTER_PAIR);
  _V10_Dpair_D770.first = _V0syntax__car;
  _V10_Dpair_D770.rest = VNULL;
  _V10_Dpair_D769.first = VEncodePointer(&_V10_Dpair_D768, VPOINTER_PAIR);
  _V10_Dpair_D769.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D768.first = VEncodePointer(&_V10_Dpair_D767, VPOINTER_PAIR);
  _V10_Dpair_D768.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D767.first = _V0vanity;
  _V10_Dpair_D767.rest = VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR);
  _V10_Dpair_D766.first = _V0compiler;
  _V10_Dpair_D766.rest = VEncodePointer(&_V10_Dpair_D765, VPOINTER_PAIR);
  _V10_Dpair_D765.first = _V0hygienic;
  _V10_Dpair_D765.rest = VEncodePointer(&_V10_Dpair_D764, VPOINTER_PAIR);
  _V10_Dpair_D764.first = _V0types;
  _V10_Dpair_D764.rest = VEncodePointer(&_V10_Dpair_D763, VPOINTER_PAIR);
  _V10_Dpair_D763.first = _V0syntax__cdr;
  _V10_Dpair_D763.rest = VNULL;
  _V10_Dpair_D762.first = VEncodePointer(&_V10_Dpair_D761, VPOINTER_PAIR);
  _V10_Dpair_D762.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D761.first = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D761.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D760.first = _V0vanity;
  _V10_Dpair_D760.rest = VEncodePointer(&_V10_Dpair_D759, VPOINTER_PAIR);
  _V10_Dpair_D759.first = _V0compiler;
  _V10_Dpair_D759.rest = VEncodePointer(&_V10_Dpair_D758, VPOINTER_PAIR);
  _V10_Dpair_D758.first = _V0hygienic;
  _V10_Dpair_D758.rest = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D757.first = _V0types;
  _V10_Dpair_D757.rest = VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR);
  _V10_Dpair_D756.first = _V0syntax__caar;
  _V10_Dpair_D756.rest = VNULL;
  _V10_Dpair_D755.first = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D755.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D754.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D754.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D753.first = _V0vanity;
  _V10_Dpair_D753.rest = VEncodePointer(&_V10_Dpair_D752, VPOINTER_PAIR);
  _V10_Dpair_D752.first = _V0compiler;
  _V10_Dpair_D752.rest = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D751.first = _V0hygienic;
  _V10_Dpair_D751.rest = VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR);
  _V10_Dpair_D750.first = _V0types;
  _V10_Dpair_D750.rest = VEncodePointer(&_V10_Dpair_D749, VPOINTER_PAIR);
  _V10_Dpair_D749.first = _V0syntax__cadr;
  _V10_Dpair_D749.rest = VNULL;
  _V10_Dpair_D748.first = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D748.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D747.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D747.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D746.first = _V0vanity;
  _V10_Dpair_D746.rest = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D745.first = _V0compiler;
  _V10_Dpair_D745.rest = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D744.first = _V0hygienic;
  _V10_Dpair_D744.rest = VEncodePointer(&_V10_Dpair_D743, VPOINTER_PAIR);
  _V10_Dpair_D743.first = _V0types;
  _V10_Dpair_D743.rest = VEncodePointer(&_V10_Dpair_D742, VPOINTER_PAIR);
  _V10_Dpair_D742.first = _V0syntax__cdar;
  _V10_Dpair_D742.rest = VNULL;
  _V10_Dpair_D741.first = VEncodePointer(&_V10_Dpair_D740, VPOINTER_PAIR);
  _V10_Dpair_D741.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D740.first = VEncodePointer(&_V10_Dpair_D739, VPOINTER_PAIR);
  _V10_Dpair_D740.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D739.first = _V0vanity;
  _V10_Dpair_D739.rest = VEncodePointer(&_V10_Dpair_D738, VPOINTER_PAIR);
  _V10_Dpair_D738.first = _V0compiler;
  _V10_Dpair_D738.rest = VEncodePointer(&_V10_Dpair_D737, VPOINTER_PAIR);
  _V10_Dpair_D737.first = _V0hygienic;
  _V10_Dpair_D737.rest = VEncodePointer(&_V10_Dpair_D736, VPOINTER_PAIR);
  _V10_Dpair_D736.first = _V0types;
  _V10_Dpair_D736.rest = VEncodePointer(&_V10_Dpair_D735, VPOINTER_PAIR);
  _V10_Dpair_D735.first = _V0syntax__cddr;
  _V10_Dpair_D735.rest = VNULL;
  _V10_Dpair_D734.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D734.rest = VEncodePointer(&_V10_Dpair_D733, VPOINTER_PAIR);
  _V10_Dpair_D733.first = VEncodePointer(&_V10_Dpair_D732, VPOINTER_PAIR);
  _V10_Dpair_D733.rest = VNULL;
  _V10_Dpair_D732.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D732.rest = VEncodePointer(&_V10_Dpair_D729, VPOINTER_PAIR);
  _V10_Dpair_D731.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D731.rest = VEncodePointer(&_V10_Dpair_D730, VPOINTER_PAIR);
  _V10_Dpair_D730.first = VEncodePointer(&_V10_Dpair_D729, VPOINTER_PAIR);
  _V10_Dpair_D730.rest = VNULL;
  _V10_Dpair_D729.first = VEncodePointer(&_V10_Dpair_D725, VPOINTER_PAIR);
  _V10_Dpair_D729.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D728.first = VEncodePointer(&_V10_Dpair_D727, VPOINTER_PAIR);
  _V10_Dpair_D728.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D727.first = VEncodePointer(&_V10_Dpair_D723, VPOINTER_PAIR);
  _V10_Dpair_D727.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D726.first = VEncodePointer(&_V10_Dpair_D725, VPOINTER_PAIR);
  _V10_Dpair_D726.rest = VNULL;
  _V10_Dpair_D725.first = _V0_Mk;
  _V10_Dpair_D725.rest = VEncodePointer(&_V10_Dpair_D724, VPOINTER_PAIR);
  _V10_Dpair_D724.first = _V0pair;
  _V10_Dpair_D724.rest = VNULL;
  _V10_Dpair_D723.first = _V0vanity;
  _V10_Dpair_D723.rest = VEncodePointer(&_V10_Dpair_D722, VPOINTER_PAIR);
  _V10_Dpair_D722.first = _V0compiler;
  _V10_Dpair_D722.rest = VEncodePointer(&_V10_Dpair_D721, VPOINTER_PAIR);
  _V10_Dpair_D721.first = _V0hygienic;
  _V10_Dpair_D721.rest = VEncodePointer(&_V10_Dpair_D720, VPOINTER_PAIR);
  _V10_Dpair_D720.first = _V0types;
  _V10_Dpair_D720.rest = VEncodePointer(&_V10_Dpair_D719, VPOINTER_PAIR);
  _V10_Dpair_D719.first = _V0syntax__caddr;
  _V10_Dpair_D719.rest = VNULL;
  _V10_Dpair_D718.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D718.rest = VEncodePointer(&_V10_Dpair_D717, VPOINTER_PAIR);
  _V10_Dpair_D717.first = VEncodePointer(&_V10_Dpair_D716, VPOINTER_PAIR);
  _V10_Dpair_D717.rest = VNULL;
  _V10_Dpair_D716.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D716.rest = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D715.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D715.rest = VEncodePointer(&_V10_Dpair_D714, VPOINTER_PAIR);
  _V10_Dpair_D714.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D714.rest = VNULL;
  _V10_Dpair_D713.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D713.rest = VEncodePointer(&_V10_Dpair_D668, VPOINTER_PAIR);
  _V10_Dpair_D712.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D712.rest = VEncodePointer(&_V10_Dpair_D660, VPOINTER_PAIR);
  _V10_Dpair_D711.first = VEncodePointer(&_V10_Dpair_D710, VPOINTER_PAIR);
  _V10_Dpair_D711.rest = VEncodePointer(&_V10_Dpair_D653, VPOINTER_PAIR);
  _V10_Dpair_D710.first = _V0vanity;
  _V10_Dpair_D710.rest = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D709.first = _V0compiler;
  _V10_Dpair_D709.rest = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D708.first = _V0hygienic;
  _V10_Dpair_D708.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D707.first = _V0types;
  _V10_Dpair_D707.rest = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D706.first = _V0syntax__map;
  _V10_Dpair_D706.rest = VEncodePointer(&_V10_Dpair_D705, VPOINTER_PAIR);
  _V10_Dpair_D705.first = _V10_Dloop_D89;
  _V10_Dpair_D705.rest = VNULL;
  _V10_Dpair_D704.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D704.rest = VEncodePointer(&_V10_Dpair_D703, VPOINTER_PAIR);
  _V10_Dpair_D703.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D703.rest = VNULL;
  _V10_Dpair_D702.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D702.rest = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D701.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D701.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D700.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D700.rest = VNULL;
  _V10_Dpair_D699.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D699.rest = VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR);
  _V10_Dpair_D698.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D698.rest = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D697.first = VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR);
  _V10_Dpair_D697.rest = VNULL;
  _V10_Dpair_D696.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D696.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D695.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D695.rest = VEncodePointer(&_V10_Dpair_D694, VPOINTER_PAIR);
  _V10_Dpair_D694.first = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D694.rest = VNULL;
  _V10_Dpair_D693.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D693.rest = VEncodePointer(&_V10_Dpair_D690, VPOINTER_PAIR);
  _V10_Dpair_D692.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D692.rest = VEncodePointer(&_V10_Dpair_D691, VPOINTER_PAIR);
  _V10_Dpair_D691.first = VEncodePointer(&_V10_Dpair_D690, VPOINTER_PAIR);
  _V10_Dpair_D691.rest = VNULL;
  _V10_Dpair_D690.first = VEncodePointer(&_V10_Dpair_D684, VPOINTER_PAIR);
  _V10_Dpair_D690.rest = VEncodePointer(&_V10_Dpair_D687, VPOINTER_PAIR);
  _V10_Dpair_D689.first = VEncodePointer(&_V10_Dpair_D686, VPOINTER_PAIR);
  _V10_Dpair_D689.rest = VEncodePointer(&_V10_Dpair_D688, VPOINTER_PAIR);
  _V10_Dpair_D688.first = VEncodePointer(&_V10_Dpair_D687, VPOINTER_PAIR);
  _V10_Dpair_D688.rest = VNULL;
  _V10_Dpair_D687.first = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D687.rest = VEncodePointer(&_V10_Dpair_D630, VPOINTER_PAIR);
  _V10_Dpair_D686.first = VEncodePointer(&_V10_Dpair_D683, VPOINTER_PAIR);
  _V10_Dpair_D686.rest = VEncodePointer(&_V10_Dpair_D685, VPOINTER_PAIR);
  _V10_Dpair_D685.first = VEncodePointer(&_V10_Dpair_D684, VPOINTER_PAIR);
  _V10_Dpair_D685.rest = VNULL;
  _V10_Dpair_D684.first = _V0_Mk;
  _V10_Dpair_D684.rest = VEncodePointer(&_V10_Dpair_D621, VPOINTER_PAIR);
  _V10_Dpair_D683.first = _V0vanity;
  _V10_Dpair_D683.rest = VEncodePointer(&_V10_Dpair_D682, VPOINTER_PAIR);
  _V10_Dpair_D682.first = _V0compiler;
  _V10_Dpair_D682.rest = VEncodePointer(&_V10_Dpair_D681, VPOINTER_PAIR);
  _V10_Dpair_D681.first = _V0hygienic;
  _V10_Dpair_D681.rest = VEncodePointer(&_V10_Dpair_D680, VPOINTER_PAIR);
  _V10_Dpair_D680.first = _V0types;
  _V10_Dpair_D680.rest = VEncodePointer(&_V10_Dpair_D679, VPOINTER_PAIR);
  _V10_Dpair_D679.first = _V0syntax__map;
  _V10_Dpair_D679.rest = VEncodePointer(&_V10_Dpair_D678, VPOINTER_PAIR);
  _V10_Dpair_D678.first = _V10_Dloop_D85;
  _V10_Dpair_D678.rest = VNULL;
  _V10_Dpair_D677.first = VEncodePointer(&_V10_Dpair_D676, VPOINTER_PAIR);
  _V10_Dpair_D677.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D676.first = VEncodePointer(&_V10_Dpair_D675, VPOINTER_PAIR);
  _V10_Dpair_D676.rest = VEncodePointer(&_V10_Dpair_D627, VPOINTER_PAIR);
  _V10_Dpair_D675.first = _V0vanity;
  _V10_Dpair_D675.rest = VEncodePointer(&_V10_Dpair_D674, VPOINTER_PAIR);
  _V10_Dpair_D674.first = _V0compiler;
  _V10_Dpair_D674.rest = VEncodePointer(&_V10_Dpair_D673, VPOINTER_PAIR);
  _V10_Dpair_D673.first = _V0hygienic;
  _V10_Dpair_D673.rest = VEncodePointer(&_V10_Dpair_D672, VPOINTER_PAIR);
  _V10_Dpair_D672.first = _V0types;
  _V10_Dpair_D672.rest = VEncodePointer(&_V10_Dpair_D671, VPOINTER_PAIR);
  _V10_Dpair_D671.first = _V0syntax__map;
  _V10_Dpair_D671.rest = VNULL;
  _V10_Dpair_D670.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D670.rest = VEncodePointer(&_V10_Dpair_D669, VPOINTER_PAIR);
  _V10_Dpair_D669.first = VEncodePointer(&_V10_Dpair_D668, VPOINTER_PAIR);
  _V10_Dpair_D669.rest = VNULL;
  _V10_Dpair_D668.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D668.rest = VEncodePointer(&_V10_Dpair_D665, VPOINTER_PAIR);
  _V10_Dpair_D667.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D667.rest = VEncodePointer(&_V10_Dpair_D666, VPOINTER_PAIR);
  _V10_Dpair_D666.first = VEncodePointer(&_V10_Dpair_D665, VPOINTER_PAIR);
  _V10_Dpair_D666.rest = VNULL;
  _V10_Dpair_D665.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D665.rest = VEncodePointer(&_V10_Dpair_D662, VPOINTER_PAIR);
  _V10_Dpair_D664.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D664.rest = VEncodePointer(&_V10_Dpair_D663, VPOINTER_PAIR);
  _V10_Dpair_D663.first = VEncodePointer(&_V10_Dpair_D662, VPOINTER_PAIR);
  _V10_Dpair_D663.rest = VNULL;
  _V10_Dpair_D662.first = VEncodePointer(&_V10_Dpair_D652, VPOINTER_PAIR);
  _V10_Dpair_D662.rest = VEncodePointer(&_V10_Dpair_D659, VPOINTER_PAIR);
  _V10_Dpair_D661.first = VEncodePointer(&_V10_Dpair_D654, VPOINTER_PAIR);
  _V10_Dpair_D661.rest = VEncodePointer(&_V10_Dpair_D660, VPOINTER_PAIR);
  _V10_Dpair_D660.first = VEncodePointer(&_V10_Dpair_D659, VPOINTER_PAIR);
  _V10_Dpair_D660.rest = VNULL;
  _V10_Dpair_D659.first = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D659.rest = VEncodePointer(&_V10_Dpair_D658, VPOINTER_PAIR);
  _V10_Dpair_D658.first = VEncodePointer(&_V10_Dpair_D657, VPOINTER_PAIR);
  _V10_Dpair_D658.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D657.first = _V0_Mk;
  _V10_Dpair_D657.rest = VEncodePointer(&_V10_Dpair_D656, VPOINTER_PAIR);
  _V10_Dpair_D656.first = _V0f;
  _V10_Dpair_D656.rest = VEncodePointer(&_V10_Dpair_D651, VPOINTER_PAIR);
  _V10_Dpair_D655.first = _V0loop;
  _V10_Dpair_D655.rest = VNULL;
  _V10_Dpair_D654.first = VEncodePointer(&_V10_Dpair_D650, VPOINTER_PAIR);
  _V10_Dpair_D654.rest = VEncodePointer(&_V10_Dpair_D653, VPOINTER_PAIR);
  _V10_Dpair_D653.first = VEncodePointer(&_V10_Dpair_D652, VPOINTER_PAIR);
  _V10_Dpair_D653.rest = VNULL;
  _V10_Dpair_D652.first = _V0_Mk;
  _V10_Dpair_D652.rest = VEncodePointer(&_V10_Dpair_D651, VPOINTER_PAIR);
  _V10_Dpair_D651.first = _V0xss;
  _V10_Dpair_D651.rest = VNULL;
  _V10_Dpair_D650.first = _V0vanity;
  _V10_Dpair_D650.rest = VEncodePointer(&_V10_Dpair_D649, VPOINTER_PAIR);
  _V10_Dpair_D649.first = _V0compiler;
  _V10_Dpair_D649.rest = VEncodePointer(&_V10_Dpair_D648, VPOINTER_PAIR);
  _V10_Dpair_D648.first = _V0hygienic;
  _V10_Dpair_D648.rest = VEncodePointer(&_V10_Dpair_D647, VPOINTER_PAIR);
  _V10_Dpair_D647.first = _V0types;
  _V10_Dpair_D647.rest = VEncodePointer(&_V10_Dpair_D646, VPOINTER_PAIR);
  _V10_Dpair_D646.first = _V0syntax__for__each;
  _V10_Dpair_D646.rest = VEncodePointer(&_V10_Dpair_D645, VPOINTER_PAIR);
  _V10_Dpair_D645.first = _V10_Dloop_D81;
  _V10_Dpair_D645.rest = VNULL;
  _V10_Dpair_D644.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D644.rest = VEncodePointer(&_V10_Dpair_D643, VPOINTER_PAIR);
  _V10_Dpair_D643.first = VEncodePointer(&_V10_Dpair_D642, VPOINTER_PAIR);
  _V10_Dpair_D643.rest = VNULL;
  _V10_Dpair_D642.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D642.rest = VEncodePointer(&_V10_Dpair_D633, VPOINTER_PAIR);
  _V10_Dpair_D641.first = VEncodePointer(&_V10_Dpair_D637, VPOINTER_PAIR);
  _V10_Dpair_D641.rest = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D640.first = VEncodePointer(&_V10_Dpair_D639, VPOINTER_PAIR);
  _V10_Dpair_D640.rest = VNULL;
  _V10_Dpair_D639.first = _V0unquote;
  _V10_Dpair_D639.rest = VEncodePointer(&_V10_Dpair_D638, VPOINTER_PAIR);
  _V10_Dpair_D638.first = _V0unmangled__env;
  _V10_Dpair_D638.rest = VNULL;
  _V10_Dpair_D637.first = VEncodeBool(false);
  _V10_Dpair_D637.rest = VEncodePointer(&_V10_Dpair_D636, VPOINTER_PAIR);
  _V10_Dpair_D636.first = _V0_U;
  _V10_Dpair_D636.rest = VNULL;
  _V10_Dpair_D635.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D635.rest = VEncodePointer(&_V10_Dpair_D634, VPOINTER_PAIR);
  _V10_Dpair_D634.first = VEncodePointer(&_V10_Dpair_D633, VPOINTER_PAIR);
  _V10_Dpair_D634.rest = VNULL;
  _V10_Dpair_D633.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D633.rest = VEncodePointer(&_V10_Dpair_D630, VPOINTER_PAIR);
  _V10_Dpair_D632.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D632.rest = VEncodePointer(&_V10_Dpair_D631, VPOINTER_PAIR);
  _V10_Dpair_D631.first = VEncodePointer(&_V10_Dpair_D630, VPOINTER_PAIR);
  _V10_Dpair_D631.rest = VNULL;
  _V10_Dpair_D630.first = VEncodePointer(&_V10_Dpair_D623, VPOINTER_PAIR);
  _V10_Dpair_D630.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D629.first = VEncodePointer(&_V10_Dpair_D628, VPOINTER_PAIR);
  _V10_Dpair_D629.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D628.first = VEncodePointer(&_V10_Dpair_D620, VPOINTER_PAIR);
  _V10_Dpair_D628.rest = VEncodePointer(&_V10_Dpair_D627, VPOINTER_PAIR);
  _V10_Dpair_D627.first = VEncodePointer(&_V10_Dpair_D623, VPOINTER_PAIR);
  _V10_Dpair_D627.rest = VEncodePointer(&_V10_Dpair_D626, VPOINTER_PAIR);
  _V10_Dpair_D626.first = VEncodePointer(&_V10_Dpair_D625, VPOINTER_PAIR);
  _V10_Dpair_D626.rest = VNULL;
  _V10_Dpair_D625.first = _V0_Mk;
  _V10_Dpair_D625.rest = VEncodePointer(&_V10_Dpair_D624, VPOINTER_PAIR);
  _V10_Dpair_D624.first = _V0f;
  _V10_Dpair_D624.rest = _V0xss;
  _V10_Dpair_D623.first = _V0_Mk;
  _V10_Dpair_D623.rest = VEncodePointer(&_V10_Dpair_D622, VPOINTER_PAIR);
  _V10_Dpair_D622.first = _V0f;
  _V10_Dpair_D622.rest = VEncodePointer(&_V10_Dpair_D621, VPOINTER_PAIR);
  _V10_Dpair_D621.first = _V0xs;
  _V10_Dpair_D621.rest = VNULL;
  _V10_Dpair_D620.first = _V0vanity;
  _V10_Dpair_D620.rest = VEncodePointer(&_V10_Dpair_D619, VPOINTER_PAIR);
  _V10_Dpair_D619.first = _V0compiler;
  _V10_Dpair_D619.rest = VEncodePointer(&_V10_Dpair_D618, VPOINTER_PAIR);
  _V10_Dpair_D618.first = _V0hygienic;
  _V10_Dpair_D618.rest = VEncodePointer(&_V10_Dpair_D617, VPOINTER_PAIR);
  _V10_Dpair_D617.first = _V0types;
  _V10_Dpair_D617.rest = VEncodePointer(&_V10_Dpair_D616, VPOINTER_PAIR);
  _V10_Dpair_D616.first = _V0syntax__for__each;
  _V10_Dpair_D616.rest = VNULL;
  _V10_Dpair_D615.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D615.rest = VEncodePointer(&_V10_Dpair_D614, VPOINTER_PAIR);
  _V10_Dpair_D614.first = VEncodePointer(&_V10_Dpair_D613, VPOINTER_PAIR);
  _V10_Dpair_D614.rest = VNULL;
  _V10_Dpair_D613.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D613.rest = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D612.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D612.rest = VEncodePointer(&_V10_Dpair_D611, VPOINTER_PAIR);
  _V10_Dpair_D611.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D611.rest = VNULL;
  _V10_Dpair_D610.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D610.rest = VEncodePointer(&_V10_Dpair_D609, VPOINTER_PAIR);
  _V10_Dpair_D609.first = VEncodePointer(&_V10_Dpair_D602, VPOINTER_PAIR);
  _V10_Dpair_D609.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D608.first = VEncodeBool(false);
  _V10_Dpair_D608.rest = VEncodePointer(&_V10_Dpair_D607, VPOINTER_PAIR);
  _V10_Dpair_D607.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D607.rest = VNULL;
  _V10_Dpair_D606.first = _V0_Mp;
  _V10_Dpair_D606.rest = VNULL;
  _V10_Dpair_D605.first = VEncodePointer(&_V10_Dpair_D604, VPOINTER_PAIR);
  _V10_Dpair_D605.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D604.first = VEncodePointer(&_V10_Dpair_D600, VPOINTER_PAIR);
  _V10_Dpair_D604.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D603.first = VEncodePointer(&_V10_Dpair_D602, VPOINTER_PAIR);
  _V10_Dpair_D603.rest = VNULL;
  _V10_Dpair_D602.first = _V0_Mk;
  _V10_Dpair_D602.rest = VEncodePointer(&_V10_Dpair_D601, VPOINTER_PAIR);
  _V10_Dpair_D601.first = _V0x;
  _V10_Dpair_D601.rest = VNULL;
  _V10_Dpair_D600.first = _V0vanity;
  _V10_Dpair_D600.rest = VEncodePointer(&_V10_Dpair_D599, VPOINTER_PAIR);
  _V10_Dpair_D599.first = _V0compiler;
  _V10_Dpair_D599.rest = VEncodePointer(&_V10_Dpair_D598, VPOINTER_PAIR);
  _V10_Dpair_D598.first = _V0hygienic;
  _V10_Dpair_D598.rest = VEncodePointer(&_V10_Dpair_D597, VPOINTER_PAIR);
  _V10_Dpair_D597.first = _V0types;
  _V10_Dpair_D597.rest = VEncodePointer(&_V10_Dpair_D596, VPOINTER_PAIR);
  _V10_Dpair_D596.first = _V0syntax__vector_Q;
  _V10_Dpair_D596.rest = VNULL;
  _V10_Dpair_D595.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D595.rest = VEncodePointer(&_V10_Dpair_D594, VPOINTER_PAIR);
  _V10_Dpair_D594.first = VEncodePointer(&_V10_Dpair_D593, VPOINTER_PAIR);
  _V10_Dpair_D594.rest = VNULL;
  _V10_Dpair_D593.first = VEncodePointer(&_V10_Dpair_D589, VPOINTER_PAIR);
  _V10_Dpair_D593.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D592.first = VEncodePointer(&_V10_Dpair_D591, VPOINTER_PAIR);
  _V10_Dpair_D592.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D591.first = VEncodePointer(&_V10_Dpair_D586, VPOINTER_PAIR);
  _V10_Dpair_D591.rest = VEncodePointer(&_V10_Dpair_D590, VPOINTER_PAIR);
  _V10_Dpair_D590.first = VEncodePointer(&_V10_Dpair_D589, VPOINTER_PAIR);
  _V10_Dpair_D590.rest = VNULL;
  _V10_Dpair_D589.first = _V0_Mk;
  _V10_Dpair_D589.rest = VEncodePointer(&_V10_Dpair_D588, VPOINTER_PAIR);
  _V10_Dpair_D588.first = _V0v;
  _V10_Dpair_D588.rest = VEncodePointer(&_V10_Dpair_D587, VPOINTER_PAIR);
  _V10_Dpair_D587.first = _V0i;
  _V10_Dpair_D587.rest = VNULL;
  _V10_Dpair_D586.first = _V0vanity;
  _V10_Dpair_D586.rest = VEncodePointer(&_V10_Dpair_D585, VPOINTER_PAIR);
  _V10_Dpair_D585.first = _V0compiler;
  _V10_Dpair_D585.rest = VEncodePointer(&_V10_Dpair_D584, VPOINTER_PAIR);
  _V10_Dpair_D584.first = _V0hygienic;
  _V10_Dpair_D584.rest = VEncodePointer(&_V10_Dpair_D583, VPOINTER_PAIR);
  _V10_Dpair_D583.first = _V0types;
  _V10_Dpair_D583.rest = VEncodePointer(&_V10_Dpair_D582, VPOINTER_PAIR);
  _V10_Dpair_D582.first = _V0syntax__vector__ref;
  _V10_Dpair_D582.rest = VNULL;
  _V10_Dpair_D581.first = VEncodePointer(&_V10_Dpair_D580, VPOINTER_PAIR);
  _V10_Dpair_D581.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D580.first = VEncodePointer(&_V10_Dpair_D579, VPOINTER_PAIR);
  _V10_Dpair_D580.rest = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D579.first = _V0vanity;
  _V10_Dpair_D579.rest = VEncodePointer(&_V10_Dpair_D578, VPOINTER_PAIR);
  _V10_Dpair_D578.first = _V0compiler;
  _V10_Dpair_D578.rest = VEncodePointer(&_V10_Dpair_D577, VPOINTER_PAIR);
  _V10_Dpair_D577.first = _V0hygienic;
  _V10_Dpair_D577.rest = VEncodePointer(&_V10_Dpair_D576, VPOINTER_PAIR);
  _V10_Dpair_D576.first = _V0types;
  _V10_Dpair_D576.rest = VEncodePointer(&_V10_Dpair_D575, VPOINTER_PAIR);
  _V10_Dpair_D575.first = _V0syntax__vector__map;
  _V10_Dpair_D575.rest = VNULL;
  _V10_Dpair_D574.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D574.rest = VEncodePointer(&_V10_Dpair_D573, VPOINTER_PAIR);
  _V10_Dpair_D573.first = VEncodePointer(&_V10_Dpair_D572, VPOINTER_PAIR);
  _V10_Dpair_D573.rest = VNULL;
  _V10_Dpair_D572.first = VEncodePointer(&_V10_Dpair_D571, VPOINTER_PAIR);
  _V10_Dpair_D572.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D571.first = _V0_Mk;
  _V10_Dpair_D571.rest = VEncodePointer(&_V10_Dpair_D570, VPOINTER_PAIR);
  _V10_Dpair_D570.first = _V0f;
  _V10_Dpair_D570.rest = VEncodePointer(&_V10_Dpair_D569, VPOINTER_PAIR);
  _V10_Dpair_D569.first = _V0args;
  _V10_Dpair_D569.rest = VNULL;
  _V10_Dpair_D568.first = VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR);
  _V10_Dpair_D568.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D567.first = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D567.rest = VNULL;
  _V10_Dpair_D566.first = VEncodePointer(&_V10_Dpair_D564, VPOINTER_PAIR);
  _V10_Dpair_D566.rest = VEncodePointer(&_V10_Dpair_D565, VPOINTER_PAIR);
  _V10_Dpair_D565.first = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D565.rest = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D564.first = _V0syntax__vector__for__each;
  _V10_Dpair_D564.rest = VEncodePointer(&_V10_Dpair_D563, VPOINTER_PAIR);
  _V10_Dpair_D563.first = _V0syntax__vector__map;
  _V10_Dpair_D563.rest = VEncodePointer(&_V10_Dpair_D562, VPOINTER_PAIR);
  _V10_Dpair_D562.first = _V0syntax__vector__ref;
  _V10_Dpair_D562.rest = VEncodePointer(&_V10_Dpair_D561, VPOINTER_PAIR);
  _V10_Dpair_D561.first = _V0syntax__make__vector;
  _V10_Dpair_D561.rest = VEncodePointer(&_V10_Dpair_D560, VPOINTER_PAIR);
  _V10_Dpair_D560.first = _V0syntax__vector;
  _V10_Dpair_D560.rest = VEncodePointer(&_V10_Dpair_D559, VPOINTER_PAIR);
  _V10_Dpair_D559.first = _V0syntax__vector_Q;
  _V10_Dpair_D559.rest = VEncodePointer(&_V10_Dpair_D558, VPOINTER_PAIR);
  _V10_Dpair_D558.first = _V0syntax__list;
  _V10_Dpair_D558.rest = VEncodePointer(&_V10_Dpair_D557, VPOINTER_PAIR);
  _V10_Dpair_D557.first = _V0syntax__for__each;
  _V10_Dpair_D557.rest = VEncodePointer(&_V10_Dpair_D556, VPOINTER_PAIR);
  _V10_Dpair_D556.first = _V0syntax__map;
  _V10_Dpair_D556.rest = VEncodePointer(&_V10_Dpair_D555, VPOINTER_PAIR);
  _V10_Dpair_D555.first = _V0syntax__caddr;
  _V10_Dpair_D555.rest = VEncodePointer(&_V10_Dpair_D554, VPOINTER_PAIR);
  _V10_Dpair_D554.first = _V0syntax__cddr;
  _V10_Dpair_D554.rest = VEncodePointer(&_V10_Dpair_D553, VPOINTER_PAIR);
  _V10_Dpair_D553.first = _V0syntax__cdar;
  _V10_Dpair_D553.rest = VEncodePointer(&_V10_Dpair_D552, VPOINTER_PAIR);
  _V10_Dpair_D552.first = _V0syntax__cadr;
  _V10_Dpair_D552.rest = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D551.first = _V0syntax__caar;
  _V10_Dpair_D551.rest = VEncodePointer(&_V10_Dpair_D550, VPOINTER_PAIR);
  _V10_Dpair_D550.first = _V0syntax__cdr;
  _V10_Dpair_D550.rest = VEncodePointer(&_V10_Dpair_D549, VPOINTER_PAIR);
  _V10_Dpair_D549.first = _V0syntax__car;
  _V10_Dpair_D549.rest = VEncodePointer(&_V10_Dpair_D548, VPOINTER_PAIR);
  _V10_Dpair_D548.first = _V0syntax__cons;
  _V10_Dpair_D548.rest = VEncodePointer(&_V10_Dpair_D547, VPOINTER_PAIR);
  _V10_Dpair_D547.first = _V0syntax__pair_Q;
  _V10_Dpair_D547.rest = VEncodePointer(&_V10_Dpair_D546, VPOINTER_PAIR);
  _V10_Dpair_D546.first = _V0syntax__null_Q;
  _V10_Dpair_D546.rest = VEncodePointer(&_V10_Dpair_D545, VPOINTER_PAIR);
  _V10_Dpair_D545.first = _V0flip__scope;
  _V10_Dpair_D545.rest = VEncodePointer(&_V10_Dpair_D544, VPOINTER_PAIR);
  _V10_Dpair_D544.first = _V0syntax__unpack;
  _V10_Dpair_D544.rest = VEncodePointer(&_V10_Dpair_D543, VPOINTER_PAIR);
  _V10_Dpair_D543.first = _V0eager__flip__scope;
  _V10_Dpair_D543.rest = VEncodePointer(&_V10_Dpair_D542, VPOINTER_PAIR);
  _V10_Dpair_D542.first = _V0lazy__flip__scope;
  _V10_Dpair_D542.rest = VEncodePointer(&_V10_Dpair_D541, VPOINTER_PAIR);
  _V10_Dpair_D541.first = _V0flip__scope__set;
  _V10_Dpair_D541.rest = VEncodePointer(&_V10_Dpair_D540, VPOINTER_PAIR);
  _V10_Dpair_D540.first = _V0get__syntax__data;
  _V10_Dpair_D540.rest = VEncodePointer(&_V10_Dpair_D539, VPOINTER_PAIR);
  _V10_Dpair_D539.first = _V0propogate__flips;
  _V10_Dpair_D539.rest = VEncodePointer(&_V10_Dpair_D538, VPOINTER_PAIR);
  _V10_Dpair_D538.first = _V0identifier_Q;
  _V10_Dpair_D538.rest = VEncodePointer(&_V10_Dpair_D537, VPOINTER_PAIR);
  _V10_Dpair_D537.first = _V0set__syntax__scopes_B;
  _V10_Dpair_D537.rest = VEncodePointer(&_V10_Dpair_D536, VPOINTER_PAIR);
  _V10_Dpair_D536.first = _V0get__syntax__scopes;
  _V10_Dpair_D536.rest = VEncodePointer(&_V10_Dpair_D535, VPOINTER_PAIR);
  _V10_Dpair_D535.first = _V0set__syntax__data_B;
  _V10_Dpair_D535.rest = VEncodePointer(&_V10_Dpair_D534, VPOINTER_PAIR);
  _V10_Dpair_D534.first = _V0get__syntax__data__impl;
  _V10_Dpair_D534.rest = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D533.first = _V0make__syntax;
  _V10_Dpair_D533.rest = VEncodePointer(&_V10_Dpair_D532, VPOINTER_PAIR);
  _V10_Dpair_D532.first = _V0syntax_Q;
  _V10_Dpair_D532.rest = VEncodePointer(&_V10_Dpair_D531, VPOINTER_PAIR);
  _V10_Dpair_D531.first = _V0syntax_Q_D4;
  _V10_Dpair_D531.rest = VEncodePointer(&_V10_Dpair_D530, VPOINTER_PAIR);
  _V10_Dpair_D530.first = _V0syntax_D3;
  _V10_Dpair_D530.rest = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D529.first = _V0global__scope;
  _V10_Dpair_D529.rest = VEncodePointer(&_V10_Dpair_D528, VPOINTER_PAIR);
  _V10_Dpair_D528.first = _V0make__scope;
  _V10_Dpair_D528.rest = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D527.first = _V0set__scope__bindings_B;
  _V10_Dpair_D527.rest = VEncodePointer(&_V10_Dpair_D526, VPOINTER_PAIR);
  _V10_Dpair_D526.first = _V0get__scope__bindings;
  _V10_Dpair_D526.rest = VEncodePointer(&_V10_Dpair_D525, VPOINTER_PAIR);
  _V10_Dpair_D525.first = _V0make__scope__impl;
  _V10_Dpair_D525.rest = VEncodePointer(&_V10_Dpair_D524, VPOINTER_PAIR);
  _V10_Dpair_D524.first = _V0scope_Q;
  _V10_Dpair_D524.rest = VEncodePointer(&_V10_Dpair_D523, VPOINTER_PAIR);
  _V10_Dpair_D523.first = _V0scope_Q_D2;
  _V10_Dpair_D523.rest = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D522.first = _V0scope_D1;
  _V10_Dpair_D522.rest = VNULL;
  _V10_Dpair_D521.first = VEncodePointer(&_V10_Dpair_D517, VPOINTER_PAIR);
  _V10_Dpair_D521.rest = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D520.first = VEncodePointer(&_V10_Dpair_D519, VPOINTER_PAIR);
  _V10_Dpair_D520.rest = VNULL;
  _V10_Dpair_D519.first = _V0_Mk;
  _V10_Dpair_D519.rest = VEncodePointer(&_V10_Dpair_D518, VPOINTER_PAIR);
  _V10_Dpair_D518.first = _V0f;
  _V10_Dpair_D518.rest = _V0args;
  _V10_Dpair_D517.first = _V0vanity;
  _V10_Dpair_D517.rest = VEncodePointer(&_V10_Dpair_D516, VPOINTER_PAIR);
  _V10_Dpair_D516.first = _V0compiler;
  _V10_Dpair_D516.rest = VEncodePointer(&_V10_Dpair_D515, VPOINTER_PAIR);
  _V10_Dpair_D515.first = _V0hygienic;
  _V10_Dpair_D515.rest = VEncodePointer(&_V10_Dpair_D514, VPOINTER_PAIR);
  _V10_Dpair_D514.first = _V0types;
  _V10_Dpair_D514.rest = VEncodePointer(&_V10_Dpair_D513, VPOINTER_PAIR);
  _V10_Dpair_D513.first = _V0syntax__vector__for__each;
  _V10_Dpair_D513.rest = VNULL;
  _V10_Dpair_D512.first = VEncodePointer(&_V10_Dpair_D511, VPOINTER_PAIR);
  _V10_Dpair_D512.rest = VEncodePointer(&_V10_Dpair_D483, VPOINTER_PAIR);
  _V10_Dpair_D511.first = VEncodeBool(false);
  _V10_Dpair_D511.rest = VEncodePointer(&_V10_Dpair_D510, VPOINTER_PAIR);
  _V10_Dpair_D510.first = VEncodePointer(&_V10_Dpair_D509, VPOINTER_PAIR);
  _V10_Dpair_D510.rest = VNULL;
  _V10_Dpair_D509.first = _V0_Mk;
  _V10_Dpair_D509.rest = VEncodePointer(&_V10_Dpair_D508, VPOINTER_PAIR);
  _V10_Dpair_D508.first = _V0vector__for__each;
  _V10_Dpair_D508.rest = VEncodePointer(&_V10_Dpair_D507, VPOINTER_PAIR);
  _V10_Dpair_D507.first = _V0map;
  _V10_Dpair_D507.rest = VEncodePointer(&_V10_Dpair_D506, VPOINTER_PAIR);
  _V10_Dpair_D506.first = _V0vector__map;
  _V10_Dpair_D506.rest = VEncodePointer(&_V10_Dpair_D505, VPOINTER_PAIR);
  _V10_Dpair_D505.first = _V0any;
  _V10_Dpair_D505.rest = VEncodePointer(&_V10_Dpair_D504, VPOINTER_PAIR);
  _V10_Dpair_D504.first = _V0list_Q;
  _V10_Dpair_D504.rest = VEncodePointer(&_V10_Dpair_D503, VPOINTER_PAIR);
  _V10_Dpair_D503.first = _V0memq;
  _V10_Dpair_D503.rest = VEncodePointer(&_V10_Dpair_D502, VPOINTER_PAIR);
  _V10_Dpair_D502.first = _V0lset__xor;
  _V10_Dpair_D502.rest = VEncodePointer(&_V10_Dpair_D501, VPOINTER_PAIR);
  _V10_Dpair_D501.first = _V0make__parameter;
  _V10_Dpair_D501.rest = VEncodePointer(&_V10_Dpair_D500, VPOINTER_PAIR);
  _V10_Dpair_D500.first = _V0list;
  _V10_Dpair_D500.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D496.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D496.rest = VEncodePointer(&_V10_Dpair_D495, VPOINTER_PAIR);
  _V10_Dpair_D495.first = VEncodePointer(&_V10_Dpair_D494, VPOINTER_PAIR);
  _V10_Dpair_D495.rest = VNULL;
  _V10_Dpair_D494.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D494.rest = VEncodePointer(&_V10_Dpair_D491, VPOINTER_PAIR);
  _V10_Dpair_D493.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D493.rest = VEncodePointer(&_V10_Dpair_D492, VPOINTER_PAIR);
  _V10_Dpair_D492.first = VEncodePointer(&_V10_Dpair_D491, VPOINTER_PAIR);
  _V10_Dpair_D492.rest = VNULL;
  _V10_Dpair_D491.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D491.rest = VEncodePointer(&_V10_Dpair_D488, VPOINTER_PAIR);
  _V10_Dpair_D490.first = VEncodePointer(&_V10_Dpair_D487, VPOINTER_PAIR);
  _V10_Dpair_D490.rest = VEncodePointer(&_V10_Dpair_D489, VPOINTER_PAIR);
  _V10_Dpair_D489.first = VEncodePointer(&_V10_Dpair_D488, VPOINTER_PAIR);
  _V10_Dpair_D489.rest = VNULL;
  _V10_Dpair_D488.first = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D488.rest = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D487.first = VEncodeBool(false);
  _V10_Dpair_D487.rest = VEncodePointer(&_V10_Dpair_D486, VPOINTER_PAIR);
  _V10_Dpair_D486.first = VEncodePointer(&_V10_Dpair_D485, VPOINTER_PAIR);
  _V10_Dpair_D486.rest = VNULL;
  _V10_Dpair_D485.first = _V0_Mx;
  _V10_Dpair_D485.rest = VNULL;
  _V10_Dpair_D484.first = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D484.rest = VEncodePointer(&_V10_Dpair_D483, VPOINTER_PAIR);
  _V10_Dpair_D483.first = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D483.rest = VNULL;
  _V10_Dpair_D482.first = VEncodePointer(&_V10_Dpair_D480, VPOINTER_PAIR);
  _V10_Dpair_D482.rest = VEncodePointer(&_V10_Dpair_D481, VPOINTER_PAIR);
  _V10_Dpair_D481.first = VNULL;
  _V10_Dpair_D481.rest = VNULL;
  _V10_Dpair_D480.first = VEncodeBool(false);
  _V10_Dpair_D480.rest = VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR);
  _V10_Dpair_D479.first = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D479.rest = VNULL;
  _V10_Dpair_D478.first = _V0_Mk;
  _V10_Dpair_D478.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, VEncodePointer(&_V10_Dpair_D496, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, VEncodePointer(&_V10_Dpair_D493, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, VEncodePointer(&_V10_Dpair_D490, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D484, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4, VEncodePointer(&_V10_Dpair_D574, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, VEncodePointer(&_V10_Dpair_D568, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5, VEncodePointer(&_V10_Dpair_D574, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, VEncodePointer(&_V10_Dpair_D581, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6, VEncodePointer(&_V10_Dpair_D595, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8, VEncodePointer(&_V10_Dpair_D615, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7, VEncodePointer(&_V10_Dpair_D612, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, VEncodePointer(&_V10_Dpair_D605, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dsyntax__for__each_D34_V0k12, VEncodePointer(&_V10_Dpair_D644, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dsyntax__for__each_D34_V0k11, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dsyntax__for__each_D34_V0k10, VEncodePointer(&_V10_Dpair_D635, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dsyntax__for__each_D34_V0k9, VEncodePointer(&_V10_Dpair_D632, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16, VEncodePointer(&_V10_Dpair_D670, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k15, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14, VEncodePointer(&_V10_Dpair_D667, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13, VEncodePointer(&_V10_Dpair_D664, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81, VEncodePointer(&_V10_Dpair_D661, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, VEncodePointer(&_V10_Dpair_D629, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21, VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19, VEncodePointer(&_V10_Dpair_D698, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18, VEncodePointer(&_V10_Dpair_D695, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17, VEncodePointer(&_V10_Dpair_D692, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85, VEncodePointer(&_V10_Dpair_D689, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26, VEncodePointer(&_V10_Dpair_D718, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25, VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24, VEncodePointer(&_V10_Dpair_D670, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23, VEncodePointer(&_V10_Dpair_D667, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22, VEncodePointer(&_V10_Dpair_D664, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89, VEncodePointer(&_V10_Dpair_D712, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, VEncodePointer(&_V10_Dpair_D677, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28, VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27, VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, VEncodePointer(&_V10_Dpair_D728, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29, VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, VEncodePointer(&_V10_Dpair_D741, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30, VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31, VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32, VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, VEncodePointer(&_V10_Dpair_D762, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33, VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, VEncodePointer(&_V10_Dpair_D769, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34, VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36, VEncodePointer(&_V10_Dpair_D615, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35, VEncodePointer(&_V10_Dpair_D612, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38, VEncodePointer(&_V10_Dpair_D615, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37, VEncodePointer(&_V10_Dpair_D612, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39, VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44, VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43, VEncodePointer(&_V10_Dpair_D819, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42, VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4, VEncodePointer(&_V10_Dpair_D830, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45, VEncodePointer(&_V10_Dpair_D823, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41, VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49, VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48, VEncodePointer(&_V10_Dpair_D849, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47, VEncodePointer(&_V10_Dpair_D846, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50, VEncodePointer(&_V10_Dpair_D855, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52, VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51, VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46, VEncodePointer(&_V10_Dpair_D843, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, VEncodePointer(&_V10_Dpair_D840, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54, VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108, VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53, VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61, VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60, VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59, VEncodePointer(&_V10_Dpair_D938, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62, VEncodePointer(&_V10_Dpair_D947, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63, VEncodePointer(&_V10_Dpair_D948, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58, VEncodePointer(&_V10_Dpair_D935, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114, VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66, VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65, VEncodePointer(&_V10_Dpair_D952, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68, VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57, VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56, VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70, VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69, VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72, VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71, VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73, VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76, VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75, VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77, VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80, VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79, VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81, VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86, VEncodePointer(&_V10_Dpair_D1078, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85, VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83, VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D512, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D482, VPOINTER_PAIR));
}
