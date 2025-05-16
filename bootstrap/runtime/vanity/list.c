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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0assoc__update;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0assoc__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "assoc-update" };
VWEAK VWORD _V0assv__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assv__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assv-update" };
VWEAK VWORD _V0assq__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assq__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assq-update" };
VWEAK VWORD _V0delete;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0delete = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "delete" };
VWEAK VWORD _V0insert;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0insert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "insert" };
VWEAK VWORD _V0list__index;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0list__index = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "list-index" };
VWEAK VWORD _V0every_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0every_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "every\?" };
VWEAK VWORD _V0any_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0any_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "any\?" };
VWEAK VWORD _V0split__while;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0split__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "split-while" };
VWEAK VWORD _V0drop__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-while" };
VWEAK VWORD _V0take__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-while" };
VWEAK VWORD _V0partition;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0partition = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "partition" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0count;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "count" };
VWEAK VWORD _V0unzip5;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip5 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip5" };
VWEAK VWORD _V0unzip4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip4" };
VWEAK VWORD _V0unzip3;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip3" };
VWEAK VWORD _V0unzip2;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip2" };
VWEAK VWORD _V0unzip1;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip1" };
VWEAK VWORD _V0zip;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0zip = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "zip" };
VWEAK VWORD _V0concatenate;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0concatenate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "concatenate" };
VWEAK VWORD _V0fold__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fold-right" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0split__at;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0split__at = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "split-at" };
VWEAK VWORD _V0drop__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-right" };
VWEAK VWORD _V0take__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-right" };
VWEAK VWORD _V0drop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0drop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "drop" };
VWEAK VWORD _V0take;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0take = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "take" };
VWEAK VWORD _V0list__tabulate;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0list__tabulate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "list-tabulate" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V40_V10vcore_Dcar;VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0assoc__update = VEncodePointer(VLookupConstant("_V0assoc__update", &_VW_V0assoc__update), VPOINTER_OTHER);
  _V0assv__update = VEncodePointer(VLookupConstant("_V0assv__update", &_VW_V0assv__update), VPOINTER_OTHER);
  _V0assq__update = VEncodePointer(VLookupConstant("_V0assq__update", &_VW_V0assq__update), VPOINTER_OTHER);
  _V0delete = VEncodePointer(VLookupConstant("_V0delete", &_VW_V0delete), VPOINTER_OTHER);
  _V0insert = VEncodePointer(VLookupConstant("_V0insert", &_VW_V0insert), VPOINTER_OTHER);
  _V0list__index = VEncodePointer(VLookupConstant("_V0list__index", &_VW_V0list__index), VPOINTER_OTHER);
  _V0every_Q = VEncodePointer(VLookupConstant("_V0every_Q", &_VW_V0every_Q), VPOINTER_OTHER);
  _V0any_Q = VEncodePointer(VLookupConstant("_V0any_Q", &_VW_V0any_Q), VPOINTER_OTHER);
  _V0split__while = VEncodePointer(VLookupConstant("_V0split__while", &_VW_V0split__while), VPOINTER_OTHER);
  _V0drop__while = VEncodePointer(VLookupConstant("_V0drop__while", &_VW_V0drop__while), VPOINTER_OTHER);
  _V0take__while = VEncodePointer(VLookupConstant("_V0take__while", &_VW_V0take__while), VPOINTER_OTHER);
  _V0partition = VEncodePointer(VLookupConstant("_V0partition", &_VW_V0partition), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VLookupConstant("_V0filter", &_VW_V0filter), VPOINTER_OTHER);
  _V0count = VEncodePointer(VLookupConstant("_V0count", &_VW_V0count), VPOINTER_OTHER);
  _V0unzip5 = VEncodePointer(VLookupConstant("_V0unzip5", &_VW_V0unzip5), VPOINTER_OTHER);
  _V0unzip4 = VEncodePointer(VLookupConstant("_V0unzip4", &_VW_V0unzip4), VPOINTER_OTHER);
  _V0unzip3 = VEncodePointer(VLookupConstant("_V0unzip3", &_VW_V0unzip3), VPOINTER_OTHER);
  _V0unzip2 = VEncodePointer(VLookupConstant("_V0unzip2", &_VW_V0unzip2), VPOINTER_OTHER);
  _V0unzip1 = VEncodePointer(VLookupConstant("_V0unzip1", &_VW_V0unzip1), VPOINTER_OTHER);
  _V0zip = VEncodePointer(VLookupConstant("_V0zip", &_VW_V0zip), VPOINTER_OTHER);
  _V0concatenate = VEncodePointer(VLookupConstant("_V0concatenate", &_VW_V0concatenate), VPOINTER_OTHER);
  _V0fold__right = VEncodePointer(VLookupConstant("_V0fold__right", &_VW_V0fold__right), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0split__at = VEncodePointer(VLookupConstant("_V0split__at", &_VW_V0split__at), VPOINTER_OTHER);
  _V0drop__right = VEncodePointer(VLookupConstant("_V0drop__right", &_VW_V0drop__right), VPOINTER_OTHER);
  _V0take__right = VEncodePointer(VLookupConstant("_V0take__right", &_VW_V0take__right), VPOINTER_OTHER);
  _V0drop = VEncodePointer(VLookupConstant("_V0drop", &_VW_V0drop), VPOINTER_OTHER);
  _V0take = VEncodePointer(VLookupConstant("_V0take", &_VW_V0take), VPOINTER_OTHER);
  _V0list__tabulate = VEncodePointer(VLookupConstant("_V0list__tabulate", &_VW_V0list__tabulate), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
}
static void _V10_Dloop_D56_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D56_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.57 0 1)) (basic-block 1 1 (##.reg.439) ((##vcore.+ (bruijn ##.n.58 1 2) 1)) ((bruijn ##.loop.56 2 0) (bruijn ##.k.168 1 0) (##inline ##vcore.cdr (bruijn ##.lst.57 1 1)) (bruijn ##.reg.439 0 0))) ((bruijn ##.k.168 0 0) (bruijn ##.n.58 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
}
static void _V10_Dmy__num__pairs_D24_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmy__num__pairs_D24_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D56_lambda3)) ((bruijn ##.loop.56 0 0) (bruijn ##.k.167 1 0) (bruijn ##.lst.55 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D56_lambda3, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D60_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D60_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.173 2 0) (##inline ##vcore.cons (bruijn ##.i.61 2 1) (bruijn ##.x.175 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[1],
        _var0));
}
static void _V10_Dloop_D60_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D60_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.61 0 1) (bruijn ##.n.59 2 1)) ((bruijn ##.k.173 0 0) '()) (basic-block 1 1 (##.reg.440) ((##vcore.+ (bruijn ##.i.61 1 1) 1)) ((bruijn ##.loop.60 2 0) (close _V10_Dloop_D60_k13) (bruijn ##.reg.440 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D60_k13, self)})),
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D64_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.178 2 0) (##inline ##vcore.cons (bruijn ##.reg.441 1 0) (bruijn ##.x.181 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D64_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.65 0 1) (bruijn ##.n.62 2 1)) ((bruijn ##.k.178 0 0) '()) (basic-block 2 2 (##.reg.441 ##.reg.442) ((##vcore.+ (bruijn ##.i.65 1 1) (bruijn ##.b.63 3 2)) (##vcore.+ (bruijn ##.i.65 1 1) 1)) ((bruijn ##.loop.64 2 0) (close _V10_Dloop_D64_k14) (bruijn ##.reg.442 0 1))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k14, self)})),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D69_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.184 2 0) (##inline ##vcore.cons (bruijn ##.reg.444 1 1) (bruijn ##.x.187 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        _var0));
}
static void _V10_Dloop_D69_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.70 0 1) (bruijn ##.n.66 2 1)) ((bruijn ##.k.184 0 0) '()) (basic-block 3 3 (##.reg.443 ##.reg.444 ##.reg.445) ((##vcore.* (bruijn ##.s.68 3 3) (bruijn ##.i.70 1 1)) (##vcore.+ (bruijn ##.reg.443 0 0) (bruijn ##.b.67 3 2)) (##vcore.+ (bruijn ##.i.70 1 1) 1)) ((bruijn ##.loop.69 2 0) (close _V10_Dloop_D69_k15) (bruijn ##.reg.445 0 2))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      statics->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k15, self)})),
      self->vars[2]);
    }
}
}
__attribute__((used)) static void _V20CaseError__V10_Diota_D25_lambda4(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Diota_D25_lambda4 #t (2 (letrec 1 ((close _V10_Dloop_D60_lambda5)) ((bruijn ##.loop.60 0 0) (bruijn ##.k.172 1 0) 0))) (3 (letrec 1 ((close _V10_Dloop_D64_lambda6)) ((bruijn ##.loop.64 0 0) (bruijn ##.k.177 1 0) 0))) (4 (letrec 1 ((close _V10_Dloop_D69_lambda7)) ((bruijn ##.loop.69 0 0) (bruijn ##.k.183 1 0) 0))))
 VErrorC(runtime, "Not enough arguments to _V10_Diota_D25_lambda4, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Diota_D25_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D60_lambda5)) ((bruijn ##.loop.60 0 0) (bruijn ##.k.172 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D60_lambda5, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
    }
}
__attribute__((used)) static void _V20Case1__V10_Diota_D25_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D64_lambda6)) ((bruijn ##.loop.64 0 0) (bruijn ##.k.177 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_lambda6, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
    }
}
__attribute__((used)) static void _V20Case2__V10_Diota_D25_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D69_lambda7)) ((bruijn ##.loop.69 0 0) (bruijn ##.k.183 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_lambda7, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
    }
}
void _V10_Diota_D25_lambda4(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Diota_D25_lambda4, @function\n"
#endif
"_V10_Diota_D25_lambda4:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Diota_D25_lambda4\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Diota_D25_lambda4\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Diota_D25_lambda4\n"
"    jmp _V20CaseError__V10_Diota_D25_lambda4\n"
);
static void _V10_Dloop_D73_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.191 3 0) (##inline ##vcore.cons (bruijn ##.x.193 2 0) (bruijn ##.x.194 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dloop_D73_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.446) ((##vcore.+ (bruijn ##.i.74 2 1) 1)) ((bruijn ##.loop.73 3 0) (close _V10_Dloop_D73_k17) (bruijn ##.reg.446 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k17, self)})),
      self->vars[0]);
    }
}
static void _V10_Dloop_D73_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.74 0 1) (bruijn ##.n.71 2 1)) ((bruijn ##.k.191 0 0) '()) ((bruijn ##.proc.72 2 2) (close _V10_Dloop_D73_k16) (bruijn ##.i.74 0 1)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k16, self)})),
      _var1);
}
}
static void _V10_Dlist__tabulate_D26_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tabulate_D26_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D73_lambda9)) ((bruijn ##.loop.73 0 0) (bruijn ##.k.190 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda9, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dtake_D27_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.196 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.75 2 1)) (bruijn ##.x.199 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
static void _V10_Dtake_D27_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.76 0 2) 0) ((bruijn ##.k.196 0 0) '()) (basic-block 1 1 (##.reg.447) ((##vcore.- (bruijn ##.i.76 1 2) 1)) ((bruijn ##.take.27 2 3) (close _V10_Dtake_D27_k18) (##inline ##vcore.cdr (bruijn ##.lst.75 1 1)) (bruijn ##.reg.447 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_k18, self)})),
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Ddrop_D28_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D28_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.78 0 2) 0) ((bruijn ##.k.202 0 0) (bruijn ##.lst.77 0 1)) (basic-block 1 1 (##.reg.448) ((##vcore.- (bruijn ##.i.78 1 2) 1)) ((bruijn ##.drop.28 2 4) (bruijn ##.k.202 1 0) (##inline ##vcore.cdr (bruijn ##.lst.77 1 1)) (bruijn ##.reg.448 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D81_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.83 0 2) (bruijn ##.i.80 2 2)) ((bruijn ##.k.207 0 0) (bruijn ##.lst.82 0 1)) (basic-block 1 1 (##.reg.449) ((##vcore.- (bruijn ##.len.83 1 2) 1)) ((bruijn ##.loop.81 2 0) (bruijn ##.k.207 1 0) (##inline ##vcore.cdr (bruijn ##.lst.82 1 1)) (bruijn ##.reg.449 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Dtake__right_D29_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__right_D29_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.81 1 0) (bruijn ##.k.206 2 0) (bruijn ##.lst.79 2 1) (bruijn ##.x.211 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dtake__right_D29_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__right_D29_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D81_lambda13)) ((bruijn ##.my-num-pairs.24 2 0) (close _V10_Dtake__right_D29_k19) (bruijn ##.lst.79 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_lambda13, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__right_D29_k19, self)})),
      statics->vars[1]);
    }
}
static void _V10_Dloop_D86_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.213 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.87 2 1)) (bruijn ##.x.216 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
static void _V10_Dloop_D86_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.88 0 2) (bruijn ##.i.85 2 2)) ((bruijn ##.k.213 0 0) '()) (basic-block 1 1 (##.reg.450) ((##vcore.- (bruijn ##.len.88 1 2) 1)) ((bruijn ##.loop.86 2 0) (close _V10_Dloop_D86_k20) (##inline ##vcore.cdr (bruijn ##.lst.87 1 1)) (bruijn ##.reg.450 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_k20, self)})),
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Ddrop__right_D30_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__right_D30_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.86 1 0) (bruijn ##.k.212 2 0) (bruijn ##.lst.84 2 1) (bruijn ##.x.219 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Ddrop__right_D30_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__right_D30_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D86_lambda15)) ((bruijn ##.my-num-pairs.24 2 0) (close _V10_Ddrop__right_D30_k21) (bruijn ##.lst.84 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_lambda15, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__right_D30_k21, self)})),
      statics->vars[1]);
    }
}
static void _V10_Dsplit__at_D31_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.451) ((##vcore.- (bruijn ##.i.90 2 2) 1)) ((bruijn ##.split-at.31 3 7) (bruijn ##.k.222 1 0) (##inline ##vcore.cdr (bruijn ##.lst.89 2 1)) (bruijn ##.reg.451 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      self->vars[0]);
    }
}
static void _V10_Dsplit__at_D31_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_lambda18, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.160 9 0) (bruijn ##.k.225 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.89 1 1)) (bruijn ##.t.91 0 1)) (bruijn ##.d.92 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var1),
      _var2);
}
static void _V10_Dsplit__at_D31_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.90 0 2) 0) ((bruijn ##.x.160 8 0) (bruijn ##.k.220 0 0) '() (bruijn ##.lst.89 0 1)) (##vcore.call-with-values (bruijn ##.k.220 0 0) (close _V10_Dsplit__at_D31_lambda17) (close _V10_Dsplit__at_D31_lambda18)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      VNULL,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_lambda17, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_lambda18, self)})));
}
}
static void _V10_Dfold_D32_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D32_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.32 2 8) (bruijn ##.k.228 1 0) (bruijn ##.kons.93 1 1) (bruijn ##.x.230 0 0) (##inline ##vcore.cdr (bruijn ##.ks.95 1 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[8]), 4,
      statics->vars[0],
      statics->vars[1],
      _var0,
      VInlineCdr2(runtime,
        statics->vars[3]));
}
static void _V10_Dfold_D32_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D32_lambda19, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.95 0 3)) ((bruijn ##.k.228 0 0) (bruijn ##.knil.94 0 2)) ((bruijn ##.kons.93 0 1) (close _V10_Dfold_D32_k22) (##inline ##vcore.car (bruijn ##.ks.95 0 3)) (bruijn ##.knil.94 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D32_k22, self)})),
      VInlineCar2(runtime,
        _var3),
      _var2);
}
}
static void _V10_Dfold__right_D33_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D33_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.96 1 1) (bruijn ##.k.233 1 0) (##inline ##vcore.car (bruijn ##.ks.98 1 3)) (bruijn ##.x.236 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[3]),
      _var0);
}
static void _V10_Dfold__right_D33_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D33_lambda20, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.98 0 3)) ((bruijn ##.k.233 0 0) (bruijn ##.knil.97 0 2)) ((bruijn ##.fold-right.33 1 9) (close _V10_Dfold__right_D33_k23) (bruijn ##.kons.96 0 1) (bruijn ##.knil.97 0 2) (##inline ##vcore.cdr (bruijn ##.ks.98 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[9]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D33_k23, self)})),
      _var1,
      _var2,
      VInlineCdr2(runtime,
        _var3));
}
}
static void _V10_Dconcatenate_D34_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D34_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.166 3 0) (bruijn ##.k.238 1 0) (##inline ##vcore.car (bruijn ##.lst-of-lsts.99 1 1)) (bruijn ##.x.241 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dconcatenate_D34_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D34_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.lst-of-lsts.99 0 1)) ((bruijn ##.k.238 0 0) '()) ((bruijn ##.concatenate.34 1 10) (close _V10_Dconcatenate_D34_k24) (##inline ##vcore.cdr (bruijn ##.lst-of-lsts.99 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[10]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D34_k24, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dzip_D35_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dzip_D35_lambda22, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.apply (bruijn ##.k.243 0 0) (bruijn ##.x.161 7 0) (bruijn ##.x.165 3 0) (bruijn ##.lsts.100 0 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      _var0,
      VGetArg(statics, 7-1, 0),
      statics->up->up->vars[0],
      _varargs);
}
static void _V10_Dunzip1_D36_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip1_D36_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.161 7 0) (bruijn ##.k.244 0 0) (##intrinsic ##vcore.car) (bruijn ##.lst.101 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      _var0,
      _V40_V10vcore_Dcar,
      _var1);
}
static void _V10_Dunzip2_D37_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D37_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.160 10 0) (bruijn ##.k.245 2 0) (bruijn ##.x.246 1 0) (bruijn ##.x.247 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dunzip2_D37_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D37_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 8 0) (close _V10_Dunzip2_D37_k26) (bruijn ##.x.164 5 0) (bruijn ##.lst.102 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D37_k26, self)})),
      VGetArg(statics, 5-1, 0),
      statics->vars[1]);
}
static void _V10_Dunzip2_D37_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D37_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.161 7 0) (close _V10_Dunzip2_D37_k25) (##intrinsic ##vcore.car) (bruijn ##.lst.102 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D37_k25, self)})),
      _V40_V10vcore_Dcar,
      _var1);
}
static void _V10_Dunzip3_D38_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.160 11 0) (bruijn ##.k.248 3 0) (bruijn ##.x.249 2 0) (bruijn ##.x.250 1 0) (bruijn ##.x.251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dunzip3_D38_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 9 0) (close _V10_Dunzip3_D38_k29) (bruijn ##.x.163 7 0) (bruijn ##.lst.103 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_k29, self)})),
      VGetArg(statics, 7-1, 0),
      statics->up->vars[1]);
}
static void _V10_Dunzip3_D38_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 8 0) (close _V10_Dunzip3_D38_k28) (bruijn ##.x.164 5 0) (bruijn ##.lst.103 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_k28, self)})),
      VGetArg(statics, 5-1, 0),
      statics->vars[1]);
}
static void _V10_Dunzip3_D38_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.161 7 0) (close _V10_Dunzip3_D38_k27) (##intrinsic ##vcore.car) (bruijn ##.lst.103 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_k27, self)})),
      _V40_V10vcore_Dcar,
      _var1);
}
static void _V10_Dunzip4_D39_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.160 12 0) (bruijn ##.k.252 4 0) (bruijn ##.x.253 3 0) (bruijn ##.x.254 2 0) (bruijn ##.x.255 1 0) (bruijn ##.x.256 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 5,
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dunzip4_D39_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 10 0) (close _V10_Dunzip4_D39_k33) (bruijn ##.x.162 9 0) (bruijn ##.lst.104 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k33, self)})),
      VGetArg(statics, 9-1, 0),
      statics->up->up->vars[1]);
}
static void _V10_Dunzip4_D39_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 9 0) (close _V10_Dunzip4_D39_k32) (bruijn ##.x.163 7 0) (bruijn ##.lst.104 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k32, self)})),
      VGetArg(statics, 7-1, 0),
      statics->up->vars[1]);
}
static void _V10_Dunzip4_D39_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 8 0) (close _V10_Dunzip4_D39_k31) (bruijn ##.x.164 5 0) (bruijn ##.lst.104 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k31, self)})),
      VGetArg(statics, 5-1, 0),
      statics->vars[1]);
}
static void _V10_Dunzip4_D39_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.161 7 0) (close _V10_Dunzip4_D39_k30) (##intrinsic ##vcore.car) (bruijn ##.lst.104 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k30, self)})),
      _V40_V10vcore_Dcar,
      _var1);
}
static void _V10_Dunzip5_D40_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.160 13 0) (bruijn ##.k.257 5 0) (bruijn ##.x.258 4 0) (bruijn ##.x.259 3 0) (bruijn ##.x.260 2 0) (bruijn ##.x.261 1 0) (bruijn ##.x.262 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 6,
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dunzip5_D40_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.162 11 0) (bruijn ##.k.263 0 0) (##inline ##vcore.cdr (bruijn ##.e.106 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      _var0,
      VInlineCdr2(runtime,
        _var1));
}
static void _V10_Dunzip5_D40_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 11 0) (close _V10_Dunzip5_D40_k38) (close _V10_Dunzip5_D40_lambda28) (bruijn ##.lst.105 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k38, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_lambda28, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dunzip5_D40_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 10 0) (close _V10_Dunzip5_D40_k37) (bruijn ##.x.162 9 0) (bruijn ##.lst.105 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k37, self)})),
      VGetArg(statics, 9-1, 0),
      statics->up->up->vars[1]);
}
static void _V10_Dunzip5_D40_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 9 0) (close _V10_Dunzip5_D40_k36) (bruijn ##.x.163 7 0) (bruijn ##.lst.105 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k36, self)})),
      VGetArg(statics, 7-1, 0),
      statics->up->vars[1]);
}
static void _V10_Dunzip5_D40_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.161 8 0) (close _V10_Dunzip5_D40_k35) (bruijn ##.x.164 5 0) (bruijn ##.lst.105 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k35, self)})),
      VGetArg(statics, 5-1, 0),
      statics->vars[1]);
}
static void _V10_Dunzip5_D40_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.161 7 0) (close _V10_Dunzip5_D40_k34) (##intrinsic ##vcore.car) (bruijn ##.lst.105 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k34, self)})),
      _V40_V10vcore_Dcar,
      _var1);
}
static void _V10_Dloop_D109_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.271 1 0) ((bruijn ##.k.272 0 0) 1) ((bruijn ##.k.272 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void _V10_Dloop_D109_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.452) ((##vcore.+ (bruijn ##.n.110 3 1) (bruijn ##.x.270 1 0))) ((bruijn ##.loop.109 4 0) (bruijn ##.k.266 3 0) (bruijn ##.reg.452 0 0) (bruijn ##.pred.111 3 2) (##inline ##vcore.cdr (bruijn ##.lst.112 3 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
    }
}
static void _V10_Dloop_D109_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D109_k40) (close _V10_Dloop_D109_k41))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D109_k40, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k41, self)})));
}
static void _V10_Dloop_D109_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_lambda30, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.112 0 3)) ((bruijn ##.k.266 0 0) (bruijn ##.n.110 0 1)) ((bruijn ##.pred.111 0 2) (close _V10_Dloop_D109_k39) (##inline ##vcore.car (bruijn ##.lst.112 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k39, self)})),
      VInlineCar2(runtime,
        _var3));
}
}
static void _V10_Dcount_D41_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount_D41_lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D109_lambda30)) ((bruijn ##.loop.109 0 0) (bruijn ##.k.265 1 0) 0 (bruijn ##.pred.107 1 1) (bruijn ##.lst.108 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_lambda30, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[1],
      statics->vars[2]);
    }
}
static void _V10_Dfilter_D42_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.114 2 2)) (bruijn ##.x.278 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0));
}
static void _V10_Dfilter_D42_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.276 0 0) ((bruijn ##.filter.42 2 18) (close _V10_Dfilter_D42_k43) (bruijn ##.pred.113 1 1) (##inline ##vcore.cdr (bruijn ##.lst.114 1 2))) ((bruijn ##.filter.42 2 18) (bruijn ##.k.274 1 0) (bruijn ##.pred.113 1 1) (##inline ##vcore.cdr (bruijn ##.lst.114 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[18]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k43, self)})),
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[18]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dfilter_D42_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.114 0 2)) ((bruijn ##.k.274 0 0) (bruijn ##.lst.114 0 2)) ((bruijn ##.pred.113 0 1) (close _V10_Dfilter_D42_k42) (##inline ##vcore.car (bruijn ##.lst.114 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k42, self)})),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dpartition_D43_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.partition.43 2 19) (bruijn ##.k.284 0 0) (bruijn ##.pred.115 1 1) (##inline ##vcore.cdr (bruijn ##.lst.116 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[19]), 3,
      _var0,
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
static void _V10_Dpartition_D43_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.287 0 0) ((bruijn ##.x.160 10 0) (bruijn ##.k.286 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.116 2 2)) (bruijn ##.l.117 1 1)) (bruijn ##.r.118 1 2)) ((bruijn ##.x.160 10 0) (bruijn ##.k.286 1 0) (bruijn ##.l.117 1 1) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.116 2 2)) (bruijn ##.r.118 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[1]),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[2]));
}
}
static void _V10_Dpartition_D43_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.pred.115 1 1) (close _V10_Dpartition_D43_k44) (##inline ##vcore.car (bruijn ##.lst.116 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k44, self)})),
      VInlineCar2(runtime,
        statics->vars[2]));
}
static void _V10_Dpartition_D43_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.116 0 2)) ((bruijn ##.x.160 8 0) (bruijn ##.k.282 0 0) '() '()) (##vcore.call-with-values (bruijn ##.k.282 0 0) (close _V10_Dpartition_D43_lambda33) (close _V10_Dpartition_D43_lambda34)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      VNULL,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_lambda33, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_lambda34, self)})));
}
}
static void _V10_Dtake__while_D44_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.299 1 0) (##inline ##vcore.not (bruijn ##.x.300 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dtake__while_D44_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.298 1 0) ((bruijn ##.k.299 0 0) (bruijn ##.p.298 1 0)) ((bruijn ##.pred.119 2 1) (close _V10_Dtake__while_D44_k47) (##inline ##vcore.car (bruijn ##.lst.120 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k47, self)})),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dtake__while_D44_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.293 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.120 3 2)) (bruijn ##.x.296 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var0));
}
static void _V10_Dtake__while_D44_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.294 0 0) ((bruijn ##.k.293 2 0) '()) ((bruijn ##.take-while.44 3 20) (close _V10_Dtake__while_D44_k49) (bruijn ##.pred.119 2 1) (##inline ##vcore.cdr (bruijn ##.lst.120 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[20]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k49, self)})),
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dtake__while_D44_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtake__while_D44_k46) (close _V10_Dtake__while_D44_k48))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtake__while_D44_k46, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k48, self)})));
}
static void _V10_Dtake__while_D44_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dtake__while_D44_k45) (##inline ##vcore.null? (bruijn ##.lst.120 0 2)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtake__while_D44_k45, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var2));
}
static void _V10_Ddrop__while_D45_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.306 1 0) (##inline ##vcore.not (bruijn ##.x.307 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Ddrop__while_D45_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.305 1 0) ((bruijn ##.k.306 0 0) (bruijn ##.p.305 1 0)) ((bruijn ##.pred.121 2 1) (close _V10_Ddrop__while_D45_k52) (##inline ##vcore.car (bruijn ##.lst.122 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_k52, self)})),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Ddrop__while_D45_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.303 0 0) ((bruijn ##.k.302 2 0) (bruijn ##.lst.122 2 2)) ((bruijn ##.drop-while.45 3 21) (bruijn ##.k.302 2 0) (bruijn ##.pred.121 2 1) (##inline ##vcore.cdr (bruijn ##.lst.122 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[21]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Ddrop__while_D45_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddrop__while_D45_k51) (close _V10_Ddrop__while_D45_k53))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddrop__while_D45_k51, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_k53, self)})));
}
static void _V10_Ddrop__while_D45_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Ddrop__while_D45_k50) (##inline ##vcore.null? (bruijn ##.lst.122 0 2)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddrop__while_D45_k50, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var2));
}
static void _V10_Dsplit__while_D46_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.317 1 0) (##inline ##vcore.not (bruijn ##.x.318 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dsplit__while_D46_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.316 1 0) ((bruijn ##.k.317 0 0) (bruijn ##.p.316 1 0)) ((bruijn ##.pred.123 2 1) (close _V10_Dsplit__while_D46_k56) (##inline ##vcore.car (bruijn ##.lst.124 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k56, self)})),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dsplit__while_D46_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.split-while.46 4 22) (bruijn ##.k.311 0 0) (bruijn ##.pred.123 3 1) (##inline ##vcore.cdr (bruijn ##.lst.124 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[22]), 3,
      _var0,
      statics->up->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dsplit__while_D46_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.160 11 0) (bruijn ##.k.313 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.124 3 2)) (bruijn ##.t.125 0 1)) (bruijn ##.d.126 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var1),
      _var2);
}
static void _V10_Dsplit__while_D46_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.310 0 0) ((bruijn ##.x.160 10 0) (bruijn ##.k.309 2 0) '() (bruijn ##.lst.124 2 2)) (##vcore.call-with-values (bruijn ##.k.309 2 0) (close _V10_Dsplit__while_D46_lambda38) (close _V10_Dsplit__while_D46_lambda39)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_lambda38, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_lambda39, self)})));
}
}
static void _V10_Dsplit__while_D46_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dsplit__while_D46_k55) (close _V10_Dsplit__while_D46_k57))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dsplit__while_D46_k55, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k57, self)})));
}
static void _V10_Dsplit__while_D46_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dsplit__while_D46_k54) (##inline ##vcore.null? (bruijn ##.lst.124 0 2)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dsplit__while_D46_k54, .env = self }, }, 1,
      VInlineNullP2(runtime,
        _var2));
}
static void _V10_Dany_Q_D47_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D47_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.322 0 0) ((bruijn ##.k.320 1 0) #t) ((bruijn ##.any?.47 2 23) (bruijn ##.k.320 1 0) (bruijn ##.p.127 1 1) (##inline ##vcore.cdr (bruijn ##.lst.128 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[23]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dany_Q_D47_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D47_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.p.127 0 1)) ((bruijn ##.k.320 0 0) #f) ((bruijn ##.p.127 0 1) (close _V10_Dany_Q_D47_k58) (##inline ##vcore.car (bruijn ##.lst.128 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D47_k58, self)})),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Devery_Q_D48_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.325 1 0) (##inline ##vcore.not (bruijn ##.x.326 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Devery_Q_D48_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.327 1 0) (##inline ##vcore.not (bruijn ##.x.328 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Devery_Q_D48_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.p.129 1 1) (close _V10_Devery_Q_D48_k60) (bruijn ##.e.131 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_k60, self)})),
      _var1);
}
static void _V10_Devery_Q_D48_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.any?.47 1 23) (close _V10_Devery_Q_D48_k59) (close _V10_Devery_Q_D48_lambda42) (bruijn ##.lst.130 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[23]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_k59, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_lambda42, self)})),
      _var2);
}
static void _V10_Dloop_D134_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.332 0 0) ((bruijn ##.k.330 1 0) (bruijn ##.i.135 1 1)) (basic-block 1 1 (##.reg.453) ((##vcore.+ (bruijn ##.i.135 2 1) 1)) ((bruijn ##.loop.134 3 0) (bruijn ##.k.330 2 0) (bruijn ##.reg.453 0 0) (##inline ##vcore.cdr (bruijn ##.lst.136 2 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      self->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
    }
}
}
static void _V10_Dloop_D134_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.p.132 2 1)) ((bruijn ##.k.330 0 0) #f) ((bruijn ##.p.132 2 1) (close _V10_Dloop_D134_k61) (##inline ##vcore.car (bruijn ##.lst.136 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_k61, self)})),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dlist__index_D49_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__index_D49_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D134_lambda44)) ((bruijn ##.loop.134 0 0) (bruijn ##.k.329 1 0) 0 (bruijn ##.lst.133 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_lambda44, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[2]);
    }
}
static void _V10_Dinsert_D50_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.336 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.137 3 1)) (bruijn ##.x.339 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
static void _V10_Dinsert_D50_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.337 0 0) ((bruijn ##.k.336 1 0) (##inline ##vcore.cons (bruijn ##.x.139 1 3) (bruijn ##.lst.137 1 1))) (basic-block 1 1 (##.reg.454) ((##vcore.- (bruijn ##.i.138 2 2) 1)) ((bruijn ##.insert.50 3 26) (close _V10_Dinsert_D50_k63) (##inline ##vcore.cdr (bruijn ##.lst.137 2 1)) (bruijn ##.reg.454 0 0) (bruijn ##.x.139 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[3],
        statics->vars[1]));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[26]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_k63, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      self->vars[0],
      statics->up->vars[3]);
    }
}
}
static void _V10_Dinsert_D50_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_lambda45, got ~D~N"
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
  // ((bruijn ##.x.159 9 0) (close _V10_Dinsert_D50_k62) (bruijn ##.i.138 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_k62, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ddelete_D51_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.342 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.140 3 1)) (bruijn ##.x.345 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
static void _V10_Ddelete_D51_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.343 0 0) ((bruijn ##.k.342 1 0) (##inline ##vcore.cdr (bruijn ##.lst.140 1 1))) (basic-block 1 1 (##.reg.455) ((##vcore.- (bruijn ##.i.141 2 2) 1)) ((bruijn ##.delete.51 3 27) (close _V10_Ddelete_D51_k65) (##inline ##vcore.cdr (bruijn ##.lst.140 2 1)) (bruijn ##.reg.455 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        statics->vars[1]));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[27]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_k65, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      self->vars[0]);
    }
}
}
static void _V10_Ddelete_D51_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.159 9 0) (close _V10_Ddelete_D51_k64) (bruijn ##.i.141 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_k64, self)})),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Dassq__update_D52_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.348 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.142 2 1)) (bruijn ##.x.355 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
static void _V10_Dassq__update_D52_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.143 1 2) (bruijn ##.x.357 0 0)) ((bruijn ##.k.348 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.143 1 2) (bruijn ##.val.144 1 3)) (##inline ##vcore.cdr (bruijn ##.lst.142 1 1)))) ((bruijn ##.assoc-update.54 2 30) (close _V10_Dassq__update_D52_k67) (##inline ##vcore.cdr (bruijn ##.lst.142 1 1)) (bruijn ##.x.143 1 2) (bruijn ##.val.144 1 3)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[2],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]),
        VInlineCdr2(runtime,
        statics->vars[1])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[30]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k67, self)})),
      VInlineCdr2(runtime,
        statics->vars[1]),
      statics->vars[2],
      statics->vars[3]);
}
}
static void _V10_Dassq__update_D52_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_lambda47, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.142 0 1)) ((bruijn ##.k.348 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.143 0 2) (bruijn ##.val.144 0 3)) '())) ((bruijn ##.x.158 10 0) (close _V10_Dassq__update_D52_k66) (bruijn ##.lst.142 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var2,
        _var3),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k66, self)})),
      _var1);
}
}
static void _V10_Dassv__update_D53_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.358 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.145 3 1)) (bruijn ##.x.365 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
static void _V10_Dassv__update_D53_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.361 0 0) ((bruijn ##.k.358 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.146 2 2) (bruijn ##.val.147 2 3)) (##inline ##vcore.cdr (bruijn ##.lst.145 2 1)))) ((bruijn ##.assoc-update.54 3 30) (close _V10_Dassv__update_D53_k70) (##inline ##vcore.cdr (bruijn ##.lst.145 2 1)) (bruijn ##.x.146 2 2) (bruijn ##.val.147 2 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[2],
        statics->up->vars[3]),
        VInlineCdr2(runtime,
        statics->up->vars[1])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[30]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k70, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      statics->up->vars[2],
      statics->up->vars[3]);
}
}
static void _V10_Dassv__update_D53_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dassv__update_D53_k69) (bruijn ##.x.146 1 2) (bruijn ##.x.367 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k69, self)})),
      statics->vars[2],
      _var0);
}
static void _V10_Dassv__update_D53_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_lambda48, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.145 0 1)) ((bruijn ##.k.358 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.146 0 2) (bruijn ##.val.147 0 3)) '())) ((bruijn ##.x.158 10 0) (close _V10_Dassv__update_D53_k68) (bruijn ##.lst.145 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var2,
        _var3),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k68, self)})),
      _var1);
}
}
static void _V10_Dassoc__update_D54_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.369 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.151 3 1)) (bruijn ##.x.376 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
static void _V10_Dassoc__update_D54_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.372 0 0) ((bruijn ##.k.369 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.152 2 2) (bruijn ##.val.153 2 3)) (##inline ##vcore.cdr (bruijn ##.lst.151 2 1)))) ((bruijn ##.assoc-update.54 3 30) (close _V10_Dassoc__update_D54_k73) (##inline ##vcore.cdr (bruijn ##.lst.151 2 1)) (bruijn ##.x.152 2 2) (bruijn ##.val.153 2 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[2],
        statics->up->vars[3]),
        VInlineCdr2(runtime,
        statics->up->vars[1])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[30]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k73, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      statics->up->vars[2],
      statics->up->vars[3]);
}
}
static void _V10_Dassoc__update_D54_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.154 1 4) (close _V10_Dassoc__update_D54_k72) (bruijn ##.x.152 1 2) (bruijn ##.x.378 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[4]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k72, self)})),
      statics->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dassoc__update_D54_lambda49(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dassoc__update_D54_lambda49 #t (4 ((bruijn ##.assoc-update.54 1 30) (bruijn ##.k.368 0 0) (bruijn ##.lst.148 0 1) (bruijn ##.x.149 0 2) (bruijn ##.val.150 0 3) (bruijn ##.x.157 11 0))) (5 (if (##inline ##vcore.null? (bruijn ##.lst.151 0 1)) ((bruijn ##.k.369 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.152 0 2) (bruijn ##.val.153 0 3)) '())) ((bruijn ##.x.158 10 0) (close _V10_Dassoc__update_D54_k71) (bruijn ##.lst.151 0 1)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_lambda49, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dassoc__update_D54_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // ((bruijn ##.assoc-update.54 1 30) (bruijn ##.k.368 0 0) (bruijn ##.lst.148 0 1) (bruijn ##.x.149 0 2) (bruijn ##.val.150 0 3) (bruijn ##.x.157 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[30]), 5,
      _var0,
      _var1,
      _var2,
      _var3,
      VGetArg(statics, 11-1, 0));
}
__attribute__((used)) static void _V20Case1__V10_Dassoc__update_D54_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (if (##inline ##vcore.null? (bruijn ##.lst.151 0 1)) ((bruijn ##.k.369 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.152 0 2) (bruijn ##.val.153 0 3)) '())) ((bruijn ##.x.158 10 0) (close _V10_Dassoc__update_D54_k71) (bruijn ##.lst.151 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var2,
        _var3),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k71, self)})),
      _var1);
}
}
void _V10_Dassoc__update_D54_lambda49(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dassoc__update_D54_lambda49, @function\n"
#endif
"_V10_Dassoc__update_D54_lambda49:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V10_Dassoc__update_D54_lambda49\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V10_Dassoc__update_D54_lambda49\n"
"    jmp _V20CaseError__V10_Dassoc__update_D54_lambda49\n"
);
static void _V0vanity_V0list_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 31 ((close _V10_Dmy__num__pairs_D24_lambda2) (close _V10_Diota_D25_lambda4) (close _V10_Dlist__tabulate_D26_lambda8) (close _V10_Dtake_D27_lambda10) (close _V10_Ddrop_D28_lambda11) (close _V10_Dtake__right_D29_lambda12) (close _V10_Ddrop__right_D30_lambda14) (close _V10_Dsplit__at_D31_lambda16) (close _V10_Dfold_D32_lambda19) (close _V10_Dfold__right_D33_lambda20) (close _V10_Dconcatenate_D34_lambda21) (close _V10_Dzip_D35_lambda22) (close _V10_Dunzip1_D36_lambda23) (close _V10_Dunzip2_D37_lambda24) (close _V10_Dunzip3_D38_lambda25) (close _V10_Dunzip4_D39_lambda26) (close _V10_Dunzip5_D40_lambda27) (close _V10_Dcount_D41_lambda29) (close _V10_Dfilter_D42_lambda31) (close _V10_Dpartition_D43_lambda32) (close _V10_Dtake__while_D44_lambda35) (close _V10_Ddrop__while_D45_lambda36) (close _V10_Dsplit__while_D46_lambda37) (close _V10_Dany_Q_D47_lambda40) (close _V10_Devery_Q_D48_lambda41) (close _V10_Dlist__index_D49_lambda43) (close _V10_Dinsert_D50_lambda45) (close _V10_Ddelete_D51_lambda46) (close _V10_Dassq__update_D52_lambda47) (close _V10_Dassv__update_D53_lambda48) (close _V10_Dassoc__update_D54_lambda49)) ((bruijn ##.k.156 13 0) (##inline ##vcore.cons (##inline ##vcore.cons 'iota (bruijn ##.iota.25 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tabulate (bruijn ##.list-tabulate.26 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'take (bruijn ##.take.27 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop (bruijn ##.drop.28 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-right (bruijn ##.take-right.29 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right (bruijn ##.drop-right.30 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at (bruijn ##.split-at.31 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold (bruijn ##.fold.32 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold-right (bruijn ##.fold-right.33 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate (bruijn ##.concatenate.34 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'zip (bruijn ##.zip.35 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip1 (bruijn ##.unzip1.36 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip2 (bruijn ##.unzip2.37 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip3 (bruijn ##.unzip3.38 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip4 (bruijn ##.unzip4.39 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip5 (bruijn ##.unzip5.40 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'count (bruijn ##.count.41 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.42 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition (bruijn ##.partition.43 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while (bruijn ##.take-while.44 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-while (bruijn ##.drop-while.45 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-while (bruijn ##.split-while.46 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'any? (bruijn ##.any?.47 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'every? (bruijn ##.every?.48 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-index (bruijn ##.list-index.49 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'insert (bruijn ##.insert.50 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete (bruijn ##.delete.51 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq-update (bruijn ##.assq-update.52 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv-update (bruijn ##.assv-update.53 0 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc-update (bruijn ##.assoc-update.54 0 30)) '()))))))))))))))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[31]; } container;
    self = &container.self;
    VInitEnv(self, 31, 31, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmy__num__pairs_D24_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diota_D25_lambda4, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tabulate_D26_lambda8, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_lambda10, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D28_lambda11, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__right_D29_lambda12, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__right_D30_lambda14, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_lambda16, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D32_lambda19, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D33_lambda20, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D34_lambda21, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dzip_D35_lambda22, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip1_D36_lambda23, self)}));
    self->vars[13] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D37_lambda24, self)}));
    self->vars[14] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_lambda25, self)}));
    self->vars[15] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_lambda26, self)}));
    self->vars[16] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_lambda27, self)}));
    self->vars[17] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount_D41_lambda29, self)}));
    self->vars[18] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_lambda31, self)}));
    self->vars[19] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_lambda32, self)}));
    self->vars[20] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_lambda35, self)}));
    self->vars[21] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_lambda36, self)}));
    self->vars[22] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_lambda37, self)}));
    self->vars[23] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D47_lambda40, self)}));
    self->vars[24] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_lambda41, self)}));
    self->vars[25] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__index_D49_lambda43, self)}));
    self->vars[26] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_lambda45, self)}));
    self->vars[27] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_lambda46, self)}));
    self->vars[28] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_lambda47, self)}));
    self->vars[29] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_lambda48, self)}));
    self->vars[30] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_lambda49, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0iota,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tabulate,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__right,
        self->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__right,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at,
        self->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold,
        self->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold__right,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0concatenate,
        self->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zip,
        self->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip1,
        self->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip2,
        self->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip3,
        self->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip4,
        self->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip5,
        self->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0count,
        self->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        self->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0partition,
        self->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__while,
        self->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__while,
        self->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__while,
        self->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0any_Q,
        self->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0every_Q,
        self->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__index,
        self->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0insert,
        self->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete,
        self->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq__update,
        self->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv__update,
        self->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc__update,
        self->vars[30]),
        VNULL)))))))))))))))))))))))))))))));
    }
}
static void _V0vanity_V0list_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0list_V20_k12) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k12, self)})),
      _V0append);
}
static void _V0vanity_V0list_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0list_V20_k11) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k11, self)})),
      _V0list);
}
static void _V0vanity_V0list_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0list_V20_k10) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k10, self)})),
      _V0cadr);
}
static void _V0vanity_V0list_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0list_V20_k9) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k9, self)})),
      _V0caddr);
}
static void _V0vanity_V0list_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0list_V20_k8) 'cadddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k8, self)})),
      _V0cadddr);
}
static void _V0vanity_V0list_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0list_V20_k7) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k7, self)})),
      _V0map);
}
static void _V0vanity_V0list_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0list_V20_k6) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k6, self)})),
      _V0values);
}
static void _V0vanity_V0list_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0list_V20_k5) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k5, self)})),
      _V0_E);
}
static void _V0vanity_V0list_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0list_V20_k4) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k4, self)})),
      _V0caar);
}
static void _V0vanity_V0list_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0list_V20_k3) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k3, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0list_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0list_V20_k2) (##string ##.string.456) (bruijn ##.x.438 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D456.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0list_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0list_V20_k1) (##string ##.string.457))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D457.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_lambda1;
