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

VEnv * _V60_V0vanity_V0compiler_V0match;

static VPair _V10_Dpair_D1197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0iter;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iter" };
static VPair _V10_Dpair_D1127 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1126 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1125 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0infinites;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0infinites = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "infinites" };
static VPair _V10_Dpair_D1122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1121 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1120 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1119 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1118 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Diter_D66;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Diter_D66 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.iter.66" };
static VPair _V10_Dpair_D1117 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1116 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1115 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1109 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
static VPair _V10_Dpair_D1108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
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
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1086 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "match expression contains too many ellipses" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D1085 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "match expressions such as (x ... y ...) or (x ... . y) are ill formed" };
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
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1064 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1054 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0patterns;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0patterns = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "patterns" };
static VPair _V10_Dpair_D1053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D63;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D63 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.63" };
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
VWEAK VWORD _V0input;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0input = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "input" };
static VPair _V10_Dpair_D1038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1037 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
static VPair _V10_Dpair_D1036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
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
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static VPair _V10_Dpair_D998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D991 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
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
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
static VPair _V10_Dpair_D965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
static VPair _V10_Dpair_D958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D953 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "typevectors in matches not supported" };
static VPair _V10_Dpair_D952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D950 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D949 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D948 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
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
VWEAK VWORD _V10_Dmatch__iter_D34;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10_Dmatch__iter_D34 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##.match-iter.34" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D928 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D927 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0var;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0var = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "var" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0sym;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0sym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "sym" };
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
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
VWEAK VWORD _V10vcore_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.call/cc" };
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
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
static VPair _V10_Dpair_D889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
static VPair _V10_Dpair_D882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
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
VWEAK VWORD _V0k2;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0k2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "k2" };
static VPair _V10_Dpair_D862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static VPair _V10_Dpair_D856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D855 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0syms;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0syms = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "syms" };
static VPair _V10_Dpair_D850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D845 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0variables;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "variables" };
static VPair _V10_Dpair_D844 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D843 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D842 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D841 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D840 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0pattern;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pattern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pattern" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D832 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "head" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "tail" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
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
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V10vcore_D_L;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10vcore_D_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##vcore.<" };
static VPair _V10_Dpair_D806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0tail;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0tail = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "tail" };
static VPair _V10_Dpair_D800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D796 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D795 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D793 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0head;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0head = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "head" };
static VPair _V10_Dpair_D792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D791 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0len;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0len = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "len" };
static VPair _V10_Dpair_D786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0head__pattern;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0head__pattern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "head-pattern" };
static VPair _V10_Dpair_D781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0tail__pattern;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0tail__pattern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "tail-pattern" };
static VPair _V10_Dpair_D778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_D_D_D;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0_D_D_D = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "..." };
static VPair _V10_Dpair_D777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0match__iter;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0match__iter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "match-iter" };
VWEAK VWORD _V0match__ellipses;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0match__ellipses = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "match-ellipses" };
static VPair _V10_Dpair_D768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D764 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0success__expr;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0success__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "success-expr" };
VWEAK VWORD _V0pattern__stack;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0pattern__stack = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "pattern-stack" };
VWEAK VWORD _V0expr__stack;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0expr__stack = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "expr-stack" };
static VPair _V10_Dpair_D762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D760 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dmatch__ellipses_D33;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10_Dmatch__ellipses_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##.match-ellipses.33" };
static VPair _V10_Dpair_D757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0gather__variables;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0gather__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "gather-variables" };
VWEAK VWORD _V0check__pattern;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0check__pattern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "check-pattern" };
static VPair _V10_Dpair_D750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D746 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D742 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
VWEAK VWORD _V0match;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "match" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
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
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D705 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D704 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D703 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D702 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0gather__variables, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match, _var0, _var1, _var2);
static void _V0vanity_V0compiler_V0match_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.73 3 0) (##string ##.string.721) (bruijn ##.%x.74 0 0) 'cadr 'cdar 'caar 'list 'compiler-warning 'cddr 'gensym 'typevector? 'atom? 'cadar 'compiler-error 'num-pairs 'cddar 'map)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 17,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER),
      _var0,
      _V0cadr,
      _V0cdar,
      _V0caar,
      _V0list,
      _V0compiler__warning,
      _V0cddr,
      _V0gensym,
      _V0typevector_Q,
      _V0atom_Q,
      _V0cadar,
      _V0compiler__error,
      _V0num__pairs,
      _V0cddar,
      _V0map);
}
static void _V0vanity_V0compiler_V0match_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0match_V20_V0k3) (bruijn ##.%x.75 1 0) (bruijn ##.%x.76 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0match_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k2) (##string ##.string.722))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k1) (##string ##.string.723))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D723.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 10 10 (##.%x.441 ##.%x.442 ##.%x.443 ##.%x.444 ##.%x.445 ##.%x.446 ##.%x.447 ##.%x.448 ##.%x.449 ##.%r.450) ((##vcore.cons (bruijn ##.%x.93 1 0) '()) (##vcore.cons (bruijn ##.%x.434 2 14) (bruijn ##.%x.441 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.442 0 1)) (##vcore.cons (bruijn ##.%x.443 0 2) '()) (##vcore.cons (bruijn ##.%x.432 2 12) (bruijn ##.%x.444 0 3)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.445 0 4)) (##vcore.cons (bruijn ##.%x.446 0 5) '()) (##vcore.cons '#f (bruijn ##.%x.447 0 6)) (##vcore.cons (bruijn ##.%x.425 2 5) (bruijn ##.%x.448 0 7)) (##vcore.cons 'if (bruijn ##.%x.449 0 8))) ((bruijn ##.%k.79 10 0) (bruijn ##.%r.450 0 9)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[10]; } container;
    self = &container.self;
    VInitEnv(self, 10, 10, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[14],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[12],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[5],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[8]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[9]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 21 21 (##.%x.420 ##.%x.421 ##.%x.422 ##.%x.423 ##.%x.424 ##.%x.425 ##.%x.426 ##.%x.427 ##.%x.428 ##.%x.429 ##.%x.430 ##.%x.431 ##.%x.432 ##.%x.433 ##.%x.434 ##.%x.435 ##.%x.436 ##.%x.437 ##.%x.438 ##.%x.439 ##.%x.440) ((##vcore.car (bruijn ##.expr-stack.35 8 1)) (##vcore.cons (bruijn ##.%x.420 0 0) '()) (##vcore.cons 'num-pairs (bruijn ##.%x.421 0 1)) (##vcore.cons (bruijn ##.len.40 4 0) '()) (##vcore.cons (bruijn ##.%x.422 0 2) (bruijn ##.%x.423 0 3)) (##vcore.cons '##vcore.< (bruijn ##.%x.424 0 4)) (##vcore.car (bruijn ##.expr-stack.35 8 1)) (##vcore.cons (bruijn ##.len.40 4 0) '()) (##vcore.cons (bruijn ##.%x.426 0 6) (bruijn ##.%x.427 0 7)) (##vcore.cons 'split-at-right (bruijn ##.%x.428 0 8)) (##vcore.cons (bruijn ##.%x.429 0 9) '()) (##vcore.cons '() (bruijn ##.%x.430 0 10)) (##vcore.cons 'lambda (bruijn ##.%x.431 0 11)) (##vcore.cons (bruijn ##.tail.42 1 0) '()) (##vcore.cons (bruijn ##.head.41 2 0) (bruijn ##.%x.433 0 13)) (##vcore.cdr (bruijn ##.expr-stack.35 8 1)) (##vcore.cons (bruijn ##.tail.42 1 0) (bruijn ##.%x.435 0 15)) (##vcore.cons (bruijn ##.head.41 2 0) (bruijn ##.%x.436 0 16)) (##vcore.cdr (bruijn ##.pattern-stack.36 8 2)) (##vcore.cons (bruijn ##.tail-pattern.39 5 0) (bruijn ##.%x.438 0 18)) (##vcore.cons (bruijn ##.head-pattern.418 6 0) (bruijn ##.%x.439 0 19))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 9 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9) (bruijn ##.%x.437 0 17) (bruijn ##.%x.440 0 20) (bruijn ##.success-expr.37 8 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[21]; } container;
    self = &container.self;
    VInitEnv(self, 21, 21, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0num__pairs,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_D_L,
      self->vars[4]);
    self->vars[6] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0split__at__right,
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      VNULL);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[13]);
    self->vars[15] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[16]);
    self->vars[18] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[19]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9, self))));
    VWORD _arg1 = 
      self->vars[17];
    VWORD _arg2 = 
      self->vars[20];
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 10 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8) (##string ##.string.831))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D831.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.504 ##.%x.505 ##.%x.506 ##.%x.507 ##.%x.508 ##.%r.509) ((##vcore.cons (bruijn ##.%x.119 1 0) '()) (##vcore.cons (bruijn ##.%x.500 2 27) (bruijn ##.%x.504 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.505 0 1)) (##vcore.cons (bruijn ##.%x.506 0 2) '()) (##vcore.cons (bruijn ##.%x.499 2 26) (bruijn ##.%x.507 0 3)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.508 0 4))) ((bruijn ##.%k.79 29 0) (bruijn ##.%r.509 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[27],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[26],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 31 31 (##.%x.473 ##.%x.474 ##.%x.475 ##.%x.476 ##.%x.477 ##.%x.478 ##.%x.479 ##.%x.480 ##.%x.481 ##.%x.482 ##.%x.483 ##.%x.484 ##.%x.485 ##.%x.486 ##.%x.487 ##.%x.488 ##.%x.489 ##.%x.490 ##.%x.491 ##.%x.492 ##.%x.493 ##.%x.494 ##.%x.495 ##.%x.496 ##.%x.497 ##.%x.498 ##.%x.499 ##.%x.500 ##.%x.501 ##.%x.502 ##.%x.503) ((##vcore.cons (bruijn ##.expr.50 13 0) (bruijn ##.%x.154 1 0)) (##vcore.cons (bruijn ##.k.48 15 0) (bruijn ##.%x.473 0 0)) (##vcore.cons (bruijn ##.%x.474 0 1) '()) (##vcore.cons (bruijn ##.%x.150 2 0) (bruijn ##.%x.475 0 2)) (##vcore.cons (bruijn ##.%x.466 8 5) (bruijn ##.%x.476 0 3)) (##vcore.cons 'lambda (bruijn ##.%x.477 0 4)) (##vcore.cons (bruijn ##.%x.478 0 5) '()) (##vcore.cons '##vcore.call/cc (bruijn ##.%x.479 0 6)) (##vcore.cons (bruijn ##.%x.480 0 7) '()) (##vcore.cons '() (bruijn ##.%x.481 0 8)) (##vcore.cons 'lambda (bruijn ##.%x.482 0 9)) (##vcore.cons 'loop '()) (##vcore.cons (bruijn ##.%x.483 0 10) (bruijn ##.%x.484 0 11)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.485 0 12)) (##vcore.cons (bruijn ##.%x.486 0 13) '()) (##vcore.cons (bruijn ##.%x.465 8 4) (bruijn ##.%x.487 0 14)) (##vcore.cons (bruijn ##.%x.456 10 0) (bruijn ##.%x.488 0 15)) (##vcore.cons 'loop (bruijn ##.%x.489 0 16)) (##vcore.cons 'let (bruijn ##.%x.490 0 17)) (##vcore.cons (bruijn ##.%x.491 0 18) '()) (##vcore.cons (bruijn ##.%x.452 12 0) (bruijn ##.%x.492 0 19)) (##vcore.cons 'lambda (bruijn ##.%x.493 0 20)) (##vcore.cons (bruijn ##.%x.494 0 21) '()) (##vcore.cons '##vcore.call/cc (bruijn ##.%x.495 0 22)) (##vcore.cons (bruijn ##.%x.496 0 23) '()) (##vcore.cons '() (bruijn ##.%x.497 0 24)) (##vcore.cons 'lambda (bruijn ##.%x.498 0 25)) (##vcore.cons 'tail-expr (bruijn ##.variables.46 17 0)) (##vcore.cdr (bruijn ##.expr-stack.35 27 1)) (##vcore.cons 'tail-expr (bruijn ##.%x.501 0 28)) (##vcore.cons (bruijn ##.tail-pattern.44 20 0) (bruijn ##.pattern-stack.451 19 0))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 28 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25) (bruijn ##.%x.502 0 29) (bruijn ##.%x.503 0 30) (bruijn ##.success-expr.37 27 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[31]; } container;
    self = &container.self;
    VInitEnv(self, 31, 31, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 15-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 5),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall_Wcc,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0loop,
      VNULL);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      VNULL);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 4),
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0loop,
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      VNULL);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[20]);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      VNULL);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall_Wcc,
      self->vars[22]);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      VNULL);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[24]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[25]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V0tail__expr,
      VGetArg(statics, 17-1, 0));
    self->vars[28] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 27-1, 1));
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      _V0tail__expr,
      self->vars[28]);
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 20-1, 0),
      VGetArg(statics, 19-1, 0));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 28-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25, self))));
    VWORD _arg1 = 
      self->vars[29];
    VWORD _arg2 = 
      self->vars[30];
    VWORD _arg3 = 
      VGetArg(statics, 27-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.510 ##.%r.511) ((##vcore.cons (bruijn ##.sym.55 1 1) '()) (##vcore.cons 'reverse (bruijn ##.%x.510 0 0))) ((bruijn ##.%k.155 1 0) (bruijn ##.%r.511 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0reverse,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.14 29 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4) (bruijn ##.syms.47 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4, self)))),
      VGetArg(statics, 14-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.471 ##.%x.472) ((##vcore.cons (bruijn ##.%x.470 2 1) (bruijn ##.%x.162 1 0)) (##vcore.cons (bruijn ##.k2.49 11 0) (bruijn ##.%x.471 0 0))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 25 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23) (bruijn ##.%x.157 4 0) (bruijn ##.%x.158 3 0) (bruijn ##.%x.472 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      self->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.512 ##.%x.513 ##.%r.514) ((##vcore.cons (bruijn ##.sym.54 1 2) '()) (##vcore.cons (bruijn ##.var.53 1 1) (bruijn ##.%x.512 0 0)) (##vcore.cons '##vcore.cons (bruijn ##.%x.513 0 1))) ((bruijn ##.%k.163 1 0) (bruijn ##.%r.514 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcons,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.469 ##.%x.470) ((##vcore.cons (bruijn ##.expr.50 8 0) '()) (##vcore.cons '##vcore.cdr (bruijn ##.%x.469 0 0))) ((bruijn ##.map.14 26 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5) (bruijn ##.variables.46 12 0) (bruijn ##.syms.47 11 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcdr,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 14)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5, self)))),
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 11-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.4 24 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21) (bruijn ##.pattern.43 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21, self)))),
      VGetArg(statics, 14-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.461 ##.%x.462 ##.%x.463 ##.%x.464 ##.%x.465 ##.%x.466 ##.%x.467 ##.%x.468) ((##vcore.cons (bruijn ##.expr.50 5 0) (bruijn ##.%x.174 1 0)) (##vcore.cons (bruijn ##.k.48 7 0) (bruijn ##.%x.461 0 0)) (##vcore.cons (bruijn ##.%x.462 0 1) '()) (##vcore.cons (bruijn ##.%x.460 2 4) (bruijn ##.%x.463 0 2)) (##vcore.cons 'if (bruijn ##.%x.464 0 3)) (##vcore.cons (bruijn ##.k2.49 6 0) '()) (##vcore.cons (bruijn ##.expr.50 5 0) '()) (##vcore.cons '##vcore.car (bruijn ##.%x.467 0 6))) ((bruijn ##.list.4 23 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20) (bruijn ##.%x.468 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcar,
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20, self)))),
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.515 ##.%r.516) ((##vcore.cons (bruijn ##.sym.52 1 1) '()) (##vcore.cons 'reverse (bruijn ##.%x.515 0 0))) ((bruijn ##.%k.175 1 0) (bruijn ##.%r.516 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0reverse,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.456 ##.%x.457 ##.%x.458 ##.%x.459 ##.%x.460) ((##vcore.cons (bruijn ##.%x.455 2 3) (bruijn ##.%x.181 1 0)) (##vcore.cons (bruijn ##.expr.50 3 0) '()) (##vcore.cons '##vcore.pair? (bruijn ##.%x.457 0 1)) (##vcore.cons (bruijn ##.%x.458 0 2) '()) (##vcore.cons '##vcore.not (bruijn ##.%x.459 0 3))) ((bruijn ##.map.14 21 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6) (bruijn ##.syms.47 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[3],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dpair_Q,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dnot,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6, self)))),
      VGetArg(statics, 6-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 4 4 (##.%x.517 ##.%x.518 ##.%x.519 ##.%r.520) ((##vcore.cons '() '()) (##vcore.cons 'quote (bruijn ##.%x.517 0 0)) (##vcore.cons (bruijn ##.%x.518 0 1) '()) (##vcore.cons (bruijn ##.sym.51 1 1) (bruijn ##.%x.519 0 2))) ((bruijn ##.%k.182 1 0) (bruijn ##.%r.520 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0quote,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.452 ##.%x.453 ##.%x.454 ##.%x.455) ((##vcore.cons (bruijn ##.k.48 3 0) '()) (##vcore.car (bruijn ##.expr-stack.35 15 1)) (##vcore.cons (bruijn ##.%x.453 0 1) '()) (##vcore.cons (bruijn ##.expr.50 1 0) (bruijn ##.%x.454 0 2))) ((bruijn ##.map.14 19 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda7) (bruijn ##.syms.47 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda7, self)))),
      statics->up->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 17 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17) (##string ##.string.927))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17, self)))),
      VEncodePointer(&_V10_Dstring_D927.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 16 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16) (##string ##.string.928))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16, self)))),
      VEncodePointer(&_V10_Dstring_D928.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 15 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15) (##string ##.string.928))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D928.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.14 14 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14) (bruijn ##.gensym.7 14 7) (bruijn ##.variables.46 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14, self)))),
      VGetArg(statics, 14-1, 7),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 12 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13) (bruijn ##.%x.188 0 0) (bruijn ##.eqv?.32 11 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.pattern-stack.451) ((##vcore.cdr (bruijn ##.pattern-stack.36 8 2))) ((bruijn ##.list.4 12 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12) (bruijn ##.pattern.43 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12, self)))),
      statics->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddar.13 10 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11) (bruijn ##.pattern-stack.36 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11, self)))),
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.419) ((##vcore.> (bruijn ##.len.40 1 0) 0)) (if (bruijn ##.%p.419 0 0) ((bruijn ##.gensym.7 9 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7) (##string ##.string.832)) ((bruijn ##.caar.3 9 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10) (bruijn ##.pattern-stack.36 5 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D832.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10, self)))),
      VGetArg(statics, 5-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.num-pairs.12 7 12) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6) (bruijn ##.tail-pattern.39 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.head-pattern.418) ((##vcore.cons (bruijn ##.%x.189 1 0) '(##pair ##.pair.778))) ((bruijn ##.cddar.13 6 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5) (bruijn ##.pattern-stack.36 2 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VEncodePointer(&_V10_Dpair_D778, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5, self)))),
      statics->up->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33, got ~D~N"
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
  // ((bruijn ##.caar.3 4 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4) (bruijn ##.pattern-stack.36 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.534 ##.%x.535 ##.%r.536) ((##vcore.cons (bruijn ##.%x.199 1 0) '()) (##vcore.cons (bruijn ##.%x.531 2 4) (bruijn ##.%x.534 0 0)) (##vcore.cons 'let (bruijn ##.%x.535 0 1))) ((bruijn ##.%k.190 7 0) (bruijn ##.%r.536 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.549 ##.%x.550 ##.%r.551) ((##vcore.cons (bruijn ##.%x.214 1 0) '()) (##vcore.cons (bruijn ##.%x.546 2 2) (bruijn ##.%x.549 0 0)) (##vcore.cons 'if (bruijn ##.%x.550 0 1))) ((bruijn ##.%k.190 11 0) (bruijn ##.%r.551 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.567 ##.%x.568 ##.%r.569) ((##vcore.cons (bruijn ##.%x.223 1 0) '()) (##vcore.cons (bruijn ##.%x.564 2 10) (bruijn ##.%x.567 0 0)) (##vcore.cons 'if (bruijn ##.%x.568 0 1))) ((bruijn ##.%k.190 12 0) (bruijn ##.%r.569 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[10],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.578 ##.%x.579 ##.%r.580) ((##vcore.cons (bruijn ##.%x.240 1 0) '()) (##vcore.cons (bruijn ##.%x.575 2 4) (bruijn ##.%x.578 0 0)) (##vcore.cons 'if (bruijn ##.%x.579 0 1))) ((bruijn ##.%k.190 14 0) (bruijn ##.%r.580 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.32 16 2) (bruijn ##.%k.312 1 0) (bruijn ##.%x.313 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.582 1 1) ((bruijn ##.caar.3 17 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34) (bruijn ##.pattern-stack.57 13 2)) ((bruijn ##.%k.312 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34, self)))),
      VGetArg(statics, 13-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.596 ##.%r.597) ((##vcore.null? (bruijn ##.%x.265 1 0)) (##vcore.not (bruijn ##.%x.596 0 0))) ((bruijn ##.%k.263 2 0) (bruijn ##.%r.597 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.584 1 1) ((bruijn ##.%k.263 0 0) (bruijn ##.%p.584 1 1)) ((bruijn ##.cddar.13 20 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38) (bruijn ##.pattern-stack.57 16 2)))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38, self)))),
      VGetArg(statics, 16-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.260 1 0) ((bruijn ##.compiler-error.11 21 11) (bruijn ##.%k.261 0 0) (##string ##.string.991)) ((bruijn ##.%k.261 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 11)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D991.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.593 ##.%x.594 ##.%r.595) ((##vcore.cons (bruijn ##.%x.251 1 0) '()) (##vcore.cons (bruijn ##.%x.590 2 5) (bruijn ##.%x.593 0 0)) (##vcore.cons 'if (bruijn ##.%x.594 0 1))) ((bruijn ##.%k.190 20 0) (bruijn ##.%r.595 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[5],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.585 ##.%x.586 ##.%x.587 ##.%x.588 ##.%x.589 ##.%x.590 ##.%x.591 ##.%x.592) ((##vcore.cons (bruijn ##.%x.259 1 0) '()) (##vcore.cons 'quote (bruijn ##.%x.585 0 0)) (##vcore.car (bruijn ##.expr-stack.56 18 1)) (##vcore.cons (bruijn ##.%x.587 0 2) '()) (##vcore.cons (bruijn ##.%x.586 0 1) (bruijn ##.%x.588 0 3)) (##vcore.cons 'equal? (bruijn ##.%x.589 0 4)) (##vcore.cdr (bruijn ##.expr-stack.56 18 1)) (##vcore.cdr (bruijn ##.pattern-stack.57 18 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 19 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43) (bruijn ##.%x.591 0 6) (bruijn ##.%x.592 0 7) (bruijn ##.success-expr.58 18 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0quote,
      self->vars[0]);
    self->vars[2] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0equal_Q,
      self->vars[4]);
    self->vars[6] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[7] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43, self))));
    VWORD _arg1 = 
      self->vars[6];
    VWORD _arg2 = 
      self->vars[7];
    VWORD _arg3 = 
      VGetArg(statics, 18-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadar.10 20 10) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42) (bruijn ##.pattern-stack.57 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.583 ##.%p.584) ((##vcore.pair? (bruijn ##.%x.267 1 0)) (##vcore.not (bruijn ##.%x.583 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.32 20 2) (bruijn ##.%k.306 3 0) (bruijn ##.%x.308 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 3,
      statics->up->up->vars[0],
      _var0,
      _V0_D_D_D);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.634) ((##vcore.pair? (bruijn ##.%x.309 1 0))) (if (bruijn ##.%p.634 0 0) ((bruijn ##.cadar.10 21 10) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46) (bruijn ##.pattern-stack.57 17 2)) ((bruijn ##.%k.306 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46, self)))),
      VGetArg(statics, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.599 1 1) ((bruijn ##.cdar.2 19 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45) (bruijn ##.pattern-stack.57 15 2)) ((bruijn ##.%k.306 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45, self)))),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.606 ##.%x.607 ##.%r.608) ((##vcore.cons (bruijn ##.%x.272 1 0) '()) (##vcore.cons (bruijn ##.%x.603 2 3) (bruijn ##.%x.606 0 0)) (##vcore.cons 'let (bruijn ##.%x.607 0 1))) ((bruijn ##.%k.190 19 0) (bruijn ##.%r.608 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[3],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.600 ##.%x.601 ##.%x.602 ##.%x.603 ##.%x.604 ##.%x.605) ((##vcore.car (bruijn ##.expr-stack.56 17 1)) (##vcore.cons (bruijn ##.%x.600 0 0) '()) (##vcore.cons (bruijn ##.sym.59 1 0) (bruijn ##.%x.601 0 1)) (##vcore.cons (bruijn ##.%x.602 0 2) '()) (##vcore.cdr (bruijn ##.expr-stack.56 17 1)) (##vcore.cons (bruijn ##.sym.59 1 0) (bruijn ##.%x.604 0 4))) (##qualified-call (vanity compiler match transform-match ##.match-ellipses.33) #f (bruijn ##.match-ellipses.33 18 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49) (bruijn ##.%x.605 0 5) (bruijn ##.pattern-stack.57 17 2) (bruijn ##.success-expr.58 17 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[4]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49, self))));
    VWORD _arg1 = 
      self->vars[5];
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 17-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.627 ##.%x.628 ##.%x.629 ##.%x.630 ##.%x.631 ##.%r.632) ((##vcore.cons (bruijn ##.%x.286 1 0) '()) (##vcore.cons (bruijn ##.%x.616 5 5) (bruijn ##.%x.627 0 0)) (##vcore.cons 'if (bruijn ##.%x.628 0 1)) (##vcore.cons (bruijn ##.%x.629 0 2) '()) (##vcore.cons (bruijn ##.%x.614 5 3) (bruijn ##.%x.630 0 3)) (##vcore.cons 'let (bruijn ##.%x.631 0 4))) ((bruijn ##.%k.190 23 0) (bruijn ##.%r.632 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 5),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 3),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.624 ##.%x.625 ##.%x.626) ((##vcore.cdr (bruijn ##.pattern-stack.57 21 2)) (##vcore.cons (bruijn ##.%x.291 1 0) (bruijn ##.%x.624 0 0)) (##vcore.cons (bruijn ##.%x.289 2 0) (bruijn ##.%x.625 0 1))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 22 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53) (bruijn ##.%x.623 3 12) (bruijn ##.%x.626 0 2) (bruijn ##.success-expr.58 21 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53, self))));
    VWORD _arg1 = 
      statics->up->up->vars[12];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 21-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.2 23 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52) (bruijn ##.pattern-stack.57 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52, self)))),
      VGetArg(statics, 19-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 13 13 (##.%x.611 ##.%x.612 ##.%x.613 ##.%x.614 ##.%x.615 ##.%x.616 ##.%x.617 ##.%x.618 ##.%x.619 ##.%x.620 ##.%x.621 ##.%x.622 ##.%x.623) ((##vcore.car (bruijn ##.expr-stack.56 18 1)) (##vcore.cons (bruijn ##.%x.611 0 0) '()) (##vcore.cons (bruijn ##.sym.60 1 0) (bruijn ##.%x.612 0 1)) (##vcore.cons (bruijn ##.%x.613 0 2) '()) (##vcore.cons (bruijn ##.sym.60 1 0) '()) (##vcore.cons '##vcore.pair? (bruijn ##.%x.615 0 4)) (##vcore.cons (bruijn ##.sym.60 1 0) '()) (##vcore.cons '##vcore.car (bruijn ##.%x.617 0 6)) (##vcore.cons (bruijn ##.sym.60 1 0) '()) (##vcore.cons '##vcore.cdr (bruijn ##.%x.619 0 8)) (##vcore.cdr (bruijn ##.expr-stack.56 18 1)) (##vcore.cons (bruijn ##.%x.620 0 9) (bruijn ##.%x.621 0 10)) (##vcore.cons (bruijn ##.%x.618 0 7) (bruijn ##.%x.622 0 11))) ((bruijn ##.caar.3 22 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51) (bruijn ##.pattern-stack.57 18 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dpair_Q,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcar,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcdr,
      self->vars[8]);
    self->vars[10] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[11]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51, self)))),
      VGetArg(statics, 18-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.268 0 0) ((bruijn ##.gensym.7 19 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48) (##string ##.string.927)) (basic-block 2 2 (##.%x.609 ##.%p.610) ((##vcore.car (bruijn ##.pattern-stack.57 16 2)) (##vcore.pair? (bruijn ##.%x.609 0 0))) (if (bruijn ##.%p.610 0 1) ((bruijn ##.gensym.7 20 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50) (##string ##.string.927)) (basic-block 1 1 (##.%x.633) ((##vcore.car (bruijn ##.pattern-stack.57 17 2))) ((bruijn ##.compiler-error.11 21 11) (bruijn ##.%k.190 17 0) (##string ##.string.1037) (bruijn ##.%x.633 0 0))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48, self)))),
      VEncodePointer(&_V10_Dstring_D927.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50, self)))),
      VEncodePointer(&_V10_Dstring_D927.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 11)), 3,
      VGetArg(statics, 17-1, 0),
      VEncodePointer(&_V10_Dstring_D1037.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.247 0 0) ((bruijn ##.cdar.2 17 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36) (bruijn ##.pattern-stack.57 13 2)) (basic-block 2 2 (##.%x.598 ##.%p.599) ((##vcore.car (bruijn ##.pattern-stack.57 14 2)) (##vcore.pair? (bruijn ##.%x.598 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36, self)))),
      VGetArg(statics, 13-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.236 0 0) (basic-block 7 7 (##.%x.571 ##.%x.572 ##.%x.573 ##.%x.574 ##.%x.575 ##.%x.576 ##.%x.577) ((##vcore.car (bruijn ##.pattern-stack.57 12 2)) (##vcore.car (bruijn ##.expr-stack.56 12 1)) (##vcore.cons (bruijn ##.%x.572 0 1) '()) (##vcore.cons (bruijn ##.%x.571 0 0) (bruijn ##.%x.573 0 2)) (##vcore.cons '##vcore.eq? (bruijn ##.%x.574 0 3)) (##vcore.cdr (bruijn ##.expr-stack.56 12 1)) (##vcore.cdr (bruijn ##.pattern-stack.57 12 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 13 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32) (bruijn ##.%x.576 0 5) (bruijn ##.%x.577 0 6) (bruijn ##.success-expr.58 12 3))) (basic-block 2 2 (##.%x.581 ##.%p.582) ((##vcore.car (bruijn ##.pattern-stack.57 12 2)) (##vcore.pair? (bruijn ##.%x.581 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Deq_Q,
      self->vars[3]);
    self->vars[5] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[6] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32, self))));
    VWORD _arg1 = 
      self->vars[5];
    VWORD _arg2 = 
      self->vars[6];
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.208 0 0) (basic-block 1 1 (##.%x.541) ((##vcore.car (bruijn ##.pattern-stack.57 8 2))) ((bruijn ##.compiler-error.11 12 11) (bruijn ##.%k.190 8 0) (##string ##.string.953) (bruijn ##.%x.541 0 0))) (basic-block 2 2 (##.%x.542 ##.%p.543) ((##vcore.car (bruijn ##.pattern-stack.57 8 2)) (##vcore.null? (bruijn ##.%x.542 0 0))) (if (bruijn ##.%p.543 0 1) (basic-block 5 5 (##.%x.544 ##.%x.545 ##.%x.546 ##.%x.547 ##.%x.548) ((##vcore.car (bruijn ##.expr-stack.56 9 1)) (##vcore.cons (bruijn ##.%x.544 0 0) '()) (##vcore.cons '##vcore.null? (bruijn ##.%x.545 0 1)) (##vcore.cdr (bruijn ##.expr-stack.56 9 1)) (##vcore.cdr (bruijn ##.pattern-stack.57 9 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 10 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29) (bruijn ##.%x.547 0 3) (bruijn ##.%x.548 0 4) (bruijn ##.success-expr.58 9 3))) (basic-block 2 2 (##.%x.552 ##.%p.553) ((##vcore.car (bruijn ##.pattern-stack.57 9 2)) (##vcore.string? (bruijn ##.%x.552 0 0))) (if (bruijn ##.%p.553 0 1) (basic-block 13 13 (##.%x.554 ##.%x.555 ##.%x.556 ##.%x.557 ##.%x.558 ##.%x.559 ##.%x.560 ##.%x.561 ##.%x.562 ##.%x.563 ##.%x.564 ##.%x.565 ##.%x.566) ((##vcore.car (bruijn ##.expr-stack.56 10 1)) (##vcore.cons (bruijn ##.%x.554 0 0) '()) (##vcore.cons '##vcore.string? (bruijn ##.%x.555 0 1)) (##vcore.car (bruijn ##.pattern-stack.57 10 2)) (##vcore.car (bruijn ##.expr-stack.56 10 1)) (##vcore.cons (bruijn ##.%x.558 0 4) '()) (##vcore.cons (bruijn ##.%x.557 0 3) (bruijn ##.%x.559 0 5)) (##vcore.cons '##vcore.blob=? (bruijn ##.%x.560 0 6)) (##vcore.cons (bruijn ##.%x.561 0 7) '()) (##vcore.cons (bruijn ##.%x.556 0 2) (bruijn ##.%x.562 0 8)) (##vcore.cons 'and (bruijn ##.%x.563 0 9)) (##vcore.cdr (bruijn ##.expr-stack.56 10 1)) (##vcore.cdr (bruijn ##.pattern-stack.57 10 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 11 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30) (bruijn ##.%x.565 0 11) (bruijn ##.%x.566 0 12) (bruijn ##.success-expr.58 10 3))) (basic-block 1 1 (##.%x.570) ((##vcore.car (bruijn ##.pattern-stack.57 10 2))) ((bruijn ##.atom?.9 14 9) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31) (bruijn ##.%x.570 0 0))))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D953.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dnull_Q,
      self->vars[1]);
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29, self))));
    VWORD _arg1 = 
      self->vars[3];
    VWORD _arg2 = 
      self->vars[4];
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dstring_Q,
      self->vars[1]);
    self->vars[3] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    self->vars[4] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dblob_E_Q,
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0and,
      self->vars[9]);
    self->vars[11] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[12] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30, self))));
    VWORD _arg1 = 
      self->vars[11];
    VWORD _arg2 = 
      self->vars[12];
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31, self)))),
      self->vars[0]);
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.192 0 0) (basic-block 2 2 (##.%x.523 ##.%x.524) ((##vcore.cdr (bruijn ##.expr-stack.56 4 1)) (##vcore.cdr (bruijn ##.pattern-stack.57 4 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 5 1) (bruijn ##.%k.190 4 0) (bruijn ##.%x.523 0 0) (bruijn ##.%x.524 0 1) (bruijn ##.success-expr.58 4 3))) (basic-block 2 2 (##.%x.525 ##.%p.526) ((##vcore.car (bruijn ##.pattern-stack.57 4 2)) (##vcore.symbol? (bruijn ##.%x.525 0 0))) (if (bruijn ##.%p.526 0 1) (basic-block 7 7 (##.%x.527 ##.%x.528 ##.%x.529 ##.%x.530 ##.%x.531 ##.%x.532 ##.%x.533) ((##vcore.car (bruijn ##.pattern-stack.57 5 2)) (##vcore.car (bruijn ##.expr-stack.56 5 1)) (##vcore.cons (bruijn ##.%x.528 0 1) '()) (##vcore.cons (bruijn ##.%x.527 0 0) (bruijn ##.%x.529 0 2)) (##vcore.cons (bruijn ##.%x.530 0 3) '()) (##vcore.cdr (bruijn ##.expr-stack.56 5 1)) (##vcore.cdr (bruijn ##.pattern-stack.57 5 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 6 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27) (bruijn ##.%x.532 0 5) (bruijn ##.%x.533 0 6) (bruijn ##.success-expr.58 5 3))) (basic-block 2 2 (##.%x.537 ##.%p.538) ((##vcore.car (bruijn ##.pattern-stack.57 5 2)) (##vcore.vector? (bruijn ##.%x.537 0 0))) (if (bruijn ##.%p.538 0 1) (basic-block 1 1 (##.%x.539) ((##vcore.car (bruijn ##.pattern-stack.57 6 2))) ((bruijn ##.compiler-error.11 10 11) (bruijn ##.%k.190 6 0) (##string ##.string.948) (bruijn ##.%x.539 0 0))) (basic-block 1 1 (##.%x.540) ((##vcore.car (bruijn ##.pattern-stack.57 6 2))) ((bruijn ##.typevector?.8 10 8) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28) (bruijn ##.%x.540 0 0))))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[6] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27, self))));
    VWORD _arg1 = 
      self->vars[5];
    VWORD _arg2 = 
      self->vars[6];
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VVectorP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D948.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28, self)))),
      self->vars[0]);
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34, got ~D~N"
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
  // (basic-block 1 1 (##.%p.521) ((##vcore.null? (bruijn ##.pattern-stack.57 1 2))) (if (bruijn ##.%p.521 0 0) ((bruijn ##.%k.190 1 0) (bruijn ##.success-expr.58 1 3)) (basic-block 1 1 (##.%x.522) ((##vcore.car (bruijn ##.pattern-stack.57 2 2))) ((bruijn ##.eqv?.32 4 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k26) (bruijn ##.%x.522 0 0) '_))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k26, self)))),
      self->vars[0],
      _V0_U);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.643 ##.%x.644 ##.%x.645 ##.%x.646 ##.%x.647 ##.%r.648) ((##vcore.cons '() (bruijn ##.%x.343 1 0)) (##vcore.cons 'lambda (bruijn ##.%x.643 0 0)) (##vcore.cons (bruijn ##.k.322 11 0) '()) (##vcore.cons (bruijn ##.%x.644 0 1) (bruijn ##.%x.645 0 2)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.646 0 3)) (##vcore.cons (bruijn ##.%x.647 0 4) '())) ((bruijn ##.%k.333 5 0) (bruijn ##.%r.648 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[5]);
    }
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.compiler-warning.5 18 5) (bruijn ##.%k.358 1 0) (##string ##.string.1085))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1085.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.compiler-warning.5 18 5) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k64) (##string ##.string.1086) (bruijn ##.%x.359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k64, self)))),
      VEncodePointer(&_V10_Dstring_D1086.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.649 1 0) ((bruijn ##.caar.3 17 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k63) (bruijn ##.patterns.64 7 1)) ((bruijn ##.%k.358 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k63, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.657) ((##vcore.cons (bruijn ##.%x.344 3 0) (bruijn ##.%x.345 1 0))) ((bruijn ##.%k.333 15 0) (bruijn ##.%r.657 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.656) ((##vcore.cdr (bruijn ##.patterns.64 13 1))) (##qualified-call (vanity compiler match transform-match ##.loop.63) #f (bruijn ##.loop.63 14 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k71) (bruijn ##.%x.656 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k71, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.650 ##.%x.651 ##.%x.652 ##.%x.653 ##.%x.654 ##.%x.655) ((##vcore.cons '() (bruijn ##.%x.355 1 0)) (##vcore.cons 'lambda (bruijn ##.%x.650 0 0)) (##vcore.cons (bruijn ##.k.322 17 0) '()) (##vcore.cons (bruijn ##.%x.651 0 1) (bruijn ##.%x.652 0 2)) (##vcore.cons '##vcore.call-with-values (bruijn ##.%x.653 0 3)) (##vcore.cons (bruijn ##.%x.654 0 4) '())) (##qualified-call (vanity compiler match transform-match ##.match-iter.34) #f (bruijn ##.match-iter.34 18 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k70) (bruijn ##.%x.347 4 0) (bruijn ##.%x.348 2 0) (bruijn ##.%x.655 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 17-1, 0),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall__with__values,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k70, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      self->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.2 19 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k69) (bruijn ##.patterns.64 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k69, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.4 18 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k68) (bruijn ##.%x.356 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k68, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caar.3 17 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k67) (bruijn ##.patterns.64 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k67, self)))),
      VGetArg(statics, 7-1, 1));
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.list.4 16 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k66) (bruijn ##.input.323 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k66, self)))),
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.649) ((##vcore.not (bruijn ##.%x.360 1 0))) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k62) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k65)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k65, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.29 13 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k61) (bruijn ##.%x.361 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k61, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.337 0 0) ((bruijn ##.cdar.2 13 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k59) (bruijn ##.patterns.64 3 1)) ((bruijn ##.caar.3 13 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k60) (bruijn ##.patterns.64 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k59, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k60, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eqv?.32 10 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k58) (bruijn ##.%x.362 0 0) 'else)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k58, self)))),
      _var0,
      _V0else);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.639) ((##vcore.null? (bruijn ##.patterns.64 1 1))) (if (bruijn ##.%p.639 0 0) (basic-block 3 3 (##.%x.640 ##.%x.641 ##.%r.642) ((##vcore.cons '(##string ##.string.1064) '()) (##vcore.cons 'error (bruijn ##.%x.640 0 0)) (##vcore.cons (bruijn ##.%x.641 0 1) '())) ((bruijn ##.%k.333 2 0) (bruijn ##.%r.642 0 2))) ((bruijn ##.caar.3 11 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k57) (bruijn ##.patterns.64 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D1064.sym, VPOINTER_OTHER),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0error,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k57, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.658 ##.%x.659 ##.%x.660 ##.%x.661 ##.%x.662 ##.%x.663 ##.%r.664) ((##vcore.cons (bruijn ##.%x.638 4 2) (bruijn ##.%x.332 1 0)) (##vcore.cons 'let (bruijn ##.%x.658 0 0)) (##vcore.cons (bruijn ##.%x.659 0 1) '()) (##vcore.cons (bruijn ##.%x.635 6 0) (bruijn ##.%x.660 0 2)) (##vcore.cons 'lambda (bruijn ##.%x.661 0 3)) (##vcore.cons (bruijn ##.%x.662 0 4) '()) (##vcore.cons '##vcore.call/cc (bruijn ##.%x.663 0 5))) ((bruijn ##.%k.78 10 0) (bruijn ##.%r.664 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcall_Wcc,
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.loop.63) #f (bruijn ##.loop.63 1 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73) (bruijn ##.%x.363 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.636 ##.%x.637 ##.%x.638) ((##vcore.cons (bruijn ##.%x.366 1 0) '()) (##vcore.cons (bruijn ##.input.323 3 0) (bruijn ##.%x.636 0 0)) (##vcore.cons (bruijn ##.%x.637 0 1) '())) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63")) ((bruijn ##.cddr.6 9 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k72) (bruijn ##.expr.31 7 1))))
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
      self->vars[1],
      VNULL);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k72, self)))),
      VGetArg(statics, 7-1, 1));
    }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.635) ((##vcore.cons (bruijn ##.k.322 2 0) '())) ((bruijn ##.cadr.1 6 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56) (bruijn ##.expr.31 4 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56, self)))),
      statics->up->up->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.7 4 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55) (##string ##.string.1109))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55, self)))),
      VEncodePointer(&_V10_Dstring_D1109.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33") (close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34")) ((bruijn ##.gensym.7 3 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k54) (##string ##.string.928)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k54, self)))),
      VEncodePointer(&_V10_Dstring_D928.sym, VPOINTER_OTHER));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.676) ((##vcore.eq? (bruijn ##.%x.382 1 0) '...)) ((bruijn ##.%k.380 3 0) (bruijn ##.%r.676 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0_D_D_D);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.667 1 0) (basic-block 2 2 (##.%x.674 ##.%p.675) ((##vcore.cdr (bruijn ##.pattern.67 4 1)) (##vcore.pair? (bruijn ##.%x.674 0 0))) (if (bruijn ##.%p.675 0 1) ((bruijn ##.cadr.1 8 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k75) (bruijn ##.pattern.67 4 1)) ((bruijn ##.%k.380 1 0) #f))) ((bruijn ##.%k.380 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k75, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.669) ((##vcore.+ (bruijn ##.infinites.68 7 2) 1)) (##qualified-call (vanity compiler match check-pattern ##.iter.66) #f (bruijn ##.iter.66 8 0) (bruijn ##.%k.368 7 0) (bruijn ##.%x.372 1 0) (bruijn ##.%x.669 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.371 0 0) ((bruijn ##.cddr.6 9 6) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k78) (bruijn ##.pattern.67 5 1)) ((bruijn ##.%k.368 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k78, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.376 0 0) (basic-block 1 1 (##.%x.672) ((##vcore.cdr (bruijn ##.pattern.67 7 1))) (##qualified-call (vanity compiler match check-pattern ##.iter.66) #f (bruijn ##.iter.66 8 0) (bruijn ##.%k.368 7 0) (bruijn ##.%x.672 0 0) (bruijn ##.infinites.68 7 2))) ((bruijn ##.%k.368 6 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.370 0 0) (basic-block 1 1 (##.%x.668) ((##vcore.car (bruijn ##.pattern.67 4 1))) (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.29 7 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k77) (bruijn ##.%x.668 0 0))) (basic-block 1 1 (##.%p.670) ((##vcore.pair? (bruijn ##.pattern.67 4 1))) (if (bruijn ##.%p.670 0 0) (basic-block 1 1 (##.%x.671) ((##vcore.car (bruijn ##.pattern.67 5 1))) (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.29 8 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k79) (bruijn ##.%x.671 0 0))) (basic-block 1 1 (##.%r.673) ((##vcore.<= (bruijn ##.infinites.68 5 2) 1)) ((bruijn ##.%k.368 5 0) (bruijn ##.%r.673 0 0))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k77, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k79, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.665) ((##vcore.symbol? (bruijn ##.pattern.67 1 1))) (if (bruijn ##.%p.665 0 0) (basic-block 1 1 (##.%r.666) ((##vcore.<= (bruijn ##.infinites.68 2 2) 0)) ((bruijn ##.%k.368 2 0) (bruijn ##.%r.666 0 0))) (basic-block 1 1 (##.%p.667) ((##vcore.pair? (bruijn ##.pattern.67 2 1))) ((close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k74) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k76)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k76, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66")) (##qualified-call (vanity compiler match check-pattern ##.iter.66) #f (bruijn ##.iter.66 0 0) (bruijn ##.%k.367 1 0) (bruijn ##.pattern.65 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.686) ((##vcore.cons (bruijn ##.%x.684 2 0) (bruijn ##.%x.392 1 0))) ((bruijn ##.%k.384 9 0) (bruijn ##.%r.686 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.70 14 2) (bruijn ##.%k.408 1 0) (bruijn ##.%x.409 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.695 1 1) ((bruijn ##.caar.3 15 3) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86) (bruijn ##.pattern.69 13 1)) ((bruijn ##.%k.408 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.697 ##.%x.698 ##.%x.699) ((##vcore.cdr (bruijn ##.pattern.69 16 1)) (##vcore.cons (bruijn ##.%x.405 1 0) (bruijn ##.%x.697 0 0)) (##vcore.cons (bruijn ##.%x.403 2 0) (bruijn ##.%x.698 0 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 17 2) (bruijn ##.%k.384 16 0) (bruijn ##.%x.699 0 2) (bruijn ##.eqv?.70 16 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 16-1, 0);
    VWORD _arg1 = 
      self->vars[2];
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.2 16 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89) (bruijn ##.pattern.69 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.400 0 0) (basic-block 1 1 (##.%x.696) ((##vcore.cdr (bruijn ##.pattern.69 14 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 15 2) (bruijn ##.%k.384 14 0) (bruijn ##.%x.696 0 0) (bruijn ##.eqv?.70 14 2))) ((bruijn ##.caar.3 15 3) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88) (bruijn ##.pattern.69 13 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88, self)))),
      VGetArg(statics, 13-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.398 0 0) (basic-block 1 1 (##.%x.693) ((##vcore.cdr (bruijn ##.pattern.69 12 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 13 2) (bruijn ##.%k.384 12 0) (bruijn ##.%x.693 0 0) (bruijn ##.eqv?.70 12 2))) (basic-block 2 2 (##.%x.694 ##.%p.695) ((##vcore.car (bruijn ##.pattern.69 12 1)) (##vcore.pair? (bruijn ##.%x.694 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.396 0 0) (basic-block 1 1 (##.%x.691) ((##vcore.car (bruijn ##.pattern.69 10 1))) ((bruijn ##.compiler-error.11 12 11) (bruijn ##.%k.384 10 0) (##string ##.string.953) (bruijn ##.%x.691 0 0))) (basic-block 1 1 (##.%x.692) ((##vcore.car (bruijn ##.pattern.69 10 1))) ((bruijn ##.atom?.9 12 9) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84) (bruijn ##.%x.692 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D953.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.388 0 0) (basic-block 1 1 (##.%x.681) ((##vcore.cdr (bruijn ##.pattern.69 6 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 7 2) (bruijn ##.%k.384 6 0) (bruijn ##.%x.681 0 0) (bruijn ##.eqv?.70 6 2))) (basic-block 2 2 (##.%x.682 ##.%p.683) ((##vcore.car (bruijn ##.pattern.69 6 1)) (##vcore.symbol? (bruijn ##.%x.682 0 0))) (if (bruijn ##.%p.683 0 1) (basic-block 2 2 (##.%x.684 ##.%x.685) ((##vcore.car (bruijn ##.pattern.69 7 1)) (##vcore.cdr (bruijn ##.pattern.69 7 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 8 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82) (bruijn ##.%x.685 0 1) (bruijn ##.eqv?.70 7 2))) (basic-block 2 2 (##.%x.687 ##.%p.688) ((##vcore.car (bruijn ##.pattern.69 7 1)) (##vcore.vector? (bruijn ##.%x.687 0 0))) (if (bruijn ##.%p.688 0 1) (basic-block 1 1 (##.%x.689) ((##vcore.car (bruijn ##.pattern.69 8 1))) ((bruijn ##.compiler-error.11 10 11) (bruijn ##.%k.384 8 0) (##string ##.string.948) (bruijn ##.%x.689 0 0))) (basic-block 1 1 (##.%x.690) ((##vcore.car (bruijn ##.pattern.69 8 1))) ((bruijn ##.typevector?.8 10 8) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83) (bruijn ##.%x.690 0 0))))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VVectorP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D948.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83, self)))),
      self->vars[0]);
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.386 0 0) (basic-block 1 1 (##.%x.679) ((##vcore.cdr (bruijn ##.pattern.69 4 1))) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.30 5 2) (bruijn ##.%k.384 4 0) (bruijn ##.%x.679 0 0) (bruijn ##.eqv?.70 4 2))) (basic-block 1 1 (##.%x.680) ((##vcore.car (bruijn ##.pattern.69 4 1))) ((bruijn ##.eqv?.70 4 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81) (bruijn ##.%x.680 0 0) '...)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81, self)))),
      self->vars[0],
      _V0_D_D_D);
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.677) ((##vcore.null? (bruijn ##.pattern.69 1 1))) (if (bruijn ##.%p.677 0 0) ((bruijn ##.%k.384 1 0) '()) (basic-block 1 1 (##.%x.678) ((##vcore.car (bruijn ##.pattern.69 2 1))) ((bruijn ##.eqv?.70 2 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k80) (bruijn ##.%x.678 0 0) '_))))
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
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k80, self)))),
      self->vars[0],
      _V0_U);
    }
}
    }
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 15) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda3, got ~D~N"
  "-- expected 15~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[15]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 15, 15, statics);
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
  // (##letrec (vanity compiler match) 3 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match" (vanity compiler match)) (close "_V50_V0vanity_V0compiler_V0match_V0check__pattern" (vanity compiler match)) (close "_V50_V0vanity_V0compiler_V0match_V0gather__variables" (vanity compiler match))) (basic-block 2 2 (##.%x.700 ##.%r.701) ((##vcore.cons 'transform-match (bruijn ##.transform-match.28 1 0)) (##vcore.cons (bruijn ##.%x.700 0 0) '())) ((bruijn ##.%k.77 2 0) (bruijn ##.%r.701 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0match = self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match, _V60_V0vanity_V0compiler_V0match))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0match_V20", &_V60_V0vanity_V0compiler_V0match);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0transform__match,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.72 0 0) (close _V0vanity_V0compiler_V0match_V20_V0lambda2) (close _V0vanity_V0compiler_V0match_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0iter = VEncodePointer(VInternSymbol(1664138977, &_VW_V0iter.sym), VPOINTER_OTHER);
  _V0infinites = VEncodePointer(VInternSymbol(199258039, &_VW_V0infinites.sym), VPOINTER_OTHER);
  _V10_Diter_D66 = VEncodePointer(VInternSymbol(2120849529, &_VW_V10_Diter_D66.sym), VPOINTER_OTHER);
  _V0else = VEncodePointer(VInternSymbol(1332432884, &_VW_V0else.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0patterns = VEncodePointer(VInternSymbol(1717671596, &_VW_V0patterns.sym), VPOINTER_OTHER);
  _V10_Dloop_D63 = VEncodePointer(VInternSymbol(-1485126584, &_VW_V10_Dloop_D63.sym), VPOINTER_OTHER);
  _V0input = VEncodePointer(VInternSymbol(2065659521, &_VW_V0input.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VInternSymbol(434979212, &_VW_V10vcore_Deq_Q.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V10vcore_Dblob_E_Q = VEncodePointer(VInternSymbol(36075437, &_VW_V10vcore_Dblob_E_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VInternSymbol(-1296233363, &_VW_V10vcore_Dstring_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VInternSymbol(-577062031, &_VW_V10vcore_Dnull_Q.sym), VPOINTER_OTHER);
  _V10_Dmatch__iter_D34 = VEncodePointer(VInternSymbol(-478535677, &_VW_V10_Dmatch__iter_D34.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V0var = VEncodePointer(VInternSymbol(-821346661, &_VW_V0var.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0sym = VEncodePointer(VInternSymbol(2139759047, &_VW_V0sym.sym), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VInternSymbol(1213435809, &_VW_V0tail__expr.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V10vcore_Dcall_Wcc = VEncodePointer(VInternSymbol(482979242, &_VW_V10vcore_Dcall_Wcc.sym), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VInternSymbol(-1160051211, &_VW_V10vcore_Dcdr.sym), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VInternSymbol(976741304, &_VW_V10vcore_Dcar.sym), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VInternSymbol(904118690, &_VW_V10vcore_Dnot.sym), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VInternSymbol(-2140366458, &_VW_V10vcore_Dpair_Q.sym), VPOINTER_OTHER);
  _V0k2 = VEncodePointer(VInternSymbol(78766262, &_VW_V0k2.sym), VPOINTER_OTHER);
  _V0k = VEncodePointer(VInternSymbol(-989127837, &_VW_V0k.sym), VPOINTER_OTHER);
  _V0syms = VEncodePointer(VInternSymbol(1795061172, &_VW_V0syms.sym), VPOINTER_OTHER);
  _V0variables = VEncodePointer(VInternSymbol(-2058504899, &_VW_V0variables.sym), VPOINTER_OTHER);
  _V0pattern = VEncodePointer(VInternSymbol(-361813619, &_VW_V0pattern.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VInternSymbol(1537217383, &_VW_V10vcore_Dcall__with__values.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VInternSymbol(-1001750904, &_VW_V0split__at__right.sym), VPOINTER_OTHER);
  _V10vcore_D_L = VEncodePointer(VInternSymbol(1686200305, &_VW_V10vcore_D_L.sym), VPOINTER_OTHER);
  _V0tail = VEncodePointer(VInternSymbol(-872797219, &_VW_V0tail.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0head = VEncodePointer(VInternSymbol(-700204203, &_VW_V0head.sym), VPOINTER_OTHER);
  _V0len = VEncodePointer(VInternSymbol(-191740809, &_VW_V0len.sym), VPOINTER_OTHER);
  _V0head__pattern = VEncodePointer(VInternSymbol(-1118975239, &_VW_V0head__pattern.sym), VPOINTER_OTHER);
  _V0tail__pattern = VEncodePointer(VInternSymbol(-374741093, &_VW_V0tail__pattern.sym), VPOINTER_OTHER);
  _V0_D_D_D = VEncodePointer(VInternSymbol(-1484744521, &_VW_V0_D_D_D.sym), VPOINTER_OTHER);
  _V0match__iter = VEncodePointer(VInternSymbol(1306206242, &_VW_V0match__iter.sym), VPOINTER_OTHER);
  _V0match__ellipses = VEncodePointer(VInternSymbol(-1435667728, &_VW_V0match__ellipses.sym), VPOINTER_OTHER);
  _V0success__expr = VEncodePointer(VInternSymbol(-110074087, &_VW_V0success__expr.sym), VPOINTER_OTHER);
  _V0pattern__stack = VEncodePointer(VInternSymbol(-1942538327, &_VW_V0pattern__stack.sym), VPOINTER_OTHER);
  _V0expr__stack = VEncodePointer(VInternSymbol(-1501981452, &_VW_V0expr__stack.sym), VPOINTER_OTHER);
  _V10_Dmatch__ellipses_D33 = VEncodePointer(VInternSymbol(338259551, &_VW_V10_Dmatch__ellipses_D33.sym), VPOINTER_OTHER);
  _V0gather__variables = VEncodePointer(VInternSymbol(1740973303, &_VW_V0gather__variables.sym), VPOINTER_OTHER);
  _V0check__pattern = VEncodePointer(VInternSymbol(172952088, &_VW_V0check__pattern.sym), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VInternSymbol(232208272, &_VW_V0eqv_Q.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0transform__match = VEncodePointer(VInternSymbol(-834638833, &_VW_V0transform__match.sym), VPOINTER_OTHER);
  _V0match = VEncodePointer(VInternSymbol(-1791781457, &_VW_V0match.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VInternSymbol(-1851430374, &_VW_V0cddar.sym), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VInternSymbol(67164350, &_VW_V0num__pairs.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VInternSymbol(2133063198, &_VW_V0atom_Q.sym), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VInternSymbol(1566825028, &_VW_V0typevector_Q.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VInternSymbol(245497745, &_VW_V0compiler__warning.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D1197.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1197.rest = VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR);
  _V10_Dpair_D1196.first = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1196.rest = VNULL;
  _V10_Dpair_D1195.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1195.rest = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1194.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1194.rest = VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR);
  _V10_Dpair_D1193.first = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1193.rest = VNULL;
  _V10_Dpair_D1192.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1192.rest = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1191.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1191.rest = VEncodePointer(&_V10_Dpair_D1186, VPOINTER_PAIR);
  _V10_Dpair_D1190.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1190.rest = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1189.first = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1189.rest = VNULL;
  _V10_Dpair_D1188.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D1188.rest = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1187.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D1187.rest = VEncodePointer(&_V10_Dpair_D1186, VPOINTER_PAIR);
  _V10_Dpair_D1186.first = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1186.rest = VNULL;
  _V10_Dpair_D1185.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D1185.rest = VEncodePointer(&_V10_Dpair_D1184, VPOINTER_PAIR);
  _V10_Dpair_D1184.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1184.rest = VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR);
  _V10_Dpair_D1183.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1183.rest = VEncodePointer(&_V10_Dpair_D1182, VPOINTER_PAIR);
  _V10_Dpair_D1182.first = VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR);
  _V10_Dpair_D1182.rest = VNULL;
  _V10_Dpair_D1181.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1181.rest = VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR);
  _V10_Dpair_D1180.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1180.rest = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1179.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1179.rest = VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR);
  _V10_Dpair_D1178.first = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1178.rest = VNULL;
  _V10_Dpair_D1177.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1177.rest = VEncodePointer(&_V10_Dpair_D1176, VPOINTER_PAIR);
  _V10_Dpair_D1176.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D1176.rest = VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR);
  _V10_Dpair_D1175.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1175.rest = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1174.first = VEncodePointer(&_V10_Dpair_D1173, VPOINTER_PAIR);
  _V10_Dpair_D1174.rest = VNULL;
  _V10_Dpair_D1173.first = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D1173.rest = VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR);
  _V10_Dpair_D1172.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D1172.rest = VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR);
  _V10_Dpair_D1171.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1171.rest = VEncodePointer(&_V10_Dpair_D1168, VPOINTER_PAIR);
  _V10_Dpair_D1170.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1170.rest = VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR);
  _V10_Dpair_D1169.first = VEncodePointer(&_V10_Dpair_D1168, VPOINTER_PAIR);
  _V10_Dpair_D1169.rest = VNULL;
  _V10_Dpair_D1168.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1168.rest = VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR);
  _V10_Dpair_D1167.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1167.rest = VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR);
  _V10_Dpair_D1166.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1166.rest = VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR);
  _V10_Dpair_D1165.first = VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR);
  _V10_Dpair_D1165.rest = VNULL;
  _V10_Dpair_D1164.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1164.rest = VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR);
  _V10_Dpair_D1163.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1163.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1162.first = VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR);
  _V10_Dpair_D1162.rest = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D1161.first = VEncodePointer(&_V10_Dpair_D1160, VPOINTER_PAIR);
  _V10_Dpair_D1161.rest = VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR);
  _V10_Dpair_D1160.first = VEncodePointer(&_V10_Dpair_D1156, VPOINTER_PAIR);
  _V10_Dpair_D1160.rest = VEncodePointer(&_V10_Dpair_D1159, VPOINTER_PAIR);
  _V10_Dpair_D1159.first = VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR);
  _V10_Dpair_D1159.rest = VNULL;
  _V10_Dpair_D1158.first = _V0_Mk;
  _V10_Dpair_D1158.rest = VEncodePointer(&_V10_Dpair_D1157, VPOINTER_PAIR);
  _V10_Dpair_D1157.first = _V0pattern;
  _V10_Dpair_D1157.rest = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D1156.first = _V0vanity;
  _V10_Dpair_D1156.rest = VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR);
  _V10_Dpair_D1155.first = _V0compiler;
  _V10_Dpair_D1155.rest = VEncodePointer(&_V10_Dpair_D1154, VPOINTER_PAIR);
  _V10_Dpair_D1154.first = _V0match;
  _V10_Dpair_D1154.rest = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D1153.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1153.rest = VEncodePointer(&_V10_Dpair_D1152, VPOINTER_PAIR);
  _V10_Dpair_D1152.first = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1152.rest = VNULL;
  _V10_Dpair_D1151.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1151.rest = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1150.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1150.rest = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1149.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1149.rest = VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR);
  _V10_Dpair_D1148.first = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1148.rest = VNULL;
  _V10_Dpair_D1147.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1147.rest = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1146.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1146.rest = VEncodePointer(&_V10_Dpair_D1145, VPOINTER_PAIR);
  _V10_Dpair_D1145.first = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1145.rest = VNULL;
  _V10_Dpair_D1144.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1144.rest = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1143.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1143.rest = VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR);
  _V10_Dpair_D1142.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1142.rest = VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR);
  _V10_Dpair_D1141.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1141.rest = VEncodePointer(&_V10_Dpair_D1140, VPOINTER_PAIR);
  _V10_Dpair_D1140.first = VEncodePointer(&_V10_Dpair_D1139, VPOINTER_PAIR);
  _V10_Dpair_D1140.rest = VNULL;
  _V10_Dpair_D1139.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D1139.rest = VEncodePointer(&_V10_Dpair_D1138, VPOINTER_PAIR);
  _V10_Dpair_D1138.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D1138.rest = VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR);
  _V10_Dpair_D1137.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D1137.rest = VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR);
  _V10_Dpair_D1136.first = VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR);
  _V10_Dpair_D1136.rest = VNULL;
  _V10_Dpair_D1135.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1135.rest = VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR);
  _V10_Dpair_D1134.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1134.rest = VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR);
  _V10_Dpair_D1133.first = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1133.rest = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D1132.first = VEncodePointer(&_V10_Dpair_D1127, VPOINTER_PAIR);
  _V10_Dpair_D1132.rest = VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR);
  _V10_Dpair_D1131.first = VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR);
  _V10_Dpair_D1131.rest = VNULL;
  _V10_Dpair_D1130.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1130.rest = VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR);
  _V10_Dpair_D1129.first = VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR);
  _V10_Dpair_D1129.rest = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D1128.first = _V0iter;
  _V10_Dpair_D1128.rest = VNULL;
  _V10_Dpair_D1127.first = VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR);
  _V10_Dpair_D1127.rest = VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR);
  _V10_Dpair_D1126.first = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1126.rest = VNULL;
  _V10_Dpair_D1125.first = _V0_Mk;
  _V10_Dpair_D1125.rest = VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR);
  _V10_Dpair_D1124.first = _V0pattern;
  _V10_Dpair_D1124.rest = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1123.first = _V0infinites;
  _V10_Dpair_D1123.rest = VNULL;
  _V10_Dpair_D1122.first = _V0vanity;
  _V10_Dpair_D1122.rest = VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR);
  _V10_Dpair_D1121.first = _V0compiler;
  _V10_Dpair_D1121.rest = VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR);
  _V10_Dpair_D1120.first = _V0match;
  _V10_Dpair_D1120.rest = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1119.first = _V0check__pattern;
  _V10_Dpair_D1119.rest = VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR);
  _V10_Dpair_D1118.first = _V10_Diter_D66;
  _V10_Dpair_D1118.rest = VNULL;
  _V10_Dpair_D1117.first = VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR);
  _V10_Dpair_D1117.rest = VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR);
  _V10_Dpair_D1116.first = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1116.rest = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1115.first = VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR);
  _V10_Dpair_D1115.rest = VNULL;
  _V10_Dpair_D1114.first = _V0_Mk;
  _V10_Dpair_D1114.rest = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D1113.first = _V0vanity;
  _V10_Dpair_D1113.rest = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1112.first = _V0compiler;
  _V10_Dpair_D1112.rest = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1111.first = _V0match;
  _V10_Dpair_D1111.rest = VEncodePointer(&_V10_Dpair_D1110, VPOINTER_PAIR);
  _V10_Dpair_D1110.first = _V0check__pattern;
  _V10_Dpair_D1110.rest = VNULL;
  _V10_Dpair_D1108.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1108.rest = VEncodePointer(&_V10_Dpair_D1107, VPOINTER_PAIR);
  _V10_Dpair_D1107.first = VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR);
  _V10_Dpair_D1107.rest = VNULL;
  _V10_Dpair_D1106.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1106.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1105.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1105.rest = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1104.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1104.rest = VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR);
  _V10_Dpair_D1103.first = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1103.rest = VNULL;
  _V10_Dpair_D1102.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1102.rest = VEncodePointer(&_V10_Dpair_D1101, VPOINTER_PAIR);
  _V10_Dpair_D1101.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1101.rest = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1100.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1100.rest = VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR);
  _V10_Dpair_D1099.first = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1099.rest = VNULL;
  _V10_Dpair_D1098.first = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D1098.rest = VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR);
  _V10_Dpair_D1097.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1097.rest = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1096.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1096.rest = VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR);
  _V10_Dpair_D1095.first = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1095.rest = VNULL;
  _V10_Dpair_D1094.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1094.rest = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1093.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1093.rest = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1092.first = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1092.rest = VNULL;
  _V10_Dpair_D1091.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1091.rest = VEncodePointer(&_V10_Dpair_D1088, VPOINTER_PAIR);
  _V10_Dpair_D1090.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1090.rest = VEncodePointer(&_V10_Dpair_D1089, VPOINTER_PAIR);
  _V10_Dpair_D1089.first = VEncodePointer(&_V10_Dpair_D1088, VPOINTER_PAIR);
  _V10_Dpair_D1089.rest = VNULL;
  _V10_Dpair_D1088.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1088.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1087.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1087.rest = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1084.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1084.rest = VEncodePointer(&_V10_Dpair_D1083, VPOINTER_PAIR);
  _V10_Dpair_D1083.first = VEncodePointer(&_V10_Dpair_D1082, VPOINTER_PAIR);
  _V10_Dpair_D1083.rest = VNULL;
  _V10_Dpair_D1082.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D1082.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1081.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D1081.rest = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1080.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1080.rest = VNULL;
  _V10_Dpair_D1079.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1079.rest = VEncodePointer(&_V10_Dpair_D1078, VPOINTER_PAIR);
  _V10_Dpair_D1078.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1078.rest = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1077.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1077.rest = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1076.first = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1076.rest = VNULL;
  _V10_Dpair_D1075.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1075.rest = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1074.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1074.rest = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1073.first = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1073.rest = VNULL;
  _V10_Dpair_D1072.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1072.rest = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1071.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1071.rest = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1070.first = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1070.rest = VNULL;
  _V10_Dpair_D1069.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1069.rest = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1068.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1068.rest = VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR);
  _V10_Dpair_D1067.first = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1067.rest = VNULL;
  _V10_Dpair_D1066.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1066.rest = VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR);
  _V10_Dpair_D1065.first = VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR);
  _V10_Dpair_D1065.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1063.first = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1063.rest = VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR);
  _V10_Dpair_D1062.first = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1062.rest = VNULL;
  _V10_Dpair_D1061.first = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1061.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1060.first = VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR);
  _V10_Dpair_D1060.rest = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1059.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1059.rest = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1058.first = _V0loop;
  _V10_Dpair_D1058.rest = VNULL;
  _V10_Dpair_D1057.first = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1057.rest = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1056.first = VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR);
  _V10_Dpair_D1056.rest = VNULL;
  _V10_Dpair_D1055.first = _V0_Mk;
  _V10_Dpair_D1055.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1054.first = _V0patterns;
  _V10_Dpair_D1054.rest = VNULL;
  _V10_Dpair_D1053.first = _V0vanity;
  _V10_Dpair_D1053.rest = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1052.first = _V0compiler;
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = _V0match;
  _V10_Dpair_D1051.rest = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1050.first = _V0transform__match;
  _V10_Dpair_D1050.rest = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1049.first = _V10_Dloop_D63;
  _V10_Dpair_D1049.rest = VNULL;
  _V10_Dpair_D1048.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1048.rest = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1047.first = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1047.rest = VNULL;
  _V10_Dpair_D1046.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1046.rest = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1045.first = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1045.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1044.first = VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR);
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1043.rest = VNULL;
  _V10_Dpair_D1042.first = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D1042.rest = VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR);
  _V10_Dpair_D1041.first = VEncodeBool(false);
  _V10_Dpair_D1041.rest = VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR);
  _V10_Dpair_D1040.first = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1040.rest = VNULL;
  _V10_Dpair_D1039.first = _V0input;
  _V10_Dpair_D1039.rest = VNULL;
  _V10_Dpair_D1038.first = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D1036.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1035.rest = VNULL;
  _V10_Dpair_D1034.first = VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR);
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1033.rest = VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR);
  _V10_Dpair_D1032.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR);
  _V10_Dpair_D1031.rest = VNULL;
  _V10_Dpair_D1030.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1029.rest = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1028.first = VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR);
  _V10_Dpair_D1028.rest = VNULL;
  _V10_Dpair_D1027.first = VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR);
  _V10_Dpair_D1027.rest = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1026.first = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D1026.rest = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1025.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1025.rest = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1024.first = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1024.rest = VNULL;
  _V10_Dpair_D1023.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D1023.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1022.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1022.rest = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1021.first = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1021.rest = VNULL;
  _V10_Dpair_D1020.first = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D1020.rest = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1019.first = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D1019.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1018.first = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1017.rest = VNULL;
  _V10_Dpair_D1016.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = VEncodeBool(false);
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D1014.rest = VNULL;
  _V10_Dpair_D1013.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1012.rest = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1011.first = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1011.rest = VNULL;
  _V10_Dpair_D1010.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D1010.rest = VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR);
  _V10_Dpair_D1009.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D1009.rest = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1008.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1008.rest = VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR);
  _V10_Dpair_D1007.first = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1007.rest = VNULL;
  _V10_Dpair_D1006.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D1006.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1005.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D1005.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1004.first = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1004.rest = VNULL;
  _V10_Dpair_D1003.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D1003.rest = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VNULL;
  _V10_Dpair_D1000.first = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D1000.rest = VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR);
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D998.rest = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D997.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D997.rest = VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR);
  _V10_Dpair_D996.first = VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR);
  _V10_Dpair_D996.rest = VNULL;
  _V10_Dpair_D995.first = _V0unquote;
  _V10_Dpair_D995.rest = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D994.first = _V0unmangled__env;
  _V10_Dpair_D994.rest = VNULL;
  _V10_Dpair_D993.first = VEncodeBool(false);
  _V10_Dpair_D993.rest = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D992.first = _V0_U;
  _V10_Dpair_D992.rest = VNULL;
  _V10_Dpair_D990.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D990.rest = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D989.first = VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR);
  _V10_Dpair_D989.rest = VNULL;
  _V10_Dpair_D988.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D988.rest = VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR);
  _V10_Dpair_D987.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D987.rest = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D986.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D986.rest = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D985.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D985.rest = VNULL;
  _V10_Dpair_D984.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D984.rest = VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR);
  _V10_Dpair_D983.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D983.rest = VEncodePointer(&_V10_Dpair_D982, VPOINTER_PAIR);
  _V10_Dpair_D982.first = VEncodePointer(&_V10_Dpair_D981, VPOINTER_PAIR);
  _V10_Dpair_D982.rest = VNULL;
  _V10_Dpair_D981.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D981.rest = VEncodePointer(&_V10_Dpair_D980, VPOINTER_PAIR);
  _V10_Dpair_D980.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D980.rest = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D979.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D979.rest = VEncodePointer(&_V10_Dpair_D978, VPOINTER_PAIR);
  _V10_Dpair_D978.first = VEncodePointer(&_V10_Dpair_D977, VPOINTER_PAIR);
  _V10_Dpair_D978.rest = VNULL;
  _V10_Dpair_D977.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D977.rest = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D976.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D976.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D975.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D975.rest = VEncodePointer(&_V10_Dpair_D974, VPOINTER_PAIR);
  _V10_Dpair_D974.first = VEncodePointer(&_V10_Dpair_D973, VPOINTER_PAIR);
  _V10_Dpair_D974.rest = VNULL;
  _V10_Dpair_D973.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D973.rest = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D972.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D972.rest = VEncodePointer(&_V10_Dpair_D971, VPOINTER_PAIR);
  _V10_Dpair_D971.first = VEncodePointer(&_V10_Dpair_D970, VPOINTER_PAIR);
  _V10_Dpair_D971.rest = VNULL;
  _V10_Dpair_D970.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D970.rest = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D969.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D969.rest = VEncodePointer(&_V10_Dpair_D968, VPOINTER_PAIR);
  _V10_Dpair_D968.first = VEncodePointer(&_V10_Dpair_D967, VPOINTER_PAIR);
  _V10_Dpair_D968.rest = VNULL;
  _V10_Dpair_D967.first = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D967.rest = VEncodePointer(&_V10_Dpair_D966, VPOINTER_PAIR);
  _V10_Dpair_D966.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D966.rest = VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR);
  _V10_Dpair_D965.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D965.rest = VEncodePointer(&_V10_Dpair_D964, VPOINTER_PAIR);
  _V10_Dpair_D964.first = VEncodePointer(&_V10_Dpair_D963, VPOINTER_PAIR);
  _V10_Dpair_D964.rest = VNULL;
  _V10_Dpair_D963.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D963.rest = VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR);
  _V10_Dpair_D962.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D962.rest = VEncodePointer(&_V10_Dpair_D961, VPOINTER_PAIR);
  _V10_Dpair_D961.first = VEncodePointer(&_V10_Dpair_D960, VPOINTER_PAIR);
  _V10_Dpair_D961.rest = VNULL;
  _V10_Dpair_D960.first = VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR);
  _V10_Dpair_D960.rest = VEncodePointer(&_V10_Dpair_D959, VPOINTER_PAIR);
  _V10_Dpair_D959.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D959.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D958.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D958.rest = VEncodePointer(&_V10_Dpair_D957, VPOINTER_PAIR);
  _V10_Dpair_D957.first = VEncodePointer(&_V10_Dpair_D956, VPOINTER_PAIR);
  _V10_Dpair_D957.rest = VNULL;
  _V10_Dpair_D956.first = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D956.rest = VEncodePointer(&_V10_Dpair_D955, VPOINTER_PAIR);
  _V10_Dpair_D955.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D955.rest = VEncodePointer(&_V10_Dpair_D954, VPOINTER_PAIR);
  _V10_Dpair_D954.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D954.rest = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D952.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D952.rest = VEncodePointer(&_V10_Dpair_D951, VPOINTER_PAIR);
  _V10_Dpair_D951.first = VEncodePointer(&_V10_Dpair_D950, VPOINTER_PAIR);
  _V10_Dpair_D951.rest = VNULL;
  _V10_Dpair_D950.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D950.rest = VEncodePointer(&_V10_Dpair_D949, VPOINTER_PAIR);
  _V10_Dpair_D949.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D949.rest = VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR);
  _V10_Dpair_D947.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D947.rest = VEncodePointer(&_V10_Dpair_D946, VPOINTER_PAIR);
  _V10_Dpair_D946.first = VEncodePointer(&_V10_Dpair_D945, VPOINTER_PAIR);
  _V10_Dpair_D946.rest = VNULL;
  _V10_Dpair_D945.first = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D945.rest = VEncodePointer(&_V10_Dpair_D944, VPOINTER_PAIR);
  _V10_Dpair_D944.first = VEncodePointer(&_V10_Dpair_D942, VPOINTER_PAIR);
  _V10_Dpair_D944.rest = VEncodePointer(&_V10_Dpair_D943, VPOINTER_PAIR);
  _V10_Dpair_D943.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D943.rest = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D942.first = _V0_Mx;
  _V10_Dpair_D942.rest = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D941.first = VEncodePointer(&_V10_Dpair_D937, VPOINTER_PAIR);
  _V10_Dpair_D941.rest = VEncodePointer(&_V10_Dpair_D940, VPOINTER_PAIR);
  _V10_Dpair_D940.first = VEncodePointer(&_V10_Dpair_D939, VPOINTER_PAIR);
  _V10_Dpair_D940.rest = VNULL;
  _V10_Dpair_D939.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D939.rest = VEncodePointer(&_V10_Dpair_D938, VPOINTER_PAIR);
  _V10_Dpair_D938.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D938.rest = VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR);
  _V10_Dpair_D937.first = VEncodeBool(false);
  _V10_Dpair_D937.rest = VEncodePointer(&_V10_Dpair_D936, VPOINTER_PAIR);
  _V10_Dpair_D936.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D936.rest = VNULL;
  _V10_Dpair_D935.first = VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR);
  _V10_Dpair_D935.rest = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D934.first = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D934.rest = VEncodePointer(&_V10_Dpair_D767, VPOINTER_PAIR);
  _V10_Dpair_D933.first = _V0vanity;
  _V10_Dpair_D933.rest = VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR);
  _V10_Dpair_D932.first = _V0compiler;
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR);
  _V10_Dpair_D931.first = _V0match;
  _V10_Dpair_D931.rest = VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR);
  _V10_Dpair_D930.first = _V0transform__match;
  _V10_Dpair_D930.rest = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D929.first = _V10_Dmatch__iter_D34;
  _V10_Dpair_D929.rest = VNULL;
  _V10_Dpair_D926.first = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D926.rest = VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR);
  _V10_Dpair_D925.first = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D925.rest = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D924.first = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D924.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D923.first = VEncodeBool(false);
  _V10_Dpair_D923.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D922.first = VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR);
  _V10_Dpair_D922.rest = VNULL;
  _V10_Dpair_D921.first = _V0_Mk;
  _V10_Dpair_D921.rest = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D920.first = _V0var;
  _V10_Dpair_D920.rest = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D919.first = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D919.rest = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D918.first = VEncodeBool(false);
  _V10_Dpair_D918.rest = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D917.first = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D917.rest = VNULL;
  _V10_Dpair_D916.first = _V0_Mk;
  _V10_Dpair_D916.rest = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D915.first = _V0sym;
  _V10_Dpair_D915.rest = VNULL;
  _V10_Dpair_D914.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D914.rest = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D913.first = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D913.rest = VNULL;
  _V10_Dpair_D912.first = VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR);
  _V10_Dpair_D912.rest = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D911.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D911.rest = VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR);
  _V10_Dpair_D910.first = _V0_Mx;
  _V10_Dpair_D910.rest = VEncodePointer(&_V10_Dpair_D909, VPOINTER_PAIR);
  _V10_Dpair_D909.first = _V0_Mx;
  _V10_Dpair_D909.rest = VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR);
  _V10_Dpair_D908.first = _V0_Mx;
  _V10_Dpair_D908.rest = VEncodePointer(&_V10_Dpair_D907, VPOINTER_PAIR);
  _V10_Dpair_D907.first = _V0_Mx;
  _V10_Dpair_D907.rest = VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR);
  _V10_Dpair_D906.first = _V0_Mx;
  _V10_Dpair_D906.rest = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D905.first = _V0_Mx;
  _V10_Dpair_D905.rest = VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR);
  _V10_Dpair_D904.first = _V0_Mx;
  _V10_Dpair_D904.rest = VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR);
  _V10_Dpair_D903.first = _V0_Mx;
  _V10_Dpair_D903.rest = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D902.first = _V0_Mx;
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D901.first = _V0_Mx;
  _V10_Dpair_D901.rest = VEncodePointer(&_V10_Dpair_D826, VPOINTER_PAIR);
  _V10_Dpair_D900.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D900.rest = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D899.first = VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR);
  _V10_Dpair_D899.rest = VNULL;
  _V10_Dpair_D898.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D898.rest = VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR);
  _V10_Dpair_D897.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D897.rest = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D896.first = VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR);
  _V10_Dpair_D896.rest = VNULL;
  _V10_Dpair_D895.first = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D895.rest = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D894.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D894.rest = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D893.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D892.rest = VNULL;
  _V10_Dpair_D891.first = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D891.rest = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D890.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D890.rest = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D889.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D889.rest = VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR);
  _V10_Dpair_D888.first = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D888.rest = VNULL;
  _V10_Dpair_D887.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D887.rest = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D886.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D886.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D885.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D885.rest = VNULL;
  _V10_Dpair_D884.first = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D884.rest = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D883.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D883.rest = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D882.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D882.rest = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D881.first = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D881.rest = VNULL;
  _V10_Dpair_D880.first = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D880.rest = VEncodePointer(&_V10_Dpair_D879, VPOINTER_PAIR);
  _V10_Dpair_D879.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D879.rest = VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR);
  _V10_Dpair_D878.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D878.rest = VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR);
  _V10_Dpair_D877.first = VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR);
  _V10_Dpair_D877.rest = VNULL;
  _V10_Dpair_D876.first = VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR);
  _V10_Dpair_D876.rest = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D875.first = VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR);
  _V10_Dpair_D875.rest = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D874.first = VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR);
  _V10_Dpair_D874.rest = VEncodePointer(&_V10_Dpair_D873, VPOINTER_PAIR);
  _V10_Dpair_D873.first = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D873.rest = VNULL;
  _V10_Dpair_D872.first = VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR);
  _V10_Dpair_D872.rest = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D871.first = VEncodeBool(false);
  _V10_Dpair_D871.rest = VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR);
  _V10_Dpair_D870.first = VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR);
  _V10_Dpair_D870.rest = VNULL;
  _V10_Dpair_D869.first = _V0expr;
  _V10_Dpair_D869.rest = VNULL;
  _V10_Dpair_D868.first = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D868.rest = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D867.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D867.rest = VNULL;
  _V10_Dpair_D866.first = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D866.rest = VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR);
  _V10_Dpair_D865.first = VEncodeBool(false);
  _V10_Dpair_D865.rest = VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR);
  _V10_Dpair_D864.first = VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR);
  _V10_Dpair_D864.rest = VNULL;
  _V10_Dpair_D863.first = _V0k2;
  _V10_Dpair_D863.rest = VNULL;
  _V10_Dpair_D862.first = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D862.rest = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D861.first = VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR);
  _V10_Dpair_D861.rest = VNULL;
  _V10_Dpair_D860.first = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D860.rest = VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR);
  _V10_Dpair_D859.first = VEncodeBool(false);
  _V10_Dpair_D859.rest = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D858.first = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D858.rest = VNULL;
  _V10_Dpair_D857.first = _V0k;
  _V10_Dpair_D857.rest = VNULL;
  _V10_Dpair_D856.first = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D856.rest = VEncodePointer(&_V10_Dpair_D855, VPOINTER_PAIR);
  _V10_Dpair_D855.first = VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR);
  _V10_Dpair_D855.rest = VNULL;
  _V10_Dpair_D854.first = VEncodePointer(&_V10_Dpair_D845, VPOINTER_PAIR);
  _V10_Dpair_D854.rest = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D853.first = VEncodeBool(false);
  _V10_Dpair_D853.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D852.first = VEncodePointer(&_V10_Dpair_D851, VPOINTER_PAIR);
  _V10_Dpair_D852.rest = VNULL;
  _V10_Dpair_D851.first = _V0syms;
  _V10_Dpair_D851.rest = VNULL;
  _V10_Dpair_D850.first = VEncodePointer(&_V10_Dpair_D847, VPOINTER_PAIR);
  _V10_Dpair_D850.rest = VEncodePointer(&_V10_Dpair_D849, VPOINTER_PAIR);
  _V10_Dpair_D849.first = VEncodePointer(&_V10_Dpair_D848, VPOINTER_PAIR);
  _V10_Dpair_D849.rest = VNULL;
  _V10_Dpair_D848.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D848.rest = VEncodePointer(&_V10_Dpair_D842, VPOINTER_PAIR);
  _V10_Dpair_D847.first = VEncodeBool(false);
  _V10_Dpair_D847.rest = VEncodePointer(&_V10_Dpair_D846, VPOINTER_PAIR);
  _V10_Dpair_D846.first = VEncodePointer(&_V10_Dpair_D845, VPOINTER_PAIR);
  _V10_Dpair_D846.rest = VNULL;
  _V10_Dpair_D845.first = _V0variables;
  _V10_Dpair_D845.rest = VNULL;
  _V10_Dpair_D844.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D844.rest = VEncodePointer(&_V10_Dpair_D843, VPOINTER_PAIR);
  _V10_Dpair_D843.first = VEncodePointer(&_V10_Dpair_D842, VPOINTER_PAIR);
  _V10_Dpair_D843.rest = VNULL;
  _V10_Dpair_D842.first = VEncodePointer(&_V10_Dpair_D840, VPOINTER_PAIR);
  _V10_Dpair_D842.rest = VEncodePointer(&_V10_Dpair_D841, VPOINTER_PAIR);
  _V10_Dpair_D841.first = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D841.rest = VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR);
  _V10_Dpair_D840.first = _V0pattern__stack;
  _V10_Dpair_D840.rest = VNULL;
  _V10_Dpair_D839.first = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D839.rest = VEncodePointer(&_V10_Dpair_D838, VPOINTER_PAIR);
  _V10_Dpair_D838.first = VEncodePointer(&_V10_Dpair_D837, VPOINTER_PAIR);
  _V10_Dpair_D838.rest = VNULL;
  _V10_Dpair_D837.first = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D837.rest = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D836.first = VEncodePointer(&_V10_Dpair_D835, VPOINTER_PAIR);
  _V10_Dpair_D836.rest = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D835.first = VEncodeBool(false);
  _V10_Dpair_D835.rest = VEncodePointer(&_V10_Dpair_D834, VPOINTER_PAIR);
  _V10_Dpair_D834.first = VEncodePointer(&_V10_Dpair_D833, VPOINTER_PAIR);
  _V10_Dpair_D834.rest = VNULL;
  _V10_Dpair_D833.first = _V0pattern;
  _V10_Dpair_D833.rest = VNULL;
  _V10_Dpair_D830.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D830.rest = VEncodePointer(&_V10_Dpair_D829, VPOINTER_PAIR);
  _V10_Dpair_D829.first = VEncodePointer(&_V10_Dpair_D828, VPOINTER_PAIR);
  _V10_Dpair_D829.rest = VNULL;
  _V10_Dpair_D828.first = VEncodePointer(&_V10_Dpair_D826, VPOINTER_PAIR);
  _V10_Dpair_D828.rest = VEncodePointer(&_V10_Dpair_D827, VPOINTER_PAIR);
  _V10_Dpair_D827.first = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D827.rest = VEncodePointer(&_V10_Dpair_D804, VPOINTER_PAIR);
  _V10_Dpair_D826.first = _V0_Mx;
  _V10_Dpair_D826.rest = VEncodePointer(&_V10_Dpair_D825, VPOINTER_PAIR);
  _V10_Dpair_D825.first = _V0_Mx;
  _V10_Dpair_D825.rest = VEncodePointer(&_V10_Dpair_D824, VPOINTER_PAIR);
  _V10_Dpair_D824.first = _V0_Mx;
  _V10_Dpair_D824.rest = VEncodePointer(&_V10_Dpair_D823, VPOINTER_PAIR);
  _V10_Dpair_D823.first = _V0_Mx;
  _V10_Dpair_D823.rest = VEncodePointer(&_V10_Dpair_D822, VPOINTER_PAIR);
  _V10_Dpair_D822.first = _V0_Mx;
  _V10_Dpair_D822.rest = VEncodePointer(&_V10_Dpair_D821, VPOINTER_PAIR);
  _V10_Dpair_D821.first = _V0_Mx;
  _V10_Dpair_D821.rest = VEncodePointer(&_V10_Dpair_D820, VPOINTER_PAIR);
  _V10_Dpair_D820.first = _V0_Mx;
  _V10_Dpair_D820.rest = VEncodePointer(&_V10_Dpair_D819, VPOINTER_PAIR);
  _V10_Dpair_D819.first = _V0_Mx;
  _V10_Dpair_D819.rest = VEncodePointer(&_V10_Dpair_D818, VPOINTER_PAIR);
  _V10_Dpair_D818.first = _V0_Mx;
  _V10_Dpair_D818.rest = VEncodePointer(&_V10_Dpair_D817, VPOINTER_PAIR);
  _V10_Dpair_D817.first = _V0_Mx;
  _V10_Dpair_D817.rest = VEncodePointer(&_V10_Dpair_D816, VPOINTER_PAIR);
  _V10_Dpair_D816.first = _V0_Mx;
  _V10_Dpair_D816.rest = VEncodePointer(&_V10_Dpair_D815, VPOINTER_PAIR);
  _V10_Dpair_D815.first = _V0_Mx;
  _V10_Dpair_D815.rest = VEncodePointer(&_V10_Dpair_D814, VPOINTER_PAIR);
  _V10_Dpair_D814.first = _V0_Mx;
  _V10_Dpair_D814.rest = VEncodePointer(&_V10_Dpair_D813, VPOINTER_PAIR);
  _V10_Dpair_D813.first = _V0_Mx;
  _V10_Dpair_D813.rest = VEncodePointer(&_V10_Dpair_D812, VPOINTER_PAIR);
  _V10_Dpair_D812.first = _V0_Mx;
  _V10_Dpair_D812.rest = VEncodePointer(&_V10_Dpair_D811, VPOINTER_PAIR);
  _V10_Dpair_D811.first = _V0_Mx;
  _V10_Dpair_D811.rest = VEncodePointer(&_V10_Dpair_D810, VPOINTER_PAIR);
  _V10_Dpair_D810.first = _V0_Mx;
  _V10_Dpair_D810.rest = VEncodePointer(&_V10_Dpair_D809, VPOINTER_PAIR);
  _V10_Dpair_D809.first = _V0_Mx;
  _V10_Dpair_D809.rest = VEncodePointer(&_V10_Dpair_D808, VPOINTER_PAIR);
  _V10_Dpair_D808.first = _V0_Mx;
  _V10_Dpair_D808.rest = VEncodePointer(&_V10_Dpair_D807, VPOINTER_PAIR);
  _V10_Dpair_D807.first = _V0_Mx;
  _V10_Dpair_D807.rest = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D806.first = VEncodePointer(&_V10_Dpair_D803, VPOINTER_PAIR);
  _V10_Dpair_D806.rest = VEncodePointer(&_V10_Dpair_D805, VPOINTER_PAIR);
  _V10_Dpair_D805.first = VEncodePointer(&_V10_Dpair_D804, VPOINTER_PAIR);
  _V10_Dpair_D805.rest = VNULL;
  _V10_Dpair_D804.first = VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR);
  _V10_Dpair_D804.rest = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D803.first = VEncodeBool(false);
  _V10_Dpair_D803.rest = VEncodePointer(&_V10_Dpair_D802, VPOINTER_PAIR);
  _V10_Dpair_D802.first = VEncodePointer(&_V10_Dpair_D801, VPOINTER_PAIR);
  _V10_Dpair_D802.rest = VNULL;
  _V10_Dpair_D801.first = _V0tail;
  _V10_Dpair_D801.rest = VNULL;
  _V10_Dpair_D800.first = VEncodePointer(&_V10_Dpair_D795, VPOINTER_PAIR);
  _V10_Dpair_D800.rest = VEncodePointer(&_V10_Dpair_D799, VPOINTER_PAIR);
  _V10_Dpair_D799.first = VEncodePointer(&_V10_Dpair_D798, VPOINTER_PAIR);
  _V10_Dpair_D799.rest = VNULL;
  _V10_Dpair_D798.first = VEncodePointer(&_V10_Dpair_D796, VPOINTER_PAIR);
  _V10_Dpair_D798.rest = VEncodePointer(&_V10_Dpair_D797, VPOINTER_PAIR);
  _V10_Dpair_D797.first = VEncodePointer(&_V10_Dpair_D787, VPOINTER_PAIR);
  _V10_Dpair_D797.rest = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D796.first = _V0_Mp;
  _V10_Dpair_D796.rest = VNULL;
  _V10_Dpair_D795.first = VEncodeBool(false);
  _V10_Dpair_D795.rest = VEncodePointer(&_V10_Dpair_D794, VPOINTER_PAIR);
  _V10_Dpair_D794.first = VEncodePointer(&_V10_Dpair_D793, VPOINTER_PAIR);
  _V10_Dpair_D794.rest = VNULL;
  _V10_Dpair_D793.first = _V0head;
  _V10_Dpair_D793.rest = VNULL;
  _V10_Dpair_D792.first = VEncodePointer(&_V10_Dpair_D789, VPOINTER_PAIR);
  _V10_Dpair_D792.rest = VEncodePointer(&_V10_Dpair_D791, VPOINTER_PAIR);
  _V10_Dpair_D791.first = VEncodePointer(&_V10_Dpair_D790, VPOINTER_PAIR);
  _V10_Dpair_D791.rest = VNULL;
  _V10_Dpair_D790.first = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D790.rest = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D789.first = VEncodeBool(false);
  _V10_Dpair_D789.rest = VEncodePointer(&_V10_Dpair_D788, VPOINTER_PAIR);
  _V10_Dpair_D788.first = VEncodePointer(&_V10_Dpair_D787, VPOINTER_PAIR);
  _V10_Dpair_D788.rest = VNULL;
  _V10_Dpair_D787.first = _V0len;
  _V10_Dpair_D787.rest = VNULL;
  _V10_Dpair_D786.first = VEncodePointer(&_V10_Dpair_D781, VPOINTER_PAIR);
  _V10_Dpair_D786.rest = VEncodePointer(&_V10_Dpair_D785, VPOINTER_PAIR);
  _V10_Dpair_D785.first = VEncodePointer(&_V10_Dpair_D784, VPOINTER_PAIR);
  _V10_Dpair_D785.rest = VNULL;
  _V10_Dpair_D784.first = VEncodePointer(&_V10_Dpair_D782, VPOINTER_PAIR);
  _V10_Dpair_D784.rest = VEncodePointer(&_V10_Dpair_D783, VPOINTER_PAIR);
  _V10_Dpair_D783.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D783.rest = VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR);
  _V10_Dpair_D782.first = _V0head__pattern;
  _V10_Dpair_D782.rest = VNULL;
  _V10_Dpair_D781.first = VEncodeBool(false);
  _V10_Dpair_D781.rest = VEncodePointer(&_V10_Dpair_D780, VPOINTER_PAIR);
  _V10_Dpair_D780.first = VEncodePointer(&_V10_Dpair_D779, VPOINTER_PAIR);
  _V10_Dpair_D780.rest = VNULL;
  _V10_Dpair_D779.first = _V0tail__pattern;
  _V10_Dpair_D779.rest = VNULL;
  _V10_Dpair_D778.first = _V0_D_D_D;
  _V10_Dpair_D778.rest = VNULL;
  _V10_Dpair_D777.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D777.rest = VEncodePointer(&_V10_Dpair_D776, VPOINTER_PAIR);
  _V10_Dpair_D776.first = VEncodePointer(&_V10_Dpair_D775, VPOINTER_PAIR);
  _V10_Dpair_D776.rest = VNULL;
  _V10_Dpair_D775.first = VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR);
  _V10_Dpair_D775.rest = VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR);
  _V10_Dpair_D774.first = VEncodePointer(&_V10_Dpair_D768, VPOINTER_PAIR);
  _V10_Dpair_D774.rest = VEncodePointer(&_V10_Dpair_D773, VPOINTER_PAIR);
  _V10_Dpair_D773.first = VEncodePointer(&_V10_Dpair_D772, VPOINTER_PAIR);
  _V10_Dpair_D773.rest = VNULL;
  _V10_Dpair_D772.first = VEncodePointer(&_V10_Dpair_D770, VPOINTER_PAIR);
  _V10_Dpair_D772.rest = VEncodePointer(&_V10_Dpair_D771, VPOINTER_PAIR);
  _V10_Dpair_D771.first = VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR);
  _V10_Dpair_D771.rest = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D770.first = _V0match__ellipses;
  _V10_Dpair_D770.rest = VEncodePointer(&_V10_Dpair_D769, VPOINTER_PAIR);
  _V10_Dpair_D769.first = _V0match__iter;
  _V10_Dpair_D769.rest = VNULL;
  _V10_Dpair_D768.first = VEncodePointer(&_V10_Dpair_D762, VPOINTER_PAIR);
  _V10_Dpair_D768.rest = VEncodePointer(&_V10_Dpair_D767, VPOINTER_PAIR);
  _V10_Dpair_D767.first = VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR);
  _V10_Dpair_D767.rest = VNULL;
  _V10_Dpair_D766.first = _V0_Mk;
  _V10_Dpair_D766.rest = VEncodePointer(&_V10_Dpair_D765, VPOINTER_PAIR);
  _V10_Dpair_D765.first = _V0expr__stack;
  _V10_Dpair_D765.rest = VEncodePointer(&_V10_Dpair_D764, VPOINTER_PAIR);
  _V10_Dpair_D764.first = _V0pattern__stack;
  _V10_Dpair_D764.rest = VEncodePointer(&_V10_Dpair_D763, VPOINTER_PAIR);
  _V10_Dpair_D763.first = _V0success__expr;
  _V10_Dpair_D763.rest = VNULL;
  _V10_Dpair_D762.first = _V0vanity;
  _V10_Dpair_D762.rest = VEncodePointer(&_V10_Dpair_D761, VPOINTER_PAIR);
  _V10_Dpair_D761.first = _V0compiler;
  _V10_Dpair_D761.rest = VEncodePointer(&_V10_Dpair_D760, VPOINTER_PAIR);
  _V10_Dpair_D760.first = _V0match;
  _V10_Dpair_D760.rest = VEncodePointer(&_V10_Dpair_D759, VPOINTER_PAIR);
  _V10_Dpair_D759.first = _V0transform__match;
  _V10_Dpair_D759.rest = VEncodePointer(&_V10_Dpair_D758, VPOINTER_PAIR);
  _V10_Dpair_D758.first = _V10_Dmatch__ellipses_D33;
  _V10_Dpair_D758.rest = VNULL;
  _V10_Dpair_D757.first = VEncodePointer(&_V10_Dpair_D750, VPOINTER_PAIR);
  _V10_Dpair_D757.rest = VEncodePointer(&_V10_Dpair_D756, VPOINTER_PAIR);
  _V10_Dpair_D756.first = VEncodePointer(&_V10_Dpair_D755, VPOINTER_PAIR);
  _V10_Dpair_D756.rest = VNULL;
  _V10_Dpair_D755.first = VEncodePointer(&_V10_Dpair_D753, VPOINTER_PAIR);
  _V10_Dpair_D755.rest = VEncodePointer(&_V10_Dpair_D754, VPOINTER_PAIR);
  _V10_Dpair_D754.first = VEncodePointer(&_V10_Dpair_D738, VPOINTER_PAIR);
  _V10_Dpair_D754.rest = VEncodePointer(&_V10_Dpair_D703, VPOINTER_PAIR);
  _V10_Dpair_D753.first = _V0transform__match;
  _V10_Dpair_D753.rest = VEncodePointer(&_V10_Dpair_D752, VPOINTER_PAIR);
  _V10_Dpair_D752.first = _V0check__pattern;
  _V10_Dpair_D752.rest = VEncodePointer(&_V10_Dpair_D751, VPOINTER_PAIR);
  _V10_Dpair_D751.first = _V0gather__variables;
  _V10_Dpair_D751.rest = VNULL;
  _V10_Dpair_D750.first = VEncodePointer(&_V10_Dpair_D745, VPOINTER_PAIR);
  _V10_Dpair_D750.rest = VEncodePointer(&_V10_Dpair_D749, VPOINTER_PAIR);
  _V10_Dpair_D749.first = VEncodePointer(&_V10_Dpair_D748, VPOINTER_PAIR);
  _V10_Dpair_D749.rest = VNULL;
  _V10_Dpair_D748.first = _V0_Mk;
  _V10_Dpair_D748.rest = VEncodePointer(&_V10_Dpair_D747, VPOINTER_PAIR);
  _V10_Dpair_D747.first = _V0expr;
  _V10_Dpair_D747.rest = VEncodePointer(&_V10_Dpair_D746, VPOINTER_PAIR);
  _V10_Dpair_D746.first = _V0eqv_Q;
  _V10_Dpair_D746.rest = VNULL;
  _V10_Dpair_D745.first = _V0vanity;
  _V10_Dpair_D745.rest = VEncodePointer(&_V10_Dpair_D744, VPOINTER_PAIR);
  _V10_Dpair_D744.first = _V0compiler;
  _V10_Dpair_D744.rest = VEncodePointer(&_V10_Dpair_D743, VPOINTER_PAIR);
  _V10_Dpair_D743.first = _V0match;
  _V10_Dpair_D743.rest = VEncodePointer(&_V10_Dpair_D742, VPOINTER_PAIR);
  _V10_Dpair_D742.first = _V0transform__match;
  _V10_Dpair_D742.rest = VNULL;
  _V10_Dpair_D741.first = VEncodePointer(&_V10_Dpair_D740, VPOINTER_PAIR);
  _V10_Dpair_D741.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D740.first = VEncodeBool(false);
  _V10_Dpair_D740.rest = VEncodePointer(&_V10_Dpair_D739, VPOINTER_PAIR);
  _V10_Dpair_D739.first = VEncodePointer(&_V10_Dpair_D738, VPOINTER_PAIR);
  _V10_Dpair_D739.rest = VNULL;
  _V10_Dpair_D738.first = _V0_Mk;
  _V10_Dpair_D738.rest = VEncodePointer(&_V10_Dpair_D737, VPOINTER_PAIR);
  _V10_Dpair_D737.first = _V0cadr;
  _V10_Dpair_D737.rest = VEncodePointer(&_V10_Dpair_D736, VPOINTER_PAIR);
  _V10_Dpair_D736.first = _V0cdar;
  _V10_Dpair_D736.rest = VEncodePointer(&_V10_Dpair_D735, VPOINTER_PAIR);
  _V10_Dpair_D735.first = _V0caar;
  _V10_Dpair_D735.rest = VEncodePointer(&_V10_Dpair_D734, VPOINTER_PAIR);
  _V10_Dpair_D734.first = _V0list;
  _V10_Dpair_D734.rest = VEncodePointer(&_V10_Dpair_D733, VPOINTER_PAIR);
  _V10_Dpair_D733.first = _V0compiler__warning;
  _V10_Dpair_D733.rest = VEncodePointer(&_V10_Dpair_D732, VPOINTER_PAIR);
  _V10_Dpair_D732.first = _V0cddr;
  _V10_Dpair_D732.rest = VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR);
  _V10_Dpair_D731.first = _V0gensym;
  _V10_Dpair_D731.rest = VEncodePointer(&_V10_Dpair_D730, VPOINTER_PAIR);
  _V10_Dpair_D730.first = _V0typevector_Q;
  _V10_Dpair_D730.rest = VEncodePointer(&_V10_Dpair_D729, VPOINTER_PAIR);
  _V10_Dpair_D729.first = _V0atom_Q;
  _V10_Dpair_D729.rest = VEncodePointer(&_V10_Dpair_D728, VPOINTER_PAIR);
  _V10_Dpair_D728.first = _V0cadar;
  _V10_Dpair_D728.rest = VEncodePointer(&_V10_Dpair_D727, VPOINTER_PAIR);
  _V10_Dpair_D727.first = _V0compiler__error;
  _V10_Dpair_D727.rest = VEncodePointer(&_V10_Dpair_D726, VPOINTER_PAIR);
  _V10_Dpair_D726.first = _V0num__pairs;
  _V10_Dpair_D726.rest = VEncodePointer(&_V10_Dpair_D725, VPOINTER_PAIR);
  _V10_Dpair_D725.first = _V0cddar;
  _V10_Dpair_D725.rest = VEncodePointer(&_V10_Dpair_D724, VPOINTER_PAIR);
  _V10_Dpair_D724.first = _V0map;
  _V10_Dpair_D724.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D720.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D720.rest = VEncodePointer(&_V10_Dpair_D719, VPOINTER_PAIR);
  _V10_Dpair_D719.first = VEncodePointer(&_V10_Dpair_D718, VPOINTER_PAIR);
  _V10_Dpair_D719.rest = VNULL;
  _V10_Dpair_D718.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D718.rest = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D717.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D717.rest = VEncodePointer(&_V10_Dpair_D716, VPOINTER_PAIR);
  _V10_Dpair_D716.first = VEncodePointer(&_V10_Dpair_D715, VPOINTER_PAIR);
  _V10_Dpair_D716.rest = VNULL;
  _V10_Dpair_D715.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D715.rest = VEncodePointer(&_V10_Dpair_D712, VPOINTER_PAIR);
  _V10_Dpair_D714.first = VEncodePointer(&_V10_Dpair_D711, VPOINTER_PAIR);
  _V10_Dpair_D714.rest = VEncodePointer(&_V10_Dpair_D713, VPOINTER_PAIR);
  _V10_Dpair_D713.first = VEncodePointer(&_V10_Dpair_D712, VPOINTER_PAIR);
  _V10_Dpair_D713.rest = VNULL;
  _V10_Dpair_D712.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D712.rest = VEncodePointer(&_V10_Dpair_D703, VPOINTER_PAIR);
  _V10_Dpair_D711.first = VEncodeBool(false);
  _V10_Dpair_D711.rest = VEncodePointer(&_V10_Dpair_D710, VPOINTER_PAIR);
  _V10_Dpair_D710.first = VEncodePointer(&_V10_Dpair_D709, VPOINTER_PAIR);
  _V10_Dpair_D710.rest = VNULL;
  _V10_Dpair_D709.first = _V0_Mx;
  _V10_Dpair_D709.rest = VNULL;
  _V10_Dpair_D708.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D708.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D707.first = VEncodePointer(&_V10_Dpair_D703, VPOINTER_PAIR);
  _V10_Dpair_D707.rest = VNULL;
  _V10_Dpair_D706.first = VEncodePointer(&_V10_Dpair_D704, VPOINTER_PAIR);
  _V10_Dpair_D706.rest = VEncodePointer(&_V10_Dpair_D705, VPOINTER_PAIR);
  _V10_Dpair_D705.first = VNULL;
  _V10_Dpair_D705.rest = VNULL;
  _V10_Dpair_D704.first = VEncodeBool(false);
  _V10_Dpair_D704.rest = VEncodePointer(&_V10_Dpair_D703, VPOINTER_PAIR);
  _V10_Dpair_D703.first = VEncodePointer(&_V10_Dpair_D702, VPOINTER_PAIR);
  _V10_Dpair_D703.rest = VNULL;
  _V10_Dpair_D702.first = _V0_Mk;
  _V10_Dpair_D702.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0match_V20_V0k3, VEncodePointer(&_V10_Dpair_D720, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0match_V20_V0k2, VEncodePointer(&_V10_Dpair_D717, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0match_V20_V0k1, VEncodePointer(&_V10_Dpair_D714, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k9, VEncodePointer(&_V10_Dpair_D830, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k8, VEncodePointer(&_V10_Dpair_D806, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k7, VEncodePointer(&_V10_Dpair_D800, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k25, VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k24, VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda4, VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k23, VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k22, VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda5, VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k21, VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k20, VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k19, VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda6, VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k18, VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0lambda7, VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k17, VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k16, VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k15, VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k14, VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k13, VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k12, VEncodePointer(&_V10_Dpair_D844, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k11, VEncodePointer(&_V10_Dpair_D839, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k10, VEncodePointer(&_V10_Dpair_D836, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k6, VEncodePointer(&_V10_Dpair_D792, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k5, VEncodePointer(&_V10_Dpair_D786, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33_V0k4, VEncodePointer(&_V10_Dpair_D777, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D33, VEncodePointer(&_V10_Dpair_D774, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k27, VEncodePointer(&_V10_Dpair_D947, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k29, VEncodePointer(&_V10_Dpair_D958, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k30, VEncodePointer(&_V10_Dpair_D962, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k32, VEncodePointer(&_V10_Dpair_D969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k34, VEncodePointer(&_V10_Dpair_D975, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k33, VEncodePointer(&_V10_Dpair_D972, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k38, VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k37, VEncodePointer(&_V10_Dpair_D983, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k40, VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k43, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k42, VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k41, VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k39, VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k36, VEncodePointer(&_V10_Dpair_D979, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k46, VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k45, VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k44, VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k49, VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k48, VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k53, VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k52, VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k51, VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k50, VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k47, VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k35, VEncodePointer(&_V10_Dpair_D976, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k31, VEncodePointer(&_V10_Dpair_D965, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k28, VEncodePointer(&_V10_Dpair_D952, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34_V0k26, VEncodePointer(&_V10_Dpair_D941, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D34, VEncodePointer(&_V10_Dpair_D935, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k59, VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k64, VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k63, VEncodePointer(&_V10_Dpair_D1084, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k62, VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k71, VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k70, VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k69, VEncodePointer(&_V10_Dpair_D1096, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k68, VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k67, VEncodePointer(&_V10_Dpair_D1090, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k66, VEncodePointer(&_V10_Dpair_D1087, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k65, VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k61, VEncodePointer(&_V10_Dpair_D1077, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k60, VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k58, VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63_V0k57, VEncodePointer(&_V10_Dpair_D1068, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D63, VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73, VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k72, VEncodePointer(&_V10_Dpair_D1105, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56, VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55, VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k54, VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match, VEncodePointer(&_V10_Dpair_D757, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k75, VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k74, VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k78, VEncodePointer(&_V10_Dpair_D1149, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k77, VEncodePointer(&_V10_Dpair_D1146, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k79, VEncodePointer(&_V10_Dpair_D1153, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66_V0k76, VEncodePointer(&_V10_Dpair_D1142, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D66, VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82, VEncodePointer(&_V10_Dpair_D1175, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86, VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85, VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89, VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88, VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87, VEncodePointer(&_V10_Dpair_D1191, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84, VEncodePointer(&_V10_Dpair_D1183, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83, VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81, VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k80, VEncodePointer(&_V10_Dpair_D1166, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D741, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D706, VPOINTER_PAIR));
}
