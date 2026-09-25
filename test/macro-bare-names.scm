; Built-in macros must not expand into references to user-redefinable
; globals (W14): hijacking these at toplevel must not change the macros.
(import (vanity core) (vanity assert))

(define (apply . x) 'hijacked)
(define (values . x) 'hijacked)
(define (call/cc . x) 'hijacked)
(define (eqv? . x) #f)
(define (error . x) 'hijacked)
(define (with-exception-handler . x) 'hijacked)
(define (raise-continuable . x) 'hijacked)

(assert-equal ((cut list 1 <...>) 2 3) '(1 2 3))
(assert-equal ((cute list 1 <...>) 2 3) '(1 2 3))

(assert-equal (case 'b ((a) 1) ((b c) 2) (else 3)) 2)
(assert-equal (case 7 ((6) 1) ((7) 2)) 2)

(define (exhausted-message thunk)
  (guard (e ((error-object? e) (error-object-message e)))
    (thunk)))
(assert-equal (exhausted-message (lambda () (cond (#f 1)))) "exhausted cond statement")
(assert-equal (exhausted-message (lambda () (case 1 ((2) 1)))) "exhausted case statement")

(assert-equal (guard (e (#t (list 'caught e))) (raise 'x)) '(caught x))
(assert-equal (call-with-values (lambda () (guard (e (#t 0)) (##vcore.values 1 2))) list) '(1 2))
; an unmatched inner guard re-raises to the outer one
(assert-equal (guard (e ((symbol? e) (list 'outer e)))
                (guard (e ((string? e) 'inner)) (raise 'y)))
              '(outer y))
; a guard that exits normally must not leave its handler installed
(assert-equal (guard (e (#t (list 'outer e)))
                (guard (e ((string? e) 'inner)) 5)
                (raise 'z))
              '(outer z))
