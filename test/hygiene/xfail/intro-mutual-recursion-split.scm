; Macro-introduced phase-1 definitions split across begin-for-syntax blocks
; can't be mutually recursive: ev?'s od? is a forward reference to the
; toplevel od?, which the later macro-introduced od? would bind.
(import (vanity core))
(define-syntax (def-parity name)
  (quasisyntax
    (begin
      (begin-for-syntax (define (ev? n) (if (= n 0) #t (od? (- n 1)))))
      (begin-for-syntax (define (od? n) (if (= n 0) #f (ev? (- n 1)))))
      (begin-for-syntax (define (,name n) (ev? n))))))
(def-parity my-even?)
(define-syntax (m n) (if (my-even? n) (quasisyntax 'even) (quasisyntax 'odd)))
(display (m 10))
