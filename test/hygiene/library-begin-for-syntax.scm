; begin-for-syntax in a library body; a name defined at phase 0 and phase 1
; there is not a duplicate.
(define-library (hy phase lib)
  (import (vanity core))
  (export total zero)
  (begin-for-syntax
    (define (sum xs) (if (null? xs) 0 (+ (car xs) (sum (cdr xs))))))
  (begin-for-syntax
    (define (plus1 x) (+ x 1)))
  (define (sum xs) 'phase-zero-sum)
  (define-syntax (sum-args . xs) (plus1 (sum xs)))
  (define (total) (sum-args 1 2 3))
  (define (zero) (sum '())))

(import (vanity core) (vanity assert) (hy phase lib))
(assert-equal (total) 7)
(assert-equal (zero) 'phase-zero-sum)
