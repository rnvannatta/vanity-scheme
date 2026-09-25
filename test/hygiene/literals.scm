; Keyword literals match by SRFI-72 literal-identifier=?: a lexically
; shadowed else / => / <> is an ordinary variable, but a toplevel define of
; one still matches, since an unbound literal is a toplevel reference too.
(import (vanity core) (vanity assert))

(assert-equal (let ((else #f)) (cond (else 1) (#t 2))) 2)
(assert-equal (let ((=> #f)) (cond (1 => 'x))) 'x)
(assert-equal (let ((<> 5)) ((cut list <>))) '(5))
(assert-equal (guard (e ((symbol? e) e) (else 'other)) (raise 'x)) 'x)

(define-syntax (else-literal? x)
  (if (literal-identifier=? x (syntax else)) (quasisyntax #t) (quasisyntax #f)))
(assert-equal (else-literal? else) #t)
(assert-equal (else-literal? other) #f)
(assert-equal (let ((else 1)) (else-literal? else)) #f)

(define else 42)
(assert-equal (cond (#f 1) (else 'still-keyword)) 'still-keyword)
(assert-equal (else-literal? else) #t)
