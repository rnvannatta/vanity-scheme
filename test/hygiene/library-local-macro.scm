; A library may define and use its own macros (legacy cannot). A binder the
; macro introduces must not capture the library's own definition of the same
; name, and a macro use in declaration position may expand to a definition
; whose name comes from the call site.
(define-library (hy macros)
  (import (only (vanity core) +))
  (export result five)
  (define t 42)
  (define-syntax (my-or a b) (quasisyntax (let ((t ,a)) (if t t ,b))))
  (define-syntax (define-five name) (quasisyntax (define (,name) 5)))
  (define-five five)
  (define (result) (my-or #f t)))

(import (vanity core) (vanity assert) (hy macros))
(assert-equal (result) 42)
(assert-equal (five) 5)
