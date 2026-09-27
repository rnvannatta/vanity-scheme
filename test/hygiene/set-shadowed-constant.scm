; set! of a formal that shadows an internal or library define-constant is
; not a mutation of the constant
(define-library (hy shadowed-constant)
  (import (only (vanity core) +))
  (export k g)
  (define-constant k 5)
  (define (g k) (set! k (+ k 1)) k))

(import (vanity core) (vanity assert) (hy shadowed-constant))
(define (f)
  (define-constant k 5)
  (define (h k) (set! k (+ k 10)) k)
  (+ k (h k)))
(assert-equal (f) 20)
(assert-equal (g 1) 2)
(assert-equal k 5)
