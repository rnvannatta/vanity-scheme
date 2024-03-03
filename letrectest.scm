(import (vanity core))
(letrec ((x 0) (y 1))
  (cons x y))


(displayln 
  (let loop ((x 5) (acc 1))
    (if (##sys.eq? x 0) acc (loop (- x 1) (* x acc)))))

(letrec ((even? (lambda (x) (or (= x 0) (odd? (- x 1)))))
         (odd? (lambda (x) (and (> x 0) (even? (- x 1))))))
  (displayln (even? 20))
  (displayln (even? 21)))

(letrec ((acceptable (+ 0 1)))
  (displayln (cons 'hayo acceptable)))

(letrec ((satan (cons 'satan (lambda () satan)))) satan)
(letrec ((broken (cons broken (lambda () broken)))) broken)

(let ()
  (define (f x) x)
  (define x (f 2))
  (define y (+ 2 2))
  (define z (+ x y))
  z)
