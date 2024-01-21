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

(define-library (scheme r7rs)
  (export
    ; predicates
    null? eof-object? boolean? pair? vector? procedure? symbol? string? exact? inexact? real? integer? char?
    ; equality
    eq? symbol=? eqv? equal?
    ; logic
    not
    ; math equality
    < = > <= >=
    ; math constructors
    inexact exact->inexact
    ; math predicates
    number? complex?
    ; math functions
    + - * / quotient remainder max min
    ; pairs
    cons car cdr set-car! set-cdr!
    ; cxr
    caar cadr cdar cddr
    caaar caadr cadar caddr cdaar cdadr cddar cdddr
    caaaar caaadr caadar caaddr cadaar cadadr caddar cadddr
    cdaaar cdaadr cdadar cdaddr cddaar cddadr cdddar cddddr
    ; lists
    list length list-ref map for-each append reverse memq memv member assq assv assoc
    ; strings
    string->list list->string make-string substring string-copy string-copy! string-ref string-set! string-length string->symbol string->number string->list string-append
    symbol->string
    ; vectors
    list->vector vector vector-ref vector-set! vector-length vector-for-each 
    ; chars
    char->integer
    ; io
    current-output-port current-error-port current-input-port open-input-file open-output-file close-port
    open-output-string get-output-string with-output-to-file with-input-from-file 
    read-char read-line read newline display write
    ; misc
    call/cc call-with-current-continuation call-with-values apply values
    ; system interface
    command-line
    exit
    ; not r5rs
    error
  )
  (import (vanity core)))
