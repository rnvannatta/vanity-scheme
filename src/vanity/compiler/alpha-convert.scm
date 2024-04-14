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

(define-library (vanity compiler alpha-convert)
  (import (vanity core) (vanity list) (vanity compiler utils) (vanity compiler match) (vanity compiler variables) (vanity intrinsics))
  (export alpha-convert)

  (define (memtail x lst)
      (if (pair? lst)
          (if (equal? x (car lst)) lst
              (memtail x (cdr lst)))
          (if (equal? x lst) lst #f)))

  (define (alpha-convert expr)
    (define (application? x)
      (and (pair? x) (not (memv (car x) '(quote lambda case-lambda ##foreign.function)))))
    (define (combination? x)
      (and (pair? x) (not (memv (car x) '(quote lambda case-lambda ##foreign.function begin if or letrec)))))
    (define (lookup-env sym env)
      (cond ((null? env) #f)
            ((assv sym (car env)) => (lambda (keyval) keyval))
            (else (lookup-env sym (cdr env)))))
    (define (iter-atom x env)
      (define (iter-symbol sym env)
        (cond
          ((lookup-env sym env) => (lambda (keyval) (cdr keyval)))
          ((lookup-intrinsic sym) sym)
          ; not in the env means a global symbol - don't mangle, no need
          (else sym)))
      (define (iter-lambda args body env)
        (define (genargs args)
          (cond ((null? args) '())
                ((pair? args) (cons (gensym (car args)) (genargs (cdr args))))
                (else (gensym args))))
        (define (dedot args)
          (cond ((null? args) '())
                ((pair? args) (cons (car args) (dedot (cdr args))))
                (else (cons args '()))))
        (let* ((newargs (genargs args))
               (env (cons (map cons (dedot args) (dedot newargs)) env)))
          `(,newargs ,(iter body env))))
      (match x
        (('lambda args body)
         (cons 'lambda (iter-lambda args body env)))
        (('case-lambda (args bodies) ...)
         (cons 'case-lambda (map (lambda (arg body) (iter-lambda arg body env)) args bodies)))
        (('##foreign.function . _) x)
        (('quote _) x)
        (() (compiler-error "stray () in program"))
        (else
          (if (symbol? x)
              (iter-symbol x env)
              x))))
    (define (iter-letrec args body vals env)
      (let* ((new-args (map gensym args))
             (env (cons (map cons args new-args) env))
             (vals (map (lambda (val) (iter val env)) vals))
             (body (iter body env)))
        `(letrec ,(map list new-args vals) ,body)))
    (define (iter-combination args env)
      (map (lambda (arg) (iter arg env)) args))
    (define (iter expr env)
      (if (application? expr)
          (match expr
            (('begin x y) 
             `(begin ,(iter x env) ,(iter y env)))
            (('if p x y)
             `(if ,(iter p env) ,(iter x env) ,(iter y env)))
            (('or x y)
             `(or ,(iter x env) ,(iter y env)))
            (('letrec ((xs vals) ...) body)
             (iter-letrec xs body vals env))
            (else (iter-combination expr env)))
          (iter-atom expr env)))

    (define (alpha-convert-impl expr)
      (iter expr '()))
    (match expr
      (('##foreign.declare . _) expr)
      (('##vcore.declare f l)
       `(##vcore.declare ,f ,(alpha-convert-impl l)))
      (else (alpha-convert-impl expr))))
)
