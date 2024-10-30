; Copyright 2023-2024 Richard N Van Natta
;
; This file is part of the Vanity Scheme Runtime.
;
; The Vanity Scheme Runtime is free software: you can redistribute it
; and/or modify it under the terms of the GNU Lesser General Public
; License as published by the Free Software Foundation, either version
; 2.1 of the License, or (at your option) any later version.
; 
; The Vanity Scheme Runtime is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; Lesser General Public License for more details.
;
; You should have received a copy of the GNU Lesser General Public
; License along with the Vanity Scheme Runtime.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity intrinsics)
  (export lookup-inline-name lookup-intrinsic-name lookup-intrinsic)
  (import (vanity core))
  (define (lookup-inline-name sym)
    (case sym
      ; predicates
      ((##vcore.null?) "VInlineNullP2")
      ((##vcore.pair?) "VInlinePairP2")
      ;((##vcore.symbol?) "VInlineSymbolP")
      ;((##vcore.string?) "VInlineSymbolP")
      ; logic
      ((##vcore.not) "VInlineNot2")
      ; equivalence
      ((##vcore.eq?) "VInlineEq2")
      ; lists
      ((##vcore.cons ##vcore.qcons) "VInlineCons2")
      ((##vcore.car) "VInlineCar2")
      ((##vcore.cdr) "VInlineCdr2")
      (else #f)))
  (define (lookup-intrinsic-name sym)
    (case sym
         ; Math
         ((##vcore.inexact) "VInexact")
         ((##vcore.exact) "VExact")

         ((##vcore.+) "VAdd2")
         ((##vcore.-) "VSub2")
         ((##vcore.*) "VMul2")
         ((##vcore./) "VDiv2")
         ((##vcore.cmp) "VCmp2")

         ((##vcore.quotient) "VQuot2")
         ((##vcore.remainder) "VRem2")

         ; Predicates
         ((##vcore.null?) "VNullP2")
         ((##vcore.pair?) "VPairP2")
         ((##vcore.record?) "VRecordP2")
         ((##vcore.vector?) "VVectorP2")
         ((##vcore.hash-table?) "VHashTableP")
         ((##vcore.procedure?) "VProcedureP2")
         ((##vcore.blob?) "VBlobP2")
         ((##vcore.symbol?) "VSymbolP2")
         ((##vcore.string?) "VStringP2")
         ((##vcore.int?) "VIntP2")
         ((##vcore.double?) "VDoubleP2")
         ((##vcore.char?) "VCharP2")
         ((##vcore.void?) "VVoidP2")
         ((##vcore.nullptr?) "VNullptrP2")
         ((##vcore.foreign-pointer?) "VForeignPointerP2")

         ; Equality
         ((##vcore.eq?) "VEq2")
         ((##vcore.symbol=?) "VSymbolEqv2")
         ((##vcore.blob=?) "VBlobEqv2")
         ((##vcore.eqv?) "VEqv")

         ; Logic
         ((##vcore.not) "VNot2")

         ; Dynamic Variables
         ((##vcore.get-dynamics) "VGetDynamics")
         ((##vcore.push-dynamic) "VPushDynamic")
         ((##vcore.pop-dynamic) "VPopDynamic")
         ((##vcore.get-exception-handler) "VGetExceptionHandler")
         ((##vcore.push-exception-handler) "VPushExceptionHandler")
         ((##vcore.pop-exception-handler) "VPopExceptionHandler")
         ((##vcore.raise) "VRaise")

         ; System
         ((##vcore.next) "VNext2")
         ((##vcore.call/cc) "VCallCC2")
         ((##vcore.call-with-values) "VCallValues2")
         ((##vcore.apply) "VApply2")
         ((##vcore.apply-cps) "VApplyCps")
         ((##vcore.abort) "VAbort2")
         ((##vcore.exit) "VExit2")
         ((##vcore.define-global) "VDefineGlobalVar2")
         ((##vcore.set-global!) "VSetGlobalVar2")

         ; Libraries
         ((##vcore.function) "VFunction2")
         ((##vcore.set-declare!) "VSetDeclare")
         ((##vcore.define) "VDefineGlobalVar2")
         ((##vcore.multidefine) "VMultiDefine2")
         ((##vcore.lookup-library) "VLookupLibrary2")
         ((##vcore.make-import) "VMakeImport2")
         ((##vcore.load-library) "VLoadLibrary2")
         ((##vcore.unload-library) "VUnloadLibrary2")

         ; Lists
         ((##vcore.cons ##vcore.qcons) "VCons2")
         ((##vcore.car) "VCar2")
         ((##vcore.cdr) "VCdr2")
         ((##vcore.set-car!) "VSetCar2")
         ((##vcore.set-cdr!) "VSetCdr2")

         ; Vectors
         ((##vcore.list->vector) "VListVector2")
         ((##vcore.vector-ref) "VVectorRef2")
         ((##vcore.vector-set!) "VVectorSet2")
         ((##vcore.vector-length) "VVectorLength2")

         ; Typevectors
         ((##vcore.f64vector?) "VF64VectorP")
         ((##vcore.make-f64vector) "VMakeF64Vector")
         ((##vcore.list->f64vector) "VListF64Vector")
         ((##vcore.f64vector-ref) "VF64VectorRef")
         ((##vcore.f64vector-set!) "VF64VectorSet")
         ((##vcore.f64vector-length) "VF64VectorLength")

         ((##vcore.f32vector?) "VF32VectorP")
         ((##vcore.make-f32vector) "VMakeF32Vector")
         ((##vcore.list->f32vector) "VListF32Vector")
         ((##vcore.f32vector-ref) "VF32VectorRef")
         ((##vcore.f32vector-set!) "VF32VectorSet")
         ((##vcore.f32vector-length) "VF32VectorLength")

         ((##vcore.s32vector?) "VS32VectorP")
         ((##vcore.make-s32vector) "VMakeS32Vector")
         ((##vcore.list->s32vector) "VListS32Vector")
         ((##vcore.s32vector-ref) "VS32VectorRef")
         ((##vcore.s32vector-set!) "VS32VectorSet")
         ((##vcore.s32vector-length) "VS32VectorLength")

         ((##vcore.u16vector?) "VU16VectorP")
         ((##vcore.make-u16vector) "VMakeU16Vector")
         ((##vcore.list->u16vector) "VListU16Vector")
         ((##vcore.u16vector-ref) "VU16VectorRef")
         ((##vcore.u16vector-set!) "VU16VectorSet")
         ((##vcore.u16vector-length) "VU16VectorLength")

         ((##vcore.s16vector?) "VS16VectorP")
         ((##vcore.make-s16vector) "VMakeS16Vector")
         ((##vcore.list->s16vector) "VListS16Vector")
         ((##vcore.s16vector-ref) "VS16VectorRef")
         ((##vcore.s16vector-set!) "VS16VectorSet")
         ((##vcore.s16vector-length) "VS16VectorLength")

         ((##vcore.u8vector?) "VU8VectorP")
         ((##vcore.make-u8vector) "VMakeU8Vector")
         ((##vcore.list->u8vector) "VListU8Vector")
         ((##vcore.u8vector-ref) "VU8VectorRef")
         ((##vcore.u8vector-set!) "VU8VectorSet")
         ((##vcore.u8vector-length) "VU8VectorLength")

         ((##vcore.s8vector?) "VS8VectorP")
         ((##vcore.make-s8vector) "VMakeS8Vector")
         ((##vcore.list->s8vector) "VListS8Vector")
         ((##vcore.s8vector-ref) "VS8VectorRef")
         ((##vcore.s8vector-set!) "VS8VectorSet")
         ((##vcore.s8vector-length) "VS8VectorLength")

         ; Records
         ((##vcore.record) "VCreateRecord2")
         ((##vcore.record-ref) "VRecordRef2")
         ((##vcore.record-set!) "VRecordSet2")
         ((##vcore.record-length) "VRecordLength2")

         ; Hash Table
         ((##vcore.make-hash-table) "VMakeHashTable")
         ((##vcore.hash-table-equivalence-function) "VHashTableEqvFunc")
         ((##vcore.hash-table-hash-function) "VHashTableHashFunc")
         ((##vcore.hash-table-vector) "VHashTableVector")
         ((##vcore.hash-table-ref) "VHashTableRef")
         ((##vcore.hash-table-set!) "VHashTableSet")
         ((##vcore.hash-table-delete!) "VHashTableDelete")

         ; Strings

         ((##vcore.make-string) "VMakeString2")
         ((##vcore.substring) "VSubstring2")
         ((##vcore.string-copy!) "VStringCopy2")
         ((##vcore.string-ref) "VStringRef2")
         ((##vcore.string-set!) "VStringSet2")
         ((##vcore.string-length) "VStringLength2")
         ((##vcore.string->symbol) "VStringSymbol2")
         ((##vcore.string->number) "VStringNumber2")

         ; Symbols

         ((##vcore.symbol->string) "VSymbolString2")
         ((##vcore.gensym) "VGensym")

         ; Characters

         ((##vcore.char-integer) "VCharInt2")
         
         ; IO
         ((##vcore.stdin->port) "VStdinPort")
         ((##vcore.stdout->port) "VStdoutPort")
         ((##vcore.stderr->port) "VStderrPort")

         ((##vcore.dup-stdin) "VDupStdin2")
         ((##vcore.dup-stdout) "VDupStdout2")
         ((##vcore.dup-stderr) "VDupStderr2")

         ((##vcore.open-input-stream) "VOpenInputStream2")
         ((##vcore.open-output-stream) "VOpenOutputStream2")
         ((##vcore.close-stream) "VCloseStream2")

         ((##vcore.tty-port?) "VTtyPortP")

         ((##vcore.open-output-string) "VOpenOutputString2")
         ((##vcore.get-output-string) "VGetOutputString2")

         ((##vcore.eof-object?) "VEofP2")

         ((##vcore.read-char) "VReadChar2")
         ((##vcore.read-line) "VReadLine2")
         ((##vcore.read) "VRead2")

         ((##vcore.display-word) "VDisplay2")
         ((##vcore.write) "VWrite2")
         ((##vcore.newline) "VNewline2")

         ((##vcore.display-stdout) "VDisplayStdout")
         ((##vcore.write-stdout) "VWriteStdout")
         ((##vcore.newline-stdout) "VNewlineStdout")

         ; GC
         ((##vcore.set-finalizer!) "VSetFinalizer")
         ((##vcore.has-finalizer?) "VHasFinalizer")
         ((##vcore.finalize!) "VFinalize")
         ((##vcore.garbage-collect) "VGarbageCollect")

         ; System
         ((##vcore.system) "VSystem2")
         ((##vcore.open-input-process) "VOpenInputProcess2")
         ((##vcore.open-output-process) "VOpenOutputProcess2")
         ((##vcore.command-line) "VCommandLine2")
         ((##vcore.register-sigint) "VRegisterSigint")

         ; Random
         ((##vcore.make-random) "VMakeRandom")
         ((##vcore.random-copy) "VRandomCopy")
         ((##vcore.random-sample!) "VRandomSample")
         ((##vcore.random-sample-bounded!) "VRandomSampleBounded")
         ((##vcore.random-sample-float!) "VRandomSampleFloat")
         ((##vcore.random-advance!) "VRandomAdvance")

         ; Fibers
         ((##vcore.fiber-fork-list) "VFiberForkList")
         ((##vcore.async) "VAsync")
         ((##vcore.await) "VAwait")

         ; Filesystem
         ((##vcore.realpath) "VRealpath")
         ((##vcore.make-temporary-file) "VMakeTemporaryFile2")
         ((##vcore.access) "VAccess")

         ; Time
         ((##vcore.current-jiffy) "VCurrentJiffy")
         ((##vcore.jiffies-per-second) "VJiffiesPerSecond")

         ; Bit Banging
         ((##vcore.bitwise-not) "VBitwiseNot")
         ((##vcore.bitwise-ior) "VBitwiseIor")
         ((##vcore.bitwise-xor) "VBitwiseXor")
         ((##vcore.bitwise-and) "VBitwiseAnd")
         ((##vcore.bitwise-xnor) "VBitwiseXnor")
         ((##vcore.bitwise-nand) "VBitwiseNand")
         ((##vcore.bitwise-nor) "VBitwiseNor")
         ((##vcore.bitwise-andc1) "VBitwiseAndC1")
         ((##vcore.bitwise-andc2) "VBitwiseAndC2")
         ((##vcore.bitwise-orc1) "VBitwiseOrC1")
         ((##vcore.bitwise-orc2) "VBitwiseOrC2")
         ((##vcore.arithmetic-shift) "VArithmeticShift")
         ((##vcore.bit-count) "VBitCount")

         (else #f)))
  (define (lookup-intrinsic sym)
    (case sym
         ; Math
         ((##vcore.inexact) ##vcore.inexact)
         ((##vcore.exact) ##vcore.exact)

         ((##vcore.+) ##vcore.+)
         ((##vcore.-) ##vcore.-)
         ((##vcore.*) ##vcore.*)
         ((##vcore./) ##vcore./)
         ((##vcore.cmp) ##vcore.cmp)

         ((##vcore.quotient) ##vcore.quotient)
         ((##vcore.remainder) ##vcore.remainder)

         ; Predicates
         ((##vcore.null?) ##vcore.null?)
         ((##vcore.pair?) ##vcore.pair?)
         ((##vcore.vector?) ##vcore.vector?)
         ((##vcore.hash-table?) ##vcore.hash-table?)
         ((##vcore.record?) ##vcore.record?)
         ((##vcore.procedure?) ##vcore.procedure?)
         ((##vcore.blob?) ##vcore.blob?)
         ((##vcore.symbol?) ##vcore.symbol?)
         ((##vcore.string?) ##vcore.string?)
         ((##vcore.int?) ##vcore.int?)
         ((##vcore.double?) ##vcore.double?)
         ((##vcore.char?) ##vcore.char?)
         ((##vcore.void?) ##vcore.void?)
         ((##vcore.nullptr?) ##vcore.nullptr?)
         ((##vcore.foreign-pointer?) ##vcore.foreign-pointer?)

         ; Equality
         ((##vcore.eq?) ##vcore.eq?)
         ((##vcore.symbol=?) ##vcore.symbol=?)
         ((##vcore.blob=?) ##vcore.blob=?)
         ((##vcore.eqv?) ##vcore.eqv?)

         ; Logic
         ((##vcore.not) ##vcore.not)

         ; Dynamic Variables
         ((##vcore.get-dynamics) ##vcore.get-dynamics)
         ((##vcore.push-dynamic) ##vcore.push-dynamic)
         ((##vcore.pop-dynamic) ##vcore.pop-dynamic)
         ((##vcore.get-exception-handler) ##vcore.get-exception-handler)
         ((##vcore.push-exception-handler) ##vcore.push-exception-handler)
         ((##vcore.pop-exception-handler) ##vcore.pop-exception-handler)
         ((##vcore.raise) ##vcore.raise)

         ; System
         ((##vcore.next) ##vcore.next)
         ((##vcore.call/cc) ##vcore.call/cc)
         ((##vcore.call-with-values) ##vcore.call-with-values)
         ((##vcore.apply) ##vcore.apply)
         ((##vcore.apply-cps) ##vcore.apply-cps)
         ((##vcore.abort) ##vcore.abort)
         ((##vcore.exit) ##vcore.exit)
         ((##vcore.define-global) ##vcore.define-global)
         ((##vcore.set-global!) ##vcore.set-global!)

         ; Records
         ((##vcore.record) ##vcore.record)
         ((##vcore.record-ref) ##vcore.record-ref)
         ((##vcore.record-set!) ##vcore.record-set!)
         ((##vcore.record-length) ##vcore.record-length)

         ; Libraries
         ((##vcore.function) ##vcore.function)
         ((##vcore.define) ##vcore.define)
         ((##vcore.multidefine) ##vcore.multidefine)
         ((##vcore.lookup-library) ##vcore.lookup-library)
         ((##vcore.make-import) ##vcore.make-import)
         ((##vcore.load-library) ##vcore.load-library)
         ((##vcore.unload-library) ##vcore.unload-library)

         ; Lists
         ((##vcore.cons ##vcore.qcons) ##vcore.cons)
         ((##vcore.car) ##vcore.car)
         ((##vcore.cdr) ##vcore.cdr)
         ((##vcore.set-car!) ##vcore.set-car!)
         ((##vcore.set-cdr!) ##vcore.set-cdr!)

         ; Vectors
         ((##vcore.list->vector) ##vcore.list->vector)
         ((##vcore.vector-ref) ##vcore.vector-ref)
         ((##vcore.vector-set!) ##vcore.vector-set!)
         ((##vcore.vector-length) ##vcore.vector-length)

         ; Typevectors
         ((##vcore.f64vector?) ##vcore.f64vector?)
         ((##vcore.make-f64vector) ##vcore.make-f64vector)
         ((##vcore.list->f64vector) ##vcore.list->f64vector)
         ((##vcore.f64vector-ref) ##vcore.f64vector-ref)
         ((##vcore.f64vector-set!) ##vcore.f64vector-set!)
         ((##vcore.f64vector-length) ##vcore.f64vector-length)

         ((##vcore.f32vector?) ##vcore.f32vector?)
         ((##vcore.make-f32vector) ##vcore.make-f32vector)
         ((##vcore.list->f32vector) ##vcore.list->f32vector)
         ((##vcore.f32vector-ref) ##vcore.f32vector-ref)
         ((##vcore.f32vector-set!) ##vcore.f32vector-set!)
         ((##vcore.f32vector-length) ##vcore.f32vector-length)

         ((##vcore.s32vector?) ##vcore.s32vector?)
         ((##vcore.make-s32vector) ##vcore.make-s32vector)
         ((##vcore.list->s32vector) ##vcore.list->s32vector)
         ((##vcore.s32vector-ref) ##vcore.s32vector-ref)
         ((##vcore.s32vector-set!) ##vcore.s32vector-set!)
         ((##vcore.s32vector-length) ##vcore.s32vector-length)

         ((##vcore.u16vector?) ##vcore.u16vector?)
         ((##vcore.make-u16vector) ##vcore.make-u16vector)
         ((##vcore.list->u16vector) ##vcore.list->u16vector)
         ((##vcore.u16vector-ref) ##vcore.u16vector-ref)
         ((##vcore.u16vector-set!) ##vcore.u16vector-set!)
         ((##vcore.u16vector-length) ##vcore.u16vector-length)

         ((##vcore.s16vector?) ##vcore.s16vector?)
         ((##vcore.make-s16vector) ##vcore.make-s16vector)
         ((##vcore.list->s16vector) ##vcore.list->s16vector)
         ((##vcore.s16vector-ref) ##vcore.s16vector-ref)
         ((##vcore.s16vector-set!) ##vcore.s16vector-set!)
         ((##vcore.s16vector-length) ##vcore.s16vector-length)

         ((##vcore.u8vector?) ##vcore.u8vector?)
         ((##vcore.make-u8vector) ##vcore.make-u8vector)
         ((##vcore.list->u8vector) ##vcore.list->u8vector)
         ((##vcore.u8vector-ref) ##vcore.u8vector-ref)
         ((##vcore.u8vector-set!) ##vcore.u8vector-set!)
         ((##vcore.u8vector-length) ##vcore.u8vector-length)

         ((##vcore.s8vector?) ##vcore.s8vector?)
         ((##vcore.make-s8vector) ##vcore.make-s8vector)
         ((##vcore.list->s8vector) ##vcore.list->s8vector)
         ((##vcore.s8vector-ref) ##vcore.s8vector-ref)
         ((##vcore.s8vector-set!) ##vcore.s8vector-set!)
         ((##vcore.s8vector-length) ##vcore.s8vector-length)

         ; Records
         ((##vcore.record) ##vcore.record)
         ((##vcore.record-ref) ##vcore.record-ref)
         ((##vcore.record-set!) ##vcore.record-set!)
         ((##vcore.record-length) ##vcore.record-length)

         ; Hash Table
         ((##vcore.make-hash-table) ##vcore.make-hash-table)
         ((##vcore.hash-table-equivalence-function) ##vcore.hash-table-equivalence-function)
         ((##vcore.hash-table-hash-function) ##vcore.hash-table-hash-function)
         ((##vcore.hash-table-vector) ##vcore.hash-table-vector)
         ((##vcore.hash-table-ref) ##vcore.hash-table-ref)
         ((##vcore.hash-table-set!) ##vcore.hash-table-set!)
         ((##vcore.hash-table-delete!) ##vcore.hash-table-delete!)

         ; Strings

         ((##vcore.make-string) ##vcore.make-string)
         ((##vcore.substring) ##vcore.substring)
         ((##vcore.string-copy!) ##vcore.string-copy!)
         ((##vcore.string-ref) ##vcore.string-ref)
         ((##vcore.string-set!) ##vcore.string-set!)
         ((##vcore.string-length) ##vcore.string-length)
         ((##vcore.string->symbol) ##vcore.string->symbol)
         ((##vcore.string->number) ##vcore.string->number)

         ; Symbols

         ((##vcore.symbol->string) ##vcore.symbol->string)
         ((##vcore.gensym) ##vcore.gensym)

         ; Characters

         ((##vcore.char-integer) ##vcore.char-integer)
         
         ; IO
         ((##vcore.stdin->port) ##vcore.stdin->port)
         ((##vcore.stdout->port) ##vcore.stdout->port)
         ((##vcore.stderr->port) ##vcore.stderr->port)

         ((##vcore.dup-stdin) ##vcore.dup-stdin)
         ((##vcore.dup-stdout) ##vcore.dup-stdout)
         ((##vcore.dup-stderr) ##vcore.dup-stderr)

         ((##vcore.open-input-stream) ##vcore.open-input-stream)
         ((##vcore.open-output-stream) ##vcore.open-output-stream)
         ((##vcore.close-stream) ##vcore.close-stream)

         ((##vcore.tty-port?) ##vcore.tty-port?)

         ((##vcore.open-output-string) ##vcore.open-output-string)
         ((##vcore.get-output-string) ##vcore.get-output-string)

         ((##vcore.eof-object?) ##vcore.eof-object?)

         ((##vcore.read-char) ##vcore.read-char)
         ((##vcore.read-line) ##vcore.read-line)
         ((##vcore.read) ##vcore.read)

         ((##vcore.display-word) ##vcore.display-word)
         ((##vcore.write) ##vcore.write)
         ((##vcore.newline) ##vcore.newline)

         ((##vcore.display-stdout) ##vcore.display-stdout)
         ((##vcore.write-stdout) ##vcore.write-stdout)
         ((##vcore.newline-stdout) ##vcore.newline-stdout)

         ; GC
         ((##vcore.set-finalizer!) ##vcore.set-finalizer!)
         ((##vcore.has-finalizer?) ##vcore.has-finalizer?)
         ((##vcore.finalize!) ##vcore.finalize!)
         ((##vcore.garbage-collect) ##vcore.garbage-collect)

         ; System
         ((##vcore.system) ##vcore.system)
         ((##vcore.open-input-process) ##vcore.open-input-process)
         ((##vcore.open-output-process) ##vcore.open-output-process)
         ((##vcore.command-line) ##vcore.command-line)

         ; Random
         ((##vcore.make-random) ##vcore.make-random)
         ((##vcore.random-copy) ##vcore.random-copy)
         ((##vcore.random-sample!) ##vcore.random-sample!)
         ((##vcore.random-sample-bounded!) ##vcore.random-sample-bounded!)
         ((##vcore.random-sample-float!) ##vcore.random-sample-float!)
         ((##vcore.random-advance!) ##vcore.random-advance!)

         ; Fibers
         ((##vcore.fiber-fork-list) ##vcore.fiber-fork-list)
         ((##vcore.async) ##vcore.async)
         ((##vcore.await) ##vcore.await)

         ; Filesystem
         ((##vcore.realpath) ##vcore.realpath)
         ((##vcore.make-temporary-file) ##vcore.make-temporary-file)
         ((##vcore.access) ##vcore.access)

         ; Time
         ((##vcore.current-jiffy) ##vcore.current-jiffy)
         ((##vcore.jiffies-per-second) ##vcore.jiffies-per-second)

         ; Bit Banging
         ((##vcore.bitwise-not) ##vcore.bitwise-not)
         ((##vcore.bitwise-ior) ##vcore.bitwise-ior)
         ((##vcore.bitwise-xor) ##vcore.bitwise-xor)
         ((##vcore.bitwise-and) ##vcore.bitwise-and)
         ((##vcore.bitwise-xnor) ##vcore.bitwise-xnor)
         ((##vcore.bitwise-nand) ##vcore.bitwise-nand)
         ((##vcore.bitwise-nor) ##vcore.bitwise-nor)
         ((##vcore.bitwise-andc1) ##vcore.bitwise-andc1)
         ((##vcore.bitwise-andc2) ##vcore.bitwise-andc2)
         ((##vcore.bitwise-orc1) ##vcore.bitwise-orc1)
         ((##vcore.bitwise-orc2) ##vcore.bitwise-orc2)
         ((##vcore.arithmetic-shift) ##vcore.arithmetic-shift)
         ((##vcore.bit-count) ##vcore.bit-count)

         (else #f))))
