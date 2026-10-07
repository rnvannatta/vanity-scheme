; A free identifier at phase 1 names the program's phase-1 variable of that
; name, so a begin-for-syntax block may refer to a later block's definitions.
(import (vanity core) (vanity assert))

(begin-for-syntax
  (define (f n) (+ (g n) 1)))
; refers to a later block, but only runs after it
(define-syntax (early) (quasisyntax ',(h 2)))
(begin-for-syntax
  (define (g n) (* n 10))
  (define (h n) (f n)))
(define-syntax (m) (quasisyntax ',(f 4)))
(assert-equal (m) 41)
(assert-equal (early) 21)

; the binder from a later block's template builder is pruned like any other
(begin-for-syntax
  (define (x-let) (let ((v 0)) (list (syntax let) (list (list (x-binder) 1)) (syntax x)))))
(begin-for-syntax
  (define (x-binder) (let ((u 0)) (syntax x))))
(define-syntax (pruned) (x-let))
(assert-equal (pruned) 1)

; a macro-introduced forward reference reaches a later user definition
(begin-for-syntax
  (define-syntax (call-later) (quasisyntax (later-helper)))
  (define (via-macro) (call-later)))
(begin-for-syntax
  (define (later-helper) 'found))
(define-syntax (intro-ref) (quasisyntax ',(via-macro)))
(assert-equal (intro-ref) 'found)

; the forward reference is to the phase-1 z, not the phase-0 one
(begin-for-syntax
  (define (get-z) z))
(define z 'phase-0)
(begin-for-syntax
  (define z 'phase-1))
(define-syntax (zs) (quasisyntax (list ',(get-z) z)))
(assert-equal (zs) '(phase-1 phase-0))
