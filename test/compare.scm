(import (vanity core))

(define failures 0)

; every length-n list drawn from xs
(define (sequences xs n)
  (if (= n 0)
      '(())
      (let ((tails (sequences xs (- n 1))))
        (apply append (map (lambda (x) (map (lambda (t) (cons x t)) tails)) xs)))))

(define (chained? rel? xs)
  (or (null? (cdr xs))
      (and (rel? (car xs) (cadr xs)) (chained? rel? (cdr xs)))))

(define (check name proc rel? values)
  (let loop ((n 2))
    (when (<= n 6)
      (for-each
        (lambda (args)
          (unless (eq? (apply proc args) (chained? rel? args))
            (set! failures (+ failures 1))
            (printf "FAIL ~A applied to ~S should be ~A\n" name args (chained? rel? args))))
        (sequences values n))
      (loop (+ n 1)))))

(define (char-rel op key) (lambda (a b) (op (key a) (key b))))
(define (fold-int c) (char->integer (char-foldcase c)))

(define chars '(#\a #\b #\B))
(check "char<?" char<? (char-rel < char->integer) chars)
(check "char<=?" char<=? (char-rel <= char->integer) chars)
(check "char=?" char=? (char-rel = char->integer) chars)
(check "char>=?" char>=? (char-rel >= char->integer) chars)
(check "char>?" char>? (char-rel > char->integer) chars)
(check "char-ci<?" char-ci<? (char-rel < fold-int) chars)
(check "char-ci<=?" char-ci<=? (char-rel <= fold-int) chars)
(check "char-ci=?" char-ci=? (char-rel = fold-int) chars)
(check "char-ci>=?" char-ci>=? (char-rel >= fold-int) chars)
(check "char-ci>?" char-ci>? (char-rel > fold-int) chars)

; -1, 0, or 1 by lexicographic order of the keyed code points
(define (list-compare xs ys)
  (cond ((and (null? xs) (null? ys)) 0)
        ((null? xs) -1)
        ((null? ys) 1)
        ((< (car xs) (car ys)) -1)
        ((> (car xs) (car ys)) 1)
        (else (list-compare (cdr xs) (cdr ys)))))

(define (string-rel op key)
  (lambda (a b)
    (op (list-compare (map key (string->list a)) (map key (string->list b))) 0)))

(define strings '("" "a" "ab" "B"))
(check "string<?" string<? (string-rel < char->integer) strings)
(check "string<=?" string<=? (string-rel <= char->integer) strings)
(check "string=?" string=? (string-rel = char->integer) strings)
(check "string>=?" string>=? (string-rel >= char->integer) strings)
(check "string>?" string>? (string-rel > char->integer) strings)
(check "string-ci<?" string-ci<? (string-rel < fold-int) strings)
(check "string-ci<=?" string-ci<=? (string-rel <= fold-int) strings)
(check "string-ci=?" string-ci=? (string-rel = fold-int) strings)
(check "string-ci>=?" string-ci>=? (string-rel >= fold-int) strings)
(check "string-ci>?" string-ci>? (string-rel > fold-int) strings)

(exit (= failures 0))
