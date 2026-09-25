; W22: a user macro used in the definition context that defines it. Its
; templates carry the same scopes as the use site, so use-site scopes are
; what keep a binder from the use apart from the template's references and
; binders. Expected values match Racket and Chez.
(import (vanity core) (vanity assert))

(define x 10)

; a use-site binder must not capture a template reference
(define-syntax (m id) (quasisyntax (let ((,id 5)) x)))
(assert-equal (m x) 10)
(assert-equal (list (m x)) '(10))

(define-syntax (my-let1 id v body) (quasisyntax (let ((,id ,v)) (if #t ,body 0))))
(assert-equal (my-let1 if 5 if) 5)

; the paper's example: without use-site scopes the inner x is ambiguous
; between the template's lambda binder and the use's let binder
(define-syntax (identity misc-id)
  (quasisyntax (lambda (x) (let ((,misc-id 'other)) x))))
(assert-equal ((identity x) 'this) 'this)

(define (in-body)
  (define-syntax (identity misc-id)
    (quasisyntax (lambda (x) (let ((,misc-id 'other)) x))))
  ((identity x) 'this))
(assert-equal (in-body) 'this)

(assert-equal
  (let-syntax ((m2 (lambda (form) (quasisyntax (let ((,(cadr form) 5)) x)))))
    (m2 x))
  10)

; definition contexts strip their use-site scopes from the names they
; define, so a macro can define a name the use site then refers to plainly,
; through nested uses too
(define-syntax (define-five name) (quasisyntax (define ,name 5)))
(define-syntax (define-five-twice a b) (quasisyntax (begin (define-five ,a) (define-five ,b))))
(define-five five)
(define-five-twice five-a five-b)
(assert-equal (+ five five-a five-b) 15)
(define (body-five)
  (define-five inner-five)
  (define-five-twice inner-a inner-b)
  (+ inner-five inner-a inner-b))
(assert-equal (body-five) 15)

; the stripping has a cost: a macro-generated definition of a use-site name
; captures a same-named template reference. Racket and Chez agree.
(assert-equal
  (let ()
    (define-syntax (def-and-ref id) (quasisyntax (begin (define ,id 5) x)))
    (def-and-ref x))
  5)
