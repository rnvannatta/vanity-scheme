; A macro-introduced binder must not capture a use-site identifier of the
; same name: the classic my-or test.
(import (vanity core) (vanity assert))

(define-syntax (my-or a b)
  (quasisyntax (let ((t ,a)) (if t t ,b))))

(define t 42)
(assert-equal (my-or #f t) 42)
(assert-equal (my-or t #f) 42)
