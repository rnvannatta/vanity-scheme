; Copyright 2023-2025 Richard N Van Natta
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

(define-library (vanity compiler optimize)
  (import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity intrinsics) (vanity pretty-print))
  (export qualify-callsites)
  (define (scan-bindings current-qualname qualified-funcs xs vals body letrec?)
    (let scan-bindings-loop ((qualified-funcs qualified-funcs)
                             (new-vals '())
                             (xs xs)
                             (rest-vals vals))
      (define (qualify-lambda lamb lambda-rest)
         (if (or (and (not letrec?) (variable-pure? (car xs) body))
                 (and letrec? (variable-pure? (car xs) body)
                      ; goddamnit my impl of every? had a bug when i wrote this
                      (not (any? (lambda (x) (not (variable-pure? (car xs) x))) vals))
                      #;(every? (cut variable-pure? (car xs) <>) vals)))
             `(,(if (eqv? lamb 'lambda) '##qualified-lambda '##qualified-case-lambda)
               ; at this point all identifiers are unique so no need for gensym
               ,(append current-qualname (list (car xs)))
               . ,lambda-rest)
             #f))
      (match rest-vals
        ((('##qualified-lambda name . _) . rest)
         (scan-bindings-loop
           (cons (cons (car xs) name) qualified-funcs)
           (cons (car rest-vals) new-vals)
           (cdr xs)
           (cdr rest-vals)))
        ((('##qualified-case-lambda name . _) . rest)
         (scan-bindings-loop
           (cons (cons (car xs) name) qualified-funcs)
           (cons (car rest-vals) new-vals)
           (cdr xs)
           (cdr rest-vals)))
        ((('lambda . lambda-rest) . rest)
         (let ((new-lambda (qualify-lambda 'lambda lambda-rest)))
           (if new-lambda
               (scan-bindings-loop
                 (cons (cons (car xs) (cadr new-lambda)) qualified-funcs)
                 (cons new-lambda new-vals)
                 (cdr xs)
                 (cdr rest-vals))
               (scan-bindings-loop
                 qualified-funcs
                 (cons (car rest-vals) new-vals)
                 (cdr xs)
                 (cdr rest-vals)))))
        ((('case-lambda . lambda-rest) . rest)
         (let ((new-lambda (qualify-lambda 'case-lambda lambda-rest)))
           (if new-lambda
               (scan-bindings-loop
                 (cons (cons (car xs) (cadr new-lambda)) qualified-funcs)
                 (cons new-lambda new-vals)
                 (cdr xs)
                 (cdr rest-vals))
               (scan-bindings-loop
                 qualified-funcs
                 (cons (car rest-vals) new-vals)
                 (cdr xs)
                 (cdr rest-vals)))))
        ((_ . _)
         (scan-bindings-loop
           qualified-funcs
           (cons (car rest-vals) new-vals)
           (cdr xs)
           (cdr rest-vals)))
        (_
         (values
           (fold cons rest-vals new-vals)
           qualified-funcs)))))
  ; changes (f x y) into (##qualified-call (vanity core map) f x y) if say f is bound to map.
  ; and this is possible because the whole idea of qualified functions is they're bound in a way that
  ; makes them well known
  (define (qualify-callsites expr)
    (define (qualify-iter current-qualname qualified-funcs expr)
      (match expr
        (('lambda xs body)
         `(lambda ,xs ,(qualify-iter current-qualname qualified-funcs body)))
        (('##qualified-lambda name xs body)
         `(##qualified-lambda ,name ,xs ,(qualify-iter name qualified-funcs body)))
        (('case-lambda . cases)
         `(case-lambda . ,(map (lambda (cases) `(,(car cases) ,(qualify-iter current-qualname qualified-funcs (cadr cases)))) cases)))
        (('##qualified-case-lambda name . cases)
         `(##qualified-case-lambda ,name . ,(map (lambda (cases) `(,(car cases) ,(qualify-iter name qualified-funcs (cadr cases)))) cases)))
        (('continuation xs body)
         `(continuation ,xs ,(qualify-iter current-qualname qualified-funcs body)))

        ; let bindings: let's get scanning

        ; FIXME: miscompiles with set!!!
        ; NO IT DOESNT: because it'll only qualify if x is pure
        ; but it isn't pure
        ; e.g. ((lambda (x) (set! x (lambda (x) x)) (x 9)) (lambda (x) (x x)))
        ((('lambda xs body) vals ...)
         (call-with-values
          (lambda () (scan-bindings current-qualname qualified-funcs xs vals body #f))
          (lambda (new-vals new-qualified-funcs)
            `((lambda ,xs ,(qualify-iter current-qualname new-qualified-funcs body)) . ,(qualify-iter current-qualname qualified-funcs new-vals)))))
        ((('continuation xs body) vals ...)
         (call-with-values
          (lambda () (scan-bindings current-qualname qualified-funcs xs vals body #f))
          (lambda (new-vals new-qualified-funcs)
            `((continuation ,xs ,(qualify-iter current-qualname new-qualified-funcs body)) . ,(qualify-iter current-qualname qualified-funcs new-vals)))))
        ((('##qualified-lambda name xs body) vals ...)
         (call-with-values
          ; why scan-bindings current-qualname? well. we're generating a name for any values outside the qualified lambda.
          (lambda () (scan-bindings current-qualname qualified-funcs xs vals body #f))
          (lambda (new-vals new-qualified-funcs)
            `((##qualified-lambda ,name ,xs ,(qualify-iter name new-qualified-funcs body)) . ,(qualify-iter current-qualname qualified-funcs new-vals)))))
        (('letrec ((xs vals) ...) body)
         (call-with-values
          (lambda () (scan-bindings current-qualname qualified-funcs xs vals body #t))
          (lambda (new-vals new-qualified-funcs)
            `(letrec ,(map (lambda (x val) (list x (qualify-iter current-qualname new-qualified-funcs val))) xs new-vals) ,(qualify-iter current-qualname new-qualified-funcs body)))))

        (('basic-block cost xs-vals ... appl)
         `(basic-block ,cost . ,(append xs-vals (list (qualify-iter current-qualname qualified-funcs appl)))))
        (('##intrinsic . _) expr)
        (('##basic-intrinsic . _) expr)
        (('##foreign.function . _) expr)
        (('quote . _) expr)
        (('##inline f . xs)
         `(##inline ,f . ,(map (cut qualify-iter current-qualname qualified-funcs <>) xs)))
        ((f xs ...)
         (cond
           ((and (symbol? f) (assv f qualified-funcs)) =>
            (lambda (keyval) `(##qualified-call ,(cdr keyval) ,f . ,(map (cut qualify-iter current-qualname qualified-funcs <>) xs))))
           (else (cons (qualify-iter current-qualname qualified-funcs f) (map (cut qualify-iter current-qualname qualified-funcs <>) xs)))))
        (x x)
        (else (compiler-error "qualify-callsites: NO matching case" expr))))
    (match expr
      (('##foreign.declare . _) expr)
      (('##vcore.declare f l)
       `(##vcore.declare ,f ,(qualify-iter '() '() l)))
      (else (qualify-iter '() '() expr)))))
