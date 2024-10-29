(import (vanity core))

(define table (make-hash-table))

(hash-table-set! table 1 'one)
(hash-table-set! table 2 'two)
(hash-table-set! table 3 'three)

(define mypair #f)
(let ((p (cons 1 2)))
  (hash-table-set! table p (symbol->string 'nasty))
  (set! mypair p))
(##vcore.garbage-collect #t)

(hash-table-set! table 3 'thwee)
(hash-table-set! table 4 'four)
(hash-table-set! table 5 'five)
(hash-table-set! table 6 'six)
(hash-table-set! table 7 'seven)
(hash-table-set! table 8 'eight)
(hash-table-set! table 9 'niner)
(hash-table-set! table 10 'ten)
(hash-table-set! table 11 'eleven)
(hash-table-set! table 12 'dozen)

(hash-table-delete! table 9)


(define eqv-table (make-hash-table eqv?))

(hash-table-set! eqv-table 'one 1)
(hash-table-set! eqv-table 'two 2)
(hash-table-set! eqv-table (string->symbol "one") 0)
(hash-table-set! eqv-table 'three 3)
(hash-table-set! eqv-table 'four 4)

(exit
  (and (eqv? (hash-table-ref table 1) 'one)
       (eqv? (hash-table-ref table 2) 'two)
       (eqv? (hash-table-ref table 3) 'thwee)
       (eqv? (hash-table-ref table 9 (lambda () 'failure)) 'failure)
       (equal? (hash-table-ref table mypair) "nasty")

       (eqv? (hash-table-ref eqv-table (string->symbol "one")) 0)
       (eqv? (hash-table-ref eqv-table (string->symbol "two")) 2)
       (eqv? (hash-table-ref eqv-table (string->symbol "three")) 3)
       (not (hash-table-ref eqv-table 'five (lambda () #f)))))
