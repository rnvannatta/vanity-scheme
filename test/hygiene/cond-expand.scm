; cond-expand at toplevel (including an import), in a body (definitions
; inside a clause), in expression position, and in a define-library
; (including an import inside a clause); library/and/or/not tests; and
; (features).
(cond-expand
  ((or no-such-feature (library (vanity core))) (import (vanity core)))
  (else))
(import (vanity assert))
(cond-expand
  ((library (i simply do not exist)) (import (i simply do not exist)))
  ((and vanity-scheme (library (vanity list))) (import (only (vanity list) iota))))
(assert-equal (iota 3) '(0 1 2))

(cond-expand
  ((not vanity-scheme) (define top 'wrong))
  (else (define top 'right)))
(assert-equal top 'right)

(define (body)
  (cond-expand
    (no-such-feature (define v 1))
    ((not vanity-scheme) (define v 2))
    ((and) (define v 3) (define w 4)))
  (+ v w))
(assert-equal (body) 7)

(assert-equal (cond-expand ((or) 'no) ((and vanity-scheme (not (or no-such-feature))) 'yes)) 'yes)
(assert-equal (cond-expand (#f 'no) (#t 'yes)) 'yes)
(assert-equal (let ((x (cond-expand))) #t) #t)
(assert-equal (and (memq 'vanity-scheme (features)) #t) #t)
(assert-equal (features) (features))

(define-library (hy cond-expand)
  (cond-expand
    ((library (vanity list)) (import (vanity core) (only (vanity list) iota)))
    (else (import (vanity core))))
  (export n which)
  (cond-expand
    ((and vanity-scheme (not no-such-feature)) (define which 'vanity))
    (else (define which 'other)))
  (define n (length (iota 4))))
(import (hy cond-expand))
(assert-equal n 4)
(assert-equal which 'vanity)
