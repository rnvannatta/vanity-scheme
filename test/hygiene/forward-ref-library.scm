; A library's begin-for-syntax blocks may refer to later blocks' definitions.
(define-library (hy forward ref)
  (import (vanity core))
  (export total)
  (begin-for-syntax
    (define (sum xs) (if (null? xs) 0 (+ (car xs) (sum (cdr xs)))))
    (define (scaled xs) (* (factor) (sum xs))))
  (begin-for-syntax
    (define (factor) 10))
  (define-syntax (sum-args . xs) (scaled xs))
  (define (total) (sum-args 1 2 3)))

(import (vanity core) (vanity assert) (hy forward ref))
(assert-equal (total) 60)
