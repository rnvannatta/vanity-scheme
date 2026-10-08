; set! of an imported define-constant is a compile error
(define-library (hy k)
  (import (vanity core))
  (export k)
  (define-constant k 5))
(define-library (hy set-k)
  (import (vanity core) (hy k))
  (export bump!)
  (define (bump!) (set! k (+ k 1)) k))

(import (vanity core) (hy set-k))
(display (bump!))
