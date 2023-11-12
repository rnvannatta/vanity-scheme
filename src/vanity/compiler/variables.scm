; Copyright 2023 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 3 of the
; License, or (at your option) any later version.
; 
; The Vanity Scheme Compiler is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; General Public License for more details.
;
; You should have received a copy of the GNU General Public
; License along with the Vanity Scheme Compiler.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission under GNU GPL
; Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
; should have been included with the Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

; mangles: _V0  a standard variable
;          _V10 a system variable
;          _V20 a library
;          _V30 a shim function for a ffi
;          _V40 an intrinsic

(define-library (vanity compiler variables)
  (export mangle-symbol mangle-library lookup-inline lookup-intrinsic2 free-variables)
  (import (vanity core) (vanity compiler utils))

  ; why does this return another symbol? should return a string? maybe I want eqv? that bad
  (define (mangle-symbol sym)
    (let* ((str (symbol->string sym))
           (strlen (string-length str))
           (port (open-output-string)))
      (if (eq? (string-ref str 0) #\#)
          (display "_V10" port)
          (display "_V0" port))
      (let loop ((i 0))
        (if (= i strlen)
            (let ((ret (get-output-string port)))
              (close-port port)
              (string->symbol ret))
            (begin
              (display
                (case (string-ref str i)
                  ((#\#) "") ; nothing, skip over #'s, they only show up at the front
                  ((#\!) "_B") ; bang
                  ((#\$) "_Z") ; ziti
                  ((#\%) "_M") ; modulo
                  ((#\&) "_R") ; reference
                  ((#\*) "_S") ; star
                  ((#\/) "_W") ; with
                  ((#\:) "_J") ; join
                  ((#\<) "_L") ; less than
                  ((#\=) "_E") ; equal
                  ((#\>) "_G") ; greater than
                  ((#\?) "_Q") ; question
                  ((#\^) "_C") ; caret
                  ((#\_) "_U") ; underscore
                  ((#\~) "_T") ; tilde
                  ((#\+) "_P") ; plus
                  ((#\-) "__") ; kebab
                  ((#\.) "_D") ; dot
                  ((#\@) "_A") ; atsign

                  (else (string-ref str i)))
                port)
              (loop (+ i 1)))))))
  (define (mangle-library lib)
    (cond ((string? lib) lib) ; TODO actually validate this is valid C
          ((pair? lib)
           (let loop ((knil "_V20") (ks (reverse lib)))
             (if (null? ks) knil
                 (loop
                   (string-append
                     (let ((e (car ks)))
                       (if (symbol? e)
                           (symbol->string (mangle-symbol e))
                           (compiler-error "non-symbol in library path:" e)))
                     knil)
                   (cdr ks)))))
          (else (compiler-error "library name must be a string which is a valid c identifier or a list of symbols" lib))))
  (define (lookup-inline sym)
    (case sym
      ; predicates
      ((##sys.null?) "VInlineNullP")
      ((##sys.pair?) "VInlinePairP")
      ;((##sys.symbol?) "VInlineSymbolP")
      ;((##sys.string?) "VInlineSymbolP")
      ; logic
      ((##sys.not) "VInlineNot")
      ; equivalence
      ((##sys.eq?) "VInlineEq")
      ; lists
      ((##sys.cons ##sys.qcons) "VInlineCons")
      ((##sys.car) "VInlineCar")
      ((##sys.cdr) "VInlineCdr")
      (else #f)))
  (define (lookup-intrinsic sym)
    (case sym
         ; Math
         ((##sys.+) "VAdd")
         ((##sys.-) "VSub")
         ((##sys.*) "VMul")
         ((##sys./) "VDiv")
         ((##sys.cmp) "VCmp")

         ((##sys.quotient) "VQuot")
         ((##sys.remainder) "VRem")

         ; Predicates
         ((##sys.null?) "VNullP")
         ((##sys.pair?) "VPairP")
         ((##sys.vector?) "VVectorP")
         ((##sys.procedure?) "VProcedureP")
         ((##sys.blob?) "VBlobP")
         ((##sys.symbol?) "VSymbolP")
         ((##sys.string?) "VStringP")
         ((##sys.int?) "VIntP")
         ((##sys.double?) "VDoubleP")
         ((##sys.char?) "VCharP")

         ; Equality
         ((##sys.eq?) "VEq")
         ((##sys.symbol=?) "VSymbolEqv")
         ((##sys.blob=?) "VBlobEqv")

         ; Logic
         ((##sys.not) "VNot")

         ; System
         ((##sys.next) "VNext")
         ((##sys.call/cc) "VCallCC")
         ((##sys.call-with-values) "VCallValues")
         ((##sys.apply) "VApply")
         ((##sys.abort) "VAbort")
         ((##sys.exit) "VExit")

         ((##sys.import) "VImport")
         ((##vcore.function) "VFunction")
         ((##vcore.define) "VDefineGlobalVar")
         ((##vcore.multidefine) "VMultiDefine")
         ((##vcore.lookup-library) "VLookupLibrary")
         ((##vcore.make-import) "VMakeImport")
         ((##vcore.load-library) "VLoadLibrary")

         ; Lists
         ((##sys.cons ##sys.qcons) "VCons")
         ((##sys.car) "VCar")
         ((##sys.cdr) "VCdr")
         ((##sys.set-car!) "VSetCar")
         ((##sys.set-cdr!) "VSetCdr")

         ; Vectors
         ((##sys.list->vector) "VListVector")
         ((##sys.vector-ref) "VVectorRef")
         ((##sys.vector-set!) "VVectorSet")
         ((##sys.vector-length) "VVectorLength")

         ; Strings

         ((##sys.make-string) "VMakeString")
         ((##sys.substring) "VSubstring")
         ((##sys.string-copy!) "VStringCopy")
         ((##sys.string-ref) "VStringRef")
         ((##sys.string-set!) "VStringSet")
         ((##sys.string-length) "VStringLength")
         ((##sys.string->symbol) "VStringSymbol")
         ((##sys.string->number) "VStringNumber")

         ((##sys.symbol->string) "VSymbolString")

         ; Characters

         ((##sys.char-integer) "VCharInt")
         
         ; IO
         ((##sys.stdin->port) "VStdinPort")
         ((##sys.stdout->port) "VStdoutPort")
         ((##sys.stderr->port) "VStderrPort")

         ((##sys.dup-stdin) "VDupStdin")
         ((##sys.dup-stdout) "VDupStdout")
         ((##sys.dup-stderr) "VDupStderr")

         ((##sys.open-input-stream) "VOpenInputStream")
         ((##sys.open-output-stream) "VOpenOutputStream")
         ((##sys.close-stream) "VCloseStream")

         ((##sys.open-output-string) "VOpenOutputString")
         ((##sys.get-output-string) "VGetOutputString")

         ((##sys.eof-object?) "VEofP")

         ((##sys.read-char) "VReadChar")
         ((##sys.read-line) "VReadLine")
         ((##sys.read) "VRead")

         ((##sys.display-word) "VDisplay")
         ((##sys.write) "VWrite")
         ((##sys.newline) "VNewline")

         ; System
         ((##sys.system) "VSystem")
         ((##sys.open-input-process) "VOpenInputProcess")
         ((##sys.open-output-process) "VOpenOutputProcess")
         ((##sys.make-temporary-file) "VMakeTemporaryFile")
         ((##sys.command-line) "VCommandLine")

         (else #f)))
         
  (define (lookup-intrinsic2 sym)
    (case sym
         ; Math
         ((##sys.+) "VAdd2")
         ((##sys.-) "VSub2")
         ((##sys.*) "VMul2")
         ((##sys./) "VDiv2")
         ((##sys.cmp) "VCmp2")

         ((##sys.quotient) "VQuot2")
         ((##sys.remainder) "VRem2")

         ; Predicates
         ((##sys.null?) "VNullP2")
         ((##sys.pair?) "VPairP2")
         ((##sys.vector?) "VVectorP2")
         ((##sys.procedure?) "VProcedureP2")
         ((##sys.blob?) "VBlobP2")
         ((##sys.symbol?) "VSymbolP2")
         ((##sys.string?) "VStringP2")
         ((##sys.int?) "VIntP2")
         ((##sys.double?) "VDoubleP2")
         ((##sys.char?) "VCharP2")

         ; Equality
         ((##sys.eq?) "VEq2")
         ((##sys.symbol=?) "VSymbolEqv2")
         ((##sys.blob=?) "VBlobEqv2")
         ((##sys.eqv?) "VEqv")

         ; Logic
         ((##sys.not) "VNot2")

         ; System
         ((##sys.next) "VNext2")
         ((##sys.call/cc) "VCallCC2")
         ((##sys.call-with-values) "VCallValues2")
         ((##sys.apply) "VApply2")
         ((##sys.abort) "VAbort2")
         ((##sys.exit) "VExit2")

         ((##sys.import) "VImport2")
         ((##vcore.function) "VFunction2")
         ((##vcore.define) "VDefineGlobalVar2")
         ((##vcore.multidefine) "VMultiDefine2")
         ((##vcore.lookup-library) "VLookupLibrary2")
         ((##vcore.make-import) "VMakeImport2")
         ((##vcore.load-library) "VLoadLibrary2")

         ; Lists
         ((##sys.cons ##sys.qcons) "VCons2")
         ((##sys.car) "VCar2")
         ((##sys.cdr) "VCdr2")
         ((##sys.set-car!) "VSetCar2")
         ((##sys.set-cdr!) "VSetCdr2")

         ; Vectors
         ((##sys.list->vector) "VListVector2")
         ((##sys.vector-ref) "VVectorRef2")
         ((##sys.vector-set!) "VVectorSet2")
         ((##sys.vector-length) "VVectorLength2")

         ; Hash Table
         ((##vcore.make-hash-table) "VMakeHashTable")
         ((##vcore.hash-table-equivalence-function) "VHashTableEqvFunc")
         ((##vcore.hash-table-hash-function) "VHashTableHashFunc")
         ((##vcore.hash-table-ref) "VHashTableRef")
         ((##vcore.hash-table-set!) "VHashTableSet")
         ((##vcore.hash-table-delete!) "VHashTableDelete")

         ; Strings

         ((##sys.make-string) "VMakeString2")
         ((##sys.substring) "VSubstring2")
         ((##sys.string-copy!) "VStringCopy2")
         ((##sys.string-ref) "VStringRef2")
         ((##sys.string-set!) "VStringSet2")
         ((##sys.string-length) "VStringLength2")
         ((##sys.string->symbol) "VStringSymbol2")
         ((##sys.string->number) "VStringNumber2")

         ((##sys.symbol->string) "VSymbolString2")

         ; Characters

         ((##sys.char-integer) "VCharInt2")
         
         ; IO
         ((##sys.stdin->port) "VStdinPort")
         ((##sys.stdout->port) "VStdoutPort")
         ((##sys.stderr->port) "VStderrPort")

         ((##sys.dup-stdin) "VDupStdin2")
         ((##sys.dup-stdout) "VDupStdout2")
         ((##sys.dup-stderr) "VDupStderr2")

         ((##sys.open-input-stream) "VOpenInputStream2")
         ((##sys.open-output-stream) "VOpenOutputStream2")
         ((##sys.close-stream) "VCloseStream2")

         ((##sys.open-output-string) "VOpenOutputString2")
         ((##sys.get-output-string) "VGetOutputString2")

         ((##sys.eof-object?) "VEofP2")

         ((##sys.read-char) "VReadChar2")
         ((##sys.read-line) "VReadLine2")
         ((##sys.read) "VRead2")

         ((##sys.display-word) "VDisplay2")
         ((##sys.write) "VWrite2")
         ((##sys.newline) "VNewline2")

         ; GC
         ((##sys.set-finalizer!) "VSetFinalizer")
         ((##sys.has-finalizer?) "VHasFinalizer")
         ((##sys.finalize!) "VFinalize")
         ((##sys.garbage-collect) "VGarbageCollect")

         ; System
         ((##sys.system) "VSystem2")
         ((##sys.open-input-process) "VOpenInputProcess2")
         ((##sys.open-output-process) "VOpenOutputProcess2")
         ((##sys.make-temporary-file) "VMakeTemporaryFile2")
         ((##sys.command-line) "VCommandLine2")

         ; Random
         ((##vcore.make-random) "VMakeRandom")
         ((##vcore.random-copy) "VRandomCopy")
         ((##vcore.random-sample!) "VRandomSample")
         ((##vcore.random-sample-bounded!) "VRandomSampleBounded")
         ((##vcore.random-sample-float!) "VRandomSampleFloat")
         ((##vcore.random-advance!) "VRandomAdvance")

         (else #f)))
  (define (free-variables expr)
    (define (merge a b)
      (cond ((null? a) b)
            ((memv (car a) b) (merge (cdr a) b))
            (else (merge (cdr a) (cons (car a) b)))))
    (define (append-improper a b)
      (cond ((pair? a) (cons (car a) (append-improper (cdr a) b)))
            ((null? a) b)
            (else (cons a b))))
    (let loop ((bound '()) (expr expr))
      (cond ((symbol? expr)
             (if (or (memv expr bound) (lookup-intrinsic expr) (lookup-intrinsic2 expr)) '() (list expr)))
            ((atom? expr) '())
            ((eqv? (car expr) 'quote) '())
            ((eqv? (car expr) 'if)
             (merge (merge (loop bound (cadr expr)) (loop bound (caddr expr))) (loop bound (cadddr expr))))
            ((memv (car expr) '(begin and or))
             (merge (loop bound (cadr expr)) (loop bound (caddr expr)))) 
            ((eqv? (car expr) 'lambda)
             (loop (append-improper (cadr expr) bound) (cddr expr)))
            #;((eqv? (car expr) 'define)
             (loop (cons (cadr expr) bound) (cddr expr)))
            ((eqv? (car expr) 'case-lambda)
             (let loop2 ((cases (cdr expr)))
              (if (null? cases) '()
                  (merge (loop (append-improper (caar cases) bound) (cdar cases)) (loop2 (cdr cases)))))
             #;(apply append (map (lambda (lt) (loop (append-improper (car lt) bound) (cdr lt))) (cdr expr))))
            ((eqv? (car expr) 'set!)
             (loop bound (cdr expr)))
            (else (merge (loop bound (car expr)) (loop bound (cdr expr))))))))
