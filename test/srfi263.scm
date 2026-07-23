; SPDX-FileCopyrightText: 2026 Daniel Ziltener
; SPDX-FileCopyrightText: 2026 Vanity Scheme contributors
;
; SPDX-License-Identifier: MIT
;
; Based on the SRFI 263 reference test suite by Daniel Ziltener:
; https://github.com/scheme-requests-for-implementation/srfi-263
; Adapted for Vanity Scheme.

(import (vanity core) (vanity assert) (vanity srfi263))

(define (assert-true value)
  (assert-equal value #t))

(define (raises-error? thunk)
  (call-with-current-continuation
   (lambda (return)
     (with-exception-handler
         (lambda (exception) (return #t))
       (lambda ()
         (thunk)
         #f)))))

(define testmethod
  (lambda (self resend) 'success))

;;; Basic functionality

(assert-true (null? ((*the-root-object* 'mirror) 'immediate-ancestor-list)))
(assert-equal (length ((*the-root-object* 'mirror) 'immediate-message-alist)) 9)

(let ((class (*the-root-object* 'derive)))
  (assert-equal (car ((class 'mirror) 'immediate-ancestor-list)) *the-root-object*)

  (class 'set-method-slot! 'testmethod testmethod)
  (assert-equal (class 'testmethod) 'success)

  (class 'set-value-slot! 'val 'set-val! 10)
  (assert-equal (class 'val) 10)
  (class 'set-val! 20)
  (assert-equal (class 'val) 20)
  (assert-equal (length ((class 'mirror) 'immediate-message-alist)) 5)
  (class 'set-value-slot! 'val 40)
  (assert-equal (class 'val) 40)
  (assert-equal (length ((class 'mirror) 'immediate-message-alist)) 4)
  ;; Deleting a setter retains its getter.
  (class 'set-value-slot! 'val 'set-val! 10)
  (class 'delete-slot! 'set-val!)
  (assert-equal (length ((class 'mirror) 'immediate-message-alist)) 4)
  ;; Deleting a getter removes its corresponding setter too.
  (class 'set-value-slot! 'val 'set-val! 10)
  (class 'delete-slot! 'val)
  (assert-equal (length ((class 'mirror) 'immediate-message-alist)) 3))

;;; Inheritance

(let* ((first-level (*the-root-object* 'derive))
       (second-level (first-level 'derive)))
  (first-level 'set-method-slot! 'testmethod testmethod)
  (assert-equal (second-level 'testmethod) 'success)
  (first-level 'set-value-slot! 'val 'set-val! 10)
  (assert-equal (second-level 'val) 10)
  (second-level 'set-val! 20)
  (assert-equal (first-level 'val) 10)
  (assert-equal (second-level 'val) 20)
  (first-level 'set-value-slot! 'val #f 30)
  (assert-equal (first-level 'val) 30)
  (assert-equal (second-level 'val) 20)

  ;; SRFI 263's full-ancestor-list excludes the receiving object itself.
  (assert-equal (length ((first-level 'mirror) 'full-ancestor-list)) 1)
  (assert-equal (length ((second-level 'mirror) 'full-ancestor-list)) 2))

;;; Multiple inheritance and error handling

(let* ((adder-class (*the-root-object* 'derive))
       (square-class (*the-root-object* 'derive))
       (math-class (square-class 'derive)))
  (adder-class 'set-method-slot! 'add1
               (lambda (self resend value) (+ value 1)))
  (square-class 'set-method-slot! 'square
                (lambda (self resend value) (* value value)))
  (math-class 'set-parent-slot! 'adder adder-class)
  (assert-equal (adder-class 'add1 9) 10)
  (assert-equal (square-class 'square 3) 9)
  (assert-equal (math-class 'add1 8) 9)

  (assert-true (raises-error? (lambda () (adder-class 'sub1 10))))

  ;; Two inherited handlers for the same message are intentionally ambiguous.
  (adder-class 'set-method-slot! 'reset (lambda (self resend value) 5))
  (square-class 'set-method-slot! 'reset (lambda (self resend value) 5))
  (assert-true (raises-error? (lambda () (math-class 'reset 1))))

  (assert-equal (length ((math-class 'mirror) 'immediate-ancestor-list)) 2)
  (math-class 'delete-slot! 'adder)
  (assert-equal (length ((math-class 'mirror) 'immediate-ancestor-list)) 1))

;;; Fixed and fallback message arities

;; Exercise the object dispatcher and resend procedure together.  Zero and two
;; arguments use fixed-arity case-lambda clauses; five arguments deliberately
;; cross into the variadic fallback.
(let* ((parent (*the-root-object* 'derive))
       (child (parent 'derive)))
  (parent 'set-method-slot! 'zero-arguments
          (lambda (self resend) 'zero))
  (child 'set-method-slot! 'zero-arguments
         (lambda (self resend) (resend #f)))
  (assert-equal (child 'zero-arguments) 'zero)

  (parent 'set-method-slot! 'two-arguments
          (lambda (self resend a b) (list a b)))
  (child 'set-method-slot! 'two-arguments
         (lambda (self resend a b) (resend #f a b)))
  (assert-equal (child 'two-arguments 'a 'b) '(a b))

  (parent 'set-method-slot! 'five-arguments
          (lambda (self resend a b c d e) (list a b c d e)))
  (child 'set-method-slot! 'five-arguments
         (lambda (self resend a b c d e) (resend #f a b c d e)))
  (assert-equal (child 'five-arguments 1 2 3 4 5) '(1 2 3 4 5)))

;; The upstream suite also tests its `(srfi 263 syntax)` library here.  Vanity
;; does not currently import macros through generated .scmh interfaces, so that
;; portion is deliberately omitted until macro-library imports are supported.
