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
      (let ((x (random-sample-float! rng)) (y (random-sample-float! rng)))
        (if (<= (+ (* x x) (* y y)) 1) 1 0)))
    (let loop ((i 0) (acc 0))
      (if (= i n)
          (* 4 (/ acc n))
          (loop (+ i 1) (+ acc (test-pi)))))))

(import (picompute))
(define numtrials 10000000)
(define numfibers 64)
(displayln
  (/ (fold + 0 (fiber-map (lambda (e) (estimate-pi (/ numtrials numfibers) e)) (iota numfibers))) numfibers))
#;(define (test2) (iota 10000))
#;(define (test)
  (fiber-fork
    test2
    test2
    test2
    test2
    test2
    test2
    test2
    test2))

#;(displayln
  (fiber-fork
    test
    test
    test
    test
    test
    test
    test
    test))
