(import (vanity core) (vanity list) (vanity hash))

(define-library (acker)
  (export ack)
  (define (ack m n)
    (cond ((##sys.eq? m 0) (##sys.+ n 1))
          ((##sys.eq? n 0) (ack (##sys.- m 1) 1))
          (else (ack (##sys.- m 1) (ack m (##sys.- n 1)))))))
(define (count-to n)
  (let loop ((x 0) (n n))
    (if (##sys.eq? x n)
        n
        (loop (##sys.+ x 1) n))))
(import (acker))
#;(define (test)
  (apply + (##vcore.fiber-fork test0 test0)))
;(define (test) (ack 3 9))
;(define (test) (iota 2000000))
;(displayln (test))

(define-library (picompute)
  (import (vanity core) (vanity hash))
  (export estimate-pi)
  (define (estimate-pi n seed)
    (define rng (make-random seed 1))
    (define (test-pi)
      (let ((x (- (* 2 (random-sample-float! rng)) 1)) (y (- (* 2 (random-sample-float! rng)) 1)))
        (if (<= (+ (* x x) (* y y)) 1) 1 0)))
    (let loop ((i 0) (acc 0))
      (if (>= i n)
          (* 4 (/ acc n))
          (loop (+ i 1) (+ acc (test-pi)))))))

;(displayln (estimate-pi 1000 666))

(import (picompute))
(define trials 1000000)
(displayln
  (/ 
  (apply +
  (##vcore.fiber-fork
    (lambda () (estimate-pi trials 1))
    (lambda () (estimate-pi trials 2))
    (lambda () (estimate-pi trials 3))
    (lambda () (estimate-pi trials 4))
    (lambda () (estimate-pi trials 5))
    (lambda () (estimate-pi trials 6))
    (lambda () (estimate-pi trials 7))
    (lambda () (estimate-pi trials 8))
    )) 8))
#;(define (test2) (iota 10000))
#;(define (test)
  (##vcore.fiber-fork
    test2
    test2
    test2
    test2
    test2
    test2
    test2
    test2))

#;(displayln
  (##vcore.fiber-fork
    test
    test
    test
    test
    test
    test
    test
    test))
