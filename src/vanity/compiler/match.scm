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

(define-library (vanity compiler match)
  (import (vanity core) (vanity compiler utils))
  (export transform-match)
  (define (gather-variables pattern eqv?)
    (cond ((null? pattern) '())
          ((eqv? (car pattern) '_) (gather-variables (cdr pattern) eqv?))
          ((eqv? (car pattern) '...) (gather-variables (cdr pattern) eqv?))
          ((symbol? (car pattern))
           (cons (car pattern) (gather-variables (cdr pattern) eqv?)))
          ((vector? (car pattern)) (compiler-error "vectors in matches not implemented yet" (car pattern)))
          ((typevector? (car pattern)) (compiler-error "typevectors in matches not supported" (car pattern)))
          ((atom? (car pattern))
           (gather-variables (cdr pattern) eqv?))
          ((and (pair? (car pattern))
                (eqv? (caar pattern) 'quote))
           (gather-variables (cdr pattern) eqv?))
          (else (gather-variables `(,(caar pattern) ,(cdar pattern) . ,(cdr pattern)) eqv?))))

  (define (transform-match expr eqv?)
    ; TODO trailing patterns
    (define (match-ellipses expr-stack pattern-stack success-expr)
      ; gotta collect ellipses variables
      ; gotta generate syms
      ; does this work with nested ellipses? I think so

      ; keep looping and building up the ellipses patterns
      ; then when we are done, jump out of the loop with a continuation
      ; and return the collected ellipses pattern variables to the
      ; match engine for the rest of the patterns
      (let* (; of the form ((x ...) a b c)
             (pattern (caar pattern-stack))
             (tail-pattern (cddar pattern-stack))
             (pattern-stack (cdr pattern-stack))
             (variables (gather-variables (list pattern) eqv?))
             (syms (map gensym variables))
             (k (gensym "kk"))
             (k2 (gensym "kk"))
             (expr (gensym "expr")))
        `(##vcore.call-with-values
           (lambda ()
             (##vcore.call/cc
               (lambda (,k)
                 (let loop ((,expr ,(car expr-stack)) . ,(map (lambda (sym) `(,sym '())) syms))
                   (if (##vcore.not (##vcore.pair? ,expr))
                       (,k ,expr . ,(map (lambda (sym) `(reverse ,sym)) syms)))
                   (##vcore.call-with-values
                      (lambda ()
                        ; use a second continuation to get rid of the wasteful
                        ; continuation after the end of the ellipses
                        ; ie (x ...) on (1 2 3 4 5) builds up 5 copies
                        ; of (k (reverse sym1)) in the continuation so 
                        ; drop the unnecessary (k (reverse sym1))'s by
                        ; jumping out and calling the loop instead of
                        ; directly calling the loop
                        (##vcore.call/cc
                          (lambda (,k2)
                            ,(match-iter (list `(##vcore.car ,expr)) (list pattern)
                              `(,k2 (##vcore.cdr ,expr) . ,(map (lambda (var sym) `(##vcore.cons ,var ,sym)) variables syms)))
                            (,k ,expr . ,(map (lambda (sym) `(reverse ,sym)) syms)))))
                      loop)))))
           (lambda (tail-expr . ,variables)
             ,(match-iter (cons 'tail-expr (cdr expr-stack)) (cons tail-pattern pattern-stack) success-expr)))))

    (define (match-iter expr-stack pattern-stack success-expr)
      (cond
        ((null? pattern-stack) success-expr)
        ((eqv? (car pattern-stack) '_)
         (match-iter (cdr expr-stack) (cdr pattern-stack) success-expr))
        ((symbol? (car pattern-stack))
         `(let ((,(car pattern-stack) ,(car expr-stack)))
            ,(match-iter (cdr expr-stack) (cdr pattern-stack) success-expr)))
        ((vector? (car pattern-stack)) (compiler-error "vectors in matches not implemented yet" (car pattern-stack)))
        ((typevector? (car pattern-stack)) (compiler-error "typevectors in matches not supported" (car pattern-stack)))
        ((null? (car pattern-stack))
         `(if (##vcore.null? ,(car expr-stack))
              ,(match-iter (cdr expr-stack) (cdr pattern-stack) success-expr)))
        ((string? (car pattern-stack)) 
         `(if (and (##vcore.string? ,(car expr-stack))
                   (##vcore.blob=? ,(car pattern-stack) ,(car expr-stack)))
              ,(match-iter (cdr expr-stack) (cdr pattern-stack) success-expr)))
        ; eq is okay here, since we're not matching symbols or vectors
        ((atom? (car pattern-stack))
         `(if (##vcore.eq? ,(car pattern-stack) ,(car expr-stack))
              ,(match-iter (cdr expr-stack) (cdr pattern-stack) success-expr)))
        ((and (pair? (car pattern-stack))
              (eqv? (caar pattern-stack) 'quote))
         (if (or (not (pair? (cdar pattern-stack)))
                 (not (null? (cddar pattern-stack))))
             (compiler-error "malformed quote"))
         `(if (equal? ',(cadar pattern-stack) ,(car expr-stack))
              ,(match-iter (cdr expr-stack) (cdr pattern-stack) success-expr)))
        ((and (pair? (car pattern-stack))
              (pair? (cdar pattern-stack))
              (eqv? (cadar pattern-stack) '...))
         (let ((sym (gensym "expr")))
          `(let ((,sym ,(car expr-stack)))
            ,(match-ellipses (cons sym (cdr expr-stack)) pattern-stack success-expr))))
        ((pair? (car pattern-stack))
         (let ((sym (gensym "expr")))
          `(let ((,sym ,(car expr-stack)))
             (if (##vcore.pair? ,sym)
                ,(match-iter `((##vcore.car ,sym) (##vcore.cdr ,sym) . ,(cdr expr-stack)) `(,(caar pattern-stack) ,(cdar pattern-stack) . ,(cdr pattern-stack)) success-expr))))
        )
        (else (compiler-error "unknown form in match pattern" (car pattern-stack)))
      ))
    (let ((k (gensym "kk"))
          (input (gensym "input")))
      `(##vcore.call/cc
         (lambda (,k)
           (let ((,input ,(cadr expr)))
           . 
           ,(let loop ((patterns (cddr expr)))
              (cond
                ((null? patterns) `((error "match statement exhausted")))
                ((eqv? (caar patterns) 'else) `((##vcore.call-with-values (lambda () . ,(cdar patterns)) ,k)))
                (else
                  (cons (match-iter (list input)
                                    (list (caar patterns))
                                    `((##vcore.call-with-values (lambda () . ,(cdar patterns)) ,k)))
                        (loop (cdr patterns))))))))))))
