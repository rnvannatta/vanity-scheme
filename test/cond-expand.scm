(define-library (foo)
  (cond-expand
    (vanity-scheme (export foo))
    (else (export bar)))
  (define foo 0)
  (define bar 1))

(cond-expand ((library (foo)) (import (foo))))
(cond-expand ((and (not (library (i simply do not exist))) (library (vanity core))) (import (vanity core))))

(cond-expand)
(cond-expand ((not r7rs) (exit 1)) ((or exact-closed r7rs) (exit (eq? foo 0))))
