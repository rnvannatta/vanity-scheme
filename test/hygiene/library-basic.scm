; define-library under --hygiene: bare declarations, (begin ...)-wrapped
; declarations, export with rename, define-constant, a non-constant define, a
; set! of a library variable, an expression between definitions, and
; only/prefix/rename on the importing side.
(define-library (hy basic)
  (import (only (vanity core) + *))
  (export (rename twice double) counter bump kar)
  (define-constant kar ##vcore.car)
  (define (twice x) (* 2 x))
  (define counter 0)
  (define (bump!) (set! counter (+ counter 1)) counter)
  (bump!)
  (begin
    (export bump!)
    (define (bump) (bump!))))

(import (vanity core) (vanity assert))
(import (prefix (rename (hy basic) (double dbl)) b.))
(assert-equal (b.dbl 21) 42)
(assert-equal (b.kar '(1 2)) 1)
(assert-equal b.counter 1)
(assert-equal (b.bump) 2)
(assert-equal (b.bump!) 3)
