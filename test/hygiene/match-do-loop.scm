; match and do-loop run the legacy datum transformers, at toplevel, in an
; internal body, and in a library.
(define-library (hy match)
  (import (vanity core) (vanity list))
  (export swap)
  (define (swap p)
    (match p
      ((a . b) (cons b a))
      (else #f))))

(import (vanity core) (vanity list) (vanity assert) (hy match))

(assert-equal
  (match '(1 (2 3) 4 5)
    ((a (b c) rest ...) (list a b c rest))
    (else 'nope))
  '(1 2 3 (4 5)))

(define (classify x)
  (define (tag y)
    (match y
      (() 'empty)
      ((_ . _) 'pair)
      ('sym 'the-sym)
      (else 'other)))
  (tag x))
(assert-equal (map classify '(() (1) sym 3)) '(empty pair the-sym other))

(assert-equal (swap '(1 . 2)) '(2 . 1))

(assert-equal (do-loop for x in '(1 2 3) collect (* x x)) '(1 4 9))
(assert-equal (do-loop for i from 0 below 10 when (= i 4) return i) 4)
(assert-equal
  (do-loop named outer
    for i from 0 below 3
    collect (if (= i 1) 'one i))
  '(0 one 2))
