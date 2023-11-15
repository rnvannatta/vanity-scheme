(import (vanity core) (vanity hash) (vanity list))

(define suites '(clubs hearts spades diamonds))
(define cards '(2 3 4 5 6 7 8 9 10 J Q K A))

(define deck
  (fold append '()
    (map (lambda (c)
           (map (lambda (s) (list c s)) suites))
      cards)))

(define rng (make-random 666 1))
(define (shuffle deck)
  (let ((len (length deck)))
    (let loop ((old deck) (len len) (new '()))
      (if (= len 0) new
          (let ((i (random-sample! rng len)))
            (loop (delete old i) (- len 1) (cons (list-ref old i) new)))))))

(define (value card)
  (case (car card)
    ((A) '(1 11))
    ((10 J Q K) '(10))
    (else (list (car card)))))

(define (ambig+ a b)
  (fold append '()
    (map (lambda (ae)
           (map (lambda (be) (+ ae be)) b)) a)))
(define (score hand)
  (fold ambig+ '(0) (map value hand)))

(define $
  (case-lambda
    ((lst x) (cdr (assv x lst)))
    ((lst x . xs)
     (let loop ((lst ($ lst x)) (xs xs))
       (if (null? xs) lst
           (loop ($ lst (car xs)) (cdr xs)))))))
(define $-set!
  (case-lambda
    ((lst x v) (set! (cdr (assv x lst)) v))
    ((lst x0 x1 . xs)
     (let loop ((lst lst) (xs (cons x0 (cons x1 xs))))
       (if (null? (cddr xs)) ($-set! lst (car xs) (cadr xs))
           (loop ($ lst (car xs)) (cdr xs)))))))
(define $-mutate!
  (case-lambda
    ((lst x f)
     (let ((ass (assv x lst)))
       (set! (cdr ass) (f (cdr ass)))))
    ((lst x0 x1 . xs)
     (let loop ((lst lst) (xs (cons x0 (cons x1 xs))))
       (if (null? (cddr xs)) ($-mutate! lst (car xs) (cadr xs))
           (loop ($ lst (car xs)) (cdr xs)))))))
(set! (setter $) $-set!)
(set! (mutator $) $-mutate!)

; we have:
; THE WORLD
;  - a structured data of the entire gamestate
; PLAYERS
;  - an agent with a view into the world
; DUNGEONMASTER
;  - an agent which tells the players what they know
;    and updates the world

; the DUNGEONMASTER sends a VIEW of the WORLD to the PLAYER
; the PLAYER sends an ACTION to the DUNGEONMASTER
; the DUNGEONMASTER UPDATES the WORLD
; LOOP

; UPDATE is a method that takes a WORLD and some ACTION and returns a new WORLD


(define (base-player)
  `((hand . ()) (bet . 0) (money . 40)))
(define (copy x)
  (cond ((pair? x) (cons (copy (car x)) (copy (cdr x))))
        (else x)))
(define (base-world)
  `((player . ,(base-player)) (dealer . ,(base-player)) (state . betting) (deck . ,(shuffle (append deck deck)))))

; STATES
;   betting
;   dealing
;   chicken-dinner
;   initial
;   player-turn
;   finish
;   end

(define (player-bet money)
  (printf "You have ~A guilders.~NWhat is your bet? " money)
  (let ((bet (string->number (read-line))))
    (cond ((or (not bet) (not (integer? bet))) (printf "You must enter a whole number.~N") (player-bet money))
          ((<= bet 0) (printf "Your bet must be at least 1 guilder.") (player-bet money))
          ((> bet money) (printf "You go all in.~N") money)
          (else bet))))
(define (player-act state money hand peek)
  (if (eqv? state 'initial) (printf "The dealer is showing a ~A.~N" peek))
  (printf "Your hand is ~A.~NYour move? " hand)
  (let ((action (read-line)))
    (cond ((equal? action "hit") 'hit)
          ((equal? action "stand") 'stand)
          (else (printf "Unknown action~N")
                (player-act state money hand peek)))))

(define (deal! world player n)
  (let ((deck ($ world 'deck)))
    (set! ($ world 'deck) (drop deck n))
    (set! append ($ world player 'hand) (take deck n))))

(define (starting-deal! world)
  (let ((deck ($ world 'deck)))
    (deal! world 'player 2)
    (deal! world 'dealer 1)
    (set! ($ world 'state)
          (if (= (best-score (score ($ world 'player 'hand))) 21)
              'chicken-dinner
              'initial))))

(define (bust? world player)
  (> (fold min 22 (score ($ world player 'hand))) 21))
(define (respond-bet! world player bet)
  (let* ((money ($ world player 'money))
         (bet (min bet money)))
    (set! ($ world player 'bet) bet)
    (set! - ($ world player 'money) bet)
    (set! ($ world 'state) 'dealing)))
(define (respond-player world action)
  (case action
    ((hit)
     (deal! world 'player 1)
     (if (bust? world 'player)
         (set! ($ world 'state) 'finish)))
    ((stand)
     (set! ($ world 'state) 'finish))))
(define (best-score score)
  (fold max 0 (filter (lambda (e) (<= e 21)) score)))
(define (dealer-play! world)
  (cond 
    ((bust? world 'player) (printf "You went bust!~NYou lose.~N") 'lose)
    ((bust? world 'dealer)
     (printf "The dealer's hand is ~A~N" ($ world 'dealer 'hand))
     (printf "The dealer went bust!~NYou win!~N")
     'win)
    ((< (fold max 0 (score ($ world 'dealer 'hand))) 17)
     (printf "The dealer draws a ~A.~N" (car ($ world 'deck)))
     (deal! world 'dealer 1)
     (dealer-play! world))
    (else
      (let ((player-score (best-score (score ($ world 'player 'hand))))
            (dealer-score (best-score (score ($ world 'dealer 'hand)))))
        (printf "The dealer's hand is ~A~N" ($ world 'dealer 'hand))
        (printf "The dealer's score is ~A~N" dealer-score)
        (printf "Your score is ~A~N" player-score)
        (cond ((> player-score dealer-score) (displayln "You win!") 'win)
              ((< player-score dealer-score) (displayln "You lose.") 'lose)
              (else (displayln "Draw!") 'draw))))))
(define (award-winnings! world outcome)
  (let ((bet ($ world 'player 'bet)))
    (set! ($ world 'player 'bet) 0)
    (case outcome
      ((lose)
       (printf "You lost your bet of ~A guilders.~N" bet)
       (set! + ($ world 'dealer 'money) bet))
      ((draw)
       (set! + ($ world 'player 'money) bet))
      ((win)
       (let* ((bank ($ world 'dealer 'money))
              (winnings (min bet bank)))
         (printf "You win ~A guilders.~N" winnings)
         (set! + ($ world 'player 'money) winnings bet)
         (set! - ($ world 'dealer 'money) winnings))))))
(define (award-dinner! world)
  (let* ((bet ($ world 'player 'bet))
         (dinner (max 1 (* 3 (quotient bet 2))))
         (bank ($ world 'dealer 'money))
         (winnings (min dinner bank)))
    (printf "You win ~A guilders.~N" winnings)
    (set! ($ world 'player 'bet) 0)
    (set! + ($ world 'player 'money) winnings bet)
    (set! - ($ world 'dealer 'money) winnings)))
(define (clear-table! world)
  (set! ($ world 'player 'hand) '())
  (set! ($ world 'dealer 'hand) '())
  (if (< (length ($ world 'deck)) 52)
      (begin
        (displayln "The dealer shuffles the deck")
        (set! ($ world 'deck) (shuffle (append deck deck))))))
(define (another-round? world)
  (cond ((<= ($ world 'player 'money) 0)
         (displayln "You are broke!")
         'end)
        ((<= ($ world 'dealer 'money) 0)
         (displayln "You broke the dealer!")
         'end)
        (else
         (printf "Another round (y/n)? ")
         (let ((response (read-line)))
           (cond ((equal? response "y") 'betting)
                 ((equal? response "n") 'end)
                 (else (displayln "Invalid response~N")
                       (another-round? world)))))))
; (set! + (car x) 6)
; --> (((op-updater car) x) + 6)

; (define (update-car x) (lambda (op . args) (set-car! x (apply op (car x) args))))

; ($ obj x) - generalized getter
; if x is an integer, then obj is assumed to be a list-like thing
; eg list, vector, int8 vector, string
; if x is a symbol, then obj is assumed to be a struct-like thing
; eg alist, record, struct
(define (game-loop world)
  (case ($ world 'state)
    ((betting)
     (respond-bet! world 'player (player-bet ($ world 'player 'money))))
    ((dealing)
     (starting-deal! world))
    ((player-turn initial)
     (respond-player
       world
       (player-act ($ world 'state) ($ world 'player 'money) ($ world 'player 'hand) (car ($ world 'dealer 'hand)))))
    ; FIXME: this is incorrect, naturals should be part of standard resolve,
    ; and the dealer gets naturals too
    ((chicken-dinner)
     (printf "Your hand is ~A.~N" ($ world 'player 'hand))
     (displayln "You got blackjack!")
     (award-dinner! world)
     (clear-table! world)
     (set! ($ world 'state) (another-round? world)))
    ((finish)
     (award-winnings! world (dealer-play! world))
     (clear-table! world)
     (set! ($ world 'state) (another-round? world)))
    ((end)
     (printf "You walk away from the table with ~A guilders in your pockets.~N" ($ world 'player 'money))
     (exit)))
  (game-loop world))
(game-loop (base-world))
