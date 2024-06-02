; The purpose of this demo is to demonstrate the usage of
; Vanity Scheme's FFI
(import (vanity core))
; A single line to directly use C! The header file is normal as well
; Vanity Scheme generates bindings from the header file
(##foreign.import "C" "ponglib.h")

;;; Utils
(define (abs x)
  (if (< x 0) (- x) x))
(define (clamp x x0 x1)
  (cond ((< x x0) x0)
        ((> x x1) x1)
        (else x)))
(define (saturate x) (clamp x 0.0 1.0))
(define (clamp-paddle y)
  (cond ((> (+ y (/ paddle-h 2)) 1.0) (- 1.0 (/ paddle-h 2)))
        ((< (- y (/ paddle-h 2)) 0.0) (/ paddle-h 2))
        (else y)))
(define (sign x)
  (cond ((< x 0) -1)
        ((> x 0) +1)
        (else 0)))

(define $ vector-ref)
(define vector-map
  (case-lambda
    ((f v) (vector (f ($ v 0)) (f ($ v 1))))
    ((f v w) (vector (f ($ v 0) ($ w 0)) (f ($ v 1) ($ w 1))))
    ((f v w x) (vector (f ($ v 0) ($ w 0) ($ x 0)) (f ($ v 1) ($ w 1) ($ x 1))))))
(define (make-vector-binop op)
  (lambda (a b)
    (cond ((number? a) (vector-map (lambda (x) (op x a)) b))
          ((number? b) (vector-map (lambda (x) (op x b)) a))
          (else (vector-map op a b)))))
(define vector/ (make-vector-binop /))
(define vector* (make-vector-binop *))
(define vector+ (make-vector-binop +))
(define vector- (make-vector-binop -))

;;; Meat and Potatoes
(define paddle-x 0.15)
(define paddle-w 0.03)
(define paddle-h 0.25)
(define ball-w 0.03)
(define ball-h 0.04)

(define initial-ball (vector 0.5 0.5))
(define initial-vel (vector 0.375 0.5))

; scheme side simulation stuff
(define (new-ball-vel ball-vel nbounces)
  (let ((sp33d (+ 1.0 (* 9.0 (/ nbounces (+ 20 nbounces))))))
    (vector*
      (vector*
        initial-vel
        (vector-map sign ball-vel))
      (vector*
        (vector -1 +1)
        (vector sp33d sp33d)))))
(define (paddle-bounce? paddle-y ball)
  (and (< (- paddle-x (/ paddle-w 2)) ($ ball 0) (+ paddle-x (/ paddle-w 2)))
       (< (- paddle-y (/ paddle-h 2)) ($ ball 1) (+ paddle-y (/ paddle-h 2)))))
(define (bounce-ball ball ball-vel)
  (define (bounce p v)
    (if (or (> p 1.0) (< p 0.0)) (- v) v))
  (vector-map bounce ball ball-vel))
(define (move-ball-impl paddle-y ball ball-delta ball-vel nbounces)
  (let* ((ball (vector+ ball ball-delta))
         (ball-vel (bounce-ball ball ball-vel))
         (paddle-bounced? (paddle-bounce? paddle-y ball))
         (nbounces (if paddle-bounced? (+ nbounces 1) nbounces))
         (ball-vel (if paddle-bounced? (new-ball-vel ball-vel nbounces) ball-vel))
         (ball (if paddle-bounced?
                   (vector (+ (/ paddle-w 2) (/ ball-w 2) paddle-x) ($ ball 1))
                   ball))
         (die? (< ($ ball 0) 0.0))
         (ball (if die? initial-ball (vector-map saturate ball)))
         (ball-vel (if die? initial-vel ball-vel))
         (ball-vel (vector-map clamp ball-vel (vector -5.0 -5.0) (vector 5.0 5.0))))
    (values die? ball ball-vel nbounces)))
(define (move-ball time paddle-y ball ball-vel nbounces)
  (let* ((extremespeed (> (* time (abs ($ ball-vel 0))) (/ paddle-w 2)))
         (timestep (if extremespeed (/ (/ paddle-w 2) (abs ($ ball-vel 0))) time))
         (ball-delta (vector* timestep ball-vel)))
    (call-with-values
      (lambda () (move-ball-impl paddle-y ball ball-delta ball-vel nbounces))
      (lambda (die? ball ball-vel nbounces)
        (if (and (not die?) extremespeed)
            (move-ball (max (- time timestep) 0.0000001) paddle-y ball ball-vel nbounces)
            (values die? ball ball-vel nbounces))))))

; Ah, creating some C objects. These are void pointers
; because Vanity doesn't support typed pointers yet.
; This is calling our RHI around SDL2_Renderer, written in C
(define win (make_window 800 600 "Pong Endurance Mode"))
; Quick demonstration of finalizers with some text for demonstration purposes
(##vcore.set-finalizer! win (lambda (win) (close_window win) (displayln "Thank you for playing!")))

; The best thing to do is to wrap the create and close with a bit of glue
; to prevent leaks and accident double frees
; you should never expose the raw creation and finalization methods
; Here's a little util function to do it, not sure about putting it in base library
(define (wrap-finalizer creator finalizer)
  (lambda args
    (let ((ret (apply creator args)))
      (##vcore.set-finalizer! ret finalizer)
      ret)))
(define make_frametimer
  (wrap-finalizer
    make_frametimer_impl
    (lambda (e) (displayln "closing timer") (close_frametimer_impl e))))
(define close_frametimer ##vcore.finalize!)
(define frametimer (make_frametimer))

; Eventually the boilerplate will be eliminated by adding annotations
; that function X is the finalizer of the return value from function Y
; and the interface generator will generate good double-free proof wrappers

; And using the C objects
(define (draw-paddle x y)
  (set_draw_color win 1 1 1 1)
  (draw_rect win (- x (/ paddle-w 2)) (- y (/ paddle-h 2)) paddle-w paddle-h))
(define (draw-ball x y)
  (set_draw_color win 1 1 1 1)
  (draw_rect win (- x (/ ball-w 2)) (- y (/ ball-h 2)) ball-w ball-h))
(let loop ((ball initial-ball) (ball-vel initial-vel) (nbounces 0))
  (clear_window win)
  (poll_events win)
  (set_draw_color win 1 1 1 1)
  (let ((paddle-y (clamp-paddle (get_mouse_y win)))
        (time (frametimer_lap frametimer)))
    ; a simple framelimiter to avoid melting graphics cards if vsync doesn't work
    ; you need more complicated code than this for accurate framelimiting
    ; because floatsleep will overshoot
    ;
    ; every app should have a framelimiter to avoid roasting $2000 gpus
    ; like Jeff Bezos' Amazon New World
    (if (< time (/ 480))
        (begin
          (floatsleep (- (/ 480) time))
          (set! time (/ 480))))

    (call-with-values
      (lambda () (move-ball time paddle-y ball ball-vel nbounces))
      (lambda (die? ball ball-vel nbounces)
        (draw-paddle paddle-x paddle-y)
        (draw-ball ($ ball 0) ($ ball 1))
        ; don't have to call this, nice to call at eof for consistency though
        (##vcore.garbage-collect #t)
        (present_window win)
        (if (and (not die?) (not (get_exit_request win)))
            (loop ball ball-vel nbounces)
            (printf "You lasted ~A bounces before dying\n" nbounces))))))

(##vcore.finalize! frametimer)
; It's better performancewise to close your finalizers
; but whoops, we forgot to close the window
; luckily finalizers got our back
;(##vcore.finalize! win)
