(import (vanity core))

(define failures 0)
(define (check name got want)
  (unless (equal? got want)
    (set! failures (+ failures 1))
    (printf "FAIL ~A: got ~S want ~S\n" name got want)))

(define (fold-left f acc xs)
  (if (null? xs) acc (fold-left f (f acc (car xs)) (cdr xs))))

(define inputs '(3 12 5 10 6 9 7))
(define (prefix n) (let loop ((xs inputs) (n n)) (if (= n 0) '() (cons (car xs) (loop (cdr xs) (- n 1))))))

(define (check-fold name proc bin)
  (let loop ((n 1))
    (when (<= n (length inputs))
      (let ((args (prefix n)))
        (check (sprintf "~A ~S" name args) (apply proc args) (fold-left bin (car args) (cdr args))))
      (loop (+ n 1)))))

(check-fold "max" max (lambda (a b) (if (> a b) a b)))
(check-fold "min" min (lambda (a b) (if (< a b) a b)))
(check-fold "bitwise-and" bitwise-and (lambda (a b) (bitwise-and a b)))
(check-fold "bitwise-ior" bitwise-ior (lambda (a b) (bitwise-ior a b)))
(check-fold "bitwise-xor" bitwise-xor (lambda (a b) (bitwise-xor a b)))
(check-fold "bitwise-xnor" bitwise-xnor (lambda (a b) (bitwise-xnor a b)))

(check "max 5 args" (max 1 5 3 9 2) 9)
(check "min 6 args" (min 4 5 3 9 2 7) 2)
(check "bitwise-and 5 args" (bitwise-and 15 14 7 6 12) 4)
(check "bitwise-ior 5 args" (bitwise-ior 1 2 4 8 16) 31)
(check "bitwise-xor 5 args" (bitwise-xor 1 3 7 15 31) 21)

(check "bitwise-and identity" (bitwise-and) -1)
(check "bitwise-ior identity" (bitwise-ior) 0)
(check "bitwise-xor identity" (bitwise-xor) 0)
(check "bitwise-xnor identity" (bitwise-xnor) -1)

(exit (= failures 0))
