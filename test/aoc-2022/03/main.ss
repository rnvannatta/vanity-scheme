(import (vanity core) (vanity assert))

(define input (open-input-file "input"))

(define (decode-priority c)
  (let ((i (char->integer c)))
    (cond ((<= (char->integer #\a) i (char->integer #\z)) (+ i (- (char->integer #\a)) 1))
          (else (+ i (- (char->integer #\A)) 27)))))

(define (find-dup str)
  (let ((len (quotient (string-length str) 2)))
    (define (find-right c)
      (let loop ((i len))
        (if (< i (* len 2))
            (if (eq? c (string-ref str i)) c (loop (+ i 1)))
            #f)))
    (let loop ((i 0))
      (cond ((>= i len) => (error "exhausted string, no dupe?"))
            ((find-right (string-ref str i)) => (lambda (x) x))
            (else (loop (+ i 1)))))))

(define (sum-priorities port)
  (let loop ((acc 0))
    (let ((line (read-line port)))
      (if (eof-object? line)
          acc
          (let ((dup (find-dup line)))
            (loop (+ acc (decode-priority dup))))))))

(define t1 (sum-priorities input))
;(display "task 1:")
;(display t1)
;(newline)
(assert-equal t1 7811)
(close-port input)

(define input (open-input-file "input"))

(define (strchr str c)
  (let ((len (string-length str)))
    (let loop ((i 0))
      (cond ((>= i len) #f)
            ((eq? c (string-ref str i)) i)
            (else (loop (+ i 1)))))))

(define (find-triple str0 str1 str2)
  (let ((len (string-length str0)))
    (let loop ((i 0))
      (if (>= i len)
          (error "exhausted string, no dupe?"))
      (let ((c (string-ref str0 i)))
        (if (and (strchr str1 c) (strchr str2 c))
            c
            (loop (+ i 1)))))))

(define (sum-triples port)
  (let loop ((acc 0))
    (let* ((line0 (read-line port))
           (line1 (read-line port))
           (line2 (read-line port)))
      (if (eof-object? line0)
          acc
           (loop (+ acc (decode-priority (find-triple line0 line1 line2))))))))

;(display "task 2:")
;(display (sum-triples input))
;(newline)
(assert-equal (sum-triples input) 2639)
(close-port input)
