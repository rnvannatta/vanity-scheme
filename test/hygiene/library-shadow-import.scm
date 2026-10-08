; A library definition shadows an import of the same name whether the import
; comes before or after it, for a library-local macro's template too, and a
; shadowing definition is what gets exported.
(define-library (hy shadow-before)
  (import (vanity core))
  (export length via-macro)
  (define (length x) 'mine)
  (define-syntax (my-length x) (quasisyntax (length ,x)))
  (define (via-macro x) (my-length x)))
(define-library (hy shadow-after)
  (export length2)
  (define (length x) 'after)
  (define (length2 x) (length x))
  (import (vanity core)))

(import (vanity core) (vanity assert) (prefix (hy shadow-before) b.) (hy shadow-after))
(assert-equal (b.length '(1 2)) 'mine)
(assert-equal (b.via-macro '(1 2)) 'mine)
(assert-equal (length2 '(1 2)) 'after)
(assert-equal (length '(1 2)) 2)
