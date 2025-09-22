(import (vanity core) (vanity list))
(define x 0)
(set! x 1)
(set! + x 2 3)

(define y (cons 0 0))
(set! (car y) 1)
(set! + (car y) 2 3)

(define z (vector 0))
(set! (vector-ref z 0) 1)
(set! + (vector-ref z 0) 2 3)

(define (list-set! lst i x)
  (let ((pair (drop lst i)))
    (set! (car pair) x)))
(set! (setter list-ref) list-set!)
(define (list-mutate! lst i func)
  (let ((pair (drop lst i)))
    (set! (car pair) (func (car pair)))))
(set! (mutator list-ref) list-mutate!)

(define w (list #f #f #f 0))
(set! (list-ref w 3) 1)
(set! + (list-ref w 3) 2 3)

(exit (and (= ((lambda (x) (set! x (lambda (x) x)) (x 9)) (lambda (x) (x x))) 9)
           (= x 6) (= (car y) 6) (= (vector-ref z 0) 6) (= (list-ref w 3) 6)
           (let ((x 0)) (let ((y x)) (set! x 1) (and (= y 0) (= x 1))))))
