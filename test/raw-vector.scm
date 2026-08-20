(import (vanity core) (vanity raw-vector))

(define failures 0)
(define (check name got want)
  (if (equal? got want)
      #t
      (begin
        (set! failures (+ failures 1))
        (printf "FAIL ~A: got ~S want ~S\n" name got want))))

(define (check-error name thunk)
  (call-with-current-continuation
    (lambda (k)
      (with-exception-handler
        (lambda (e) (k #t))
        (lambda ()
          (thunk)
          (set! failures (+ failures 1))
          (printf "FAIL ~A: expected an error, none raised\n" name)
          #f)))))

;; raw-vector-copy! same-width copy with explicit region
(define bytes8 (list->u8vector '(0 1 2 3 4 5 6 7)))
(let ((dst (make-u8vector 8 0)))
  (raw-vector-copy! dst 2 bytes8 1 5)
  (check "u8->u8 region" (u8vector->list dst) '(0 0 1 2 3 4 0 0)))

;; overlapping copy within one vector: memmove semantics
(let ((v (list->u8vector '(0 1 2 3 4 5 6 7))))
  (raw-vector-copy! v 2 v 0 6)
  (check "overlap forward" (u8vector->list v) '(0 1 0 1 2 3 4 5)))

;; mixed-width: f32vector -> u8vector with default start/end (regression for
;; the default-end divisor: src units, not dst units)
(define f32s (f32vector 1.5 2.5 3.5))
(define f32bytes (make-u8vector 12 0))
(raw-vector-copy! f32bytes 0 f32s)
(check "f32->u8 default end" (u8vector-ref-f32 f32bytes 4) 2.5)

;; and back: u8vector -> f32vector with default start/end
(let ((back (make-f32vector 3)))
  (raw-vector-copy! back 0 f32bytes)
  (check "u8->f32 default end" back f32s))

;; u8vector -> f32vector, explicit byte region
(let ((one (make-f32vector 1)))
  (raw-vector-copy! one 0 f32bytes 8 12)
  (check "u8->f32 region" one (f32vector 3.5)))

;; f64 <-> f32 width change is byte-count driven off the source
(let ((f64s (f64vector 1.0 2.0))
      (dst (make-u8vector 16 0)))
  (raw-vector-copy! dst 0 f64s)
  (check "f64->u8 default end" (u8vector-ref-f64 dst 8) 2.0))

;; grouped refs / sets
(define buf (make-u8vector 64 0))
(u8vector-set-f32x3! buf 4 (f32vector 1.5 2.5 3.5))
(check "f32x3 roundtrip" (u8vector-ref-f32x3 buf 4) (f32vector 1.5 2.5 3.5))
(check "f32x3 scalar view" (u8vector-ref-f32 buf 8) 2.5)
(check "f32x2 prefix" (u8vector-ref-f32x2 buf 4) (f32vector 1.5 2.5))

(u8vector-set-u8x4! buf 20 (u8vector 10 20 30 40))
(check "u8x4 roundtrip" (u8vector-ref-u8x4 buf 20) (u8vector 10 20 30 40))

(u8vector-set-s16x2! buf 25 (s16vector -30000 12345))
(check "s16x2 roundtrip" (u8vector-ref-s16x2 buf 25) (s16vector -30000 12345))

(u8vector-set-f64x2! buf 32 (f64vector 3.141592653589793 -1.0))
(check "f64x2 roundtrip" (u8vector-ref-f64x2 buf 32) (f64vector 3.141592653589793 -1.0))

(u8vector-set-s32x4! buf 48 (s32vector 1 -2 3 -4))
(check "s32x4 roundtrip" (u8vector-ref-s32x4 buf 48) (s32vector 1 -2 3 -4))

;; bulk extraction: u8vector-copy-X with 1, 2, and 3 args
(let ((v12 (make-u8vector 12 0)))
  (u8vector-set-f32x3! v12 0 (f32vector 4.5 5.5 6.5))
  (check "copy-f32 whole" (u8vector-copy-f32 v12) (f32vector 4.5 5.5 6.5))
  (check "copy-f32 offset" (u8vector-copy-f32 v12 4) (f32vector 5.5 6.5))
  (check "copy-f32 offset+n" (u8vector-copy-f32 v12 4 1) (f32vector 5.5)))
(check "copy-u8" (u8vector-copy-u8 bytes8 3 2) (u8vector 3 4))
(let ((v (make-u8vector 4 0)))
  (u8vector-set-s16! v 0 -1)
  (u8vector-set-s16! v 2 300)
  (check "copy-s16 whole" (u8vector-copy-s16 v) (s16vector -1 300)))

;; bulk write: u8vector-set-Xv! with and without start/end
(let ((dst (make-u8vector 16 0)))
  (u8vector-set-f32v! dst 0 (f32vector 1.5 2.5 3.5 4.5))
  (check "set-f32v! whole" (u8vector-copy-f32 dst) (f32vector 1.5 2.5 3.5 4.5))
  (u8vector-set-f32v! dst 0 (f32vector 9.5 8.5) 1)
  (check "set-f32v! start" (u8vector-ref-f32 dst 0) 8.5)
  (u8vector-set-f32v! dst 12 (f32vector 7.5 6.5 5.5) 1 2)
  (check "set-f32v! start+end" (u8vector-ref-f32 dst 12) 6.5))

;; raw-vector->u8vector serializes any typevector's payload
(check "raw->u8 of f32" (raw-vector->u8vector f32s) f32bytes)
(check "raw->u8 of u8" (raw-vector->u8vector bytes8) bytes8)
(let ((s16s (s16vector 1 2)))
  (check "raw->u8 length" (u8vector-length (raw-vector->u8vector s16s)) 4))

;; type queries
(check "type u8" (raw-vector-type bytes8) 'u8)
(check "type f32" (raw-vector-type f32s) 'f32)
(check "type s16" (raw-vector-type (s16vector 1)) 's16)
(check "width f32" (raw-vector-elem-width f32s) 4)
(check "width f64" (raw-vector-elem-width (f64vector 1.0)) 8)
(check "length f32" (raw-vector-length f32s) 3)
(check "length u8" (raw-vector-length bytes8) 8)

;; errors
(check-error "copy out of bounds" (lambda () (raw-vector-copy! (make-u8vector 4 0) 0 f32s)))
(check-error "copy negative at" (lambda () (raw-vector-copy! buf -1 bytes8)))
(check-error "copy end before start" (lambda () (raw-vector-copy! buf 0 bytes8 4 2)))
(check-error "copy non-buffer dst" (lambda () (raw-vector-copy! (vector 1 2) 0 bytes8)))
(check-error "copy non-buffer src" (lambda () (raw-vector-copy! buf 0 (vector 1 2))))
(check-error "grouped ref past end" (lambda () (u8vector-ref-f32x4 buf 52)))
(check-error "grouped ref non-u8vector" (lambda () (u8vector-ref-f32x2 f32s 0)))
(check-error "grouped set wrong src type" (lambda () (u8vector-set-f32x2! buf 0 (s32vector 1 2))))
(check-error "grouped set short src" (lambda () (u8vector-set-f32x3! buf 0 (f32vector 1.5 2.5))))
(check-error "setv wrong src type" (lambda () (u8vector-set-f32v! buf 0 (u8vector 1 2))))
(check-error "setv non-u8vector dst" (lambda () (u8vector-set-f32v! (f64vector 1.0) 0 f32s)))
(check-error "type of non-vector" (lambda () (raw-vector-type (vector 1 2))))
(check-error "length of non-vector" (lambda () (raw-vector-length "hello")))

(if (= failures 0)
    (exit 0)
    (begin (printf "~A FAILURE(S)\n" failures) (exit 1)))
