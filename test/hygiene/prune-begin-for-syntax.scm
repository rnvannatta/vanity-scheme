; Pruning stops at each begin-for-syntax crossing, and a nested block's
; crossing doesn't outlive it.
(import (vanity core) (vanity assert))

; back to back
(begin-for-syntax
  (define (x-binder) (let ((u 0)) (syntax x))))
(begin-for-syntax
  (define (x-let) (let ((v 0)) (list (syntax let) (list (list (x-binder) 1)) (syntax x)))))
(define-syntax (back-to-back) (x-let))
(assert-equal (back-to-back) 1)

; nested: the phase-2 templates are pruned at the phase-2 crossing
(begin-for-syntax
  (begin-for-syntax
    (define (x2-binder) (let ((u 0)) (syntax x)))
    (define x2-ref (syntax x))
    (define (x2-let body) (list (syntax let) (list (list (x2-binder) 1)) body)))
  (define-syntax (one) (x2-let x2-ref))
  (define (quoted-one) (list (syntax quote) (one))))
(define-syntax (nested) (quoted-one))
(assert-equal (nested) 1)

; The use-site scope on helper's body is made during the outer block's scan,
; before the nested block; helper's rhs is expanded after the nested block
; has run, and must still see the outer block's crossing.
(begin-for-syntax
  (define-syntax (def-fn name body) (quasisyntax (define (,name) ,body)))
  (def-fn helper (let ((u 0)) (syntax x)))
  (begin-for-syntax
    (define (unrelated) (let ((w 0)) (syntax x))))
  (define (helper-let) (list (syntax let) (list (list (helper) 1)) (syntax x))))
(define-syntax (restored) (helper-let))
(assert-equal (restored) 1)
