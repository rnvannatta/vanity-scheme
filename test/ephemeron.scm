(import (vanity ephemeron) (vanity core))

(define foo (cons 1 2))
(define eph0 (make-ephemeron 0 (cons #t #t)))
(define eph1 (make-ephemeron (cons #f #f) (cons #t #t)))
(define eph2 (make-ephemeron foo foo))
(define eph3 (make-ephemeron foo (cons 3 4)))
(define bar (cons 6 7))
(define eph4 (make-ephemeron bar (cons foo 0)))

(define-values (ephA ephB) (let ((A (cons -1 2)) (B (cons -3 4))) (values (make-ephemeron A B) (make-ephemeron B A))))
(define-values (ephX ephY ephThis) (let ((A (cons -1 2)) (B (cons -3 4))) (values (make-ephemeron A B) (make-ephemeron B A) (make-ephemeron foo B))))

(define (assert-ephemeron-equals eph broken? key datum)
  (define-values (eph-broken? eph-key eph-datum) (key-datum-pair-unpack eph))
  (unless
    (and (equal? broken? eph-broken?)
         (equal? key eph-key)
         (equal? datum eph-datum))
    (printf "ephemeron not equal #ephemeron(~A ~A ~A): ~A ~A ~A" eph-broken? eph-key eph-datum broken? key datum)
    (exit 1)))

(##vcore.garbage-collect #t)

(assert-ephemeron-equals eph0 #f 0 (cons #t #t))
(assert-ephemeron-equals eph1 #t #f #f)
(assert-ephemeron-equals eph2 #f (cons 1 2) (cons 1 2))
(assert-ephemeron-equals eph3 #f (cons 1 2) (cons 3 4))
(assert-ephemeron-equals eph4 #f (cons 6 7) (cons (cons 1 2) 0))

(assert-ephemeron-equals ephA #t #f #f)
(assert-ephemeron-equals ephB #t #f #f)

(assert-ephemeron-equals ephX #f (cons -1 2) (cons -3 4))
(assert-ephemeron-equals ephY #f (cons -3 4) (cons -1 2))
(assert-ephemeron-equals ephThis #f (cons 1 2) (cons -3 4))

(set! foo #f)
(##vcore.garbage-collect #t)
(assert-ephemeron-equals eph2 #f (cons 1 2) (cons 1 2))
(assert-ephemeron-equals eph3 #f (cons 1 2) (cons 3 4))
(assert-ephemeron-equals eph4 #f (cons 6 7) (cons (cons 1 2) 0))
(assert-ephemeron-equals ephX #f (cons -1 2) (cons -3 4))
(assert-ephemeron-equals ephY #f (cons -3 4) (cons -1 2))
(assert-ephemeron-equals ephThis #f (cons 1 2) (cons -3 4))

(set! bar #f)
(##vcore.garbage-collect #t)
(assert-ephemeron-equals eph2 #t #f #f)
(assert-ephemeron-equals eph3 #t #f #f)
(assert-ephemeron-equals eph4 #t #f #f)
(assert-ephemeron-equals ephX #t #f #f)
(assert-ephemeron-equals ephY #t #f #f)
(assert-ephemeron-equals ephThis #t #f #f)

(exit 0)
