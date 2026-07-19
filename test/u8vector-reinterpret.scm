(import (vanity core))

(define failures 0)
(define (check name got want)
  (if (equal? got want)
      #t
      (begin
        (set! failures (+ failures 1))
        (printf "FAIL ~A: got ~S want ~S\n" name got want))))

(define (check-error name thunk)
  ; the intrinsics raise via VErrorC; catch with with-exception-handler + call/cc
  (call-with-current-continuation
    (lambda (k)
      (with-exception-handler
        (lambda (e) (k #t))
        (lambda ()
          (thunk)
          (set! failures (+ failures 1))
          (printf "FAIL ~A: expected an error, none raised\n" name)
          #f)))))

;; round-trip each type at an unaligned offset
(define buf (make-u8vector 64 0))

;; s8 / u8
(u8vector-set-s8! buf 3 -128)
(check "s8 min" (u8vector-ref-s8 buf 3) -128)
(u8vector-set-u8! buf 3 200)
(check "u8" (u8vector-ref-u8 buf 3) 200)
(check "u8 as s8" (u8vector-ref-s8 buf 3) -56) ; 200 -> signed

;; s16 / u16 (unaligned offset 5)
(u8vector-set-s16! buf 5 -30000)
(check "s16" (u8vector-ref-s16 buf 5) -30000)
(u8vector-set-u16! buf 5 60000)
(check "u16" (u8vector-ref-u16 buf 5) 60000)

;; s32 (unaligned offset 7)
(u8vector-set-s32! buf 7 -1234567)
(check "s32" (u8vector-ref-s32 buf 7) -1234567)
(u8vector-set-s32! buf 7 2147483647)
(check "s32 max" (u8vector-ref-s32 buf 7) 2147483647)

;; f32 (tolerant), f64 (exact) at unaligned offsets
(u8vector-set-f32! buf 11 1.5)
(check "f32" (u8vector-ref-f32 buf 11) 1.5)
(u8vector-set-f64! buf 13 3.141592653589793)
(check "f64" (u8vector-ref-f64 buf 13) 3.141592653589793)

;; f32 write from an integer value
(u8vector-set-f32! buf 20 7)
(check "f32 from int" (u8vector-ref-f32 buf 20) 7.0)

;; boolean: 1 byte, nonzero -> #t
(u8vector-set-boolean! buf 30 #t)
(check "bool #t" (u8vector-ref-boolean buf 30) #t)
(check "bool #t byte" (u8vector-ref-u8 buf 30) 1)
(u8vector-set-boolean! buf 30 #f)
(check "bool #f" (u8vector-ref-boolean buf 30) #f)
(check "bool #f byte" (u8vector-ref-u8 buf 30) 0)
(u8vector-set-u8! buf 30 42)         ; raw nonzero byte
(check "bool nonzero raw" (u8vector-ref-boolean buf 30) #t)

;; endianness sanity: write s32 then read the 4 constituent bytes
(u8vector-set-s32! buf 40 #x01020304)
(let ((b0 (u8vector-ref buf 40))
      (b1 (u8vector-ref buf 41))
      (b2 (u8vector-ref buf 42))
      (b3 (u8vector-ref buf 43)))
  #;(printf "s32 #x01020304 stored as bytes: ~A ~A ~A ~A (little-endian => 4 3 2 1)\n" b0 b1 b2 b3)
  ; on a little-endian host we expect 4 3 2 1
  (check "endianness LE" (list b0 b1 b2 b3) '(4 3 2 1)))

;; foreign pointer: sizeof(void*) raw bytes, round-tripped as a foreign pointer
(u8vector-set-pointer! buf 24 #nullptr)
(check "pointer foreign?" (foreign-pointer? (u8vector-ref-pointer buf 24)) #t)
(check "pointer nullptr?" (nullptr? (u8vector-ref-pointer buf 24)) #t)
(check-error "pointer set non-pointer" (lambda () (u8vector-set-pointer! buf 24 42)))
(check-error "pointer past end" (lambda () (u8vector-ref-pointer buf 60))) ; needs sizeof(void*) bytes

;; bytevector-* aliases see the same storage
(u8vector-set-s32! buf 44 987654)
(check "alias ref" (bytevector-ref-s32 buf 44) 987654)
(bytevector-set-s32! buf 48 -42)
(check "alias set" (u8vector-ref-s32 buf 48) -42)

;; bounds checking
(check-error "s32 past end" (lambda () (u8vector-ref-s32 buf 62)))     ; needs 62..65, len 64
(check-error "s32 last valid+1" (lambda () (u8vector-ref-s32 buf 61))) ; needs 61..64, len 64 -> out
(check "s32 last valid" (begin (u8vector-set-s32! buf 60 5) (u8vector-ref-s32 buf 60)) 5) ; 60..63 ok
(check-error "negative index" (lambda () (u8vector-ref-s32 buf -1)))
(check-error "set past end" (lambda () (u8vector-set-s32! buf 62 0)))
(check-error "too-short vector" (lambda () (u8vector-ref-s32 (make-u8vector 2 0) 0)))
(check-error "f64 past end" (lambda () (u8vector-ref-f64 buf 60))) ; needs 60..67, len 64 -> out

;; type/range checks propagate from the reused helpers
(check-error "u8 out of range" (lambda () (u8vector-set-u8! buf 0 256)))
(check-error "s8 out of range" (lambda () (u8vector-set-s8! buf 0 200)))
(check-error "set non-int"     (lambda () (u8vector-set-s32! buf 0 "x")))
(check-error "not a u8vector"  (lambda () (u8vector-ref-s32 (vector 1 2 3) 0)))

(if (= failures 0)
    (exit 0)
    #;(printf "ALL PASS\n")
    (begin (printf "~A FAILURE(S)\n" failures) (exit 1)))
