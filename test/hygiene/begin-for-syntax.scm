; begin-for-syntax defines phase-1 helpers that transformers call.
(import (vanity core) (vanity assert))

(begin-for-syntax
  (define (car? x) (if (null? x) #f (car x))))
(define-syntax (first-or-false . xs) (car? xs))
(assert-equal (first-or-false 5 6) 5)
(assert-equal (first-or-false) #f)

(begin-for-syntax
  (define base 10)
  (define (plus-base x) (+ x base)))
(define-syntax (m) (plus-base 5))
(assert-equal (m) 15)
