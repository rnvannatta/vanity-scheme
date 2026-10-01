; A syntax template sheds the scopes of the binding forms around it up to the
; phase crossing (Flatt, Binding as Sets of Scopes, 4), so a binder quoted in
; one place binds a reference quoted in another.
(import (vanity core) (vanity assert))

(define-syntax m
  (lambda (stx)
    (let ((id (syntax x)))
      (list (syntax let) (list (list (syntax x) 1)) id))))
(assert-equal (m) 1)

(define-syntax same
  (lambda (stx)
    (if (free-identifier=? (let ((x 1)) (syntax x)) (syntax x))
        (quasisyntax #t)
        (quasisyntax #f))))
(assert-equal (same) #t)

; the template x is not the transformer's phase-1 parameter
(define x 7)
(define-syntax param-named-x (lambda (x) (syntax x)))
(assert-equal (param-named-x) 7)

(define-syntax loop-binder
  (lambda (stx)
    (let loop ((n 2) (id #f))
      (if (= n 0)
          (list (syntax let) (list (list id 1)) (syntax x))
          (loop (- n 1) (syntax x))))))
(assert-equal (loop-binder) 1)

; the binder arrives as macro input, so it carries a use-site scope
(begin-for-syntax
  (define-syntax (with-binder b) (quasisyntax (lambda (ref) (list (syntax let) (list (list ,b 1)) ref)))))
(define-syntax use-site
  (lambda (stx)
    ((with-binder (let ((u 0)) (syntax x))) (syntax x))))
(assert-equal (use-site) 1)
