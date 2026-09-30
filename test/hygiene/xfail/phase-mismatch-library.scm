; A phase-1 definition is not visible at phase 0.
(define-library (hy phase mismatch)
  (import (vanity core))
  (export f)
  (begin-for-syntax
    (define (helper x) x))
  (define (f) (helper 5)))
(import (vanity core) (hy phase mismatch))
(display (f))
