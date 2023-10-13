(define-library (vanity assert)
  (import (vanity core))
  (export assert-equal)
  (define assert-equal
    (case-lambda
      ((x y)
       (if (not (equal? x y))
           (begin
            (format (current-error-port) "Assertion failed: ~A is not equal to ~A\n" x y)
            (exit 1))))
      ((x . rest)
       (let loop ((rest rest))
        (if (not (null? rest))
          (begin
            (assert-equal x (car rest))
            (loop (cdr rest)))))))))
