(import (vanity core))

(define a #(1 2))
(define b '#(1 2))
(define c `#(1 2))
(define d `,#(1 2))
(define x 2)
(define y '(3 4))
(define e `#(1 ,x ,@y))
(exit
  (and
    (equal? a b)
    (equal? a c)
    (equal? a d)
    (not (equal? a e))
    (equal? e #(1 2 3 4))))
