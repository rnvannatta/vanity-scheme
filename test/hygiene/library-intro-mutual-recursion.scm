; Macro-introduced definitions in a library may refer to each other in either
; order when they are expanded together, at phase 0 and within one
; begin-for-syntax.
(define-library (hy intro mutrec)
  (import (vanity core))
  (export my-even? phase-1-parities)
  (begin
    (define-syntax (def-parity name)
      (quasisyntax
        (begin
          (define (ev? n) (if (= n 0) #t (od? (- n 1))))
          (define (od? n) (if (= n 0) #f (ev? (- n 1))))
          (define (,name n) (ev? n)))))
    (def-parity my-even?)

    (define-syntax (def-parity-1 name)
      (quasisyntax
        (begin-for-syntax
          (define (ev? n) (if (= n 0) #t (od? (- n 1))))
          (define (od? n) (if (= n 0) #f (ev? (- n 1))))
          (define (,name n) (ev? n)))))
    (def-parity-1 my-even-1?)
    (define-syntax (m n) (if (my-even-1? n) (quasisyntax 'even) (quasisyntax 'odd)))
    (define (phase-1-parities) (list (m 10) (m 7)))))

(import (vanity core) (vanity assert) (hy intro mutrec))
(assert-equal (my-even? 10) #t)
(assert-equal (my-even? 7) #f)
(assert-equal (phase-1-parities) '(even odd))
