; The built-in sugar expands into if/let/lambda/begin/or; use-site bindings
; of those names must not capture the expansion.
(import (vanity core) (vanity assert))

((lambda (if let lambda begin or)
   (assert-equal (cond ((= 1 2) 'a) ((= 1 1) 'b) (else 'c)) 'b)
   (assert-equal (cond ((memv 2 '(1 2 3)) => car) (else #f)) 2)
   (assert-equal (cond (#f) (7)) 7)
   (assert-equal (case 3 ((1 2) 'low) ((3 4) 'mid) (else 'high)) 'mid)
   (assert-equal (when (= 1 1) 'yes) 'yes)
   (assert-equal (unless (= 1 2) 'no) 'no)
   (assert-equal (do ((i 0 (+ i 1)) (acc '() (cons i acc))) ((= i 3) acc)) '(2 1 0))
   (assert-equal (let* ((x 1) (y (+ x 1))) (* x y)) 2)
   (assert-equal (receive (a . rest) (values 1 2 3) (list a rest)) '(1 (2 3)))
   (assert-equal (let-values (((a b) (values 1 2)) ((c . d) (values 3 4))) (list a b c d)) '(1 2 3 (4)))
   (assert-equal (let*-values (((a b) (values 1 2)) ((c) (values (+ a b)))) c) 3)
   (assert-equal (force (delay (+ 1 2))) 3)
   (assert-equal (force (delay-force (delay 4))) 4)
   (assert-equal ((cut list 1 <> 3) 2) '(1 2 3))
   (assert-equal ((cute list 1 <> <...>) 2 3) '(1 2 3))
   (assert-equal (guard (e (#t (list 'caught e))) (raise 'boom)) '(caught boom)))
 'if 'let 'lambda 'begin 'or)

; the same, with the shadowing binders introduced by let
(define (shadowed values call-with-values raise apply)
  (assert-equal (receive (a b) (##vcore.values 1 2) (+ a b)) 3)
  (assert-equal (guard (e ((symbol? e) e)) (##vcore.raise 'x)) 'x)
  (assert-equal ((cut list <...>) 1 2) '(1 2)))
(shadowed 'values 'call-with-values 'raise 'apply)
