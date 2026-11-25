; HYGIENE_LIBRARIES.md §3.9: an exported macro's expansion may refer to the
; library's unexported definitions and constants, and to what the library
; imported that the use site did not. Same-named bindings at the use site
; don't capture those references, at program toplevel or in a library body.
(define-library (hy check)
  (import (vanity core) (only (vanity list) last))
  (export check final)
  (define-constant limit 3)
  (define (check-failed form) (list 'failed form))
  (define (over? n) (> n limit))
  (define-syntax (check expr)
    (quasisyntax (if ,expr #t (check-failed (quote ,expr)))))
  (define-syntax (final xs)
    (quasisyntax (if (over? (length ,xs)) (last ,xs) 'short))))

(define-library (hy check user)
  (import (vanity core) (hy check))
  (export run)
  (define (check-failed form) 'captured)
  (define (last xs) 'captured)
  (define (run) (list (check (= 1 2)) (final '(1 2 3 4)))))

(import (only (vanity core) list =) (vanity assert) (hy check) (hy check user))
(define (check-failed form) 'captured)
(define (over? n) 'captured)
(define limit 0)
(assert-equal (check (= 1 1)) #t)
(assert-equal (check (= 1 2)) '(failed (= 1 2)))
(assert-equal (final '(1 2 3 4)) 4)
(assert-equal (final '(1 2)) 'short)
(assert-equal (run) '((failed (= 1 2)) 4))
