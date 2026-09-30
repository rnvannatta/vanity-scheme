; A phase-0 definition is not visible to a transformer.
(import (vanity core))
(define (helper x) x)
(define-syntax (m) (helper 5))
(display (m))
