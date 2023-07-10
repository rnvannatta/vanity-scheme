; Copyright 2023 Richard N Van Natta
;
; This file is part of the Vanity Scheme Compiler.
;
; The Vanity Scheme Compiler is free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 3 of the
; License, or (at your option) any later version.
; 
; The Vanity Scheme Compiler is distributed in the hope that it will be
; useful, but WITHOUT ANY WARRANTY; without even the implied warranty
; of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
; General Public License for more details.
;
; You should have received a copy of the GNU General Public
; License along with the Vanity Scheme Compiler.
;
; If not, see <https://www.gnu.org/licenses/>.
;
; This work is published with additional permission under GNU GPL
; Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
; should have been included with the Vanity Scheme Compiler.
;
; If not, visit <https://github.com/rnvannatta>

; Tests basic library usage, and stress tests the garbage collector
(define-library (acker)
  (export ack)
  (define (ack m n)
    (cond ((##sys.eq? m 0) (##sys.+ n 1))
          ((##sys.eq? n 0) (ack (##sys.- m 1) 1))
          (else (ack (##sys.- m 1) (ack m (##sys.- n 1)))))))
(import (acker))
(##sys.exit (##sys.eq? (ack 3 9) 4093))
