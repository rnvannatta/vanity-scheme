(import (vanity core))
(import (vanity hashtable))

(define (assert-equal a b)
  (unless (equal? a b)
    (printf "~A does not equal ~A~N" a b)
    (exit 1)))

(define table (make-hash-table eq? current-hash 'ephemeral-key #f))

(define one #f)
(define two #f)
(define three #f)
(let ((a (cons 1 1)) (b (cons 2 2)) (c (cons 3 3)))
  (hash-table-set! table a 'one)
  (hash-table-set! table b 'two)
  (hash-table-set! table c 'three)
  (set! one a)
  (set! two b)
  (set! three c))

(define mypair #f)
(let ((p (cons 1 2)))
  (hash-table-set! table p (symbol->string 'nasty))
  (set! mypair p))
(##vcore.garbage-collect #t)

(assert-equal (hash-table-size table) 4)
(set! mypair #f)
(##vcore.garbage-collect #t)
(assert-equal (hash-table-size table) 3)

(define nine (cons 9 9))

(hash-table-set! table three 'thwee)
(hash-table-set! table 4 'four)
(hash-table-set! table 5 'five)
(hash-table-set! table 6 'six)
(hash-table-set! table 7 'seven)
(hash-table-set! table 8 'eight)
(hash-table-set! table nine (cons nine nine))
(hash-table-set! table 10 'ten)
(hash-table-set! table 11 'eleven)
(hash-table-set! table 12 'dozen)

(##vcore.garbage-collect #t)
(assert-equal (hash-table-size table) 12)

(hash-table-delete! table 9)
(set! nine #f)

(##vcore.garbage-collect #t)

(exit
  (and (eqv? (hash-table-ref table one) 'one)
       (eqv? (hash-table-ref table two) 'two)
       (eqv? (hash-table-ref table three) 'thwee)
       (eqv? (hash-table-ref table 9 (lambda () 'failure)) 'failure)
       (eqv? (hash-table-ref table nine (lambda () 'failure)) 'failure)
       (eq? (hash-table-size table) 11)
       #;(equal? (hash-table-ref table mypair) "nasty")))
