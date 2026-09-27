; set! of a library's own define-constant is a compile error
(define-library (hy set-constant)
  (import (only (vanity core) +))
  (export k bump!)
  (define-constant k 5)
  (define (bump!) (set! k (+ k 1)) k))

(import (vanity core) (hy set-constant))
(display (bump!))
