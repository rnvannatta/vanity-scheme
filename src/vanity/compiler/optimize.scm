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
  ; changes (f x y) into (##qualified-call (vanity core map) f x y) if say f is bound to map.
  ; and this is possible because the whole idea of qualified functions is they're bound in a way that
  ; makes them well known
  (define (qualify-callsites expr)
    (define (append-qualified-funcs qualified-funcs xs vals)
      (match vals
        ((('##qualified-lambda name . _) . rest)
         (append-qualified-funcs
           (cons (cons (car xs) name) qualified-funcs)
           (cdr xs)
           (cdr vals)))
        ((('##qualified-case-lambda name . _) . rest)
         (append-qualified-funcs
           (cons (cons (car xs) name) qualified-funcs)
           (cdr xs)
           (cdr vals)))
        ((_ . _) (append-qualified-funcs qualified-funcs (cdr xs) (cdr vals)))
        (() qualified-funcs)))
    (define (qualify-iter qualified-funcs expr)
      (match expr
        (('lambda xs body)
         `(lambda ,xs ,(qualify-iter qualified-funcs body)))
        (('##qualified-lambda name xs body)
         `(##qualified-lambda ,name ,xs ,(qualify-iter qualified-funcs body)))
        (('case-lambda . cases)
         `(case-lambda . ,(map (lambda (cases) `(,(car cases) ,(qualify-iter qualified-funcs (cadr cases)))) cases)))
        (('##qualified-case-lambda name . cases)
         `(##qualified-case-lambda ,name . ,(map (lambda (cases) `(,(car cases) ,(qualify-iter qualified-funcs (cadr cases)))) cases)))
        (('continuation xs body)
         `(continuation ,xs ,(qualify-iter qualified-funcs body)))
        ((('lambda xs body) vals ...)
         `((lambda ,xs ,(qualify-iter (append-qualified-funcs qualified-funcs xs vals) body)) . ,(qualify-iter qualified-funcs vals)))
        ((('continuation xs body) vals ...)
         `((continuation ,xs ,(qualify-iter (append-qualified-funcs qualified-funcs xs vals) body)) . ,(qualify-iter qualified-funcs vals)))
        ((('##qualified-lambda name xs body) vals ...)
         `((##qualified-lambda ,name ,xs ,(qualify-iter (append-qualified-funcs qualified-funcs xs vals) body)) . ,(qualify-iter qualified-funcs vals)))
        (('letrec ((xs vals) ...) body)
         (let ((new-qualified-funcs (append-qualified-funcs qualified-funcs xs vals)))
           `(letrec ,(map (lambda (x val) (list x (qualify-iter new-qualified-funcs val))) xs vals) ,(qualify-iter new-qualified-funcs body))))
        (('basic-block cost xs-vals ... appl)
         `(basic-block ,cost . ,(append xs-vals (list (qualify-iter qualified-funcs appl)))))
        (('##foreign.function . _) expr)
        (('quote . _) expr)
        (('##inline f . xs)
         `(##inline ,f . ,(map (cut qualify-iter qualified-funcs <>) xs)))
        ((f xs ...)
         (cond
           ((and (symbol? f) (assv f qualified-funcs)) =>
            (lambda (keyval) `(##qualified-call ,(cdr keyval) ,f . ,(map (cut qualify-iter qualified-funcs <>) xs))))
           (else (cons (qualify-iter qualified-funcs f) (map (cut qualify-iter qualified-funcs <>) xs)))))
        (x x)
        (else (compiler-error "qualify-callsites: NO matching case" expr))))
    (match expr
      (('##foreign.declare . _) expr)
      (('##vcore.declare f l)
       `(##vcore.declare ,f ,(qualify-iter '() l)))
      (else (qualify-iter '() expr)))))
