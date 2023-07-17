(import (vanity core) (vanity assert))

(define (all-different? lst)
  (cond ((null? lst) #t)
        ((memq (car lst) (cdr lst)) #f)
        (else (all-different? (cdr lst)))))

(define input (open-input-file "input"))

(define (take lst x)
  (if (eq? x 0) '()
      (cons (car lst) (take (cdr lst) (- x 1)))))

(define (read-three)
  (let loop ((i 0) (acc '()))
    (if (eq? i 3) acc
        (let ((x (read-char input)))
          (loop (+ i 1) (cons x acc))))))

(let loop ((i 3) (lst (read-three)))
  (let ((newlst (cons (read-char input) (take lst 3))))
    (if (all-different? newlst)
        (begin
          (assert-equal (+ i 1) 1343)
          #;(display "task 1:")
          #;(display (+ i 1))
          #;(newline))
        (loop (+ i 1) newlst))))

(close-port input)
(define input (open-input-file "input"))

(define (read-n n)
  (let loop ((i 0) (acc '()))
    (if (eq? i n) acc
        (let ((x (read-char input)))
          (loop (+ i 1) (cons x acc))))))

(let loop ((i 13) (lst (read-n 13)))
  (let ((newlst (cons (read-char input) (take lst 13))))
    (if (all-different? newlst)
        (begin
          (assert-equal (+ i 1) 2193)
          #;(display "task 2:")
          #;(display (+ i 1))
          #;(newline))
        (loop (+ i 1) newlst))))
(close-port input)
