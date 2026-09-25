; define-record-type at toplevel, in a body, and in a define-library; field
; and accessor names that shadow core names or the expansion's own
; introduced names; a field named like its record type; and a record type
; named like its constructor whose predicate is later redefined (the
; accessors must keep the true predicate).
(import (vanity core) (vanity assert))

(define rec 'user-rec)
(define x 'user-x)
(define-record-type thing
  (make-thing x rec and)
  thing?
  (x thing-x)
  (rec thing-rec)
  (and thing-and set-thing-and!))
(define t (make-thing 1 2 3))
(set-thing-and! t 4)
(assert-equal (list (thing-x t) (thing-rec t) (thing-and t)) '(1 2 4))
(assert-equal (thing? t) #t)
(assert-equal (thing? '(1 2 3)) #f)
(assert-equal (list rec x) '(user-rec user-x))

(define-record-type cell (make-cell cell) cell? (cell cell-ref))
(assert-equal (cell-ref (make-cell 'c)) 'c)

(define-record-type box (box box) box? (box unbox set-box!))
(define b (box 1))
(define box? 'not-a-predicate)
(set-box! b 2)
(assert-equal (unbox b) 2)
(assert-equal box? 'not-a-predicate)

(define (failure thunk)
  (guard (e ((error-object? e) (list (error-object-message e) (error-object-irritants e))))
    (thunk)))
(assert-equal (car (failure (lambda () (unbox t)))) "not a record of the right type")
(assert-equal (car (failure (lambda () (thing-x b)))) "not a record of the right type")

(define (internal)
  (define-record-type kons (cons car cdr) pair? (car car set-car!) (cdr cdr set-cdr!))
  (define-record-type point (make-point point) point? (point point-point))
  (define p (cons 1 2))
  (set-car! p 3)
  (list (car p) (cdr p) (pair? p) (pair? '(1)) (point-point (make-point 5)) (point? p)))
(assert-equal (internal) '(3 2 #t #f 5 #f))
(assert-equal (car '(1 2)) 1)
(assert-equal (pair? '(1 2)) #t)

(define-library (hy records)
  (import (vanity core))
  (export nil nil? kons kar kdr set-kar! kons?)
  (define-record-type nil (nil) nil?)
  (define-record-type pare (kons car cdr) kons? (car kar set-kar!) (cdr kdr))
  (define p (kons 1 2))
  (set-kar! p 10))
(import (prefix (hy records) r.))
(define q (r.kons 1 2))
(r.set-kar! q 7)
(assert-equal (r.nil? (r.nil)) #t)
(assert-equal (r.nil? q) #f)
(assert-equal (list (r.kar q) (r.kdr q) (r.kons? q) (r.kons? t)) '(7 2 #t #f))
