(import (vanity core) (vanity assert) (vanity srfi263))

(define base (*the-root-object* 'derive))
(base 'set-value-slot! 'value 'set-value! 10)
(base 'set-method-slot! 'twice
      (lambda (self resend n) (+ n n)))

(define child (base 'derive))
(assert-equal (child 'value) 10)
(assert-equal (child 'twice 12) 24)
(child 'set-value! 30)
(assert-equal (base 'value) 10)
(assert-equal (child 'value) 30)

(define left (*the-root-object* 'derive))
(define right (*the-root-object* 'derive))
(left 'set-method-slot! 'identity (lambda (self resend) 'left))
(define joined (left 'derive))
(joined 'set-parent-slot! 'right-parent right)
(assert-equal (joined 'identity) 'left)
(assert-equal ((joined 'mirror) 'has-ancestor left) #t)
(assert-equal ((joined 'mirror) 'has-ancestor right) #t)
(assert-equal (length ((joined 'mirror) 'immediate-ancestor-list)) 2)

(child 'delete-slot! 'value)
(assert-equal (child 'value) 10)

;; A small practical example: a prototype acts as a reusable bank-account
;; blueprint.  A value slot holds each account's balance, while methods keep
;; the operations next to the data they manipulate.
(define account-prototype (*the-root-object* 'derive))
(account-prototype 'set-value-slot! 'balance 'set-balance! 0)
(account-prototype 'set-method-slot! 'deposit!
                   (lambda (self resend amount)
                     (self 'set-balance! (+ (self 'balance) amount))
                     (self 'balance)))
(account-prototype 'set-method-slot! 'withdraw!
                   (lambda (self resend amount)
                     (if (<= amount (self 'balance))
                         (begin
                           (self 'set-balance! (- (self 'balance) amount))
                           (self 'balance))
                         'insufficient-funds)))

;; Derived objects initially inherit the blueprint's balance.  Setting it
;; creates an object-local value slot, so one account does not affect another.
(define checking (account-prototype 'derive))
(define savings (account-prototype 'derive))
(checking 'deposit! 100)
(savings 'deposit! 40)
(assert-equal (checking 'balance) 100)
(assert-equal (savings 'balance) 40)

;; A savings account specializes withdrawal.  `resend` invokes the inherited
;; method after this method applies its own minimum-balance policy.
(savings 'set-method-slot! 'withdraw!
         (lambda (self resend amount)
           (if (<= 25 (- (self 'balance) amount))
               (resend #f amount)
               'minimum-balance)))
(assert-equal (savings 'withdraw! 10) 30)
(assert-equal (savings 'withdraw! 10) 'minimum-balance)
(assert-equal (checking 'withdraw! 70) 30)
