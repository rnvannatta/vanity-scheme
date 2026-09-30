; begin-for-syntax is only allowed at program or library toplevel.
(import (vanity core))
(define (f) (begin-for-syntax (define x 1)) 2)
(display (f))
