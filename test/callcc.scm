(import (vanity core))

(define next '())
(call/cc (lambda (k) (set! next k)))
(exit (and (next) #f))
(exit (call/cc (lambda (k) (k #t) #f)))
(exit #f)
(car '())
