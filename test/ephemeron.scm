(import (vanity waybill) (vanity core))

(define (assert-equal x y)
  (unless (equal? x y)
    (printf "~S is not equal to ~S~N" x y)
    (exit 1)))
(define (assert-ephemeral-waybill-equals eph broken? key datum)
  (define-values (eph-broken? eph-key eph-datum) (waybill-unpack eph))
  (unless
    (and (equal? broken? eph-broken?)
         (equal? key eph-key)
         (equal? datum eph-datum))
    (printf "ephemeral-waybill not equal #ephemeral-waybill(~A ~A ~A): ~A ~A ~A" eph-broken? eph-key eph-datum broken? key datum)
    (exit 1)))


(define clearinghouse (make-clearinghouse))
(define foo (cons 1 2))
(define eph0 (make-ephemeral-waybill #f 0 (cons #t #t) 0))
(define eph1 (make-ephemeral-waybill #f (cons #f #f) (cons #t #t) 0))
(define eph2 (make-ephemeral-waybill #f foo foo 0))
(define eph3 (make-ephemeral-waybill #f foo (cons 3 4) 0))
(define bar (cons 6 7))
(define eph4 (make-ephemeral-waybill clearinghouse bar (cons foo 0) 666))

(define-values (ephA ephB) (let ((A (cons -1 2)) (B (cons -3 4))) (values (make-ephemeral-waybill #f A B 0) (make-ephemeral-waybill #f B A 0))))
(define-values (ephX ephY ephThis) (let ((A (cons -1 2)) (B (cons -3 4))) (values (make-ephemeral-waybill #f A B 0) (make-ephemeral-waybill #f B A 0) (make-ephemeral-waybill #f foo B 0))))

(##vcore.garbage-collect #t)

(assert-ephemeral-waybill-equals eph0 #f 0 (cons #t #t))
(assert-ephemeral-waybill-equals eph1 #t #f #f)
(assert-ephemeral-waybill-equals eph2 #f (cons 1 2) (cons 1 2))
(assert-ephemeral-waybill-equals eph3 #f (cons 1 2) (cons 3 4))
(assert-ephemeral-waybill-equals eph4 #f (cons 6 7) (cons (cons 1 2) 0))

(assert-ephemeral-waybill-equals ephA #t #f #f)
(assert-ephemeral-waybill-equals ephB #t #f #f)

(assert-equal (waybill-signaled? ephX) #f)
(assert-ephemeral-waybill-equals ephX #f (cons -1 2) (cons -3 4))
(assert-ephemeral-waybill-equals ephY #f (cons -3 4) (cons -1 2))
(assert-ephemeral-waybill-equals ephThis #f (cons 1 2) (cons -3 4))

(set! foo #f)
(##vcore.garbage-collect #t)
(assert-ephemeral-waybill-equals eph2 #f (cons 1 2) (cons 1 2))
(assert-ephemeral-waybill-equals eph3 #f (cons 1 2) (cons 3 4))
(assert-ephemeral-waybill-equals eph4 #f (cons 6 7) (cons (cons 1 2) 0))

(assert-equal (waybill-signaled? ephX) #f)
(assert-ephemeral-waybill-equals ephX #f (cons -1 2) (cons -3 4))
(assert-ephemeral-waybill-equals ephY #f (cons -3 4) (cons -1 2))
(assert-ephemeral-waybill-equals ephThis #f (cons 1 2) (cons -3 4))

(assert-equal (waybill-signaled? eph4) #f)
(assert-equal (clearinghouse-poll! clearinghouse) #f)
(assert-equal (waybill-address eph4) 666)

(set! bar #f)
(##vcore.garbage-collect #t)
(assert-ephemeral-waybill-equals eph2 #t #f #f)
(assert-ephemeral-waybill-equals eph3 #t #f #f)
(assert-ephemeral-waybill-equals eph4 #t #f #f)

(assert-equal (waybill-signaled? ephX) #t)
(assert-ephemeral-waybill-equals ephX #t #f #f)
(assert-ephemeral-waybill-equals ephY #t #f #f)
(assert-ephemeral-waybill-equals ephThis #t #f #f)

(assert-equal (waybill-signaled? eph4) #t)
(assert-equal (clearinghouse-poll! clearinghouse) eph4)
(assert-equal (clearinghouse-poll! clearinghouse) #f)
(assert-equal (waybill-address eph4) 666)

(exit 0)
