; cut and cute: slots, rest slots, and when non-slot arguments are evaluated.
(import (vanity core) (vanity assert))

(assert-equal ((cut list 1 <> 3 <>) 2 4) '(1 2 3 4))
(assert-equal ((cut <> 1 2) +) 3)
(assert-equal ((cut list) ) '())
(assert-equal ((cut list 1 <...>) 2 3 4) '(1 2 3 4))
(assert-equal ((cut list <> <...>) 1) '(1))
(assert-equal ((cute list 1 <> 3 <>) 2 4) '(1 2 3 4))
(assert-equal ((cute <> 1 2) +) 3)
(assert-equal ((cute list <> <...>) 1 2 3) '(1 2 3))

(define n 0)
(define (next!) (set! n (+ n 1)) n)

; cut re-evaluates each call, cute once at creation, left to right
(define f (cut list (next!) <>))
(define g (cute list (next!) <> (next!)))
(assert-equal n 2)
(assert-equal (g 'a) '(1 a 2))
(assert-equal (g 'b) '(1 b 2))
(assert-equal (f 'a) '(3 a))
(assert-equal (f 'b) '(4 b))
(define h (cute list (next!) <...>))
(assert-equal (h 'x 'y) '(5 x y))
(assert-equal (h) '(5))
(assert-equal n 5)

; user variables named like the introduced ones are not captured
(let ((x 10) (rest 20) (tmp 30))
  (assert-equal ((cut list x rest tmp <> <...>) 1 2) '(10 20 30 1 2))
  (assert-equal ((cute list x rest tmp <> <...>) 1 2) '(10 20 30 1 2)))
