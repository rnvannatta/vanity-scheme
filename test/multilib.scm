(define-library (count)
  (export counter)
  (define counter
    (let ((count 0))
      (lambda ()
        (set! count (##vcore.+ count 1))
        count))))

(define-library (foo)
  (import (count) (vanity core))
  (export foobar)
  (define (foobar) (counter)))
(define-library (bar)
  (import (count) (vanity core))
  (export barbar)
  (define (barbar) (counter)))
(import (foo) (bar) (vanity core))
(define x (barbar))
(define y (foobar))
;(displayln x)
;(displayln y)
(exit (and (= x 1) (= y 2)))
