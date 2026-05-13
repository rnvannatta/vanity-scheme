(define-library (foo)
  (cond-expand
    (vanity-scheme
     (export foo)
     (define foo 0))
    (else (export bar)))
  (define bar 1))

(cond-expand ((library (foo)) (import (foo))))
(cond-expand ((and (not (library (i simply do not exist))) (library (vanity core))) (import (vanity core))))

(cond-expand (#t (define uhoh 'foobar)))
(cond-expand (else (define ruhoh 'foobar)))
(or (eq? uhoh ruhoh) (exit 1))

(cond-expand)
(cond-expand ((not r7rs) (exit 1)) ((or exact-closed r7rs) (exit (eq? foo 0))))
