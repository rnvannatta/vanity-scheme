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
(define $-update
  (case-lambda
    ((lst x v) (assv-update lst x v))
    ((lst x . ys)
     (let ((sublst ($ lst x)))
       (assv-update lst x (apply $-update (cons sublst ys)))))))

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


(define base-player
  '((hand . ()) (bet . 0) (money . 40)))
(define (base-world)
  `((player . ,base-player) (dealer . ,base-player) (state . betting) (deck . ,(shuffle deck)) (discard . ())))

; STATES
;   betting
;   dealing
;   initial
;   player-turn
;   finish
;   broke

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

(define (deal world player n)
  (let ((deck ($ world 'deck)))
    ($-update
      ($-update world 'deck (drop deck n))
      player 'hand (append (take deck n) ($ world player 'hand)))))

(define (starting-deal world)
  (let ((deck ($ world 'deck)))
    ($-update
      (deal
        (deal world 'player 2)
        'dealer 1)
      'state 'initial)))

(define (bust? world player)
  (> (fold min 22 (score ($ world player 'hand))) 21))
(define (respond-bet world player bet)
  (let* ((money ($ world player 'money))
         (bet (min bet money)))
    ($-update 
      ($-update
        ($-update world player 'bet bet)
        player 'money (- money bet))
      'state 'dealing)))
(define (respond-player world action)
  (case action
    ((hit)
     (let ((world (deal world 'player 1)))
       (if (bust? world 'player)
           ($-update world 'state 'finish)
           world)))
    ((stand)
     ($-update world 'state 'finish))))
(define (best-score score)
  (fold max 0 (filter (lambda (e) (<= e 21)) score)))
(define (dealer-play world)
  (displayln "Your hand is ~A~N" ($ world 'player 'hand))
  (cond 
    ((bust? world 'player) (printf "You went bust!~NYou lose.~N") 'lose)
    ((bust? world 'dealer)
     (printf "The dealer's hand is ~A~N" ($ world 'dealer 'hand))
     (printf "The dealer went bust!~NYou win!~N")
     'win)
    ((< (fold max 0 (score ($ world 'dealer 'hand))) 17)
     (dealer-play (deal world 'dealer 1)))
    (else
      (let ((player-score (best-score (score ($ world 'player 'hand))))
            (dealer-score (best-score (score ($ world 'dealer 'hand)))))
      (printf "The dealer's hand is ~A~N" ($ world 'dealer 'hand))
      (printf "The dealer's score is ~A~N" dealer-score)
      (printf "Your score is ~A~N" player-score)
      (cond ((> player-score dealer-score) (displayln "You win!") 'win)
            ((< player-score dealer-score) (displayln "You lose.") 'lose)
            (else (displayln "Draw!") 'draw))))))
(define (award-winnings world outcome)
  (let ((bet ($ world 'player 'bet))
        (world ($-update world 'player 'bet 0)))
    (case outcome
      ((lose)
       (displayln "You lost your bet of ~A guilders." bet)
       ($-update world 'dealer 'money (+ ($ world 'dealer 'money) bet)))
      ((draw) ($-update world 'player 'money (+ ($ world 'player 'money) bet)))
      ((win)
       (let* ((bank ($ world 'dealer 'money))
              (winnings (min bet bank)))
         ($-update
           ($-update world 'player 'money (+ winnings bet ($ world 'player 'money)))
           'dealer 'money (- bank winnings)))))))
#;(define (award-winnings world outcome)
  (let ((bet ($ world 'player 'bet)))
    (set! ($ world 'player 'bet) 0)
    (case outcome
      ((lose)
       (displayln "You lost your bet of ~A guilders." bet)
       (set! + ($ world 'dealer 'money) bet))
      ((draw)
       (set! + ($ world 'player 'money) bet))
      ((win)
       (let* ((bank ($ world 'dealer 'money))
              (winnings (min bet bank)))
         (set! + ($ world 'player 'money) winnings bet)
         (set! - ($ world 'dealer 'money) winnings))))))
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
    ((betting) (game-loop (respond-bet world 'player (player-bet ($ world 'player 'money)))))
    ((dealing)
     (game-loop (starting-deal world)))
    ((player-turn initial)
       (game-loop
         (respond-player
           world
           (player-act ($ world 'state) ($ world 'player 'money) ($ world 'player 'hand) (car ($ world 'dealer 'hand))))))
    ((broke) (printf "You won so hard you broke the bank!~N"))
    ((finish) (award-winnings world (dealer-play world)))))
(game-loop (base-world))
