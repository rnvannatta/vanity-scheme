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
