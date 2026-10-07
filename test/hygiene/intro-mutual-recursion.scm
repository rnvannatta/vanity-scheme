; Macro-introduced definitions may refer to each other in either order when
; they are expanded together, at phase 0 and within one begin-for-syntax,
; and neither captures nor is captured by a user definition of the same name.
(import (vanity core) (vanity assert))

(define (od? n) 'user-od)

(define-syntax (def-parity name)
  (quasisyntax
    (begin
      (define (ev? n) (if (= n 0) #t (od? (- n 1))))
      (define (od? n) (if (= n 0) #f (ev? (- n 1))))
      (define (,name n) (ev? n)))))
(def-parity my-even?)
(assert-equal (my-even? 10) #t)
(assert-equal (my-even? 7) #f)
(assert-equal (od? 3) 'user-od)

(begin-for-syntax
  (define (od? n) 'user-od-1))
(define-syntax (def-parity-1 name)
  (quasisyntax
    (begin-for-syntax
      (define (ev? n) (if (= n 0) #t (od? (- n 1))))
      (define (od? n) (if (= n 0) #f (ev? (- n 1))))
      (define (,name n) (ev? n)))))
(def-parity-1 my-even-1?)
(define-syntax (m n) (list (quasisyntax quote) (list (my-even-1? n) (od? n))))
(assert-equal (m 10) '(#t user-od-1))
(assert-equal (m 7) '(#f user-od-1))
