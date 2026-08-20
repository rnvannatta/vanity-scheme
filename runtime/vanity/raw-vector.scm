; Copyright 2026 Richard N Van Natta
;
; This file is part of the Vanity Scheme Runtime.
;
; The Vanity Scheme Runtime is free software: you can redistribute it
; and/or modify it under the terms of the GNU Lesser General Public
; License as published by the Free Software Foundation, either version
; 2.1 of the License, or (at your option) any later version.
;
; The Vanity Scheme Runtime is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; Lesser General Public License for more details.
;
; You should have received a copy of the GNU Lesser General Public
; License along with the Vanity Scheme Runtime.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission, the Vanity Scheme
; Runtime Library Exceptions, which should have been included with the
; Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

(define-library (vanity raw-vector)
  (import (vanity core))
  (export
    raw-vector-copy!
    raw-vector-type raw-vector-elem-width raw-vector-length
    raw-vector->u8vector
    ; reinterpret-cast accessors, re-exported from (vanity core)
    u8vector-ref-boolean u8vector-set-boolean!
    u8vector-ref-s8 u8vector-set-s8!
    u8vector-ref-u8 u8vector-set-u8!
    u8vector-ref-s16 u8vector-set-s16!
    u8vector-ref-u16 u8vector-set-u16!
    u8vector-ref-s32 u8vector-set-s32!
    u8vector-ref-f32 u8vector-set-f32!
    u8vector-ref-f64 u8vector-set-f64!
    u8vector-ref-pointer u8vector-set-pointer!
    ; grouped accessors: byte offset in, fresh typevector out (and vice versa)
    u8vector-ref-s8x2 u8vector-ref-s8x3 u8vector-ref-s8x4
    u8vector-set-s8x2! u8vector-set-s8x3! u8vector-set-s8x4!
    u8vector-copy-s8 u8vector-set-s8v!
    u8vector-ref-u8x2 u8vector-ref-u8x3 u8vector-ref-u8x4
    u8vector-set-u8x2! u8vector-set-u8x3! u8vector-set-u8x4!
    u8vector-copy-u8 u8vector-set-u8v!
    u8vector-ref-s16x2 u8vector-ref-s16x3 u8vector-ref-s16x4
    u8vector-set-s16x2! u8vector-set-s16x3! u8vector-set-s16x4!
    u8vector-copy-s16 u8vector-set-s16v!
    u8vector-ref-u16x2 u8vector-ref-u16x3 u8vector-ref-u16x4
    u8vector-set-u16x2! u8vector-set-u16x3! u8vector-set-u16x4!
    u8vector-copy-u16 u8vector-set-u16v!
    u8vector-ref-s32x2 u8vector-ref-s32x3 u8vector-ref-s32x4
    u8vector-set-s32x2! u8vector-set-s32x3! u8vector-set-s32x4!
    u8vector-copy-s32 u8vector-set-s32v!
    u8vector-ref-f32x2 u8vector-ref-f32x3 u8vector-ref-f32x4
    u8vector-set-f32x2! u8vector-set-f32x3! u8vector-set-f32x4!
    u8vector-copy-f32 u8vector-set-f32v!
    u8vector-ref-f64x2 u8vector-ref-f64x3 u8vector-ref-f64x4
    u8vector-set-f64x2! u8vector-set-f64x3! u8vector-set-f64x4!
    u8vector-copy-f64 u8vector-set-f64v!)

  ; `at` is in units of dst's element width, `start` and `end` in units of
  ; src's element width. start defaults to 0, end to the whole of src.
  (define-constant raw-vector-copy! (##intrinsic "VRawVectorCopy" 4 6))

  (define (raw-vector-type v)
    (cond
      ((u8vector? v) 'u8)
      ((s8vector? v) 's8)
      ((s16vector? v) 's16)
      ((u16vector? v) 'u16)
      ((s32vector? v) 's32)
      ((f32vector? v) 'f32)
      ((f64vector? v) 'f64)
      (else (error "raw-vector-type: not a raw vector" v))))
  (define (raw-vector-elem-width v)
    (cond
      ((u8vector? v) 1)
      ((s8vector? v) 1)
      ((s16vector? v) 2)
      ((u16vector? v) 2)
      ((s32vector? v) 4)
      ((f32vector? v) 4)
      ((f64vector? v) 8)
      (else (error "raw-vector-elem-width: not a raw vector" v))))
  (define (raw-vector-length v)
    (cond
      ((u8vector? v) (u8vector-length v))
      ((s8vector? v) (s8vector-length v))
      ((s16vector? v) (s16vector-length v))
      ((u16vector? v) (u16vector-length v))
      ((s32vector? v) (s32vector-length v))
      ((f32vector? v) (f32vector-length v))
      ((f64vector? v) (f64vector-length v))
      (else (error "raw-vector-length: not a raw vector" v))))

  (define (raw-vector->u8vector vec)
    (let ((ret (make-u8vector (* (raw-vector-length vec) (raw-vector-elem-width vec)))))
      (raw-vector-copy! ret 0 vec)
      ret))

  ; s8
  (define (u8vector-ref-s8x2 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s8x2: not a u8vector" vec))
    (let ((ret (make-s8vector 2)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 2))
      ret))
  (define (u8vector-ref-s8x3 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s8x3: not a u8vector" vec))
    (let ((ret (make-s8vector 3)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 3))
      ret))
  (define (u8vector-ref-s8x4 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s8x4: not a u8vector" vec))
    (let ((ret (make-s8vector 4)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 4))
      ret))
  (define (u8vector-set-s8x2! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s8x2!: not a u8vector" vec))
    (unless (s8vector? src) (error "u8vector-set-s8x2!: not a s8vector" src))
    (raw-vector-copy! vec byte-offset src 0 2))
  (define (u8vector-set-s8x3! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s8x3!: not a u8vector" vec))
    (unless (s8vector? src) (error "u8vector-set-s8x3!: not a s8vector" src))
    (raw-vector-copy! vec byte-offset src 0 3))
  (define (u8vector-set-s8x4! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s8x4!: not a u8vector" vec))
    (unless (s8vector? src) (error "u8vector-set-s8x4!: not a s8vector" src))
    (raw-vector-copy! vec byte-offset src 0 4))
  (define u8vector-copy-s8
    (case-lambda
      ((vec) (u8vector-copy-s8 vec 0))
      ((vec byte-offset)
       (u8vector-copy-s8 vec byte-offset (- (u8vector-length vec) byte-offset)))
      ((vec byte-offset n)
       (unless (u8vector? vec) (error "u8vector-copy-s8: not a u8vector" vec))
       (let ((ret (make-s8vector n)))
         (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset n))
         ret))))
  (define u8vector-set-s8v!
    (case-lambda
      ((dst byte-offset src) (u8vector-set-s8v! dst byte-offset src 0))
      ((dst byte-offset src start)
       (unless (u8vector? dst) (error "u8vector-set-s8v!: not a u8vector" dst))
       (unless (s8vector? src) (error "u8vector-set-s8v!: not a s8vector" src))
       (raw-vector-copy! dst byte-offset src start))
      ((dst byte-offset src start end)
       (unless (u8vector? dst) (error "u8vector-set-s8v!: not a u8vector" dst))
       (unless (s8vector? src) (error "u8vector-set-s8v!: not a s8vector" src))
       (raw-vector-copy! dst byte-offset src start end))))

  ; u8
  (define (u8vector-ref-u8x2 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-u8x2: not a u8vector" vec))
    (let ((ret (make-u8vector 2)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 2))
      ret))
  (define (u8vector-ref-u8x3 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-u8x3: not a u8vector" vec))
    (let ((ret (make-u8vector 3)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 3))
      ret))
  (define (u8vector-ref-u8x4 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-u8x4: not a u8vector" vec))
    (let ((ret (make-u8vector 4)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 4))
      ret))
  (define (u8vector-set-u8x2! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-u8x2!: not a u8vector" vec))
    (unless (u8vector? src) (error "u8vector-set-u8x2!: not a u8vector" src))
    (raw-vector-copy! vec byte-offset src 0 2))
  (define (u8vector-set-u8x3! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-u8x3!: not a u8vector" vec))
    (unless (u8vector? src) (error "u8vector-set-u8x3!: not a u8vector" src))
    (raw-vector-copy! vec byte-offset src 0 3))
  (define (u8vector-set-u8x4! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-u8x4!: not a u8vector" vec))
    (unless (u8vector? src) (error "u8vector-set-u8x4!: not a u8vector" src))
    (raw-vector-copy! vec byte-offset src 0 4))
  (define u8vector-copy-u8
    (case-lambda
      ((vec) (u8vector-copy-u8 vec 0))
      ((vec byte-offset)
       (u8vector-copy-u8 vec byte-offset (- (u8vector-length vec) byte-offset)))
      ((vec byte-offset n)
       (unless (u8vector? vec) (error "u8vector-copy-u8: not a u8vector" vec))
       (let ((ret (make-u8vector n)))
         (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset n))
         ret))))
  (define u8vector-set-u8v!
    (case-lambda
      ((dst byte-offset src) (u8vector-set-u8v! dst byte-offset src 0))
      ((dst byte-offset src start)
       (unless (u8vector? dst) (error "u8vector-set-u8v!: not a u8vector" dst))
       (unless (u8vector? src) (error "u8vector-set-u8v!: not a u8vector" src))
       (raw-vector-copy! dst byte-offset src start))
      ((dst byte-offset src start end)
       (unless (u8vector? dst) (error "u8vector-set-u8v!: not a u8vector" dst))
       (unless (u8vector? src) (error "u8vector-set-u8v!: not a u8vector" src))
       (raw-vector-copy! dst byte-offset src start end))))

  ; s16
  (define (u8vector-ref-s16x2 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s16x2: not a u8vector" vec))
    (let ((ret (make-s16vector 2)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 4))
      ret))
  (define (u8vector-ref-s16x3 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s16x3: not a u8vector" vec))
    (let ((ret (make-s16vector 3)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 6))
      ret))
  (define (u8vector-ref-s16x4 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s16x4: not a u8vector" vec))
    (let ((ret (make-s16vector 4)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 8))
      ret))
  (define (u8vector-set-s16x2! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s16x2!: not a u8vector" vec))
    (unless (s16vector? src) (error "u8vector-set-s16x2!: not a s16vector" src))
    (raw-vector-copy! vec byte-offset src 0 2))
  (define (u8vector-set-s16x3! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s16x3!: not a u8vector" vec))
    (unless (s16vector? src) (error "u8vector-set-s16x3!: not a s16vector" src))
    (raw-vector-copy! vec byte-offset src 0 3))
  (define (u8vector-set-s16x4! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s16x4!: not a u8vector" vec))
    (unless (s16vector? src) (error "u8vector-set-s16x4!: not a s16vector" src))
    (raw-vector-copy! vec byte-offset src 0 4))
  (define u8vector-copy-s16
    (case-lambda
      ((vec) (u8vector-copy-s16 vec 0))
      ((vec byte-offset)
       (u8vector-copy-s16 vec byte-offset (quotient (- (u8vector-length vec) byte-offset) 2)))
      ((vec byte-offset n)
       (unless (u8vector? vec) (error "u8vector-copy-s16: not a u8vector" vec))
       (let ((ret (make-s16vector n)))
         (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset (* n 2)))
         ret))))
  (define u8vector-set-s16v!
    (case-lambda
      ((dst byte-offset src) (u8vector-set-s16v! dst byte-offset src 0))
      ((dst byte-offset src start)
       (unless (u8vector? dst) (error "u8vector-set-s16v!: not a u8vector" dst))
       (unless (s16vector? src) (error "u8vector-set-s16v!: not a s16vector" src))
       (raw-vector-copy! dst byte-offset src start))
      ((dst byte-offset src start end)
       (unless (u8vector? dst) (error "u8vector-set-s16v!: not a u8vector" dst))
       (unless (s16vector? src) (error "u8vector-set-s16v!: not a s16vector" src))
       (raw-vector-copy! dst byte-offset src start end))))

  ; u16
  (define (u8vector-ref-u16x2 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-u16x2: not a u8vector" vec))
    (let ((ret (make-u16vector 2)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 4))
      ret))
  (define (u8vector-ref-u16x3 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-u16x3: not a u8vector" vec))
    (let ((ret (make-u16vector 3)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 6))
      ret))
  (define (u8vector-ref-u16x4 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-u16x4: not a u8vector" vec))
    (let ((ret (make-u16vector 4)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 8))
      ret))
  (define (u8vector-set-u16x2! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-u16x2!: not a u8vector" vec))
    (unless (u16vector? src) (error "u8vector-set-u16x2!: not a u16vector" src))
    (raw-vector-copy! vec byte-offset src 0 2))
  (define (u8vector-set-u16x3! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-u16x3!: not a u8vector" vec))
    (unless (u16vector? src) (error "u8vector-set-u16x3!: not a u16vector" src))
    (raw-vector-copy! vec byte-offset src 0 3))
  (define (u8vector-set-u16x4! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-u16x4!: not a u8vector" vec))
    (unless (u16vector? src) (error "u8vector-set-u16x4!: not a u16vector" src))
    (raw-vector-copy! vec byte-offset src 0 4))
  (define u8vector-copy-u16
    (case-lambda
      ((vec) (u8vector-copy-u16 vec 0))
      ((vec byte-offset)
       (u8vector-copy-u16 vec byte-offset (quotient (- (u8vector-length vec) byte-offset) 2)))
      ((vec byte-offset n)
       (unless (u8vector? vec) (error "u8vector-copy-u16: not a u8vector" vec))
       (let ((ret (make-u16vector n)))
         (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset (* n 2)))
         ret))))
  (define u8vector-set-u16v!
    (case-lambda
      ((dst byte-offset src) (u8vector-set-u16v! dst byte-offset src 0))
      ((dst byte-offset src start)
       (unless (u8vector? dst) (error "u8vector-set-u16v!: not a u8vector" dst))
       (unless (u16vector? src) (error "u8vector-set-u16v!: not a u16vector" src))
       (raw-vector-copy! dst byte-offset src start))
      ((dst byte-offset src start end)
       (unless (u8vector? dst) (error "u8vector-set-u16v!: not a u8vector" dst))
       (unless (u16vector? src) (error "u8vector-set-u16v!: not a u16vector" src))
       (raw-vector-copy! dst byte-offset src start end))))

  ; s32
  (define (u8vector-ref-s32x2 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s32x2: not a u8vector" vec))
    (let ((ret (make-s32vector 2)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 8))
      ret))
  (define (u8vector-ref-s32x3 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s32x3: not a u8vector" vec))
    (let ((ret (make-s32vector 3)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 12))
      ret))
  (define (u8vector-ref-s32x4 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-s32x4: not a u8vector" vec))
    (let ((ret (make-s32vector 4)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 16))
      ret))
  (define (u8vector-set-s32x2! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s32x2!: not a u8vector" vec))
    (unless (s32vector? src) (error "u8vector-set-s32x2!: not a s32vector" src))
    (raw-vector-copy! vec byte-offset src 0 2))
  (define (u8vector-set-s32x3! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s32x3!: not a u8vector" vec))
    (unless (s32vector? src) (error "u8vector-set-s32x3!: not a s32vector" src))
    (raw-vector-copy! vec byte-offset src 0 3))
  (define (u8vector-set-s32x4! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-s32x4!: not a u8vector" vec))
    (unless (s32vector? src) (error "u8vector-set-s32x4!: not a s32vector" src))
    (raw-vector-copy! vec byte-offset src 0 4))
  (define u8vector-copy-s32
    (case-lambda
      ((vec) (u8vector-copy-s32 vec 0))
      ((vec byte-offset)
       (u8vector-copy-s32 vec byte-offset (quotient (- (u8vector-length vec) byte-offset) 4)))
      ((vec byte-offset n)
       (unless (u8vector? vec) (error "u8vector-copy-s32: not a u8vector" vec))
       (let ((ret (make-s32vector n)))
         (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset (* n 4)))
         ret))))
  (define u8vector-set-s32v!
    (case-lambda
      ((dst byte-offset src) (u8vector-set-s32v! dst byte-offset src 0))
      ((dst byte-offset src start)
       (unless (u8vector? dst) (error "u8vector-set-s32v!: not a u8vector" dst))
       (unless (s32vector? src) (error "u8vector-set-s32v!: not a s32vector" src))
       (raw-vector-copy! dst byte-offset src start))
      ((dst byte-offset src start end)
       (unless (u8vector? dst) (error "u8vector-set-s32v!: not a u8vector" dst))
       (unless (s32vector? src) (error "u8vector-set-s32v!: not a s32vector" src))
       (raw-vector-copy! dst byte-offset src start end))))

  ; f32
  (define (u8vector-ref-f32x2 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-f32x2: not a u8vector" vec))
    (let ((ret (make-f32vector 2)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 8))
      ret))
  (define (u8vector-ref-f32x3 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-f32x3: not a u8vector" vec))
    (let ((ret (make-f32vector 3)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 12))
      ret))
  (define (u8vector-ref-f32x4 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-f32x4: not a u8vector" vec))
    (let ((ret (make-f32vector 4)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 16))
      ret))
  (define (u8vector-set-f32x2! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-f32x2!: not a u8vector" vec))
    (unless (f32vector? src) (error "u8vector-set-f32x2!: not a f32vector" src))
    (raw-vector-copy! vec byte-offset src 0 2))
  (define (u8vector-set-f32x3! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-f32x3!: not a u8vector" vec))
    (unless (f32vector? src) (error "u8vector-set-f32x3!: not a f32vector" src))
    (raw-vector-copy! vec byte-offset src 0 3))
  (define (u8vector-set-f32x4! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-f32x4!: not a u8vector" vec))
    (unless (f32vector? src) (error "u8vector-set-f32x4!: not a f32vector" src))
    (raw-vector-copy! vec byte-offset src 0 4))
  (define u8vector-copy-f32
    (case-lambda
      ((vec) (u8vector-copy-f32 vec 0))
      ((vec byte-offset)
       (u8vector-copy-f32 vec byte-offset (quotient (- (u8vector-length vec) byte-offset) 4)))
      ((vec byte-offset n)
       (unless (u8vector? vec) (error "u8vector-copy-f32: not a u8vector" vec))
       (let ((ret (make-f32vector n)))
         (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset (* n 4)))
         ret))))
  (define u8vector-set-f32v!
    (case-lambda
      ((dst byte-offset src) (u8vector-set-f32v! dst byte-offset src 0))
      ((dst byte-offset src start)
       (unless (u8vector? dst) (error "u8vector-set-f32v!: not a u8vector" dst))
       (unless (f32vector? src) (error "u8vector-set-f32v!: not a f32vector" src))
       (raw-vector-copy! dst byte-offset src start))
      ((dst byte-offset src start end)
       (unless (u8vector? dst) (error "u8vector-set-f32v!: not a u8vector" dst))
       (unless (f32vector? src) (error "u8vector-set-f32v!: not a f32vector" src))
       (raw-vector-copy! dst byte-offset src start end))))

  ; f64
  (define (u8vector-ref-f64x2 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-f64x2: not a u8vector" vec))
    (let ((ret (make-f64vector 2)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 16))
      ret))
  (define (u8vector-ref-f64x3 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-f64x3: not a u8vector" vec))
    (let ((ret (make-f64vector 3)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 24))
      ret))
  (define (u8vector-ref-f64x4 vec byte-offset)
    (unless (u8vector? vec) (error "u8vector-ref-f64x4: not a u8vector" vec))
    (let ((ret (make-f64vector 4)))
      (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset 32))
      ret))
  (define (u8vector-set-f64x2! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-f64x2!: not a u8vector" vec))
    (unless (f64vector? src) (error "u8vector-set-f64x2!: not a f64vector" src))
    (raw-vector-copy! vec byte-offset src 0 2))
  (define (u8vector-set-f64x3! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-f64x3!: not a u8vector" vec))
    (unless (f64vector? src) (error "u8vector-set-f64x3!: not a f64vector" src))
    (raw-vector-copy! vec byte-offset src 0 3))
  (define (u8vector-set-f64x4! vec byte-offset src)
    (unless (u8vector? vec) (error "u8vector-set-f64x4!: not a u8vector" vec))
    (unless (f64vector? src) (error "u8vector-set-f64x4!: not a f64vector" src))
    (raw-vector-copy! vec byte-offset src 0 4))
  (define u8vector-copy-f64
    (case-lambda
      ((vec) (u8vector-copy-f64 vec 0))
      ((vec byte-offset)
       (u8vector-copy-f64 vec byte-offset (quotient (- (u8vector-length vec) byte-offset) 8)))
      ((vec byte-offset n)
       (unless (u8vector? vec) (error "u8vector-copy-f64: not a u8vector" vec))
       (let ((ret (make-f64vector n)))
         (raw-vector-copy! ret 0 vec byte-offset (+ byte-offset (* n 8)))
         ret))))
  (define u8vector-set-f64v!
    (case-lambda
      ((dst byte-offset src) (u8vector-set-f64v! dst byte-offset src 0))
      ((dst byte-offset src start)
       (unless (u8vector? dst) (error "u8vector-set-f64v!: not a u8vector" dst))
       (unless (f64vector? src) (error "u8vector-set-f64v!: not a f64vector" src))
       (raw-vector-copy! dst byte-offset src start))
      ((dst byte-offset src start end)
       (unless (u8vector? dst) (error "u8vector-set-f64v!: not a u8vector" dst))
       (unless (f64vector? src) (error "u8vector-set-f64v!: not a f64vector" src))
       (raw-vector-copy! dst byte-offset src start end)))))
