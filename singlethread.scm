(import (vanity core))

(define-library (acker)
  (export ack)
  (define (ack m n)
    (cond ((##sys.eq? m 0) (##sys.+ n 1))
          ((##sys.eq? n 0) (ack (##sys.- m 1) 1))
          (else (ack (##sys.- m 1) (ack m (##sys.- n 1)))))))
(import (acker))
#;(define (count-to n)
  (let loop ((x 0) (n n))
    (if (##sys.eq? x n)
        n
        (loop (##sys.+ x 1) n))))
;(define (test) (count-to 10000000))
(define (test) (ack 3 9))
;(displayln (test))
(displayln
  (map (lambda (thunk) (thunk))
    (list
      test
      test
      test
      test
      test
      test
      test
      test)))
