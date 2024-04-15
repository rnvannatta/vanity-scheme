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
         ((##vcore.procedure?) "VProcedureP2")
         ((##vcore.blob?) "VBlobP2")
         ((##vcore.symbol?) "VSymbolP2")
         ((##vcore.string?) "VStringP2")
         ((##vcore.int?) "VIntP2")
         ((##vcore.double?) "VDoubleP2")
         ((##vcore.char?) "VCharP2")

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

         ((##vcore.function) "VFunction2")
         ((##vcore.define) "VDefineGlobalVar2")
         ((##vcore.multidefine) "VMultiDefine2")
         ((##vcore.lookup-library) "VLookupLibrary2")
         ((##vcore.make-import) "VMakeImport2")
         ((##vcore.load-library) "VLoadLibrary2")

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

         ; Records
         ((##vcore.record) "VCreateRecord2")
         ((##vcore.record-ref) "VRecordRef2")
         ((##vcore.record-set!) "VRecordSet2")
         ((##vcore.record-length) "VRecordLength2")

         ; Hash Table
         ((##vcore.make-hash-table) "VMakeHashTable")
         ((##vcore.hash-table-equivalence-function) "VHashTableEqvFunc")
         ((##vcore.hash-table-hash-function) "VHashTableHashFunc")
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
         ((##vcore.make-temporary-file) "VMakeTemporaryFile2")
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

         (else #f)))
  (define (lookup-intrinsic sym)
    (case sym
         ; Math
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
         ((##vcore.record?) ##vcore.record?)
         ((##vcore.procedure?) ##vcore.procedure?)
         ((##vcore.blob?) ##vcore.blob?)
         ((##vcore.symbol?) ##vcore.symbol?)
         ((##vcore.string?) ##vcore.string?)
         ((##vcore.int?) ##vcore.int?)
         ((##vcore.double?) ##vcore.double?)
         ((##vcore.char?) ##vcore.char?)

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

         ((##vcore.function) ##vcore.function)
         ((##vcore.define) ##vcore.define)
         ((##vcore.multidefine) ##vcore.multidefine)
         ((##vcore.lookup-library) ##vcore.lookup-library)
         ((##vcore.make-import) ##vcore.make-import)
         ((##vcore.load-library) ##vcore.load-library)

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

         ; Records
         ((##vcore.record) ##vcore.record)
         ((##vcore.record-ref) ##vcore.record-ref)
         ((##vcore.record-set!) ##vcore.record-set!)
         ((##vcore.record-length) ##vcore.record-length)

         ; Hash Table
         ((##vcore.make-hash-table) ##vcore.make-hash-table)
         ((##vcore.hash-table-equivalence-function) ##vcore.hash-table-equivalence-function)
         ((##vcore.hash-table-hash-function) ##vcore.hash-table-hash-function)
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
         ((##vcore.make-temporary-file) ##vcore.make-temporary-file)
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

         (else #f))))
