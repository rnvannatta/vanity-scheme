; Internal define-syntax. Templates see lambda formals and sibling internal
; defines on either side of the macro's definition; the sugar form,
; definition-position uses, recursion, hygiene, nested bodies, and shadowing
; of a toplevel macro all behave as they do at toplevel.
(import (vanity core) (vanity assert))

(define-syntax (m) (quasisyntax 'toplevel))

(define (f x)
  (define before 10)
  (define-syntax (add-all a) (quasisyntax (+ ,a x before after)))
  (define after 100)
  (add-all 1))
(assert-equal (f 1000) 1111)

; plain transformer procedure and the sugar form side by side
(define (g)
  (define-syntax twice (lambda (form) (quasisyntax (* 2 ,(cadr form)))))
  (define-syntax (thrice a) (quasisyntax (* 3 ,a)))
  (+ (twice 5) (thrice 5)))
(assert-equal (g) 25)

; a definition-position use expanding to a define
(define (h)
  (define-syntax (define-thunk name val) (quasisyntax (define (,name) ,val)))
  (define-thunk seven 7)
  (seven))
(assert-equal (h) 7)

; self-recursive rewrite macro
(define (r)
  (define-syntax (my-and . xs)
    (if (null? xs)
        (quasisyntax #t)
        (if (null? (cdr xs))
            (car xs)
            (quasisyntax (if ,(car xs) (my-and . ,(cdr xs)) #f)))))
  (list (my-and) (my-and 1 2 3) (my-and 1 #f 3)))
(assert-equal (r) '(#t 3 #f))

; an introduced binder must not capture the use site's t
(define (hy t)
  (define-syntax (my-or a b) (quasisyntax (let ((t ,a)) (if t t ,b))))
  (my-or #f t))
(assert-equal (hy 42) 42)

; visible in nested bodies
(define (outer)
  (define-syntax (k) (quasisyntax 'k))
  (define (inner) (k))
  (inner))
(assert-equal (outer) 'k)

; shadows the toplevel macro only inside its own body
(define (shadow)
  (define-syntax (m) (quasisyntax 'internal))
  (m))
(define (other) (m))
(assert-equal (shadow) 'internal)
(assert-equal (other) 'toplevel)
(assert-equal (m) 'toplevel)
