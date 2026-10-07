; As intro-mutual-recursion-split, inside a library.
(define-library (hy intro mutrec split)
  (import (vanity core))
  (export run)
  (begin
    (define-syntax (def-parity name)
      (quasisyntax
        (begin
          (begin-for-syntax (define (ev? n) (if (= n 0) #t (od? (- n 1)))))
          (begin-for-syntax (define (od? n) (if (= n 0) #f (ev? (- n 1)))))
          (begin-for-syntax (define (,name n) (ev? n))))))
    (def-parity my-even?)
    (define-syntax (m n) (if (my-even? n) (quasisyntax 'even) (quasisyntax 'odd)))
    (define (run) (m 10))))
(import (vanity core) (hy intro mutrec split))
(display (run))
