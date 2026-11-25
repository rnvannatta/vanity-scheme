; A library exports macros alongside variables; importers use them plainly
; and through only, prefix and rename. A later import of a macro under the
; same name relinks it to the later macro, as variables do, and importing
; the same macro twice is no conflict.
(define-library (hy mx)
  (import (vanity core))
  (export swap! (rename my-unless unless-not) tag)
  (define (tag) 'mx)
  (define-syntax (swap! a b)
    (quasisyntax (let ((tmp ,a)) (set! ,a ,b) (set! ,b tmp))))
  (define-syntax (my-unless c . body)
    (quasisyntax (if ,c #f (begin . ,body)))))

(define-library (hy mx2)
  (import (vanity core))
  (export swap!)
  (define-syntax (swap! a b) (quasisyntax (list ,b ,a))))

(define-library (hy mx-user)
  (import (vanity core) (hy mx) (hy mx2))
  (export swapped)
  (define (swapped) (swap! 1 2)))

(import (vanity core) (vanity assert))
(import (only (hy mx) swap! tag))
(import (only (hy mx) swap!))
(define x 1)
(define y 2)
(swap! x y)
(assert-equal (list x y) '(2 1))
(assert-equal (tag) 'mx)

(import (prefix (rename (hy mx) (unless-not nope)) p.))
(assert-equal (p.nope #f 'ran) 'ran)
(assert-equal (p.nope #t 'ran) #f)

(import (hy mx-user))
(assert-equal (swapped) '(2 1))
