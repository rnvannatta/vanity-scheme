; A phase-0 import is not visible to a transformer, which runs at phase 1.
(define-library (hy phase imported)
  (import (vanity core) (vanity list))
  (export f)
  (define-syntax (m x) (if (filter odd? '(1)) x x))
  (define (f) (m 5)))
(import (vanity core) (hy phase imported))
(display (f))
