(import (vanity core) (vanity list))

(define input (open-input-file "input"))

(define (get-number line)
  (let* ((lst (map char->integer line))
         (lst (filter (lambda (e) (<= (char->integer #\0) e (char->integer #\9))) lst)))
    (+ (* 10 (- (car lst) (char->integer #\0)))
       (- (car (take-right lst 1)) (char->integer #\0)))))

#;(let loop ((sum 0))
  (let ((line (read-line input)))
    (displayln line)
    (if (eof-object? line) (displayln sum)
        (loop (+ sum (get-number (string->list line)))))))

(close-port input)
(define input (open-input-file "input"))

; A task best done in regular expressions for DAY ONE????
; You have got to be kidding me...

(define (matchhead lst from to)
  (cond ((null? from) to)
        ((null? lst) #f)
        ((eq? (car lst) (car from)) (matchhead (cdr lst) (cdr from) to))
        (else #f)))

(define (matchhead-number lst)
  (cond ((matchhead lst (string->list "one") #\1) => (lambda (x) x))
        ((matchhead lst (string->list "two") #\2) => (lambda (x) x))
        ((matchhead lst (string->list "three") #\3) => (lambda (x) x))
        ((matchhead lst (string->list "four") #\4) => (lambda (x) x))
        ((matchhead lst (string->list "five") #\5) => (lambda (x) x))
        ((matchhead lst (string->list "six") #\6) => (lambda (x) x))
        ((matchhead lst (string->list "seven") #\7) => (lambda (x) x))
        ((matchhead lst (string->list "eight") #\8) => (lambda (x) x))
        ((matchhead lst (string->list "nine") #\9) => (lambda (x) x))
        (else (car lst))))
(define (matchhead-numbers lst)
  (if (null? lst) lst
      (let ((num (matchhead-number lst)))
        (cons num (matchhead-numbers (cdr lst))))))

(let loop ((sum 0))
  (let ((line (read-line input)))
    #;(displayln line)
    (if (eof-object? line) (displayln sum)
        (begin 
         #;(displayln (get-number (substitute-numbers (string->list line))))
        (loop (+ sum (get-number (matchhead-numbers (string->list line)))))))))

