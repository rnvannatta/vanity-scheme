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

V_DECLARE_FUNC_BASIC(VClearinghousePoll, _var0);
V_DECLARE_FUNC_BASIC(VWaybillAddress, _var0);
V_DECLARE_FUNC_BASIC(VWaybillSignaledP, _var0);
V_DECLARE_FUNC(VWaybillUnpack, _var0, _var1);
V_DECLARE_FUNC_BASIC(VWaybillBrokenP, _var0);
V_DECLARE_FUNC(VMakeEphemeralTransportWaybill, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(VMakeStrongTransportWaybill, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(VMakeEphemeralWaybill, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(VMakeStrongWaybill, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(VMakeClearinghouse, _var0);
V_DECLARE_FUNC_BASIC(VClearinghouseP, _var0);
V_DECLARE_FUNC_BASIC(VEphemeralTransportWaybillP, _var0);
V_DECLARE_FUNC_BASIC(VStrongTransportWaybillP, _var0);
V_DECLARE_FUNC_BASIC(VEphemeralWaybillP, _var0);
V_DECLARE_FUNC_BASIC(VStrongWaybillP, _var0);
V_DECLARE_FUNC_BASIC(VAnyTransportWaybillP, _var0);
V_DECLARE_FUNC_BASIC(VAnyEphemeralWaybillP, _var0);
V_DECLARE_FUNC_BASIC(VAnyWeakWaybillP, _var0);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0waybill;

VWEAK VWORD _V40VClearinghousePoll;
VWEAK VClosure _VW_V40VClearinghousePoll = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClearinghousePoll, NULL };
VWEAK VWORD _V0clearinghouse__poll_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0clearinghouse__poll_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "clearinghouse-poll!" };
VWEAK VWORD _V40VWaybillAddress;
VWEAK VClosure _VW_V40VWaybillAddress = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillAddress, NULL };
VWEAK VWORD _V0waybill__address;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0waybill__address = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "waybill-address" };
VWEAK VWORD _V40VWaybillSignaledP;
VWEAK VClosure _VW_V40VWaybillSignaledP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillSignaledP, NULL };
VWEAK VWORD _V0waybill__signaled_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0waybill__signaled_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "waybill-signaled\?" };
VWEAK VWORD _V40VWaybillUnpack;
VWEAK VClosure _VW_V40VWaybillUnpack = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillUnpack, NULL };
VWEAK VWORD _V0waybill__unpack;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0waybill__unpack = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "waybill-unpack" };
VWEAK VWORD _V40VWaybillBrokenP;
VWEAK VClosure _VW_V40VWaybillBrokenP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillBrokenP, NULL };
VWEAK VWORD _V0waybill__broken_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0waybill__broken_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "waybill-broken\?" };
VWEAK VWORD _V40VMakeEphemeralTransportWaybill;
VWEAK VClosure _VW_V40VMakeEphemeralTransportWaybill = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeEphemeralTransportWaybill, NULL };
VWEAK VWORD _V0make__ephemeral__transport__waybill;VWEAK struct { VBlob sym; char bytes[33]; } _VW_V0make__ephemeral__transport__waybill = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 33 }, "make-ephemeral-transport-waybill" };
VWEAK VWORD _V40VMakeStrongTransportWaybill;
VWEAK VClosure _VW_V40VMakeStrongTransportWaybill = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeStrongTransportWaybill, NULL };
VWEAK VWORD _V0make__strong__transport__waybill;VWEAK struct { VBlob sym; char bytes[30]; } _VW_V0make__strong__transport__waybill = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 30 }, "make-strong-transport-waybill" };
VWEAK VWORD _V40VMakeEphemeralWaybill;
VWEAK VClosure _VW_V40VMakeEphemeralWaybill = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeEphemeralWaybill, NULL };
VWEAK VWORD _V0make__ephemeral__waybill;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0make__ephemeral__waybill = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "make-ephemeral-waybill" };
VWEAK VWORD _V40VMakeStrongWaybill;
VWEAK VClosure _VW_V40VMakeStrongWaybill = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeStrongWaybill, NULL };
VWEAK VWORD _V0make__strong__waybill;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0make__strong__waybill = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "make-strong-waybill" };
VWEAK VWORD _V40VMakeClearinghouse;
VWEAK VClosure _VW_V40VMakeClearinghouse = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeClearinghouse, NULL };
VWEAK VWORD _V0make__clearinghouse;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0make__clearinghouse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "make-clearinghouse" };
VWEAK VWORD _V40VClearinghouseP;
VWEAK VClosure _VW_V40VClearinghouseP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClearinghouseP, NULL };
VWEAK VWORD _V0clearinghouse_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0clearinghouse_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "clearinghouse\?" };
VWEAK VWORD _V40VEphemeralTransportWaybillP;
VWEAK VClosure _VW_V40VEphemeralTransportWaybillP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEphemeralTransportWaybillP, NULL };
VWEAK VWORD _V0ephemeral__transport__waybill_Q;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V0ephemeral__transport__waybill_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 29 }, "ephemeral-transport-waybill\?" };
VWEAK VWORD _V40VStrongTransportWaybillP;
VWEAK VClosure _VW_V40VStrongTransportWaybillP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStrongTransportWaybillP, NULL };
VWEAK VWORD _V0strong__transport__waybill_Q;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0strong__transport__waybill_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "strong-transport-waybill\?" };
VWEAK VWORD _V40VEphemeralWaybillP;
VWEAK VClosure _VW_V40VEphemeralWaybillP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEphemeralWaybillP, NULL };
VWEAK VWORD _V0ephemeral__waybill_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0ephemeral__waybill_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "ephemeral-waybill\?" };
VWEAK VWORD _V40VStrongWaybillP;
VWEAK VClosure _VW_V40VStrongWaybillP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStrongWaybillP, NULL };
VWEAK VWORD _V0strong__waybill_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0strong__waybill_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "strong-waybill\?" };
VWEAK VWORD _V40VAnyTransportWaybillP;
VWEAK VClosure _VW_V40VAnyTransportWaybillP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAnyTransportWaybillP, NULL };
VWEAK VWORD _V0any__transport__waybill_Q;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0any__transport__waybill_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "any-transport-waybill\?" };
VWEAK VWORD _V40VAnyEphemeralWaybillP;
VWEAK VClosure _VW_V40VAnyEphemeralWaybillP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAnyEphemeralWaybillP, NULL };
VWEAK VWORD _V0any__ephemeral__waybill_Q;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0any__ephemeral__waybill_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "any-ephemeral-waybill\?" };
VWEAK VWORD _V40VAnyWeakWaybillP;
VWEAK VClosure _VW_V40VAnyWeakWaybillP = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAnyWeakWaybillP, NULL };
VWEAK VWORD _V0any__weak__waybill_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0any__weak__waybill_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "any-weak-waybill\?" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D108 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "_V0vanity_V0waybill_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D99 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D98 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D97 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D96 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D95 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
static void _V0vanity_V0waybill_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0waybill_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0waybill_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.21 1 0) (##string ##.string.108) (bruijn ##.%x.22 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D108.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0waybill_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0waybill_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0waybill_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0waybill_V20_V0k1))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0waybill_V20_V0k1, self)))));
}
static void _V0vanity_V0waybill_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0waybill_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0waybill_V20_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity waybill) 0 () (basic-block 36 36 (##.%x.59 ##.%x.60 ##.%x.61 ##.%x.62 ##.%x.63 ##.%x.64 ##.%x.65 ##.%x.66 ##.%x.67 ##.%x.68 ##.%x.69 ##.%x.70 ##.%x.71 ##.%x.72 ##.%x.73 ##.%x.74 ##.%x.75 ##.%x.76 ##.%x.77 ##.%x.78 ##.%x.79 ##.%x.80 ##.%x.81 ##.%x.82 ##.%x.83 ##.%x.84 ##.%x.85 ##.%x.86 ##.%x.87 ##.%x.88 ##.%x.89 ##.%x.90 ##.%x.91 ##.%x.92 ##.%x.93 ##.%r.94) ((##vcore.cons 'any-weak-waybill? (##basic-intrinsic "VAnyWeakWaybillP")) (##vcore.cons 'any-ephemeral-waybill? (##basic-intrinsic "VAnyEphemeralWaybillP")) (##vcore.cons 'any-transport-waybill? (##basic-intrinsic "VAnyTransportWaybillP")) (##vcore.cons 'strong-waybill? (##basic-intrinsic "VStrongWaybillP")) (##vcore.cons 'ephemeral-waybill? (##basic-intrinsic "VEphemeralWaybillP")) (##vcore.cons 'strong-transport-waybill? (##basic-intrinsic "VStrongTransportWaybillP")) (##vcore.cons 'ephemeral-transport-waybill? (##basic-intrinsic "VEphemeralTransportWaybillP")) (##vcore.cons 'clearinghouse? (##basic-intrinsic "VClearinghouseP")) (##vcore.cons 'make-clearinghouse (##intrinsic "VMakeClearinghouse")) (##vcore.cons 'make-strong-waybill (##intrinsic "VMakeStrongWaybill")) (##vcore.cons 'make-ephemeral-waybill (##intrinsic "VMakeEphemeralWaybill")) (##vcore.cons 'make-strong-transport-waybill (##intrinsic "VMakeStrongTransportWaybill")) (##vcore.cons 'make-ephemeral-transport-waybill (##intrinsic "VMakeEphemeralTransportWaybill")) (##vcore.cons 'waybill-broken? (##basic-intrinsic "VWaybillBrokenP")) (##vcore.cons 'waybill-unpack (##intrinsic "VWaybillUnpack")) (##vcore.cons 'waybill-signaled? (##basic-intrinsic "VWaybillSignaledP")) (##vcore.cons 'waybill-address (##basic-intrinsic "VWaybillAddress")) (##vcore.cons 'clearinghouse-poll! (##basic-intrinsic "VClearinghousePoll")) (##vcore.cons (bruijn ##.%x.76 0 17) '()) (##vcore.cons (bruijn ##.%x.75 0 16) (bruijn ##.%x.77 0 18)) (##vcore.cons (bruijn ##.%x.74 0 15) (bruijn ##.%x.78 0 19)) (##vcore.cons (bruijn ##.%x.73 0 14) (bruijn ##.%x.79 0 20)) (##vcore.cons (bruijn ##.%x.72 0 13) (bruijn ##.%x.80 0 21)) (##vcore.cons (bruijn ##.%x.71 0 12) (bruijn ##.%x.81 0 22)) (##vcore.cons (bruijn ##.%x.70 0 11) (bruijn ##.%x.82 0 23)) (##vcore.cons (bruijn ##.%x.69 0 10) (bruijn ##.%x.83 0 24)) (##vcore.cons (bruijn ##.%x.68 0 9) (bruijn ##.%x.84 0 25)) (##vcore.cons (bruijn ##.%x.67 0 8) (bruijn ##.%x.85 0 26)) (##vcore.cons (bruijn ##.%x.66 0 7) (bruijn ##.%x.86 0 27)) (##vcore.cons (bruijn ##.%x.65 0 6) (bruijn ##.%x.87 0 28)) (##vcore.cons (bruijn ##.%x.64 0 5) (bruijn ##.%x.88 0 29)) (##vcore.cons (bruijn ##.%x.63 0 4) (bruijn ##.%x.89 0 30)) (##vcore.cons (bruijn ##.%x.62 0 3) (bruijn ##.%x.90 0 31)) (##vcore.cons (bruijn ##.%x.61 0 2) (bruijn ##.%x.91 0 32)) (##vcore.cons (bruijn ##.%x.60 0 1) (bruijn ##.%x.92 0 33)) (##vcore.cons (bruijn ##.%x.59 0 0) (bruijn ##.%x.93 0 34))) ((bruijn ##.%k.23 2 0) (bruijn ##.%r.94 0 35))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[0]; } container;
    self = &container.self;
    _V60_V0vanity_V0waybill = self;
    VInitEnv(self, 0, 0, statics);
    VRegisterStaticEnv("_V0vanity_V0waybill_V20", &_V60_V0vanity_V0waybill);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[36]; } container;
    self = &container.self;
    VInitEnv(self, 36, 36, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0any__weak__waybill_Q,
      _V40VAnyWeakWaybillP);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0any__ephemeral__waybill_Q,
      _V40VAnyEphemeralWaybillP);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0any__transport__waybill_Q,
      _V40VAnyTransportWaybillP);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0strong__waybill_Q,
      _V40VStrongWaybillP);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0ephemeral__waybill_Q,
      _V40VEphemeralWaybillP);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0strong__transport__waybill_Q,
      _V40VStrongTransportWaybillP);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0ephemeral__transport__waybill_Q,
      _V40VEphemeralTransportWaybillP);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0clearinghouse_Q,
      _V40VClearinghouseP);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0make__clearinghouse,
      _V40VMakeClearinghouse);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0make__strong__waybill,
      _V40VMakeStrongWaybill);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0make__ephemeral__waybill,
      _V40VMakeEphemeralWaybill);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0make__strong__transport__waybill,
      _V40VMakeStrongTransportWaybill);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0make__ephemeral__transport__waybill,
      _V40VMakeEphemeralTransportWaybill);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0waybill__broken_Q,
      _V40VWaybillBrokenP);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0waybill__unpack,
      _V40VWaybillUnpack);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0waybill__signaled_Q,
      _V40VWaybillSignaledP);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0waybill__address,
      _V40VWaybillAddress);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0clearinghouse__poll_B,
      _V40VClearinghousePoll);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      VNULL);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[20]);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[21]);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[22]);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[23]);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[24]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[25]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[26]);
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[27]);
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[28]);
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[29]);
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[30]);
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[31]);
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[32]);
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[33]);
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[34]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[35]);
    }
    }
}
static void _V0vanity_V0waybill_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0waybill_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0waybill_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.20 0 0) (close _V0vanity_V0waybill_V20_V0lambda2) (close _V0vanity_V0waybill_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0waybill_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0waybill_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0waybill_V20 = (VFunc)_V0vanity_V0waybill_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0clearinghouse__poll_B = VEncodePointer(VInternSymbol(283141340, &_VW_V0clearinghouse__poll_B.sym), VPOINTER_OTHER);
  _V0waybill__address = VEncodePointer(VInternSymbol(-567430227, &_VW_V0waybill__address.sym), VPOINTER_OTHER);
  _V0waybill__signaled_Q = VEncodePointer(VInternSymbol(-288198085, &_VW_V0waybill__signaled_Q.sym), VPOINTER_OTHER);
  _V0waybill__unpack = VEncodePointer(VInternSymbol(942813162, &_VW_V0waybill__unpack.sym), VPOINTER_OTHER);
  _V0waybill__broken_Q = VEncodePointer(VInternSymbol(-1756673530, &_VW_V0waybill__broken_Q.sym), VPOINTER_OTHER);
  _V0make__ephemeral__transport__waybill = VEncodePointer(VInternSymbol(855638750, &_VW_V0make__ephemeral__transport__waybill.sym), VPOINTER_OTHER);
  _V0make__strong__transport__waybill = VEncodePointer(VInternSymbol(60034568, &_VW_V0make__strong__transport__waybill.sym), VPOINTER_OTHER);
  _V0make__ephemeral__waybill = VEncodePointer(VInternSymbol(-1153268613, &_VW_V0make__ephemeral__waybill.sym), VPOINTER_OTHER);
  _V0make__strong__waybill = VEncodePointer(VInternSymbol(-1175163761, &_VW_V0make__strong__waybill.sym), VPOINTER_OTHER);
  _V0make__clearinghouse = VEncodePointer(VInternSymbol(1208200337, &_VW_V0make__clearinghouse.sym), VPOINTER_OTHER);
  _V0clearinghouse_Q = VEncodePointer(VInternSymbol(-892204452, &_VW_V0clearinghouse_Q.sym), VPOINTER_OTHER);
  _V0ephemeral__transport__waybill_Q = VEncodePointer(VInternSymbol(1462653085, &_VW_V0ephemeral__transport__waybill_Q.sym), VPOINTER_OTHER);
  _V0strong__transport__waybill_Q = VEncodePointer(VInternSymbol(-1855040751, &_VW_V0strong__transport__waybill_Q.sym), VPOINTER_OTHER);
  _V0ephemeral__waybill_Q = VEncodePointer(VInternSymbol(754553290, &_VW_V0ephemeral__waybill_Q.sym), VPOINTER_OTHER);
  _V0strong__waybill_Q = VEncodePointer(VInternSymbol(-1833840359, &_VW_V0strong__waybill_Q.sym), VPOINTER_OTHER);
  _V0any__transport__waybill_Q = VEncodePointer(VInternSymbol(2010010734, &_VW_V0any__transport__waybill_Q.sym), VPOINTER_OTHER);
  _V0any__ephemeral__waybill_Q = VEncodePointer(VInternSymbol(-2043263001, &_VW_V0any__ephemeral__waybill_Q.sym), VPOINTER_OTHER);
  _V0any__weak__waybill_Q = VEncodePointer(VInternSymbol(-517206405, &_VW_V0any__weak__waybill_Q.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V40VClearinghousePoll = VEncodePointer(VLookupConstant("_V40VClearinghousePoll", &_VW_V40VClearinghousePoll), VPOINTER_CLOSURE);
  _V40VWaybillAddress = VEncodePointer(VLookupConstant("_V40VWaybillAddress", &_VW_V40VWaybillAddress), VPOINTER_CLOSURE);
  _V40VWaybillSignaledP = VEncodePointer(VLookupConstant("_V40VWaybillSignaledP", &_VW_V40VWaybillSignaledP), VPOINTER_CLOSURE);
  _V40VWaybillUnpack = VEncodePointer(VLookupConstant("_V40VWaybillUnpack", &_VW_V40VWaybillUnpack), VPOINTER_CLOSURE);
  _V40VWaybillBrokenP = VEncodePointer(VLookupConstant("_V40VWaybillBrokenP", &_VW_V40VWaybillBrokenP), VPOINTER_CLOSURE);
  _V40VMakeEphemeralTransportWaybill = VEncodePointer(VLookupConstant("_V40VMakeEphemeralTransportWaybill", &_VW_V40VMakeEphemeralTransportWaybill), VPOINTER_CLOSURE);
  _V40VMakeStrongTransportWaybill = VEncodePointer(VLookupConstant("_V40VMakeStrongTransportWaybill", &_VW_V40VMakeStrongTransportWaybill), VPOINTER_CLOSURE);
  _V40VMakeEphemeralWaybill = VEncodePointer(VLookupConstant("_V40VMakeEphemeralWaybill", &_VW_V40VMakeEphemeralWaybill), VPOINTER_CLOSURE);
  _V40VMakeStrongWaybill = VEncodePointer(VLookupConstant("_V40VMakeStrongWaybill", &_VW_V40VMakeStrongWaybill), VPOINTER_CLOSURE);
  _V40VMakeClearinghouse = VEncodePointer(VLookupConstant("_V40VMakeClearinghouse", &_VW_V40VMakeClearinghouse), VPOINTER_CLOSURE);
  _V40VClearinghouseP = VEncodePointer(VLookupConstant("_V40VClearinghouseP", &_VW_V40VClearinghouseP), VPOINTER_CLOSURE);
  _V40VEphemeralTransportWaybillP = VEncodePointer(VLookupConstant("_V40VEphemeralTransportWaybillP", &_VW_V40VEphemeralTransportWaybillP), VPOINTER_CLOSURE);
  _V40VStrongTransportWaybillP = VEncodePointer(VLookupConstant("_V40VStrongTransportWaybillP", &_VW_V40VStrongTransportWaybillP), VPOINTER_CLOSURE);
  _V40VEphemeralWaybillP = VEncodePointer(VLookupConstant("_V40VEphemeralWaybillP", &_VW_V40VEphemeralWaybillP), VPOINTER_CLOSURE);
  _V40VStrongWaybillP = VEncodePointer(VLookupConstant("_V40VStrongWaybillP", &_VW_V40VStrongWaybillP), VPOINTER_CLOSURE);
  _V40VAnyTransportWaybillP = VEncodePointer(VLookupConstant("_V40VAnyTransportWaybillP", &_VW_V40VAnyTransportWaybillP), VPOINTER_CLOSURE);
  _V40VAnyEphemeralWaybillP = VEncodePointer(VLookupConstant("_V40VAnyEphemeralWaybillP", &_VW_V40VAnyEphemeralWaybillP), VPOINTER_CLOSURE);
  _V40VAnyWeakWaybillP = VEncodePointer(VLookupConstant("_V40VAnyWeakWaybillP", &_VW_V40VAnyWeakWaybillP), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D107.first = VEncodePointer(&_V10_Dpair_D104, VPOINTER_PAIR);
  _V10_Dpair_D107.rest = VEncodePointer(&_V10_Dpair_D106, VPOINTER_PAIR);
  _V10_Dpair_D106.first = VEncodePointer(&_V10_Dpair_D105, VPOINTER_PAIR);
  _V10_Dpair_D106.rest = VNULL;
  _V10_Dpair_D105.first = VEncodePointer(&_V10_Dpair_D95, VPOINTER_PAIR);
  _V10_Dpair_D105.rest = VEncodePointer(&_V10_Dpair_D96, VPOINTER_PAIR);
  _V10_Dpair_D104.first = VEncodeBool(false);
  _V10_Dpair_D104.rest = VEncodePointer(&_V10_Dpair_D103, VPOINTER_PAIR);
  _V10_Dpair_D103.first = VEncodePointer(&_V10_Dpair_D102, VPOINTER_PAIR);
  _V10_Dpair_D103.rest = VNULL;
  _V10_Dpair_D102.first = _V0_Mx;
  _V10_Dpair_D102.rest = VNULL;
  _V10_Dpair_D101.first = VEncodePointer(&_V10_Dpair_D97, VPOINTER_PAIR);
  _V10_Dpair_D101.rest = VEncodePointer(&_V10_Dpair_D100, VPOINTER_PAIR);
  _V10_Dpair_D100.first = VEncodePointer(&_V10_Dpair_D96, VPOINTER_PAIR);
  _V10_Dpair_D100.rest = VNULL;
  _V10_Dpair_D99.first = VEncodePointer(&_V10_Dpair_D97, VPOINTER_PAIR);
  _V10_Dpair_D99.rest = VEncodePointer(&_V10_Dpair_D98, VPOINTER_PAIR);
  _V10_Dpair_D98.first = VNULL;
  _V10_Dpair_D98.rest = VNULL;
  _V10_Dpair_D97.first = VEncodeBool(false);
  _V10_Dpair_D97.rest = VEncodePointer(&_V10_Dpair_D96, VPOINTER_PAIR);
  _V10_Dpair_D96.first = VEncodePointer(&_V10_Dpair_D95, VPOINTER_PAIR);
  _V10_Dpair_D96.rest = VNULL;
  _V10_Dpair_D95.first = _V0_Mk;
  _V10_Dpair_D95.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0waybill_V20_V0k1, VEncodePointer(&_V10_Dpair_D107, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0waybill_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D101, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0waybill_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D101, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0waybill_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D99, VPOINTER_PAIR));
}
