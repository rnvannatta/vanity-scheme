; Copyright 2023-2024 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 2 of the
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
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity compiler bytecode)
  (import (vanity core) (vanity list) (vanity pretty-print) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity compiler ffi) (vanity intrinsics))
  (export write-bytecode to-bytecode)

  ; TODOs:
  ;  * declares
  ;  * shared libraries
  ;  * foreign functions

  ; declares... register the declare to the runtime, things which dlopen also sample the declare

  ; shared libraries... need to mark bytecode as a shared lib...
  ;  gluing shared libraries to other bytecode... not bad need to `cat`
  ;  will need to add lexing support for vectors because I want seperate tapes on seperate vectors
  ;  gluing shared libraries to actual code... need to write a shimmer accepting the tape, then compile the shimmer

  ; foreign functions... pure agony, need to write a full applier in asm that takes a description

  ; the basic 'interpreter':
  ; double ended popen `vsc --x=scheme - -o -`
  ; feed a complete read into it
  ; take that bytecode, run it

  (define (process-literal x)
    (cond ((or (integer? x)
               (number? x)
               (char? x)
               (string? x)
               (eq? x #t)
               (eq? x #f))
           `(push ,x))
          (else
           (compiler-error "print-bytecode: unknown literal type" x))))

  (define (process-atom expr)
    (match expr
      (('quote x)
       `(push ,x))
      (('close fun)
       `(close ,fun))
      (('bruijn name up right)
       `(bruijn ,up ,right))
      (('##intrinsic x)
       `(intrinsic ,x))
      (('##foreign.function x)
       (compiler-error "print-bytecode: foreign functions not supported yet"))
      (x
       (cond ((not (symbol? x)) (process-literal expr))
             ((lookup-intrinsic-name x) `(intrinsic ,x))
             (else `(lookup ,x))))))

  (define (process-combination expr)
    (let ((len (length expr)))
       (append (map process-atom expr)
               `((call ,len)))))
  (define (process-application expr)
    (match expr
      (('if p a b)
       (let ((label (gensym "L")))
         (append `(,(process-atom p)
                   (bf ,label))
                  (process-application a)
                  (let ((app (process-application b)))
                    (cons `(label ,label ,(car app)) (cdr app))))))
      (('letrec n xs body)
       (append
         `((letrec-begin ,n))
          (map process-atom xs) 
          `((letrec-end))
          (process-application body)))
      (('set! k y x)
       (match y
         (('bruijn name up right)
          `((push-set!)
            ,(process-atom k)
            (push ,up)
            (push ,right)
            ,(process-atom x)
            (call 5)))
         (y
          (if (symbol? y)
              `((intrinsic ##vcore.set-global!)
                ,(process-atom k)
                (push ,y)
                ,(process-atom x)
                (call 4))
              (error "print-bytecode: set must set a symbol")))))
      (('define k y x)
       `((intrinsic ##vcore.define)
         ,(process-atom k)
         (push ,y)
         ,(process-atom x)
         (call 4)))
      ((f xs ...)
       (process-combination expr))))

  (define (process-fun-single name check-args? num variadic? body)
    (cons
      `(label ,name (,(if variadic? 'lambda+ 'lambda) ,num))
      (process-application body)))
  (define (process-fun-case fun)
    (let* ((name (car fun))
           (cases (cddr fun))
           (cases (map (lambda (i e) `(,(if (= i 0) name (gensym "case")) ,e)) (iota (length cases)) cases))
           (error-label (gensym "case-error")))
      (let loop ((rest cases))
        (if (null? rest)
            `((label ,error-label
                (case-lambda-error
                  ,name
                  ,(fold string-append ""
                     (map
                       (lambda (e)
                        (match e
                          ((name (num '+ body))
                           (sprintf "--expected ~A or more\n" num))
                          ((name (num body))
                           (sprintf "--expected ~A\n" num))
                          (else (error "process-case-lambda-tail" e))))
                       (reverse cases))))))
            (append
              (match (car rest)
                ((name (num '+ body))
                 (cons
                   `(label ,name ,(if (null? (cdr rest)) `(case-lambda+ ,num ,error-label) `(case-lambda+ ,num ,(caadr rest))))
                   (process-application body)))
                ((name (num body))
                 (cons
                   `(label ,name ,(if (null? (cdr rest)) `(case-lambda ,num ,error-label) `(case-lambda ,num ,(caadr rest))))
                   (process-application body)))
                (else (error "process-case-lambda" (car rest))))
              (loop (cdr rest)))))))

  (define (process-function fun)
    (match fun
      ((name check-args? (num body))
       (process-fun-single name check-args? num #f body))
      ((name check-args? (num '+ body))
       (process-fun-single name check-args? num #t body))
      (else (process-fun-case fun))))
  (define (process-declare declare)
    (match declare
      (('##foreign.declare d) (compiler-error "bytecode doesn't support foreign declares yet"))
      (('##vcore.declare f v) `((declare ,f ,v)))))

  (define (process-toplevel expr)
    (cons
      '(toplevel)
      (process-combination `(,expr (bruijn k 0 0)))))

  (define (glue-bytecode segments)
    (list->vector
      (let loop ((segments segments))
        (if (null? segments) '()
            (append (car segments) (loop (cdr segments)))))))

  (define (write-bytecode-line line)
    (if (not (memv (car line) '(label toplevel lambda lambda+ case-lambda case-lambda+ declare)))
        (display #\tab))
    (writeln line))
  (define (write-bytecode bytecode)
    (displayln "#(")
    (let ((len (vector-length bytecode)))
      (let loop ((i 0))
        (if (< i len)
            (begin
              (write-bytecode-line (vector-ref bytecode i))
              (loop (+ i 1))
            ))))
    (displayln ")"))
  (define (to-bytecode debug? shared? literal-table foreign-functions functions declares toplevels)
    (let ((print-main? (not (null? toplevels)))
          (functions (reverse functions)))
      (if shared? (compiler-error "bytecode shared libraries not supported yet"))
      (if (not (null? foreign-functions)) (compiler-error "bytecode doesn't support foreign functions yet"))
      (if (and shared? print-main?)
          (compiler-error "shared library has toplevel expressions"))
      (if (not (null? literal-table)) (compiler-error "logic error: bytecode shouldn't have a literal table" literal-table))

      (glue-bytecode
        (append (map process-declare declares)
                (map process-function functions)
                (if print-main?
                    (map process-toplevel toplevels)
                    '()))))))
