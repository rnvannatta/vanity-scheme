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
      (and (pair? x) (not (memv (car x) '(quote lambda ##qualified-lambda case-lambda ##qualified-case-lambda ##instrinsic ##basic-intrinsic ##foreign.function)))))
    (define (combination? x)
      (and (pair? x) (not (memv (car x) '(quote lambda ##qualified-lambda case-lambda ##qualified-case-lambda ##instrinsic ##basic-intrinsic ##foreign.function begin if or letrec)))))
    (define (lookup-env sym env)
      (cond ((null? env) #f)
            ((assv sym (car env)) => (lambda (keyval) keyval))
            (else (lookup-env sym (cdr env)))))
    (define (iter-defines defines env)
      (match defines
        (((_ xs vals) ...)
         (let* ((new-xs (map gensym xs))
                (env (cons (map cons xs new-xs) env))
                (vals (map (lambda (val) (iter val env)) vals)))
           (values
             (map (lambda (x val) `(define ,x ,val)) new-xs vals)
             env)))))
    (define (iter-atom x env)
      (define (iter-symbol sym env)
        (cond
          ((lookup-env sym env) => (lambda (keyval) (cdr keyval)))
          ((lookup-intrinsic sym) sym)
          ; not in the env means a global symbol - don't mangle, no need
          (else sym)))
      (define (iter-lambda args defines body env)
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
          (define-values (new-defines new-env) (values defines env))
          `(,newargs ,@new-defines ,(iter body new-env))))
      (match x
        (('lambda args body)
         (cons 'lambda (iter-lambda args '() body env)))
        (('##qualified-lambda name args body)
         (cons '##qualified-lambda (cons name (iter-lambda args '() body env))))
        (('case-lambda (args bodies) ...)
         (cons 'case-lambda (map (lambda (arg body) (iter-lambda arg '() body env)) args bodies)))
        (('##qualified-case-lambda name (args bodies) ...)
         (cons '##qualified-case-lambda (cons name (map (lambda (arg body) (iter-lambda arg '() body env)) args bodies))))
        (('##foreign.function . _) x)
        (('##intrinsic . _) x)
        (('##basic-intrinsic . _) x)
        (('quote _) x)
        (() (compiler-error "stray () in program"))
        (else
          (if (symbol? x)
              (iter-symbol x env)
              x))))
    (define (iter-letrec args defines body vals env)
      (let* ((new-args (map gensym args))
             (env (cons (map cons args new-args) env))
             (vals (map (lambda (val) (iter val env)) vals)))
        (define-values (new-defines new-env) (values defines env))
        `(letrec ,(map list new-args vals) ,@new-defines ,(iter body new-env))))
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
             (iter-letrec xs '() body vals env))
            (else (iter-combination expr env)))
          (iter-atom expr env)))

    (define (alpha-convert-impl expr)
      (iter expr '()))
    (match expr
      (('##foreign.declare . _) expr)
      (('##vcore.declare f l)
       `(##vcore.declare ,f ,(alpha-convert-impl l)))
      ; don't alpha convert toplevel defines, they are looked up by string
      ; and alpha converting everything except toplevels still is alpha conversion
      ; as internal definitions can no longer shadow them
      (('define x val)
       `(define ,x ,(alpha-convert-impl val)))
      (('define-constant x val)
       `(define ,x ,(alpha-convert-impl val)))
      (else (alpha-convert-impl expr))))
)
