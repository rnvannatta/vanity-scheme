; letrec-syntax templates see the sibling macros; let-syntax templates see the
; enclosing binding of the same name instead.
(import (vanity core) (vanity assert))

(define-syntax (m) (quasisyntax 'outer))

(assert-equal
  (letrec-syntax ((one (lambda (form) (quasisyntax 1)))
                  (two (lambda (form) (quasisyntax (+ (one) (one))))))
    (two))
  2)

(assert-equal
  (let-syntax ((m (lambda (form) (quasisyntax (list 'inner (m))))))
    (m))
  '(inner outer))

(assert-equal
  (letrec-syntax ((m (lambda (form)
                       (if (null? (cdr form))
                           (quasisyntax 'inner)
                           (quasisyntax (list (m) ,(cadr form)))))))
    (m 5))
  '(inner 5))
