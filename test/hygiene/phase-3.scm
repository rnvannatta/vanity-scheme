; Nested begin-for-syntax reaches phase 3.
(import (vanity core) (vanity assert))

(begin-for-syntax
  (begin-for-syntax
    (begin-for-syntax
      (define (one) 1))
    (define-syntax (b) (one))
    (define (two) (+ (b) (b))))
  (define-syntax (c) (two))
  (define (four) (+ (c) (c))))
(define-syntax (d) (four))
(assert-equal (d) 4)
