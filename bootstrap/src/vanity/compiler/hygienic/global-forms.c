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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;

static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
static VPair _V10_Dpair_D1056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
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
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
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
static VPair _V10_Dpair_D985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static VPair _V10_Dpair_D836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D1;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0x_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "x.1" };
static VPair _V10_Dpair_D832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
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
VWEAK VWORD _V10vcore_Dappend;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dappend = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.append" };
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
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
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
VWEAK VWORD _V10vcore_Dlist___Gs8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gs8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->s8vector" };
static VPair _V10_Dpair_D710 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D709 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D705 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dlist___Gu8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->u8vector" };
static VPair _V10_Dpair_D704 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D703 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D702 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D700 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D699 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dlist___Gs16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s16vector" };
static VPair _V10_Dpair_D698 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D697 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D696 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D695 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D694 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D693 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dlist___Gu16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gu16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->u16vector" };
static VPair _V10_Dpair_D692 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D691 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D690 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D689 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D688 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D687 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dlist___Gs32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s32vector" };
static VPair _V10_Dpair_D686 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D685 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D684 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D683 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D682 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D681 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dlist___Gf32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f32vector" };
static VPair _V10_Dpair_D680 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D679 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D678 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D677 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D676 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D675 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dlist___Gf64vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f64vector" };
static VPair _V10_Dpair_D674 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D673 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D672 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D671 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D670 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D669 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.list->vector" };
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
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
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
static VPair _V10_Dpair_D644 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D643 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D642 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D641 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D640 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D634 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D633 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D632 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D631 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D630 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0quasisyntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0quasisyntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "quasisyntax" };
static VPair _V10_Dpair_D629 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D628 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D627 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D626 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D2;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0x_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "x.2" };
static VPair _V10_Dpair_D625 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D624 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D623 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D622 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D621 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D607 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D606 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D605 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D604 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D603 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D602 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
VWEAK VWORD _V0quotation;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0quotation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "quotation" };
static VPair _V10_Dpair_D601 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
static VPair _V10_Dpair_D586 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0global__identifier;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0global__identifier = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "global-identifier" };
VWEAK VWORD _V0syntax__unpack;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0syntax__unpack = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "syntax-unpack" };
VWEAK VWORD _V0expand__let;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0expand__let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "expand-let" };
VWEAK VWORD _V0expand__quasiquote__impl;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0expand__quasiquote__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "expand-quasiquote-impl" };
VWEAK VWORD _V0expand__quasiquote;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0expand__quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "expand-quasiquote" };
VWEAK VWORD _V0expand__quasisyntax__impl;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0expand__quasisyntax__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "expand-quasisyntax-impl" };
VWEAK VWORD _V0global__form__env;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0global__form__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "global-form-env" };
static VPair _V10_Dpair_D580 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D579 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0form;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0form = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "form" };
static VPair _V10_Dpair_D576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D573 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expand__quasisyntax;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0expand__quasisyntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "expand-quasisyntax" };
VWEAK VWORD _V0global__forms;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__forms = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-forms" };
VWEAK VWORD _V0hygienic;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0hygienic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "hygienic" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D544 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0s8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0s8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "s8vector->list" };
VWEAK VWORD _V0u8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0u8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "u8vector->list" };
VWEAK VWORD _V0s16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s16vector->list" };
VWEAK VWORD _V0u16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0u16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "u16vector->list" };
VWEAK VWORD _V0s32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s32vector->list" };
VWEAK VWORD _V0f32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f32vector->list" };
VWEAK VWORD _V0f64vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f64vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f64vector->list" };
VWEAK VWORD _V0vector___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector->list" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
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
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, _var0, _var1);
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.62 4 0) (##string ##.string.542) (bruijn ##.%x.63 0 0) 'syntax-cadr 'syntax-vector? 'vector->list 'f64vector->list 'f32vector->list 's32vector->list 'u16vector->list 's16vector->list 'u8vector->list 's8vector->list 'identifier? 'get-syntax-data 'syntax-caar 'syntax-pair? 'syntax-car 'syntax-cdr 'syntax-map 'syntax-cddr 'syntax? 'make-syntax 'global-scope 'list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 25,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D542.sym, VPOINTER_OTHER),
      _var0,
      _V0syntax__cadr,
      _V0syntax__vector_Q,
      _V0vector___Glist,
      _V0f64vector___Glist,
      _V0f32vector___Glist,
      _V0s32vector___Glist,
      _V0u16vector___Glist,
      _V0s16vector___Glist,
      _V0u8vector___Glist,
      _V0s8vector___Glist,
      _V0identifier_Q,
      _V0get__syntax__data,
      _V0syntax__caar,
      _V0syntax__pair_Q,
      _V0syntax__car,
      _V0syntax__cdr,
      _V0syntax__map,
      _V0syntax__cddr,
      _V0syntax_Q,
      _V0make__syntax,
      _V0global__scope,
      _V0list);
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4) (bruijn ##.%x.64 2 0) (bruijn ##.%x.65 1 0) (bruijn ##.%x.66 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4, self)))),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3) (##string ##.string.543))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D543.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2) (##string ##.string.544))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D544.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1) (##string ##.string.545))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D545.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 2 3) (bruijn ##.%k.68 1 0) 1 (bruijn ##.%x.69 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.3 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5) (bruijn ##.form.47 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.get-syntax-data.14 7 12) (bruijn ##.%k.188 1 0) (bruijn ##.%x.189 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 12)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.187 1 0) ((bruijn ##.syntax-car.17 6 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10) (bruijn ##.expr.49 4 2)) ((bruijn ##.%k.188 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.359 ##.%x.360 ##.%x.361 ##.%x.362 ##.%x.363 ##.%x.364 ##.%x.365 ##.%r.366) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.83 1 0) (bruijn ##.%x.359 0 0)) (##vcore.cons (bruijn ##.%x.360 0 1) '()) (##vcore.cons (bruijn ##.%x.80 2 0) (bruijn ##.%x.361 0 2)) (##vcore.cons (bruijn ##.%x.78 5 0) (bruijn ##.%x.362 0 3)) (##vcore.cons (bruijn ##.%x.363 0 4) '()) (##vcore.cons (bruijn ##.%x.357 6 1) (bruijn ##.%x.364 0 5)) (##vcore.cons (bruijn ##.%x.73 9 0) (bruijn ##.%x.365 0 6))) ((bruijn ##.%k.70 15 0) (bruijn ##.%r.366 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 13 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17) (bruijn ##.%x.358 1 0) (bruijn ##.%x.86 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.358) ((##vcore.+ (bruijn ##.quotation.48 11 1) 1)) ((bruijn ##.syntax-cadr.3 13 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16) (bruijn ##.expr.49 11 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16, self)))),
      VGetArg(statics, 11-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.356 ##.%x.357) ((##vcore.cons (bruijn ##.%x.89 1 0) '()) (##vcore.cons (bruijn ##.%x.87 2 0) (bruijn ##.%x.356 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14) 'quasisyntax)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14, self))));
    VWORD _arg1 = 
      _V0quasisyntax;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.370 ##.%r.371) ((##vcore.cons (bruijn ##.%x.95 1 0) '()) (##vcore.cons (bruijn ##.%x.93 2 0) (bruijn ##.%x.370 0 0))) ((bruijn ##.%k.70 12 0) (bruijn ##.%r.371 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21) (bruijn ##.x.51 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.373 ##.%r.374) ((##vcore.cons (bruijn ##.%x.99 1 0) '()) (##vcore.cons (bruijn ##.%x.97 2 0) (bruijn ##.%x.373 0 0))) ((bruijn ##.%k.70 13 0) (bruijn ##.%r.374 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f64vector->list.6 13 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23) (bruijn ##.x.51 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.376 ##.%r.377) ((##vcore.cons (bruijn ##.%x.103 1 0) '()) (##vcore.cons (bruijn ##.%x.101 2 0) (bruijn ##.%x.376 0 0))) ((bruijn ##.%k.70 14 0) (bruijn ##.%r.377 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f32vector->list.7 14 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25) (bruijn ##.x.51 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.379 ##.%r.380) ((##vcore.cons (bruijn ##.%x.107 1 0) '()) (##vcore.cons (bruijn ##.%x.105 2 0) (bruijn ##.%x.379 0 0))) ((bruijn ##.%k.70 15 0) (bruijn ##.%r.380 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s32vector->list.8 15 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27) (bruijn ##.x.51 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.382 ##.%r.383) ((##vcore.cons (bruijn ##.%x.111 1 0) '()) (##vcore.cons (bruijn ##.%x.109 2 0) (bruijn ##.%x.382 0 0))) ((bruijn ##.%k.70 16 0) (bruijn ##.%r.383 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u16vector->list.9 16 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29) (bruijn ##.x.51 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.385 ##.%r.386) ((##vcore.cons (bruijn ##.%x.115 1 0) '()) (##vcore.cons (bruijn ##.%x.113 2 0) (bruijn ##.%x.385 0 0))) ((bruijn ##.%k.70 17 0) (bruijn ##.%r.386 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s16vector->list.10 17 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31) (bruijn ##.x.51 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.388 ##.%r.389) ((##vcore.cons (bruijn ##.%x.119 1 0) '()) (##vcore.cons (bruijn ##.%x.117 2 0) (bruijn ##.%x.388 0 0))) ((bruijn ##.%k.70 18 0) (bruijn ##.%r.389 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u8vector->list.11 18 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33) (bruijn ##.x.51 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.391 ##.%r.392) ((##vcore.cons (bruijn ##.%x.123 1 0) '()) (##vcore.cons (bruijn ##.%x.121 2 0) (bruijn ##.%x.391 0 0))) ((bruijn ##.%k.70 19 0) (bruijn ##.%r.392 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s8vector->list.12 19 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35) (bruijn ##.x.51 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.396 ##.%x.397 ##.%x.398 ##.%x.399 ##.%x.400 ##.%x.401 ##.%x.402 ##.%r.403) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.134 1 0) (bruijn ##.%x.396 0 0)) (##vcore.cons (bruijn ##.%x.397 0 1) '()) (##vcore.cons (bruijn ##.%x.131 2 0) (bruijn ##.%x.398 0 2)) (##vcore.cons (bruijn ##.%x.129 4 0) (bruijn ##.%x.399 0 3)) (##vcore.cons (bruijn ##.%x.400 0 4) '()) (##vcore.cons (bruijn ##.%x.394 5 1) (bruijn ##.%x.401 0 5)) (##vcore.cons (bruijn ##.%x.124 8 0) (bruijn ##.%x.402 0 6))) ((bruijn ##.%k.70 17 0) (bruijn ##.%r.403 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.395) ((##vcore.- (bruijn ##.quotation.48 14 1) 1)) (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 15 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40) (bruijn ##.%x.395 0 0) (bruijn ##.x.51 7 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.393 ##.%x.394) ((##vcore.cons (bruijn ##.%x.139 1 0) '()) (##vcore.cons (bruijn ##.%x.137 2 0) (bruijn ##.%x.393 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38) 'unquote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38, self))));
    VWORD _arg1 = 
      _V0unquote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.368) ((##vcore.= (bruijn ##.quotation.48 8 1) 1)) (if (bruijn ##.%p.368 0 0) (basic-block 1 1 (##.%p.369) ((##vcore.vector? (bruijn ##.x.51 2 0))) (if (bruijn ##.%p.369 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20) '##vcore.list->vector) (basic-block 1 1 (##.%p.372) ((##vcore.f64vector? (bruijn ##.x.51 3 0))) (if (bruijn ##.%p.372 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22) '##vcore.list->f64vector) (basic-block 1 1 (##.%p.375) ((##vcore.f32vector? (bruijn ##.x.51 4 0))) (if (bruijn ##.%p.375 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24) '##vcore.list->f32vector) (basic-block 1 1 (##.%p.378) ((##vcore.s32vector? (bruijn ##.x.51 5 0))) (if (bruijn ##.%p.378 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26) '##vcore.list->s32vector) (basic-block 1 1 (##.%p.381) ((##vcore.u16vector? (bruijn ##.x.51 6 0))) (if (bruijn ##.%p.381 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28) '##vcore.list->u16vector) (basic-block 1 1 (##.%p.384) ((##vcore.s16vector? (bruijn ##.x.51 7 0))) (if (bruijn ##.%p.384 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30) '##vcore.list->s16vector) (basic-block 1 1 (##.%p.387) ((##vcore.u8vector? (bruijn ##.x.51 8 0))) (if (bruijn ##.%p.387 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32) '##vcore.list->u8vector) (basic-block 1 1 (##.%p.390) ((##vcore.s8vector? (bruijn ##.x.51 9 0))) (if (bruijn ##.%p.390 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 17 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34) '##vcore.list->s8vector) ((bruijn ##.%k.70 16 0) (bruijn ##.x.51 9 0)))))))))))))))))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36) '##vcore.cons)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
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
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf64vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VGetArg(statics, 9-1, 0));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.425) ((##vcore.eq? (bruijn ##.%x.183 1 0) 'unquote-splicing)) ((bruijn ##.%k.181 5 0) (bruijn ##.%r.425 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.14 14 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48) (bruijn ##.%x.184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.182 0 0) ((bruijn ##.syntax-caar.15 13 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47) (bruijn ##.expr.49 11 2)) ((bruijn ##.%k.181 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47, self)))),
      VGetArg(statics, 11-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 12 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46) (bruijn ##.%x.185 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.180 1 0) ((bruijn ##.syntax-caar.15 11 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45) (bruijn ##.expr.49 9 2)) ((bruijn ##.%k.181 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.405 ##.%x.406 ##.%r.407) ((##vcore.cons (bruijn ##.%x.146 1 0) '()) (##vcore.cons (bruijn ##.%x.144 3 0) (bruijn ##.%x.405 0 0)) (##vcore.cons (bruijn ##.%x.142 5 0) (bruijn ##.%x.406 0 1))) ((bruijn ##.%k.70 16 0) (bruijn ##.%r.407 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 15 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54) (bruijn ##.quotation.48 14 1) (bruijn ##.%x.147 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 15 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53) (bruijn ##.expr.49 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 14 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52) (bruijn ##.%x.148 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 13 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51) (bruijn ##.expr.49 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.416 ##.%x.417 ##.%x.418 ##.%x.419 ##.%x.420 ##.%r.421) ((##vcore.cons (bruijn ##.%x.158 1 0) '()) (##vcore.cons (bruijn ##.%x.415 3 4) (bruijn ##.%x.416 0 0)) (##vcore.cons (bruijn ##.%x.409 10 1) (bruijn ##.%x.417 0 1)) (##vcore.cons (bruijn ##.%x.152 13 0) (bruijn ##.%x.418 0 2)) (##vcore.cons (bruijn ##.%x.419 0 3) '()) (##vcore.cons (bruijn ##.%x.149 14 0) (bruijn ##.%x.420 0 4))) ((bruijn ##.%k.70 25 0) (bruijn ##.%r.421 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 24 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65) (bruijn ##.quotation.48 23 1) (bruijn ##.%x.159 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.411 ##.%x.412 ##.%x.413 ##.%x.414 ##.%x.415) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.165 1 0) (bruijn ##.%x.411 0 0)) (##vcore.cons (bruijn ##.%x.412 0 1) '()) (##vcore.cons (bruijn ##.%x.162 2 0) (bruijn ##.%x.413 0 2)) (##vcore.cons (bruijn ##.%x.160 6 0) (bruijn ##.%x.414 0 3))) ((bruijn ##.syntax-cdr.18 24 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64) (bruijn ##.expr.49 22 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64, self)))),
      VGetArg(statics, 22-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 21 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 20 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62) (bruijn ##.%x.410 2 0) (bruijn ##.%x.168 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 20 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61) (bruijn ##.%x.169 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.410) ((##vcore.- (bruijn ##.quotation.48 17 1) 1)) ((bruijn ##.syntax-car.17 19 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60) (bruijn ##.expr.49 17 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60, self)))),
      VGetArg(statics, 17-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.408 ##.%x.409) ((##vcore.cons (bruijn ##.%x.172 1 0) '()) (##vcore.cons (bruijn ##.%x.170 2 0) (bruijn ##.%x.408 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58) 'unquote-splicing)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58, self))));
    VWORD _arg1 = 
      _V0unquote__splicing;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56) '##vcore.cons)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.422 ##.%x.423 ##.%r.424) ((##vcore.cons (bruijn ##.%x.177 1 0) '()) (##vcore.cons (bruijn ##.%x.175 3 0) (bruijn ##.%x.422 0 0)) (##vcore.cons (bruijn ##.%x.173 5 0) (bruijn ##.%x.423 0 1))) ((bruijn ##.%k.70 15 0) (bruijn ##.%r.424 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 14 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70) (bruijn ##.quotation.48 13 1) (bruijn ##.%x.178 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 14 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69) (bruijn ##.expr.49 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68) (bruijn ##.quotation.48 11 1) (bruijn ##.%x.179 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 12 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67) (bruijn ##.expr.49 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.140 0 0) (basic-block 1 1 (##.%p.404) ((##vcore.= (bruijn ##.quotation.48 10 1) 1)) (if (bruijn ##.%p.404 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50) '##vcore.append) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55) '##vcore.cons))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50, self))));
    VWORD _arg1 = 
      _V10vcore_Dappend;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.16 9 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43) (bruijn ##.%x.186 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.355) ((##vcore.eq? (bruijn ##.x.2.50 1 0) 'quasisyntax)) (if (bruijn ##.%p.355 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12) '##vcore.cons) (basic-block 1 1 (##.%p.367) ((##vcore.eq? (bruijn ##.x.2.50 2 0) 'unquote)) (if (bruijn ##.%p.367 0 0) ((bruijn ##.syntax-cadr.3 8 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19) (bruijn ##.expr.49 6 2)) ((bruijn ##.syntax-car.17 8 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42) (bruijn ##.expr.49 6 2))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0quasisyntax);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0unquote);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19, self)))),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42, self)))),
      VGetArg(statics, 6-1, 2));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 4 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8) (bruijn ##.%x.190 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.426 ##.%r.427) ((##vcore.cons (bruijn ##.%x.194 1 0) '()) (##vcore.cons (bruijn ##.%x.192 4 0) (bruijn ##.%x.426 0 0))) ((bruijn ##.%k.70 7 0) (bruijn ##.%r.427 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75) (bruijn ##.quotation.48 5 1) (bruijn ##.%x.195 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74) (bruijn ##.%x.196 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms syntax-unpack) #t (bruijn ##.syntax-unpack.45 4 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73) (bruijn ##.expr.49 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.428 ##.%r.429) ((##vcore.cons (bruijn ##.expr.49 4 2) '()) (##vcore.cons (bruijn ##.%x.197 1 0) (bruijn ##.%x.428 0 0))) ((bruijn ##.%k.70 4 0) (bruijn ##.%r.429 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.191 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72) '##vcore.list->vector) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76) 'syntax))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76, self))));
    VWORD _arg1 = 
      _V0syntax;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.71 0 0) ((bruijn ##.syntax-car.17 3 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7) (bruijn ##.expr.49 1 2)) ((bruijn ##.syntax-vector?.4 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71) (bruijn ##.expr.49 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71, self)))),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.16 2 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6) (bruijn ##.expr.49 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 2 5) (bruijn ##.%k.199 1 0) 1 (bruijn ##.%x.200 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.3 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77) (bruijn ##.form.52 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.get-syntax-data.14 7 12) (bruijn ##.%k.319 1 0) (bruijn ##.%x.320 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 12)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.318 1 0) ((bruijn ##.syntax-car.17 6 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82) (bruijn ##.expr.54 4 2)) ((bruijn ##.%k.319 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.434 ##.%x.435 ##.%x.436 ##.%x.437 ##.%x.438 ##.%x.439 ##.%x.440 ##.%r.441) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.214 1 0) (bruijn ##.%x.434 0 0)) (##vcore.cons (bruijn ##.%x.435 0 1) '()) (##vcore.cons (bruijn ##.%x.211 2 0) (bruijn ##.%x.436 0 2)) (##vcore.cons (bruijn ##.%x.209 5 0) (bruijn ##.%x.437 0 3)) (##vcore.cons (bruijn ##.%x.438 0 4) '()) (##vcore.cons (bruijn ##.%x.432 6 1) (bruijn ##.%x.439 0 5)) (##vcore.cons (bruijn ##.%x.204 9 0) (bruijn ##.%x.440 0 6))) ((bruijn ##.%k.201 15 0) (bruijn ##.%r.441 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 13 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89) (bruijn ##.%x.433 1 0) (bruijn ##.%x.217 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.433) ((##vcore.+ (bruijn ##.quotation.53 11 1) 1)) ((bruijn ##.syntax-cadr.3 13 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88) (bruijn ##.expr.54 11 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88, self)))),
      VGetArg(statics, 11-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.431 ##.%x.432) ((##vcore.cons (bruijn ##.%x.220 1 0) '()) (##vcore.cons (bruijn ##.%x.218 2 0) (bruijn ##.%x.431 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86) 'quasiquote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86, self))));
    VWORD _arg1 = 
      _V0quasiquote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.445 ##.%r.446) ((##vcore.cons (bruijn ##.%x.226 1 0) '()) (##vcore.cons (bruijn ##.%x.224 2 0) (bruijn ##.%x.445 0 0))) ((bruijn ##.%k.201 12 0) (bruijn ##.%r.446 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93) (bruijn ##.x.56 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.448 ##.%r.449) ((##vcore.cons (bruijn ##.%x.230 1 0) '()) (##vcore.cons (bruijn ##.%x.228 2 0) (bruijn ##.%x.448 0 0))) ((bruijn ##.%k.201 13 0) (bruijn ##.%r.449 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f64vector->list.6 13 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95) (bruijn ##.x.56 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.451 ##.%r.452) ((##vcore.cons (bruijn ##.%x.234 1 0) '()) (##vcore.cons (bruijn ##.%x.232 2 0) (bruijn ##.%x.451 0 0))) ((bruijn ##.%k.201 14 0) (bruijn ##.%r.452 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f32vector->list.7 14 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97) (bruijn ##.x.56 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.454 ##.%r.455) ((##vcore.cons (bruijn ##.%x.238 1 0) '()) (##vcore.cons (bruijn ##.%x.236 2 0) (bruijn ##.%x.454 0 0))) ((bruijn ##.%k.201 15 0) (bruijn ##.%r.455 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s32vector->list.8 15 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99) (bruijn ##.x.56 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.457 ##.%r.458) ((##vcore.cons (bruijn ##.%x.242 1 0) '()) (##vcore.cons (bruijn ##.%x.240 2 0) (bruijn ##.%x.457 0 0))) ((bruijn ##.%k.201 16 0) (bruijn ##.%r.458 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u16vector->list.9 16 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101) (bruijn ##.x.56 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.460 ##.%r.461) ((##vcore.cons (bruijn ##.%x.246 1 0) '()) (##vcore.cons (bruijn ##.%x.244 2 0) (bruijn ##.%x.460 0 0))) ((bruijn ##.%k.201 17 0) (bruijn ##.%r.461 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s16vector->list.10 17 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103) (bruijn ##.x.56 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.463 ##.%r.464) ((##vcore.cons (bruijn ##.%x.250 1 0) '()) (##vcore.cons (bruijn ##.%x.248 2 0) (bruijn ##.%x.463 0 0))) ((bruijn ##.%k.201 18 0) (bruijn ##.%r.464 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u8vector->list.11 18 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105) (bruijn ##.x.56 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.466 ##.%r.467) ((##vcore.cons (bruijn ##.%x.254 1 0) '()) (##vcore.cons (bruijn ##.%x.252 2 0) (bruijn ##.%x.466 0 0))) ((bruijn ##.%k.201 19 0) (bruijn ##.%r.467 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s8vector->list.12 19 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107) (bruijn ##.x.56 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.471 ##.%x.472 ##.%x.473 ##.%x.474 ##.%x.475 ##.%x.476 ##.%x.477 ##.%r.478) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.265 1 0) (bruijn ##.%x.471 0 0)) (##vcore.cons (bruijn ##.%x.472 0 1) '()) (##vcore.cons (bruijn ##.%x.262 2 0) (bruijn ##.%x.473 0 2)) (##vcore.cons (bruijn ##.%x.260 4 0) (bruijn ##.%x.474 0 3)) (##vcore.cons (bruijn ##.%x.475 0 4) '()) (##vcore.cons (bruijn ##.%x.469 5 1) (bruijn ##.%x.476 0 5)) (##vcore.cons (bruijn ##.%x.255 8 0) (bruijn ##.%x.477 0 6))) ((bruijn ##.%k.201 17 0) (bruijn ##.%r.478 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.470) ((##vcore.- (bruijn ##.quotation.53 14 1) 1)) (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 15 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112) (bruijn ##.%x.470 0 0) (bruijn ##.x.56 7 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.468 ##.%x.469) ((##vcore.cons (bruijn ##.%x.270 1 0) '()) (##vcore.cons (bruijn ##.%x.268 2 0) (bruijn ##.%x.468 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110) 'unquote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110, self))));
    VWORD _arg1 = 
      _V0unquote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.443) ((##vcore.= (bruijn ##.quotation.53 8 1) 1)) (if (bruijn ##.%p.443 0 0) (basic-block 1 1 (##.%p.444) ((##vcore.vector? (bruijn ##.x.56 2 0))) (if (bruijn ##.%p.444 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92) '##vcore.list->vector) (basic-block 1 1 (##.%p.447) ((##vcore.f64vector? (bruijn ##.x.56 3 0))) (if (bruijn ##.%p.447 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94) '##vcore.list->f64vector) (basic-block 1 1 (##.%p.450) ((##vcore.f32vector? (bruijn ##.x.56 4 0))) (if (bruijn ##.%p.450 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96) '##vcore.list->f32vector) (basic-block 1 1 (##.%p.453) ((##vcore.s32vector? (bruijn ##.x.56 5 0))) (if (bruijn ##.%p.453 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98) '##vcore.list->s32vector) (basic-block 1 1 (##.%p.456) ((##vcore.u16vector? (bruijn ##.x.56 6 0))) (if (bruijn ##.%p.456 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100) '##vcore.list->u16vector) (basic-block 1 1 (##.%p.459) ((##vcore.s16vector? (bruijn ##.x.56 7 0))) (if (bruijn ##.%p.459 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102) '##vcore.list->s16vector) (basic-block 1 1 (##.%p.462) ((##vcore.u8vector? (bruijn ##.x.56 8 0))) (if (bruijn ##.%p.462 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104) '##vcore.list->u8vector) (basic-block 1 1 (##.%p.465) ((##vcore.s8vector? (bruijn ##.x.56 9 0))) (if (bruijn ##.%p.465 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 17 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106) '##vcore.list->s8vector) ((bruijn ##.%k.201 16 0) (bruijn ##.x.56 9 0)))))))))))))))))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108) '##vcore.cons)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
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
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf64vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VGetArg(statics, 9-1, 0));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.500) ((##vcore.eq? (bruijn ##.%x.314 1 0) 'unquote-splicing)) ((bruijn ##.%k.312 5 0) (bruijn ##.%r.500 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.14 14 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120) (bruijn ##.%x.315 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.313 0 0) ((bruijn ##.syntax-caar.15 13 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119) (bruijn ##.expr.54 11 2)) ((bruijn ##.%k.312 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119, self)))),
      VGetArg(statics, 11-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 12 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118) (bruijn ##.%x.316 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.311 1 0) ((bruijn ##.syntax-caar.15 11 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117) (bruijn ##.expr.54 9 2)) ((bruijn ##.%k.312 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.480 ##.%x.481 ##.%r.482) ((##vcore.cons (bruijn ##.%x.277 1 0) '()) (##vcore.cons (bruijn ##.%x.275 3 0) (bruijn ##.%x.480 0 0)) (##vcore.cons (bruijn ##.%x.273 5 0) (bruijn ##.%x.481 0 1))) ((bruijn ##.%k.201 16 0) (bruijn ##.%r.482 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 15 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126) (bruijn ##.quotation.53 14 1) (bruijn ##.%x.278 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 15 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125) (bruijn ##.expr.54 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 14 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124) (bruijn ##.%x.279 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 13 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123) (bruijn ##.expr.54 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.491 ##.%x.492 ##.%x.493 ##.%x.494 ##.%x.495 ##.%r.496) ((##vcore.cons (bruijn ##.%x.289 1 0) '()) (##vcore.cons (bruijn ##.%x.490 3 4) (bruijn ##.%x.491 0 0)) (##vcore.cons (bruijn ##.%x.484 10 1) (bruijn ##.%x.492 0 1)) (##vcore.cons (bruijn ##.%x.283 13 0) (bruijn ##.%x.493 0 2)) (##vcore.cons (bruijn ##.%x.494 0 3) '()) (##vcore.cons (bruijn ##.%x.280 14 0) (bruijn ##.%x.495 0 4))) ((bruijn ##.%k.201 25 0) (bruijn ##.%r.496 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 24 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137) (bruijn ##.quotation.53 23 1) (bruijn ##.%x.290 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.486 ##.%x.487 ##.%x.488 ##.%x.489 ##.%x.490) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.296 1 0) (bruijn ##.%x.486 0 0)) (##vcore.cons (bruijn ##.%x.487 0 1) '()) (##vcore.cons (bruijn ##.%x.293 2 0) (bruijn ##.%x.488 0 2)) (##vcore.cons (bruijn ##.%x.291 6 0) (bruijn ##.%x.489 0 3))) ((bruijn ##.syntax-cdr.18 24 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136) (bruijn ##.expr.54 22 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136, self)))),
      VGetArg(statics, 22-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 21 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 20 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134) (bruijn ##.%x.485 2 0) (bruijn ##.%x.299 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 20 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133) (bruijn ##.%x.300 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.485) ((##vcore.- (bruijn ##.quotation.53 17 1) 1)) ((bruijn ##.syntax-car.17 19 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132) (bruijn ##.expr.54 17 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132, self)))),
      VGetArg(statics, 17-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.483 ##.%x.484) ((##vcore.cons (bruijn ##.%x.303 1 0) '()) (##vcore.cons (bruijn ##.%x.301 2 0) (bruijn ##.%x.483 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130) 'unquote-splicing)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130, self))));
    VWORD _arg1 = 
      _V0unquote__splicing;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128) '##vcore.cons)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.497 ##.%x.498 ##.%r.499) ((##vcore.cons (bruijn ##.%x.308 1 0) '()) (##vcore.cons (bruijn ##.%x.306 3 0) (bruijn ##.%x.497 0 0)) (##vcore.cons (bruijn ##.%x.304 5 0) (bruijn ##.%x.498 0 1))) ((bruijn ##.%k.201 15 0) (bruijn ##.%r.499 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 14 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142) (bruijn ##.quotation.53 13 1) (bruijn ##.%x.309 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 14 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141) (bruijn ##.expr.54 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 12 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140) (bruijn ##.quotation.53 11 1) (bruijn ##.%x.310 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 12 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139) (bruijn ##.expr.54 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.271 0 0) (basic-block 1 1 (##.%p.479) ((##vcore.= (bruijn ##.quotation.53 10 1) 1)) (if (bruijn ##.%p.479 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122) '##vcore.append) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127) '##vcore.cons))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122, self))));
    VWORD _arg1 = 
      _V10vcore_Dappend;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.16 9 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115) (bruijn ##.%x.317 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.430) ((##vcore.eq? (bruijn ##.x.1.55 1 0) 'quasiquote)) (if (bruijn ##.%p.430 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84) '##vcore.cons) (basic-block 1 1 (##.%p.442) ((##vcore.eq? (bruijn ##.x.1.55 2 0) 'unquote)) (if (bruijn ##.%p.442 0 0) ((bruijn ##.syntax-cadr.3 8 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91) (bruijn ##.expr.54 6 2)) ((bruijn ##.syntax-car.17 8 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114) (bruijn ##.expr.54 6 2))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0quasiquote);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0unquote);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91, self)))),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114, self)))),
      VGetArg(statics, 6-1, 2));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 4 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80) (bruijn ##.%x.321 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.501 ##.%r.502) ((##vcore.cons (bruijn ##.%x.325 1 0) '()) (##vcore.cons (bruijn ##.%x.323 4 0) (bruijn ##.%x.501 0 0))) ((bruijn ##.%k.201 7 0) (bruijn ##.%r.502 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 6 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147) (bruijn ##.quotation.53 5 1) (bruijn ##.%x.326 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146) (bruijn ##.%x.327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms syntax-unpack) #t (bruijn ##.syntax-unpack.45 4 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145) (bruijn ##.expr.54 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.503 ##.%r.504) ((##vcore.cons (bruijn ##.expr.54 4 2) '()) (##vcore.cons (bruijn ##.%x.328 1 0) (bruijn ##.%x.503 0 0))) ((bruijn ##.%k.201 4 0) (bruijn ##.%r.504 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.322 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144) '##vcore.list->vector) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148) 'quote))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.202 0 0) ((bruijn ##.syntax-car.17 3 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79) (bruijn ##.expr.54 1 2)) ((bruijn ##.syntax-vector?.4 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143) (bruijn ##.expr.54 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143, self)))),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.16 2 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78) (bruijn ##.expr.54 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.507) ((##vcore.cons (bruijn ##.%x.506 3 1) (bruijn ##.%x.332 1 0))) ((bruijn ##.%k.330 8 0) (bruijn ##.%r.507 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.19 8 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154) (bruijn ##.syntax-cadr.3 8 1) (bruijn ##.%x.333 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154, self)))),
      VGetArg(statics, 8-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.505 ##.%x.506) ((##vcore.cons (bruijn ##.%x.336 2 0) (bruijn ##.%x.337 1 0)) (##vcore.cons (bruijn ##.%x.334 4 0) (bruijn ##.%x.505 0 0))) ((bruijn ##.syntax-cadr.3 7 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153) (bruijn ##.form.57 5 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153, self)))),
      VGetArg(statics, 5-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.20 5 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152) (bruijn ##.form.57 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.19 4 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151) (bruijn ##.syntax-car.17 4 15) (bruijn ##.%x.338 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151, self)))),
      statics->up->up->up->vars[15],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 3 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150) (bruijn ##.form.57 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 1 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149) 'lambda)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149, self))));
    VWORD _arg1 = 
      _V0lambda;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.340 0 0) ((bruijn ##.get-syntax-data.14 3 12) (bruijn ##.%k.339 1 0) (bruijn ##.x.58 1 1)) ((bruijn ##.%k.339 1 0) (bruijn ##.x.58 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[12]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.21 2 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155) (bruijn ##.x.58 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[19]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.22 4 20) (bruijn ##.%k.341 2 0) (bruijn ##.expr.59 2 1) (bruijn ##.%x.342 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[20]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.24 3 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157) (bruijn ##.%x.343 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[22]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-scope.23 2 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[21]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156, self)))));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 6 6 (##.%x.514 ##.%x.515 ##.%x.516 ##.%x.517 ##.%x.518 ##.%r.519) ((##vcore.cons 'global-identifier (bruijn ##.global-identifier.46 2 8)) (##vcore.cons 'global-forms (bruijn ##.global-forms.39 2 1)) (##vcore.cons 'global-form-env (bruijn ##.global-form-env.38 2 0)) (##vcore.cons (bruijn ##.%x.516 0 2) '()) (##vcore.cons (bruijn ##.%x.515 0 1) (bruijn ##.%x.517 0 3)) (##vcore.cons (bruijn ##.%x.514 0 0) (bruijn ##.%x.518 0 4))) ((bruijn ##.%k.67 3 0) (bruijn ##.%r.519 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0global__identifier,
      statics->up->vars[8]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0global__forms,
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0global__form__env,
      statics->up->vars[0]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[5]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 6 6 (##.%x.508 ##.%x.509 ##.%x.510 ##.%x.511 ##.%x.512 ##.%x.513) ((##vcore.cons 'let (bruijn ##.expand-let.44 1 6)) (##vcore.cons 'quasiquote (bruijn ##.expand-quasiquote.42 1 4)) (##vcore.cons 'quasisyntax (bruijn ##.expand-quasisyntax.40 1 2)) (##vcore.cons (bruijn ##.%x.510 0 2) '()) (##vcore.cons (bruijn ##.%x.509 0 1) (bruijn ##.%x.511 0 3)) (##vcore.cons (bruijn ##.%x.508 0 0) (bruijn ##.%x.512 0 4))) (set! (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159) (bruijn ##.global-form-env.38 1 0) (bruijn ##.%x.513 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      statics->vars[6]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0quasiquote,
      statics->vars[4]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0quasisyntax,
      statics->vars[2]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[4]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      self->vars[5]
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 23) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3, got ~D~N"
  "-- expected 23~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[23]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 23, 23, statics);
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
  // (##letrec (vanity compiler hygienic global-forms) 9 (#f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier" (vanity compiler hygienic global-forms))) (set! (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158) (bruijn ##.global-forms.39 0 1) '(##pair ##.pair.1063)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0global__forms = self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0global__forms_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0global__forms);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158, self)))),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR)
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.61 0 0) (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2) (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0global__forms_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VInternSymbol(-1666054212, &_VW_V0quasiquote.sym), VPOINTER_OTHER);
  _V0x_D1 = VEncodePointer(VInternSymbol(-849682234, &_VW_V0x_D1.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V10vcore_Dappend = VEncodePointer(VInternSymbol(1742285522, &_VW_V10vcore_Dappend.sym), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VInternSymbol(-922270485, &_VW_V0unquote__splicing.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs8vector = VEncodePointer(VInternSymbol(-1495667680, &_VW_V10vcore_Dlist___Gs8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu8vector = VEncodePointer(VInternSymbol(-398660499, &_VW_V10vcore_Dlist___Gu8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs16vector = VEncodePointer(VInternSymbol(-604043574, &_VW_V10vcore_Dlist___Gs16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu16vector = VEncodePointer(VInternSymbol(-288736869, &_VW_V10vcore_Dlist___Gu16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs32vector = VEncodePointer(VInternSymbol(-1792200977, &_VW_V10vcore_Dlist___Gs32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf32vector = VEncodePointer(VInternSymbol(-797019339, &_VW_V10vcore_Dlist___Gf32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf64vector = VEncodePointer(VInternSymbol(-1111467472, &_VW_V10vcore_Dlist___Gf64vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gvector = VEncodePointer(VInternSymbol(484282061, &_VW_V10vcore_Dlist___Gvector.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0quasisyntax = VEncodePointer(VInternSymbol(71445183, &_VW_V0quasisyntax.sym), VPOINTER_OTHER);
  _V0x_D2 = VEncodePointer(VInternSymbol(-1382369217, &_VW_V0x_D2.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0quotation = VEncodePointer(VInternSymbol(1924464570, &_VW_V0quotation.sym), VPOINTER_OTHER);
  _V0global__identifier = VEncodePointer(VInternSymbol(-1557481786, &_VW_V0global__identifier.sym), VPOINTER_OTHER);
  _V0syntax__unpack = VEncodePointer(VInternSymbol(-1517782154, &_VW_V0syntax__unpack.sym), VPOINTER_OTHER);
  _V0expand__let = VEncodePointer(VInternSymbol(1031054202, &_VW_V0expand__let.sym), VPOINTER_OTHER);
  _V0expand__quasiquote__impl = VEncodePointer(VInternSymbol(837381387, &_VW_V0expand__quasiquote__impl.sym), VPOINTER_OTHER);
  _V0expand__quasiquote = VEncodePointer(VInternSymbol(-1716131314, &_VW_V0expand__quasiquote.sym), VPOINTER_OTHER);
  _V0expand__quasisyntax__impl = VEncodePointer(VInternSymbol(-1765155852, &_VW_V0expand__quasisyntax__impl.sym), VPOINTER_OTHER);
  _V0global__form__env = VEncodePointer(VInternSymbol(1415805201, &_VW_V0global__form__env.sym), VPOINTER_OTHER);
  _V0form = VEncodePointer(VInternSymbol(-180257785, &_VW_V0form.sym), VPOINTER_OTHER);
  _V0expand__quasisyntax = VEncodePointer(VInternSymbol(846622088, &_VW_V0expand__quasisyntax.sym), VPOINTER_OTHER);
  _V0global__forms = VEncodePointer(VInternSymbol(1252986977, &_VW_V0global__forms.sym), VPOINTER_OTHER);
  _V0hygienic = VEncodePointer(VInternSymbol(1358647835, &_VW_V0hygienic.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0s8vector___Glist = VEncodePointer(VInternSymbol(-909584740, &_VW_V0s8vector___Glist.sym), VPOINTER_OTHER);
  _V0u8vector___Glist = VEncodePointer(VInternSymbol(-1502612760, &_VW_V0u8vector___Glist.sym), VPOINTER_OTHER);
  _V0s16vector___Glist = VEncodePointer(VInternSymbol(730976843, &_VW_V0s16vector___Glist.sym), VPOINTER_OTHER);
  _V0u16vector___Glist = VEncodePointer(VInternSymbol(403480187, &_VW_V0u16vector___Glist.sym), VPOINTER_OTHER);
  _V0s32vector___Glist = VEncodePointer(VInternSymbol(1109387554, &_VW_V0s32vector___Glist.sym), VPOINTER_OTHER);
  _V0f32vector___Glist = VEncodePointer(VInternSymbol(1214355089, &_VW_V0f32vector___Glist.sym), VPOINTER_OTHER);
  _V0f64vector___Glist = VEncodePointer(VInternSymbol(1257547487, &_VW_V0f64vector___Glist.sym), VPOINTER_OTHER);
  _V0vector___Glist = VEncodePointer(VInternSymbol(45656078, &_VW_V0vector___Glist.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D1063.first = _V0let;
  _V10_Dpair_D1063.rest = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1062.first = _V0quasiquote;
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = _V0quasisyntax;
  _V10_Dpair_D1061.rest = VNULL;
  _V10_Dpair_D1060.first = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1060.rest = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1059.first = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1059.rest = VNULL;
  _V10_Dpair_D1058.first = _V0unquote;
  _V10_Dpair_D1058.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1057.first = _V0unmangled__env;
  _V10_Dpair_D1057.rest = VNULL;
  _V10_Dpair_D1056.first = VEncodeBool(false);
  _V10_Dpair_D1056.rest = VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR);
  _V10_Dpair_D1055.first = _V0_U;
  _V10_Dpair_D1055.rest = VNULL;
  _V10_Dpair_D1054.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1054.rest = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1053.first = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1053.rest = VNULL;
  _V10_Dpair_D1052.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1051.rest = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1050.first = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1050.rest = VNULL;
  _V10_Dpair_D1049.first = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1049.rest = VEncodePointer(&_V10_Dpair_D591, VPOINTER_PAIR);
  _V10_Dpair_D1048.first = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1048.rest = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D1047.first = VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR);
  _V10_Dpair_D1047.rest = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1046.first = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1046.rest = VNULL;
  _V10_Dpair_D1045.first = _V0_Mk;
  _V10_Dpair_D1045.rest = VEncodePointer(&_V10_Dpair_D602, VPOINTER_PAIR);
  _V10_Dpair_D1044.first = _V0vanity;
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = _V0compiler;
  _V10_Dpair_D1043.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1042.first = _V0hygienic;
  _V10_Dpair_D1042.rest = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1041.first = _V0global__forms;
  _V10_Dpair_D1041.rest = VEncodePointer(&_V10_Dpair_D581, VPOINTER_PAIR);
  _V10_Dpair_D1040.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D1040.rest = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1039.first = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1039.rest = VNULL;
  _V10_Dpair_D1038.first = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D591, VPOINTER_PAIR);
  _V10_Dpair_D1037.first = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1037.rest = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D1036.first = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1035.rest = VNULL;
  _V10_Dpair_D1034.first = _V0_Mk;
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = _V0vanity;
  _V10_Dpair_D1033.rest = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1032.first = _V0compiler;
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = _V0hygienic;
  _V10_Dpair_D1031.rest = VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR);
  _V10_Dpair_D1030.first = _V0global__forms;
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = _V0syntax__unpack;
  _V10_Dpair_D1029.rest = VNULL;
  _V10_Dpair_D1028.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1028.rest = VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR);
  _V10_Dpair_D1027.first = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1027.rest = VNULL;
  _V10_Dpair_D1026.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1026.rest = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1024.first = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1024.rest = VNULL;
  _V10_Dpair_D1023.first = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D1023.rest = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1022.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1022.rest = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1021.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1021.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1020.first = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1020.rest = VNULL;
  _V10_Dpair_D1019.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1019.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1018.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1017.rest = VNULL;
  _V10_Dpair_D1016.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1014.rest = VNULL;
  _V10_Dpair_D1013.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D594, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1012.rest = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D1011.first = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1011.rest = VEncodePointer(&_V10_Dpair_D579, VPOINTER_PAIR);
  _V10_Dpair_D1010.first = _V0vanity;
  _V10_Dpair_D1010.rest = VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR);
  _V10_Dpair_D1009.first = _V0compiler;
  _V10_Dpair_D1009.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1008.first = _V0hygienic;
  _V10_Dpair_D1008.rest = VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR);
  _V10_Dpair_D1007.first = _V0global__forms;
  _V10_Dpair_D1007.rest = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1006.first = _V0expand__let;
  _V10_Dpair_D1006.rest = VNULL;
  _V10_Dpair_D1005.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1005.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1004.first = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1004.rest = VNULL;
  _V10_Dpair_D1003.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1003.rest = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VNULL;
  _V10_Dpair_D1000.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D1000.rest = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D998.rest = VNULL;
  _V10_Dpair_D997.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D997.rest = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D996.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D996.rest = VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR);
  _V10_Dpair_D995.first = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D995.rest = VNULL;
  _V10_Dpair_D994.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D994.rest = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D993.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D993.rest = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D992.first = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D992.rest = VNULL;
  _V10_Dpair_D991.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D991.rest = VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR);
  _V10_Dpair_D990.first = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D990.rest = VNULL;
  _V10_Dpair_D989.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D989.rest = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D988.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D988.rest = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D987.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D987.rest = VNULL;
  _V10_Dpair_D986.first = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D986.rest = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D985.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D985.rest = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D984.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D984.rest = VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR);
  _V10_Dpair_D983.first = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D983.rest = VNULL;
  _V10_Dpair_D982.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D982.rest = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D981.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D981.rest = VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR);
  _V10_Dpair_D980.first = VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR);
  _V10_Dpair_D980.rest = VNULL;
  _V10_Dpair_D979.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D979.rest = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D978.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D978.rest = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D977.first = VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR);
  _V10_Dpair_D977.rest = VNULL;
  _V10_Dpair_D976.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D976.rest = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D975.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D975.rest = VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR);
  _V10_Dpair_D974.first = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D974.rest = VNULL;
  _V10_Dpair_D973.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D973.rest = VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR);
  _V10_Dpair_D972.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D972.rest = VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR);
  _V10_Dpair_D971.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D971.rest = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D970.first = VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR);
  _V10_Dpair_D970.rest = VNULL;
  _V10_Dpair_D969.first = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D969.rest = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D968.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D968.rest = VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR);
  _V10_Dpair_D967.first = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D967.rest = VNULL;
  _V10_Dpair_D966.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D966.rest = VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR);
  _V10_Dpair_D965.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D965.rest = VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR);
  _V10_Dpair_D964.first = VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR);
  _V10_Dpair_D964.rest = VNULL;
  _V10_Dpair_D963.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D963.rest = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D962.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D962.rest = VEncodePointer(&_V10_Dpair_D961, VPOINTER_PAIR);
  _V10_Dpair_D961.first = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D961.rest = VNULL;
  _V10_Dpair_D960.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D960.rest = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D959.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D959.rest = VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR);
  _V10_Dpair_D958.first = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D958.rest = VNULL;
  _V10_Dpair_D957.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D957.rest = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D956.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D956.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D955.first = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D955.rest = VNULL;
  _V10_Dpair_D954.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D954.rest = VEncodePointer(&_V10_Dpair_D953, VPOINTER_PAIR);
  _V10_Dpair_D953.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D953.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D952.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D952.rest = VEncodePointer(&_V10_Dpair_D938, VPOINTER_PAIR);
  _V10_Dpair_D951.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D951.rest = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D950.first = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D950.rest = VNULL;
  _V10_Dpair_D949.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D949.rest = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D948.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D948.rest = VEncodePointer(&_V10_Dpair_D947, VPOINTER_PAIR);
  _V10_Dpair_D947.first = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D947.rest = VNULL;
  _V10_Dpair_D946.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D946.rest = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D945.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D945.rest = VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR);
  _V10_Dpair_D944.first = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D944.rest = VNULL;
  _V10_Dpair_D943.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D943.rest = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D942.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D942.rest = VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR);
  _V10_Dpair_D941.first = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D941.rest = VNULL;
  _V10_Dpair_D940.first = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D940.rest = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D939.first = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D939.rest = VEncodePointer(&_V10_Dpair_D938, VPOINTER_PAIR);
  _V10_Dpair_D938.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D938.rest = VNULL;
  _V10_Dpair_D937.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D937.rest = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D936.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D936.rest = VEncodePointer(&_V10_Dpair_D935, VPOINTER_PAIR);
  _V10_Dpair_D935.first = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D935.rest = VNULL;
  _V10_Dpair_D934.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D934.rest = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D933.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D933.rest = VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR);
  _V10_Dpair_D932.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR);
  _V10_Dpair_D931.first = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D931.rest = VNULL;
  _V10_Dpair_D930.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D930.rest = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D929.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D929.rest = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D928.first = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D928.rest = VNULL;
  _V10_Dpair_D927.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D927.rest = VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR);
  _V10_Dpair_D926.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D926.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D925.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D925.rest = VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR);
  _V10_Dpair_D924.first = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D924.rest = VNULL;
  _V10_Dpair_D923.first = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D923.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D922.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D922.rest = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D921.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D921.rest = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D920.first = VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR);
  _V10_Dpair_D920.rest = VNULL;
  _V10_Dpair_D919.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D919.rest = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D918.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D918.rest = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D917.first = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D917.rest = VNULL;
  _V10_Dpair_D916.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D916.rest = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D915.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D915.rest = VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR);
  _V10_Dpair_D914.first = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D914.rest = VNULL;
  _V10_Dpair_D913.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D913.rest = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D912.first = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D912.rest = VNULL;
  _V10_Dpair_D911.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D911.rest = VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR);
  _V10_Dpair_D910.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D910.rest = VEncodePointer(&_V10_Dpair_D909, VPOINTER_PAIR);
  _V10_Dpair_D909.first = VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR);
  _V10_Dpair_D909.rest = VNULL;
  _V10_Dpair_D908.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D908.rest = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D907.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D907.rest = VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR);
  _V10_Dpair_D906.first = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D906.rest = VNULL;
  _V10_Dpair_D905.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D905.rest = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D904.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D904.rest = VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR);
  _V10_Dpair_D903.first = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D903.rest = VNULL;
  _V10_Dpair_D902.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D901.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D901.rest = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D900.first = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D900.rest = VNULL;
  _V10_Dpair_D899.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D899.rest = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D898.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D898.rest = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D897.first = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D897.rest = VNULL;
  _V10_Dpair_D896.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D896.rest = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D895.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D895.rest = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D894.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D894.rest = VNULL;
  _V10_Dpair_D893.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D892.rest = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D891.first = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D891.rest = VNULL;
  _V10_Dpair_D890.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D890.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D889.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D889.rest = VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR);
  _V10_Dpair_D888.first = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D888.rest = VNULL;
  _V10_Dpair_D887.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D887.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D886.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D886.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D885.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D885.rest = VNULL;
  _V10_Dpair_D884.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D884.rest = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D883.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D883.rest = VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR);
  _V10_Dpair_D882.first = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D882.rest = VNULL;
  _V10_Dpair_D881.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D881.rest = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D880.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D880.rest = VEncodePointer(&_V10_Dpair_D879, VPOINTER_PAIR);
  _V10_Dpair_D879.first = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D879.rest = VNULL;
  _V10_Dpair_D878.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D878.rest = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D877.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D877.rest = VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR);
  _V10_Dpair_D876.first = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D876.rest = VNULL;
  _V10_Dpair_D875.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D875.rest = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D874.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D874.rest = VEncodePointer(&_V10_Dpair_D873, VPOINTER_PAIR);
  _V10_Dpair_D873.first = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D873.rest = VNULL;
  _V10_Dpair_D872.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D872.rest = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D871.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D871.rest = VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR);
  _V10_Dpair_D870.first = VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR);
  _V10_Dpair_D870.rest = VNULL;
  _V10_Dpair_D869.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D869.rest = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D868.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D868.rest = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D867.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D867.rest = VNULL;
  _V10_Dpair_D866.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D866.rest = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D865.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D865.rest = VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR);
  _V10_Dpair_D864.first = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D864.rest = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D863.first = VEncodePointer(&_V10_Dpair_D657, VPOINTER_PAIR);
  _V10_Dpair_D863.rest = VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR);
  _V10_Dpair_D862.first = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D862.rest = VNULL;
  _V10_Dpair_D861.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D861.rest = VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR);
  _V10_Dpair_D860.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D860.rest = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D859.first = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D859.rest = VNULL;
  _V10_Dpair_D858.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D858.rest = VEncodePointer(&_V10_Dpair_D855, VPOINTER_PAIR);
  _V10_Dpair_D857.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D857.rest = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D856.first = VEncodePointer(&_V10_Dpair_D855, VPOINTER_PAIR);
  _V10_Dpair_D856.rest = VNULL;
  _V10_Dpair_D855.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D855.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D854.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D854.rest = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D853.first = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D853.rest = VNULL;
  _V10_Dpair_D852.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D852.rest = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D851.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D851.rest = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D850.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D850.rest = VEncodePointer(&_V10_Dpair_D849, VPOINTER_PAIR);
  _V10_Dpair_D849.first = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D849.rest = VNULL;
  _V10_Dpair_D848.first = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D848.rest = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D847.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D847.rest = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D846.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D846.rest = VEncodePointer(&_V10_Dpair_D845, VPOINTER_PAIR);
  _V10_Dpair_D845.first = VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR);
  _V10_Dpair_D845.rest = VNULL;
  _V10_Dpair_D844.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D844.rest = VEncodePointer(&_V10_Dpair_D841, VPOINTER_PAIR);
  _V10_Dpair_D843.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D843.rest = VEncodePointer(&_V10_Dpair_D842, VPOINTER_PAIR);
  _V10_Dpair_D842.first = VEncodePointer(&_V10_Dpair_D841, VPOINTER_PAIR);
  _V10_Dpair_D842.rest = VNULL;
  _V10_Dpair_D841.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D841.rest = VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR);
  _V10_Dpair_D840.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D840.rest = VEncodePointer(&_V10_Dpair_D839, VPOINTER_PAIR);
  _V10_Dpair_D839.first = VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR);
  _V10_Dpair_D839.rest = VNULL;
  _V10_Dpair_D838.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D838.rest = VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR);
  _V10_Dpair_D837.first = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D837.rest = VEncodePointer(&_V10_Dpair_D620, VPOINTER_PAIR);
  _V10_Dpair_D836.first = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D836.rest = VEncodePointer(&_V10_Dpair_D621, VPOINTER_PAIR);
  _V10_Dpair_D835.first = VEncodeBool(false);
  _V10_Dpair_D835.rest = VEncodePointer(&_V10_Dpair_D834, VPOINTER_PAIR);
  _V10_Dpair_D834.first = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D834.rest = VNULL;
  _V10_Dpair_D833.first = _V0x_D1;
  _V10_Dpair_D833.rest = VNULL;
  _V10_Dpair_D832.first = VEncodePointer(&_V10_Dpair_D831, VPOINTER_PAIR);
  _V10_Dpair_D832.rest = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D831.first = VEncodePointer(&_V10_Dpair_D830, VPOINTER_PAIR);
  _V10_Dpair_D831.rest = VEncodePointer(&_V10_Dpair_D605, VPOINTER_PAIR);
  _V10_Dpair_D830.first = _V0vanity;
  _V10_Dpair_D830.rest = VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR);
  _V10_Dpair_D829.first = _V0compiler;
  _V10_Dpair_D829.rest = VEncodePointer(&_V10_Dpair_D828, VPOINTER_PAIR);
  _V10_Dpair_D828.first = _V0hygienic;
  _V10_Dpair_D828.rest = VEncodePointer(&_V10_Dpair_D827, VPOINTER_PAIR);
  _V10_Dpair_D827.first = _V0global__forms;
  _V10_Dpair_D827.rest = VEncodePointer(&_V10_Dpair_D826, VPOINTER_PAIR);
  _V10_Dpair_D826.first = _V0expand__quasiquote__impl;
  _V10_Dpair_D826.rest = VNULL;
  _V10_Dpair_D825.first = VEncodePointer(&_V10_Dpair_D824, VPOINTER_PAIR);
  _V10_Dpair_D825.rest = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D824.first = VEncodePointer(&_V10_Dpair_D823, VPOINTER_PAIR);
  _V10_Dpair_D824.rest = VEncodePointer(&_V10_Dpair_D579, VPOINTER_PAIR);
  _V10_Dpair_D823.first = _V0vanity;
  _V10_Dpair_D823.rest = VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR);
  _V10_Dpair_D822.first = _V0compiler;
  _V10_Dpair_D822.rest = VEncodePointer(&_V10_Dpair_D821, VPOINTER_PAIR);
  _V10_Dpair_D821.first = _V0hygienic;
  _V10_Dpair_D821.rest = VEncodePointer(&_V10_Dpair_D820, VPOINTER_PAIR);
  _V10_Dpair_D820.first = _V0global__forms;
  _V10_Dpair_D820.rest = VEncodePointer(&_V10_Dpair_D819, VPOINTER_PAIR);
  _V10_Dpair_D819.first = _V0expand__quasiquote;
  _V10_Dpair_D819.rest = VNULL;
  _V10_Dpair_D818.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D818.rest = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D817.first = VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR);
  _V10_Dpair_D817.rest = VNULL;
  _V10_Dpair_D816.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D816.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D815.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D815.rest = VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR);
  _V10_Dpair_D814.first = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D814.rest = VNULL;
  _V10_Dpair_D813.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D813.rest = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D812.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D812.rest = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D811.first = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D811.rest = VNULL;
  _V10_Dpair_D810.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D810.rest = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D809.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D809.rest = VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR);
  _V10_Dpair_D808.first = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D808.rest = VNULL;
  _V10_Dpair_D807.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D807.rest = VEncodePointer(&_V10_Dpair_D614, VPOINTER_PAIR);
  _V10_Dpair_D806.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D806.rest = VEncodePointer(&_V10_Dpair_D615, VPOINTER_PAIR);
  _V10_Dpair_D805.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D805.rest = VEncodePointer(&_V10_Dpair_D804, VPOINTER_PAIR);
  _V10_Dpair_D804.first = VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR);
  _V10_Dpair_D804.rest = VNULL;
  _V10_Dpair_D803.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D803.rest = VEncodePointer(&_V10_Dpair_D800, VPOINTER_PAIR);
  _V10_Dpair_D802.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D802.rest = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D801.first = VEncodePointer(&_V10_Dpair_D800, VPOINTER_PAIR);
  _V10_Dpair_D801.rest = VNULL;
  _V10_Dpair_D800.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D800.rest = VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR);
  _V10_Dpair_D799.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D799.rest = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D798.first = VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR);
  _V10_Dpair_D798.rest = VNULL;
  _V10_Dpair_D797.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D797.rest = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D796.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D796.rest = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D795.first = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D795.rest = VNULL;
  _V10_Dpair_D794.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D794.rest = VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR);
  _V10_Dpair_D793.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D793.rest = VEncodePointer(&_V10_Dpair_D792, VPOINTER_PAIR);
  _V10_Dpair_D792.first = VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR);
  _V10_Dpair_D792.rest = VNULL;
  _V10_Dpair_D791.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D791.rest = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D790.first = VEncodePointer(&_V10_Dpair_D789, VPOINTER_PAIR);
  _V10_Dpair_D790.rest = VNULL;
  _V10_Dpair_D789.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D789.rest = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D788.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D788.rest = VEncodePointer(&_V10_Dpair_D787, VPOINTER_PAIR);
  _V10_Dpair_D787.first = VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR);
  _V10_Dpair_D787.rest = VNULL;
  _V10_Dpair_D786.first = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D786.rest = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D785.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D785.rest = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D784.first = _V0_Mx;
  _V10_Dpair_D784.rest = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D783.first = _V0_Mx;
  _V10_Dpair_D783.rest = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D782.first = _V0_Mx;
  _V10_Dpair_D782.rest = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D781.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D781.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D780.first = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D780.rest = VNULL;
  _V10_Dpair_D779.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D779.rest = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D778.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D778.rest = VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR);
  _V10_Dpair_D777.first = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D777.rest = VNULL;
  _V10_Dpair_D776.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D776.rest = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D775.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D775.rest = VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR);
  _V10_Dpair_D774.first = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D774.rest = VNULL;
  _V10_Dpair_D773.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D773.rest = VEncodePointer(&_V10_Dpair_D770, VPOINTER_PAIR);
  _V10_Dpair_D772.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D772.rest = VEncodePointer(&_V10_Dpair_D771, VPOINTER_PAIR);
  _V10_Dpair_D771.first = VEncodePointer(&_V10_Dpair_D770, VPOINTER_PAIR);
  _V10_Dpair_D771.rest = VNULL;
  _V10_Dpair_D770.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D770.rest = VEncodePointer(&_V10_Dpair_D769, VPOINTER_PAIR);
  _V10_Dpair_D769.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D769.rest = VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR);
  _V10_Dpair_D768.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D768.rest = VEncodePointer(&_V10_Dpair_D767, VPOINTER_PAIR);
  _V10_Dpair_D767.first = VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR);
  _V10_Dpair_D767.rest = VNULL;
  _V10_Dpair_D766.first = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D766.rest = VEncodePointer(&_V10_Dpair_D763, VPOINTER_PAIR);
  _V10_Dpair_D765.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D765.rest = VEncodePointer(&_V10_Dpair_D764, VPOINTER_PAIR);
  _V10_Dpair_D764.first = VEncodePointer(&_V10_Dpair_D763, VPOINTER_PAIR);
  _V10_Dpair_D764.rest = VNULL;
  _V10_Dpair_D763.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D763.rest = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D762.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D762.rest = VEncodePointer(&_V10_Dpair_D761, VPOINTER_PAIR);
  _V10_Dpair_D761.first = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D761.rest = VNULL;
  _V10_Dpair_D760.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D760.rest = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D759.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D759.rest = VEncodePointer(&_V10_Dpair_D758, VPOINTER_PAIR);
  _V10_Dpair_D758.first = VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR);
  _V10_Dpair_D758.rest = VNULL;
  _V10_Dpair_D757.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D757.rest = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D756.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D756.rest = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D755.first = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D755.rest = VNULL;
  _V10_Dpair_D754.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D754.rest = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D753.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D753.rest = VEncodePointer(&_V10_Dpair_D752, VPOINTER_PAIR);
  _V10_Dpair_D752.first = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D752.rest = VNULL;
  _V10_Dpair_D751.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D751.rest = VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR);
  _V10_Dpair_D750.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D750.rest = VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR);
  _V10_Dpair_D749.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D749.rest = VEncodePointer(&_V10_Dpair_D735, VPOINTER_PAIR);
  _V10_Dpair_D748.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D748.rest = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D747.first = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D747.rest = VNULL;
  _V10_Dpair_D746.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D746.rest = VEncodePointer(&_V10_Dpair_D743, VPOINTER_PAIR);
  _V10_Dpair_D745.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D745.rest = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D744.first = VEncodePointer(&_V10_Dpair_D743, VPOINTER_PAIR);
  _V10_Dpair_D744.rest = VNULL;
  _V10_Dpair_D743.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D743.rest = VEncodePointer(&_V10_Dpair_D740, VPOINTER_PAIR);
  _V10_Dpair_D742.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D742.rest = VEncodePointer(&_V10_Dpair_D741, VPOINTER_PAIR);
  _V10_Dpair_D741.first = VEncodePointer(&_V10_Dpair_D740, VPOINTER_PAIR);
  _V10_Dpair_D741.rest = VNULL;
  _V10_Dpair_D740.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D740.rest = VEncodePointer(&_V10_Dpair_D737, VPOINTER_PAIR);
  _V10_Dpair_D739.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D739.rest = VEncodePointer(&_V10_Dpair_D738, VPOINTER_PAIR);
  _V10_Dpair_D738.first = VEncodePointer(&_V10_Dpair_D737, VPOINTER_PAIR);
  _V10_Dpair_D738.rest = VNULL;
  _V10_Dpair_D737.first = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D737.rest = VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR);
  _V10_Dpair_D736.first = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D736.rest = VEncodePointer(&_V10_Dpair_D735, VPOINTER_PAIR);
  _V10_Dpair_D735.first = VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR);
  _V10_Dpair_D735.rest = VNULL;
  _V10_Dpair_D734.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D734.rest = VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR);
  _V10_Dpair_D733.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D733.rest = VEncodePointer(&_V10_Dpair_D732, VPOINTER_PAIR);
  _V10_Dpair_D732.first = VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR);
  _V10_Dpair_D732.rest = VNULL;
  _V10_Dpair_D731.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D731.rest = VEncodePointer(&_V10_Dpair_D658, VPOINTER_PAIR);
  _V10_Dpair_D730.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D730.rest = VEncodePointer(&_V10_Dpair_D659, VPOINTER_PAIR);
  _V10_Dpair_D729.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D729.rest = VEncodePointer(&_V10_Dpair_D728, VPOINTER_PAIR);
  _V10_Dpair_D728.first = VEncodePointer(&_V10_Dpair_D727, VPOINTER_PAIR);
  _V10_Dpair_D728.rest = VNULL;
  _V10_Dpair_D727.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D727.rest = VEncodePointer(&_V10_Dpair_D724, VPOINTER_PAIR);
  _V10_Dpair_D726.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D726.rest = VEncodePointer(&_V10_Dpair_D725, VPOINTER_PAIR);
  _V10_Dpair_D725.first = VEncodePointer(&_V10_Dpair_D724, VPOINTER_PAIR);
  _V10_Dpair_D725.rest = VNULL;
  _V10_Dpair_D724.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D724.rest = VEncodePointer(&_V10_Dpair_D723, VPOINTER_PAIR);
  _V10_Dpair_D723.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D723.rest = VEncodePointer(&_V10_Dpair_D720, VPOINTER_PAIR);
  _V10_Dpair_D722.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D722.rest = VEncodePointer(&_V10_Dpair_D721, VPOINTER_PAIR);
  _V10_Dpair_D721.first = VEncodePointer(&_V10_Dpair_D720, VPOINTER_PAIR);
  _V10_Dpair_D721.rest = VNULL;
  _V10_Dpair_D720.first = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D720.rest = VEncodePointer(&_V10_Dpair_D719, VPOINTER_PAIR);
  _V10_Dpair_D719.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D719.rest = VEncodePointer(&_V10_Dpair_D716, VPOINTER_PAIR);
  _V10_Dpair_D718.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D718.rest = VEncodePointer(&_V10_Dpair_D717, VPOINTER_PAIR);
  _V10_Dpair_D717.first = VEncodePointer(&_V10_Dpair_D716, VPOINTER_PAIR);
  _V10_Dpair_D717.rest = VNULL;
  _V10_Dpair_D716.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D716.rest = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D715.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D715.rest = VEncodePointer(&_V10_Dpair_D714, VPOINTER_PAIR);
  _V10_Dpair_D714.first = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D714.rest = VNULL;
  _V10_Dpair_D713.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D713.rest = VEncodePointer(&_V10_Dpair_D662, VPOINTER_PAIR);
  _V10_Dpair_D712.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D712.rest = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D711.first = VEncodePointer(&_V10_Dpair_D662, VPOINTER_PAIR);
  _V10_Dpair_D711.rest = VNULL;
  _V10_Dpair_D710.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D710.rest = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D709.first = VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR);
  _V10_Dpair_D709.rest = VNULL;
  _V10_Dpair_D708.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D708.rest = VEncodePointer(&_V10_Dpair_D705, VPOINTER_PAIR);
  _V10_Dpair_D707.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D707.rest = VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR);
  _V10_Dpair_D706.first = VEncodePointer(&_V10_Dpair_D705, VPOINTER_PAIR);
  _V10_Dpair_D706.rest = VNULL;
  _V10_Dpair_D705.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D705.rest = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D704.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D704.rest = VEncodePointer(&_V10_Dpair_D703, VPOINTER_PAIR);
  _V10_Dpair_D703.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D703.rest = VNULL;
  _V10_Dpair_D702.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D702.rest = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D701.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D701.rest = VEncodePointer(&_V10_Dpair_D700, VPOINTER_PAIR);
  _V10_Dpair_D700.first = VEncodePointer(&_V10_Dpair_D699, VPOINTER_PAIR);
  _V10_Dpair_D700.rest = VNULL;
  _V10_Dpair_D699.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D699.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D698.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D698.rest = VEncodePointer(&_V10_Dpair_D697, VPOINTER_PAIR);
  _V10_Dpair_D697.first = VEncodePointer(&_V10_Dpair_D696, VPOINTER_PAIR);
  _V10_Dpair_D697.rest = VNULL;
  _V10_Dpair_D696.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D696.rest = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D695.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D695.rest = VEncodePointer(&_V10_Dpair_D694, VPOINTER_PAIR);
  _V10_Dpair_D694.first = VEncodePointer(&_V10_Dpair_D693, VPOINTER_PAIR);
  _V10_Dpair_D694.rest = VNULL;
  _V10_Dpair_D693.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D693.rest = VEncodePointer(&_V10_Dpair_D687, VPOINTER_PAIR);
  _V10_Dpair_D692.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D692.rest = VEncodePointer(&_V10_Dpair_D691, VPOINTER_PAIR);
  _V10_Dpair_D691.first = VEncodePointer(&_V10_Dpair_D690, VPOINTER_PAIR);
  _V10_Dpair_D691.rest = VNULL;
  _V10_Dpair_D690.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D690.rest = VEncodePointer(&_V10_Dpair_D687, VPOINTER_PAIR);
  _V10_Dpair_D689.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D689.rest = VEncodePointer(&_V10_Dpair_D688, VPOINTER_PAIR);
  _V10_Dpair_D688.first = VEncodePointer(&_V10_Dpair_D687, VPOINTER_PAIR);
  _V10_Dpair_D688.rest = VNULL;
  _V10_Dpair_D687.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D687.rest = VEncodePointer(&_V10_Dpair_D681, VPOINTER_PAIR);
  _V10_Dpair_D686.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D686.rest = VEncodePointer(&_V10_Dpair_D685, VPOINTER_PAIR);
  _V10_Dpair_D685.first = VEncodePointer(&_V10_Dpair_D684, VPOINTER_PAIR);
  _V10_Dpair_D685.rest = VNULL;
  _V10_Dpair_D684.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D684.rest = VEncodePointer(&_V10_Dpair_D681, VPOINTER_PAIR);
  _V10_Dpair_D683.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D683.rest = VEncodePointer(&_V10_Dpair_D682, VPOINTER_PAIR);
  _V10_Dpair_D682.first = VEncodePointer(&_V10_Dpair_D681, VPOINTER_PAIR);
  _V10_Dpair_D682.rest = VNULL;
  _V10_Dpair_D681.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D681.rest = VEncodePointer(&_V10_Dpair_D675, VPOINTER_PAIR);
  _V10_Dpair_D680.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D680.rest = VEncodePointer(&_V10_Dpair_D679, VPOINTER_PAIR);
  _V10_Dpair_D679.first = VEncodePointer(&_V10_Dpair_D678, VPOINTER_PAIR);
  _V10_Dpair_D679.rest = VNULL;
  _V10_Dpair_D678.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D678.rest = VEncodePointer(&_V10_Dpair_D675, VPOINTER_PAIR);
  _V10_Dpair_D677.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D677.rest = VEncodePointer(&_V10_Dpair_D676, VPOINTER_PAIR);
  _V10_Dpair_D676.first = VEncodePointer(&_V10_Dpair_D675, VPOINTER_PAIR);
  _V10_Dpair_D676.rest = VNULL;
  _V10_Dpair_D675.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D675.rest = VEncodePointer(&_V10_Dpair_D669, VPOINTER_PAIR);
  _V10_Dpair_D674.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D674.rest = VEncodePointer(&_V10_Dpair_D673, VPOINTER_PAIR);
  _V10_Dpair_D673.first = VEncodePointer(&_V10_Dpair_D672, VPOINTER_PAIR);
  _V10_Dpair_D673.rest = VNULL;
  _V10_Dpair_D672.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D672.rest = VEncodePointer(&_V10_Dpair_D669, VPOINTER_PAIR);
  _V10_Dpair_D671.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D671.rest = VEncodePointer(&_V10_Dpair_D670, VPOINTER_PAIR);
  _V10_Dpair_D670.first = VEncodePointer(&_V10_Dpair_D669, VPOINTER_PAIR);
  _V10_Dpair_D670.rest = VNULL;
  _V10_Dpair_D669.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D669.rest = VEncodePointer(&_V10_Dpair_D663, VPOINTER_PAIR);
  _V10_Dpair_D668.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D668.rest = VEncodePointer(&_V10_Dpair_D667, VPOINTER_PAIR);
  _V10_Dpair_D667.first = VEncodePointer(&_V10_Dpair_D666, VPOINTER_PAIR);
  _V10_Dpair_D667.rest = VNULL;
  _V10_Dpair_D666.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D666.rest = VEncodePointer(&_V10_Dpair_D663, VPOINTER_PAIR);
  _V10_Dpair_D665.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D665.rest = VEncodePointer(&_V10_Dpair_D664, VPOINTER_PAIR);
  _V10_Dpair_D664.first = VEncodePointer(&_V10_Dpair_D663, VPOINTER_PAIR);
  _V10_Dpair_D664.rest = VNULL;
  _V10_Dpair_D663.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D663.rest = VEncodePointer(&_V10_Dpair_D662, VPOINTER_PAIR);
  _V10_Dpair_D662.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D662.rest = VEncodePointer(&_V10_Dpair_D661, VPOINTER_PAIR);
  _V10_Dpair_D661.first = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D661.rest = VEncodePointer(&_V10_Dpair_D658, VPOINTER_PAIR);
  _V10_Dpair_D660.first = VEncodePointer(&_V10_Dpair_D657, VPOINTER_PAIR);
  _V10_Dpair_D660.rest = VEncodePointer(&_V10_Dpair_D659, VPOINTER_PAIR);
  _V10_Dpair_D659.first = VEncodePointer(&_V10_Dpair_D658, VPOINTER_PAIR);
  _V10_Dpair_D659.rest = VNULL;
  _V10_Dpair_D658.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D658.rest = VEncodePointer(&_V10_Dpair_D631, VPOINTER_PAIR);
  _V10_Dpair_D657.first = VEncodeBool(false);
  _V10_Dpair_D657.rest = VEncodePointer(&_V10_Dpair_D656, VPOINTER_PAIR);
  _V10_Dpair_D656.first = VEncodePointer(&_V10_Dpair_D655, VPOINTER_PAIR);
  _V10_Dpair_D656.rest = VNULL;
  _V10_Dpair_D655.first = _V0x;
  _V10_Dpair_D655.rest = VNULL;
  _V10_Dpair_D654.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D654.rest = VEncodePointer(&_V10_Dpair_D653, VPOINTER_PAIR);
  _V10_Dpair_D653.first = VEncodePointer(&_V10_Dpair_D652, VPOINTER_PAIR);
  _V10_Dpair_D653.rest = VNULL;
  _V10_Dpair_D652.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D652.rest = VEncodePointer(&_V10_Dpair_D649, VPOINTER_PAIR);
  _V10_Dpair_D651.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D651.rest = VEncodePointer(&_V10_Dpair_D650, VPOINTER_PAIR);
  _V10_Dpair_D650.first = VEncodePointer(&_V10_Dpair_D649, VPOINTER_PAIR);
  _V10_Dpair_D650.rest = VNULL;
  _V10_Dpair_D649.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D649.rest = VEncodePointer(&_V10_Dpair_D646, VPOINTER_PAIR);
  _V10_Dpair_D648.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D648.rest = VEncodePointer(&_V10_Dpair_D647, VPOINTER_PAIR);
  _V10_Dpair_D647.first = VEncodePointer(&_V10_Dpair_D646, VPOINTER_PAIR);
  _V10_Dpair_D647.rest = VNULL;
  _V10_Dpair_D646.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D646.rest = VEncodePointer(&_V10_Dpair_D645, VPOINTER_PAIR);
  _V10_Dpair_D645.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D645.rest = VEncodePointer(&_V10_Dpair_D642, VPOINTER_PAIR);
  _V10_Dpair_D644.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D644.rest = VEncodePointer(&_V10_Dpair_D643, VPOINTER_PAIR);
  _V10_Dpair_D643.first = VEncodePointer(&_V10_Dpair_D642, VPOINTER_PAIR);
  _V10_Dpair_D643.rest = VNULL;
  _V10_Dpair_D642.first = VEncodePointer(&_V10_Dpair_D640, VPOINTER_PAIR);
  _V10_Dpair_D642.rest = VEncodePointer(&_V10_Dpair_D641, VPOINTER_PAIR);
  _V10_Dpair_D641.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D641.rest = VEncodePointer(&_V10_Dpair_D637, VPOINTER_PAIR);
  _V10_Dpair_D640.first = _V0_Mx;
  _V10_Dpair_D640.rest = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D639.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D639.rest = VEncodePointer(&_V10_Dpair_D638, VPOINTER_PAIR);
  _V10_Dpair_D638.first = VEncodePointer(&_V10_Dpair_D637, VPOINTER_PAIR);
  _V10_Dpair_D638.rest = VNULL;
  _V10_Dpair_D637.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D637.rest = VEncodePointer(&_V10_Dpair_D634, VPOINTER_PAIR);
  _V10_Dpair_D636.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D636.rest = VEncodePointer(&_V10_Dpair_D635, VPOINTER_PAIR);
  _V10_Dpair_D635.first = VEncodePointer(&_V10_Dpair_D634, VPOINTER_PAIR);
  _V10_Dpair_D635.rest = VNULL;
  _V10_Dpair_D634.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D634.rest = VEncodePointer(&_V10_Dpair_D631, VPOINTER_PAIR);
  _V10_Dpair_D633.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D633.rest = VEncodePointer(&_V10_Dpair_D632, VPOINTER_PAIR);
  _V10_Dpair_D632.first = VEncodePointer(&_V10_Dpair_D631, VPOINTER_PAIR);
  _V10_Dpair_D632.rest = VNULL;
  _V10_Dpair_D631.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D631.rest = VEncodePointer(&_V10_Dpair_D630, VPOINTER_PAIR);
  _V10_Dpair_D630.first = VEncodePointer(&_V10_Dpair_D626, VPOINTER_PAIR);
  _V10_Dpair_D630.rest = VEncodePointer(&_V10_Dpair_D620, VPOINTER_PAIR);
  _V10_Dpair_D629.first = VEncodePointer(&_V10_Dpair_D628, VPOINTER_PAIR);
  _V10_Dpair_D629.rest = VEncodePointer(&_V10_Dpair_D621, VPOINTER_PAIR);
  _V10_Dpair_D628.first = VEncodeBool(false);
  _V10_Dpair_D628.rest = VEncodePointer(&_V10_Dpair_D627, VPOINTER_PAIR);
  _V10_Dpair_D627.first = VEncodePointer(&_V10_Dpair_D626, VPOINTER_PAIR);
  _V10_Dpair_D627.rest = VNULL;
  _V10_Dpair_D626.first = _V0x_D2;
  _V10_Dpair_D626.rest = VNULL;
  _V10_Dpair_D625.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D625.rest = VEncodePointer(&_V10_Dpair_D624, VPOINTER_PAIR);
  _V10_Dpair_D624.first = VEncodePointer(&_V10_Dpair_D623, VPOINTER_PAIR);
  _V10_Dpair_D624.rest = VNULL;
  _V10_Dpair_D623.first = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D623.rest = VEncodePointer(&_V10_Dpair_D620, VPOINTER_PAIR);
  _V10_Dpair_D622.first = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D622.rest = VEncodePointer(&_V10_Dpair_D621, VPOINTER_PAIR);
  _V10_Dpair_D621.first = VEncodePointer(&_V10_Dpair_D620, VPOINTER_PAIR);
  _V10_Dpair_D621.rest = VNULL;
  _V10_Dpair_D620.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D620.rest = VEncodePointer(&_V10_Dpair_D617, VPOINTER_PAIR);
  _V10_Dpair_D619.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D619.rest = VEncodePointer(&_V10_Dpair_D618, VPOINTER_PAIR);
  _V10_Dpair_D618.first = VEncodePointer(&_V10_Dpair_D617, VPOINTER_PAIR);
  _V10_Dpair_D618.rest = VNULL;
  _V10_Dpair_D617.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D617.rest = VEncodePointer(&_V10_Dpair_D614, VPOINTER_PAIR);
  _V10_Dpair_D616.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D616.rest = VEncodePointer(&_V10_Dpair_D615, VPOINTER_PAIR);
  _V10_Dpair_D615.first = VEncodePointer(&_V10_Dpair_D614, VPOINTER_PAIR);
  _V10_Dpair_D615.rest = VNULL;
  _V10_Dpair_D614.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D614.rest = VEncodePointer(&_V10_Dpair_D611, VPOINTER_PAIR);
  _V10_Dpair_D613.first = VEncodePointer(&_V10_Dpair_D610, VPOINTER_PAIR);
  _V10_Dpair_D613.rest = VEncodePointer(&_V10_Dpair_D612, VPOINTER_PAIR);
  _V10_Dpair_D612.first = VEncodePointer(&_V10_Dpair_D611, VPOINTER_PAIR);
  _V10_Dpair_D612.rest = VNULL;
  _V10_Dpair_D611.first = VEncodePointer(&_V10_Dpair_D604, VPOINTER_PAIR);
  _V10_Dpair_D611.rest = VEncodePointer(&_V10_Dpair_D591, VPOINTER_PAIR);
  _V10_Dpair_D610.first = VEncodeBool(false);
  _V10_Dpair_D610.rest = VEncodePointer(&_V10_Dpair_D609, VPOINTER_PAIR);
  _V10_Dpair_D609.first = VEncodePointer(&_V10_Dpair_D608, VPOINTER_PAIR);
  _V10_Dpair_D609.rest = VNULL;
  _V10_Dpair_D608.first = _V0_Mp;
  _V10_Dpair_D608.rest = VNULL;
  _V10_Dpair_D607.first = VEncodePointer(&_V10_Dpair_D606, VPOINTER_PAIR);
  _V10_Dpair_D607.rest = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D606.first = VEncodePointer(&_V10_Dpair_D601, VPOINTER_PAIR);
  _V10_Dpair_D606.rest = VEncodePointer(&_V10_Dpair_D605, VPOINTER_PAIR);
  _V10_Dpair_D605.first = VEncodePointer(&_V10_Dpair_D604, VPOINTER_PAIR);
  _V10_Dpair_D605.rest = VNULL;
  _V10_Dpair_D604.first = _V0_Mk;
  _V10_Dpair_D604.rest = VEncodePointer(&_V10_Dpair_D603, VPOINTER_PAIR);
  _V10_Dpair_D603.first = _V0quotation;
  _V10_Dpair_D603.rest = VEncodePointer(&_V10_Dpair_D602, VPOINTER_PAIR);
  _V10_Dpair_D602.first = _V0expr;
  _V10_Dpair_D602.rest = VNULL;
  _V10_Dpair_D601.first = _V0vanity;
  _V10_Dpair_D601.rest = VEncodePointer(&_V10_Dpair_D600, VPOINTER_PAIR);
  _V10_Dpair_D600.first = _V0compiler;
  _V10_Dpair_D600.rest = VEncodePointer(&_V10_Dpair_D599, VPOINTER_PAIR);
  _V10_Dpair_D599.first = _V0hygienic;
  _V10_Dpair_D599.rest = VEncodePointer(&_V10_Dpair_D598, VPOINTER_PAIR);
  _V10_Dpair_D598.first = _V0global__forms;
  _V10_Dpair_D598.rest = VEncodePointer(&_V10_Dpair_D597, VPOINTER_PAIR);
  _V10_Dpair_D597.first = _V0expand__quasisyntax__impl;
  _V10_Dpair_D597.rest = VNULL;
  _V10_Dpair_D596.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D596.rest = VEncodePointer(&_V10_Dpair_D595, VPOINTER_PAIR);
  _V10_Dpair_D595.first = VEncodePointer(&_V10_Dpair_D594, VPOINTER_PAIR);
  _V10_Dpair_D595.rest = VNULL;
  _V10_Dpair_D594.first = VEncodePointer(&_V10_Dpair_D578, VPOINTER_PAIR);
  _V10_Dpair_D594.rest = VEncodePointer(&_V10_Dpair_D591, VPOINTER_PAIR);
  _V10_Dpair_D593.first = VEncodePointer(&_V10_Dpair_D580, VPOINTER_PAIR);
  _V10_Dpair_D593.rest = VEncodePointer(&_V10_Dpair_D592, VPOINTER_PAIR);
  _V10_Dpair_D592.first = VEncodePointer(&_V10_Dpair_D591, VPOINTER_PAIR);
  _V10_Dpair_D592.rest = VNULL;
  _V10_Dpair_D591.first = VEncodePointer(&_V10_Dpair_D589, VPOINTER_PAIR);
  _V10_Dpair_D591.rest = VEncodePointer(&_V10_Dpair_D590, VPOINTER_PAIR);
  _V10_Dpair_D590.first = VEncodePointer(&_V10_Dpair_D568, VPOINTER_PAIR);
  _V10_Dpair_D590.rest = VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR);
  _V10_Dpair_D589.first = _V0global__form__env;
  _V10_Dpair_D589.rest = VEncodePointer(&_V10_Dpair_D588, VPOINTER_PAIR);
  _V10_Dpair_D588.first = _V0global__forms;
  _V10_Dpair_D588.rest = VEncodePointer(&_V10_Dpair_D587, VPOINTER_PAIR);
  _V10_Dpair_D587.first = _V0expand__quasisyntax;
  _V10_Dpair_D587.rest = VEncodePointer(&_V10_Dpair_D586, VPOINTER_PAIR);
  _V10_Dpair_D586.first = _V0expand__quasisyntax__impl;
  _V10_Dpair_D586.rest = VEncodePointer(&_V10_Dpair_D585, VPOINTER_PAIR);
  _V10_Dpair_D585.first = _V0expand__quasiquote;
  _V10_Dpair_D585.rest = VEncodePointer(&_V10_Dpair_D584, VPOINTER_PAIR);
  _V10_Dpair_D584.first = _V0expand__quasiquote__impl;
  _V10_Dpair_D584.rest = VEncodePointer(&_V10_Dpair_D583, VPOINTER_PAIR);
  _V10_Dpair_D583.first = _V0expand__let;
  _V10_Dpair_D583.rest = VEncodePointer(&_V10_Dpair_D582, VPOINTER_PAIR);
  _V10_Dpair_D582.first = _V0syntax__unpack;
  _V10_Dpair_D582.rest = VEncodePointer(&_V10_Dpair_D581, VPOINTER_PAIR);
  _V10_Dpair_D581.first = _V0global__identifier;
  _V10_Dpair_D581.rest = VNULL;
  _V10_Dpair_D580.first = VEncodePointer(&_V10_Dpair_D576, VPOINTER_PAIR);
  _V10_Dpair_D580.rest = VEncodePointer(&_V10_Dpair_D579, VPOINTER_PAIR);
  _V10_Dpair_D579.first = VEncodePointer(&_V10_Dpair_D578, VPOINTER_PAIR);
  _V10_Dpair_D579.rest = VNULL;
  _V10_Dpair_D578.first = _V0_Mk;
  _V10_Dpair_D578.rest = VEncodePointer(&_V10_Dpair_D577, VPOINTER_PAIR);
  _V10_Dpair_D577.first = _V0form;
  _V10_Dpair_D577.rest = VNULL;
  _V10_Dpair_D576.first = _V0vanity;
  _V10_Dpair_D576.rest = VEncodePointer(&_V10_Dpair_D575, VPOINTER_PAIR);
  _V10_Dpair_D575.first = _V0compiler;
  _V10_Dpair_D575.rest = VEncodePointer(&_V10_Dpair_D574, VPOINTER_PAIR);
  _V10_Dpair_D574.first = _V0hygienic;
  _V10_Dpair_D574.rest = VEncodePointer(&_V10_Dpair_D573, VPOINTER_PAIR);
  _V10_Dpair_D573.first = _V0global__forms;
  _V10_Dpair_D573.rest = VEncodePointer(&_V10_Dpair_D572, VPOINTER_PAIR);
  _V10_Dpair_D572.first = _V0expand__quasisyntax;
  _V10_Dpair_D572.rest = VNULL;
  _V10_Dpair_D571.first = VEncodePointer(&_V10_Dpair_D570, VPOINTER_PAIR);
  _V10_Dpair_D571.rest = VEncodePointer(&_V10_Dpair_D525, VPOINTER_PAIR);
  _V10_Dpair_D570.first = VEncodeBool(false);
  _V10_Dpair_D570.rest = VEncodePointer(&_V10_Dpair_D569, VPOINTER_PAIR);
  _V10_Dpair_D569.first = VEncodePointer(&_V10_Dpair_D568, VPOINTER_PAIR);
  _V10_Dpair_D569.rest = VNULL;
  _V10_Dpair_D568.first = _V0_Mk;
  _V10_Dpair_D568.rest = VEncodePointer(&_V10_Dpair_D567, VPOINTER_PAIR);
  _V10_Dpair_D567.first = _V0syntax__cadr;
  _V10_Dpair_D567.rest = VEncodePointer(&_V10_Dpair_D566, VPOINTER_PAIR);
  _V10_Dpair_D566.first = _V0syntax__vector_Q;
  _V10_Dpair_D566.rest = VEncodePointer(&_V10_Dpair_D565, VPOINTER_PAIR);
  _V10_Dpair_D565.first = _V0vector___Glist;
  _V10_Dpair_D565.rest = VEncodePointer(&_V10_Dpair_D564, VPOINTER_PAIR);
  _V10_Dpair_D564.first = _V0f64vector___Glist;
  _V10_Dpair_D564.rest = VEncodePointer(&_V10_Dpair_D563, VPOINTER_PAIR);
  _V10_Dpair_D563.first = _V0f32vector___Glist;
  _V10_Dpair_D563.rest = VEncodePointer(&_V10_Dpair_D562, VPOINTER_PAIR);
  _V10_Dpair_D562.first = _V0s32vector___Glist;
  _V10_Dpair_D562.rest = VEncodePointer(&_V10_Dpair_D561, VPOINTER_PAIR);
  _V10_Dpair_D561.first = _V0u16vector___Glist;
  _V10_Dpair_D561.rest = VEncodePointer(&_V10_Dpair_D560, VPOINTER_PAIR);
  _V10_Dpair_D560.first = _V0s16vector___Glist;
  _V10_Dpair_D560.rest = VEncodePointer(&_V10_Dpair_D559, VPOINTER_PAIR);
  _V10_Dpair_D559.first = _V0u8vector___Glist;
  _V10_Dpair_D559.rest = VEncodePointer(&_V10_Dpair_D558, VPOINTER_PAIR);
  _V10_Dpair_D558.first = _V0s8vector___Glist;
  _V10_Dpair_D558.rest = VEncodePointer(&_V10_Dpair_D557, VPOINTER_PAIR);
  _V10_Dpair_D557.first = _V0identifier_Q;
  _V10_Dpair_D557.rest = VEncodePointer(&_V10_Dpair_D556, VPOINTER_PAIR);
  _V10_Dpair_D556.first = _V0get__syntax__data;
  _V10_Dpair_D556.rest = VEncodePointer(&_V10_Dpair_D555, VPOINTER_PAIR);
  _V10_Dpair_D555.first = _V0syntax__caar;
  _V10_Dpair_D555.rest = VEncodePointer(&_V10_Dpair_D554, VPOINTER_PAIR);
  _V10_Dpair_D554.first = _V0syntax__pair_Q;
  _V10_Dpair_D554.rest = VEncodePointer(&_V10_Dpair_D553, VPOINTER_PAIR);
  _V10_Dpair_D553.first = _V0syntax__car;
  _V10_Dpair_D553.rest = VEncodePointer(&_V10_Dpair_D552, VPOINTER_PAIR);
  _V10_Dpair_D552.first = _V0syntax__cdr;
  _V10_Dpair_D552.rest = VEncodePointer(&_V10_Dpair_D551, VPOINTER_PAIR);
  _V10_Dpair_D551.first = _V0syntax__map;
  _V10_Dpair_D551.rest = VEncodePointer(&_V10_Dpair_D550, VPOINTER_PAIR);
  _V10_Dpair_D550.first = _V0syntax__cddr;
  _V10_Dpair_D550.rest = VEncodePointer(&_V10_Dpair_D549, VPOINTER_PAIR);
  _V10_Dpair_D549.first = _V0syntax_Q;
  _V10_Dpair_D549.rest = VEncodePointer(&_V10_Dpair_D548, VPOINTER_PAIR);
  _V10_Dpair_D548.first = _V0make__syntax;
  _V10_Dpair_D548.rest = VEncodePointer(&_V10_Dpair_D547, VPOINTER_PAIR);
  _V10_Dpair_D547.first = _V0global__scope;
  _V10_Dpair_D547.rest = VEncodePointer(&_V10_Dpair_D546, VPOINTER_PAIR);
  _V10_Dpair_D546.first = _V0list;
  _V10_Dpair_D546.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D541.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D541.rest = VEncodePointer(&_V10_Dpair_D540, VPOINTER_PAIR);
  _V10_Dpair_D540.first = VEncodePointer(&_V10_Dpair_D539, VPOINTER_PAIR);
  _V10_Dpair_D540.rest = VNULL;
  _V10_Dpair_D539.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D539.rest = VEncodePointer(&_V10_Dpair_D536, VPOINTER_PAIR);
  _V10_Dpair_D538.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D538.rest = VEncodePointer(&_V10_Dpair_D537, VPOINTER_PAIR);
  _V10_Dpair_D537.first = VEncodePointer(&_V10_Dpair_D536, VPOINTER_PAIR);
  _V10_Dpair_D537.rest = VNULL;
  _V10_Dpair_D536.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D536.rest = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D535.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D535.rest = VEncodePointer(&_V10_Dpair_D534, VPOINTER_PAIR);
  _V10_Dpair_D534.first = VEncodePointer(&_V10_Dpair_D533, VPOINTER_PAIR);
  _V10_Dpair_D534.rest = VNULL;
  _V10_Dpair_D533.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D533.rest = VEncodePointer(&_V10_Dpair_D530, VPOINTER_PAIR);
  _V10_Dpair_D532.first = VEncodePointer(&_V10_Dpair_D529, VPOINTER_PAIR);
  _V10_Dpair_D532.rest = VEncodePointer(&_V10_Dpair_D531, VPOINTER_PAIR);
  _V10_Dpair_D531.first = VEncodePointer(&_V10_Dpair_D530, VPOINTER_PAIR);
  _V10_Dpair_D531.rest = VNULL;
  _V10_Dpair_D530.first = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D530.rest = VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR);
  _V10_Dpair_D529.first = VEncodeBool(false);
  _V10_Dpair_D529.rest = VEncodePointer(&_V10_Dpair_D528, VPOINTER_PAIR);
  _V10_Dpair_D528.first = VEncodePointer(&_V10_Dpair_D527, VPOINTER_PAIR);
  _V10_Dpair_D528.rest = VNULL;
  _V10_Dpair_D527.first = _V0_Mx;
  _V10_Dpair_D527.rest = VNULL;
  _V10_Dpair_D526.first = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D526.rest = VEncodePointer(&_V10_Dpair_D525, VPOINTER_PAIR);
  _V10_Dpair_D525.first = VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR);
  _V10_Dpair_D525.rest = VNULL;
  _V10_Dpair_D524.first = VEncodePointer(&_V10_Dpair_D522, VPOINTER_PAIR);
  _V10_Dpair_D524.rest = VEncodePointer(&_V10_Dpair_D523, VPOINTER_PAIR);
  _V10_Dpair_D523.first = VNULL;
  _V10_Dpair_D523.rest = VNULL;
  _V10_Dpair_D522.first = VEncodeBool(false);
  _V10_Dpair_D522.rest = VEncodePointer(&_V10_Dpair_D521, VPOINTER_PAIR);
  _V10_Dpair_D521.first = VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR);
  _V10_Dpair_D521.rest = VNULL;
  _V10_Dpair_D520.first = _V0_Mk;
  _V10_Dpair_D520.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4, VEncodePointer(&_V10_Dpair_D541, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3, VEncodePointer(&_V10_Dpair_D538, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2, VEncodePointer(&_V10_Dpair_D535, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1, VEncodePointer(&_V10_Dpair_D532, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5, VEncodePointer(&_V10_Dpair_D596, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, VEncodePointer(&_V10_Dpair_D593, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10, VEncodePointer(&_V10_Dpair_D625, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9, VEncodePointer(&_V10_Dpair_D622, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18, VEncodePointer(&_V10_Dpair_D654, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17, VEncodePointer(&_V10_Dpair_D651, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16, VEncodePointer(&_V10_Dpair_D648, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15, VEncodePointer(&_V10_Dpair_D644, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14, VEncodePointer(&_V10_Dpair_D639, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13, VEncodePointer(&_V10_Dpair_D636, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12, VEncodePointer(&_V10_Dpair_D633, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21, VEncodePointer(&_V10_Dpair_D668, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20, VEncodePointer(&_V10_Dpair_D665, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23, VEncodePointer(&_V10_Dpair_D674, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22, VEncodePointer(&_V10_Dpair_D671, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25, VEncodePointer(&_V10_Dpair_D680, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24, VEncodePointer(&_V10_Dpair_D677, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27, VEncodePointer(&_V10_Dpair_D686, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26, VEncodePointer(&_V10_Dpair_D683, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29, VEncodePointer(&_V10_Dpair_D692, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28, VEncodePointer(&_V10_Dpair_D689, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31, VEncodePointer(&_V10_Dpair_D698, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30, VEncodePointer(&_V10_Dpair_D695, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33, VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32, VEncodePointer(&_V10_Dpair_D701, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35, VEncodePointer(&_V10_Dpair_D710, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34, VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41, VEncodePointer(&_V10_Dpair_D729, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40, VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39, VEncodePointer(&_V10_Dpair_D722, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38, VEncodePointer(&_V10_Dpair_D718, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37, VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36, VEncodePointer(&_V10_Dpair_D712, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19, VEncodePointer(&_V10_Dpair_D660, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48, VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47, VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46, VEncodePointer(&_V10_Dpair_D742, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45, VEncodePointer(&_V10_Dpair_D739, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44, VEncodePointer(&_V10_Dpair_D736, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54, VEncodePointer(&_V10_Dpair_D765, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53, VEncodePointer(&_V10_Dpair_D762, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52, VEncodePointer(&_V10_Dpair_D759, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51, VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50, VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65, VEncodePointer(&_V10_Dpair_D791, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64, VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63, VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62, VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61, VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60, VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59, VEncodePointer(&_V10_Dpair_D768, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58, VEncodePointer(&_V10_Dpair_D762, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57, VEncodePointer(&_V10_Dpair_D759, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56, VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55, VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70, VEncodePointer(&_V10_Dpair_D805, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69, VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68, VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67, VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66, VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49, VEncodePointer(&_V10_Dpair_D749, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43, VEncodePointer(&_V10_Dpair_D733, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42, VEncodePointer(&_V10_Dpair_D730, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11, VEncodePointer(&_V10_Dpair_D629, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8, VEncodePointer(&_V10_Dpair_D619, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7, VEncodePointer(&_V10_Dpair_D616, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75, VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74, VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73, VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72, VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76, VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71, VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6, VEncodePointer(&_V10_Dpair_D613, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, VEncodePointer(&_V10_Dpair_D607, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77, VEncodePointer(&_V10_Dpair_D596, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82, VEncodePointer(&_V10_Dpair_D625, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81, VEncodePointer(&_V10_Dpair_D622, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90, VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89, VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88, VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87, VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86, VEncodePointer(&_V10_Dpair_D846, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85, VEncodePointer(&_V10_Dpair_D843, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84, VEncodePointer(&_V10_Dpair_D840, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93, VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92, VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95, VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94, VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97, VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96, VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99, VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98, VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101, VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100, VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103, VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102, VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105, VEncodePointer(&_V10_Dpair_D907, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104, VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107, VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106, VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113, VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112, VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111, VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110, VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109, VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108, VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91, VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120, VEncodePointer(&_V10_Dpair_D951, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119, VEncodePointer(&_V10_Dpair_D948, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118, VEncodePointer(&_V10_Dpair_D945, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117, VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116, VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126, VEncodePointer(&_V10_Dpair_D968, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125, VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124, VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123, VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122, VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137, VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136, VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135, VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134, VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133, VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132, VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131, VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130, VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129, VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128, VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127, VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142, VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140, VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139, VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138, VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121, VEncodePointer(&_V10_Dpair_D952, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115, VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114, VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83, VEncodePointer(&_V10_Dpair_D836, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80, VEncodePointer(&_V10_Dpair_D619, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79, VEncodePointer(&_V10_Dpair_D616, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147, VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146, VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145, VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144, VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148, VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143, VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78, VEncodePointer(&_V10_Dpair_D613, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, VEncodePointer(&_V10_Dpair_D832, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154, VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153, VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152, VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151, VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150, VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149, VEncodePointer(&_V10_Dpair_D596, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155, VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157, VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156, VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159, VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158, VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D571, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D524, VPOINTER_PAIR));
}
