; A library may define and use its own macros (legacy cannot). A binder the
; macro introduces must not capture the library's own definition of the same
; name, and a macro use in declaration position may expand to a definition
; whose name comes from the call site. A body-internal define-syntax works
; inside the library's fresh universe too.
(define-library (hy macros)
  (import (only (vanity core) +))
  (export result five doubled)
  (define t 42)
  (define-syntax (my-or a b) (quasisyntax (let ((t ,a)) (if t t ,b))))
  (define-syntax (define-five name) (quasisyntax (define (,name) 5)))
  (define-five five)
  (define (result) (my-or #f t))
  (define (doubled)
    (define-syntax (dbl a) (quasisyntax (+ ,a ,a)))
    (dbl (result))))

(import (vanity core) (vanity assert) (hy macros))
(assert-equal (result) 42)
(assert-equal (five) 5)
(assert-equal (doubled) 84)
