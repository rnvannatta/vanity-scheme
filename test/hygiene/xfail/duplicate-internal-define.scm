; Two internal definitions of one name in the same body are an error, not
; "first one wins".
(import (vanity core))

(define (f)
  (define x 1)
  (define x 2)
  x)
(display (f))
