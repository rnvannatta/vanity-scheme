(import (vanity core))
(define (myvalues) (values 1 2 3 4))
; testing that values can be called in the tail call position of leaf functions
; ie (myvalues) is of type (-> int int int int) and the if statement is of type (or (int int int int) (int))
; and it properly passes the (int int int int) values to list
(exit (and (equal? (apply list '(a b c)) '(a b c))
           (equal? (call-with-values (lambda () (if (eq? 1 1) (myvalues) #f)) list)
                   (list 1 2 3 4))
           (equal? (call-with-values (lambda () (call/cc (lambda (k) (k 1 2 3) #f))) list)
                   (list 1 2 3))))
