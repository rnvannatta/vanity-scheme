; Copyright 2023-2024 Richard N Van Natta
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

(define-library (vanity hash)
  (export
    make-random
    random-copy
    random-sample!
    random-sample-float!
    random-advance!)
  ; I thought about an object interface for this, but decided against it:
  ; the object interface would have been (let ((rng (make-random))) (+ 1 (rng 6)))
  (define make-random ##vcore.make-random)
  (define random-copy ##vcore.random-copy)
  (define random-sample!
    (case-lambda
      ((rng) (##vcore.random-sample! rng))
      ((rng end) (##vcore.random-sample-bounded! rng end))))
  (define random-sample-float! ##vcore.random-sample-float!)
  (define random-advance! ##vcore.random-advance!))
