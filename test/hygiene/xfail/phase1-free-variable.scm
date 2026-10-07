; A library's free identifiers at phase 1 must be defined in it by its end,
; so a typo in a transformer is an error even in a branch that never runs.
(define-library (hy phase typo)
  (import (vanity core))
  (export f)
  (define-syntax (m x) (if #t x (undefined-helper x)))
  (define (f) (m 1)))
(import (vanity core) (hy phase typo))
(display (f))
