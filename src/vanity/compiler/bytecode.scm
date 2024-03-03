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
  (import (vanity core) (vanity list) (vanity pretty-print) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity compiler ffi))
  (export print-bytecode)

  (define (process-literal-declaration lit)
    (cond ((symbol? (car lit))
           `(symbol ,(car lit)))
          ((string? (car lit))
           `(string ,(cdr lit) ,(car lit)))
          ((and (pair? (car lit)) (eqv? (caar lit) '##intrinsic))
           `(intrinsic ,(cadar lit) ,(cdr lit)))
          (else (compiler-error "process-literal-declaration: unknown entry in literal table" lit))))

  (define (process-literal reg x)
    (cond ((or (integer? x)
               (number? x)
               (char? x)
               (eq? x #t)
               (eq? x #f))
           `(mov ,reg ,x))
          (else
           (compiler-error "print-bytecode: unknown literal type" x))))

  (define (process-atom reg expr)
    (match expr
      (('quote ())
       `(mov ,reg ()))
      (('quote ('##string x))
       `(mov ,reg STRING ,x))
      (('quote x)
       `(mov ,reg SYMBOL ,x))
      (('close fun)
       `(close ,reg ,fun))
      (('bruijn name up right)
       `(bruijn ,reg ,up ,right))
      (('##string x)
       `(mov ,reg STRING ,x))
      (('##intrinsic x)
       `(mov ,reg CLOSURE ,x))
      (('##foreign.function x)
       (compiler-error "print-bytecode: foreign functions not supported yet"))
      (x (if (symbol? x)
             `(lookup ,reg ,x)
             (process-literal reg expr)))))

  (define (process-combination expr)
    (let ((len (length expr)))
       (append (map process-atom (iota len) expr)
               `((call ,len)))))
  (define (process-application expr)
    (match expr
      (('if p a b)
       (let ((label (gensym "L")))
         (append `(,(process-atom 't p)
                   (bf ,label))
                  (process-application a)
                  `(,label)
                  (process-application b))))
      (('set! k y x)
       ; We need to convert global set to an intrinsic earlier: it's too late now
       (compiler-error "print-bytecode: not supported yet"))
      (('define k y x)
       ; same
       (compiler-error "print-bytecode: not supported yet"))
      ((f xs ...)
       (process-combination expr))))

  (define (closes? expr)
    (match expr
      (('close fun) #t)
      (('quote . _) #f)
      (('bruijn . _) #f)
      (('##string . _) #f)
      (('if p a b)
       (or (closes? p) (closes? a) (closes? b)))
      (('set! k y x) #t)
      (('define k y x) #t)
      (('##inline f . xs)
       (closes? xs))
      ((f) (closes? f))
      ((f . xs)
       (or (closes? f) (closes? xs)))
      (x #f)))

  (define (process-fun-single name check-args? num variadic? body needs-used?)
    `(func ,name ,num ,@(if variadic? '(+) '())
       ,(append
          (if check-args? `((,(if variadic? 'arg-min 'arg-check) ,num)) '())
          (if (closes? body) '((save)) '())
          (process-application body))))

  (define (process-function fun)
    (match fun
      ((name check-args? (num body))
       (process-fun-single name check-args? num #f body #f))
      ((name check-args? (num '+ body))
       (process-fun-single name check-args? num #t body #f))
      (else (compiler-error "bytecode doesn't support case lambdas"))))

  (define (process-toplevel i expr)
    `(func ,(string->symbol (sprintf "##toplevel~A" i)) 1
       ,(process-application expr)))
  
  (define (process-main toplevels)
    (append
      (map process-toplevel (iota (length toplevels)) toplevels)
      `((main . ,(map (lambda (i) (string->symbol (sprintf "##toplevel~A" i))) (iota (length toplevels)))))))


  (define (print-bytecode debug? shared? literal-table foreign-functions functions declares toplevels)
    (let ((print-main? (not (null? toplevels)))
          ; but why
          (functions (reverse functions)))
      (if (not (null? declares)) (compiler-error "bytecode doesn't support foreign declares"))
      (if (not (null? foreign-functions)) (compiler-error "bytecode doesn't support foreign functions yet"))
      (if (and shared? print-main?)
          (compiler-error "shared library has toplevel expressions"))

      (pretty-print
        (append
          (map process-literal-declaration literal-table)
          (map process-function functions)
          (if print-main? (process-main toplevels) '())))
      print-main?
    ))
)
