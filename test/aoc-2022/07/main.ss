(import (vanity core) (vanity assert))

(define input (open-input-file "input"))

(define (empty-filesystem)
  `(() ()))

(define (mkdir cwd folder)
  `(,(car cwd) . (,(cadr cwd) (,folder) . ,(cddr cwd)))
  #;(cons (car cwd) (cons (cadr cwd) (cons (cons folder '()) (cddr cwd))))
)
(define (touch cwd file size)
  `(,(car cwd) . (,(cadr cwd) (,file . ,size) . ,(cddr cwd))))

; left is a list of incomplete directories
(define (cdup cwd)
  ;`(,(cdar cwd) . ,(append (caar cwd) (cons (cdr cwd) '()))))
  `(,(cdar cwd) . (,(caaar cwd) ,(cdr cwd) . ,(cdaar cwd))))

(define (cdtop cwd)
  (if (null? (car cwd))
      cwd
      (cdtop (cdup cwd))))

(define (cdgo cwd folder)
  (let loop ((files (cddr cwd)) (checked '()))
    (if (equal? folder (caar files))
        (cons (cons (cons (cadr cwd) (append checked (cdr files))) (car cwd))
              (car files))
        (loop (cdr files) (cons (car files) checked)))))

(define (cd cwd folder)
  (cond
    ((equal? folder "/") (cdtop cwd))
    ((equal? folder "..") (cdup cwd))
    (else (cdgo cwd folder))))

; we KNOW a space is in the line
(define (strchr str chr)
  (let loop ((i 0))
    (if (eq? (string-ref str i) chr) i
        (loop (+ i 1)))))

(define (decode-line line)
  (define (decode-mkdir line)
    `(mkdir ,(substring line 4)))
  (define (decode-touch line)
    (let ((i (strchr line #\space)))
      `(touch ,(substring line (+ i 1)) ,(string->number (substring line 0 i)))))
  (define (decode-cd line)
    `(cd ,(substring line 5)))
  (cond ((eq? (string-ref line 0) #\d) (decode-mkdir line))
        ((not (eq? (string-ref line 0) #\$)) (decode-touch line))
        ((eq? (string-ref line 2) #\c) (decode-cd line))
        ((eq? (string-ref line 2) #\l) '(nop))))

(define (apply-line cwd line)
  (case (car line)
    ((nop) cwd)
    ((mkdir) (mkdir cwd (cadr line)))
    ((touch) (touch cwd (cadr line) (caddr line)))
    ((cd) (cd cwd (cadr line)))))

(define (measure-jank cwd)
  (define sum 0)
  (define (iter size folder)
    (cond ((null? folder) (if (> size 100000) size (begin (set! sum (+ size sum)) size)))
          ((exact? (cdar folder)) (iter (+ size (cdar folder)) (cdr folder)))
          (else (iter (+ (iter 0 (cdar folder)) size) (cdr folder)))))
  (iter 0 (cddr (cd cwd "/")))
  sum)

;(display "task 1:")
(let loop ((cwd (empty-filesystem)))
  (let ((line (read-line input)))
    (if (eof-object? line)
        (assert-equal (measure-jank cwd) 1644735)
        #;(writeln (measure-jank cwd))
        (begin
          (loop (apply-line cwd (decode-line line)))))))

(close-port input)
(define input (open-input-file "input"))

(define (measure cwd)
  (define (iter size folder)
    (cond ((null? folder) size)
          ((exact? (cdar folder)) (iter (+ size (cdar folder)) (cdr folder)))
          (else (iter (+ (iter 0 (cdar folder)) size) (cdr folder)))))
  (iter 0 (cddr (cd cwd "/"))))
(define (measure-delete cwd space-needed)
  (define minimum 999999999)
  (define (set-minimum! size)
    (if (>= size space-needed)
        (if (< size minimum) (set! minimum size) #f)
        #f))
  (define (iter size folder)
    (cond ((null? folder) (set-minimum! size) size)
          ((exact? (cdar folder)) (iter (+ size (cdar folder)) (cdr folder)))
          (else (iter (+ (iter 0 (cdar folder)) size) (cdr folder)))))
  (iter 0 (cddr (cd cwd "/")))
  minimum)

;(display "task 2:")
(let loop ((cwd (empty-filesystem)))
  (let ((line (read-line input)))
    (if (eof-object? line)
        (assert-equal (measure-delete cwd (- 30000000 (- 70000000 (measure cwd)))) 1300850)
        #;(writeln (measure-delete cwd (- 30000000 (- 70000000 (measure cwd)))))
        (begin
          (loop (apply-line cwd (decode-line line)))))))
(close-port input)

; BUGS
; * let loop doesn't work right with multiple args - fixed
; * ((if p a b) x) doesn't work right with a and b as builtins - TODO
; * cond is too permissive and outputs junk - fixed
