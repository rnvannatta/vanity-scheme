# Vanity Scheme Implementation Status

Vanity Scheme is a currently-incomplete implementation of R7RS Scheme, with SRFI-1, SRFI-4, SRIF-8 SRFI-17, SRFI-26, SRFI-69, SRFI-125, SRFI-151, and SRFI-260

## R7RS Syntax and Procedures

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|'                              | Yes         |             |            |
|*                              | Yes         |             |            |
|+                              | Yes         |             |            |
|,                              | Yes         |             |            |
|,@                             | Yes         |             |            |
|-                              | Yes         |             |            |
|/                              | Yes         |             |            |
|<                              | Yes         |             |            |
|<=                             | Yes         |             |            |
|=                              | Yes         |             |            |
|=>                             | Yes         |             |            |
|>                              | Yes         |             |            |
|>=                             | Yes         |             |            |
|#!fold-case                    | Low Prio    |             |            |
|#!no-fold-case                 | Low Prio    |             |            |
|`                              | Yes         |             |            |
|abs                            | Yes         |             |            |
|acos                           | Yes         |             |            |
|and                            | Yes         |             |            |
|angle                          | Low Prio    |             |            |
|append                         | Yes         |             |            |
|apply                          | Yes         |             |            |
|asin                           | Yes         |             |            |
|assoc                          | Yes         |             |            |
|assq                           | Yes         |             |            |
|assv                           | Yes         |             |            |
|atan                           | Yes         |             |            |
|#b                             | Yes         |             |            |
|begin                          | Yes         |             |            |
|binary-port?                   | Yes         |             |            |
|boolean=?                      | Yes         |             |            |
|boolean?                       | Yes         |             |            |
|bytevector                     | Yes         |             |            |
|bytevector-append              | Yes         |             |            |
|bytevector-copy                | Yes         |             |            |
|bytevector-copy!               | Yes         |             |            |
|bytevector-length              | Yes         |             |            |
|bytevector-u8-ref              | Yes         |             |            |
|bytevector-u8-set!             | Yes         |             |            |
|bytevector?                    | Yes         |             |            |
|caaaar                         | Yes         |             |            |
|caaadr                         | Yes         |             |            |
|caaar                          | Yes         |             |            |
|caadar                         | Yes         |             |            |
|caaddr                         | Yes         |             |            |
|caadr                          | Yes         |             |            |
|caar                           | Yes         |             |            |
|cadaar                         | Yes         |             |            |
|cadadr                         | Yes         |             |            |
|cadar                          | Yes         |             |            |
|caddar                         | Yes         |             |            |
|cadddr                         | Yes         |             |            |
|caddr                          | Yes         |             |            |
|cadr                           | Yes         |             |            |
|call-with-current-continuation | Yes         |             |            |
|call-with-input-file           | Yes         |             |            |
|call-with-output-file          | Yes         |             |            |
|call-with-port                 | Yes         |             |            |
|call-with-values               | Yes         |             |            |
|call/cc                        | Yes         |             |            |
|car                            | Yes         |             |            |
|case                           | Yes         |             |            |
|case-lambda                    | Yes         |             |            |
|cdaaar                         | Yes         |             |            |
|cdaadr                         | Yes         |             |            |
|cdaar                          | Yes         |             |            |
|cdadar                         | Yes         |             |            |
|cdaddr                         | Yes         |             |            |
|cdadr                          | Yes         |             |            |
|cdar                           | Yes         |             |            |
|cddaar                         | Yes         |             |            |
|cddadr                         | Yes         |             |            |
|cddar                          | Yes         |             |            |
|cdddar                         | Yes         |             |            |
|cddddr                         | Yes         |             |            |
|cdddr                          | Yes         |             |            |
|cddr                           | Yes         |             |            |
|cdr                            | Yes         |             |            |
|ceiling                        | Yes         |             |            |
|char->integer                  | Yes         |             |            |
|char-alphabetic?               | Yes         |             |            |
|char-ci<=?                     | Yes         |             |            |
|char-ci<?                      | Yes         |             |            |
|char-ci=?                      | Yes         |             |            |
|char-ci>=?                     | Yes         |             |            |
|char-ci>?                      | Yes         |             |            |
|char-downcase                  | Yes         |             |            |
|char-foldcase                  | Yes         |             |            |
|char-lower-case?               | Yes         |             |            |
|char-numeric?                  | Yes         |             |            |
|char-ready?                    | Yes*        |             |            |
|char-upcase                    | Yes         |             |            |
|char-upper-case?               | Yes         |             |            |
|char-whitespace?               | Yes         |             |            |
|char<=?                        | Yes         |             |            |
|char<?                         | Yes         |             |            |
|char=?                         | Yes         |             |            |
|char>=?                        | Yes         |             |            |
|char>?                         | Yes         |             |            |
|char?                          | Yes         |             |            |
|close-input-port               | Yes         |             |            |
|close-output-port              | Yes         |             |            |
|close-port                     | Yes         |             |            |
|command-line                   | Yes         |             |            |
|complex?                       | Low Prio    |             |            |
|cond                           | Yes         |             |            |
|cond-expand                    | Yes         |             |            |
|cons                           | Yes         |             |            |
|cos                            | Yes         |             |            |
|current-error-port             | Yes         |             |            |
|current-input-port             | Yes         |             |            |
|current-jiffy                  | Yes         |             |            |
|current-output-port            | Yes         |             |            |
|current-second                 | Yes         |             |            |
|#d                             | Yes         |             |            |
|define                         | Yes         |             |            |
|define-library                 | Yes         |             |            |
|define-record-type             | Yes         |             |            |
|define-syntax                  | Low Prio    |             |            |
|define-values                  | Yes         |             |            |
|delay                          | Yes         |             |            |
|delay-force                    | Yes         |             |            |
|delete-file                    | Yes         |             |            |
|denominator                    | Low Prio    |             |            |
|digit-value                    | Yes         |             |            |
|display                        | Yes         |             |            |
|do                             | Yes         |             |            |
|dynamic-wind                   | Never Ever  |             |            |
|#e                             | Yes         |             |            |
|else                           | Yes         |             |            |
|emergency-exit                 | Yes         |             |            |
|environment                    | Low Prio    |             |            |
|eof-object                     | Yes         |             |            |
|eof-object?                    | Yes         |             |            |
|eq?                            | Yes         |             |            |
|equal?                         | Yes         |             |            |
|eqv?                           | Yes         |             |            |
|error                          | Yes         |             |            |
|error-object-irritants         | Yes         |             |            |
|error-object-message           | Yes         |             |            |
|error-object?                  | Yes         |             |            |
|eval                           | Low Prio    |             |            |
|even?                          | Yes         |             |            |
|exact                          | Yes         |             |            |
|exact-integer-sqrt             | Yes         |             |            |
|exact-integer?                 | Yes         |             |            |
|exact?                         | Yes         |             |            |
|except                         | Yes         |             |            |
|exit                           | Yes         |             |            |
|exp                            | Yes         |             |            |
|export                         | Yes         |             |            |
|expt                           | Yes         |             |            |
|#f                             | Yes         |             |            |
|features                       | Yes         |             |            |
|file-error?                    | Yes         |             |            |
|file-exists?                   | Yes         |             |            |
|finite?                        | Yes         |             |            |
|floor                          | Yes         |             |            |
|floor-quotient                 | Yes         |             |            |
|floor-remainder                | Yes         |             |            |
|floor/                         | Yes         |             |            |
|flush-output-port              | Yes         |             |            |
|for-each                       | Yes         |             |            |
|force                          | Yes         |             |            |
|gcd                            | Yes         |             |            |
|get-environment-variable       |             |             |            |
|get-environment-variables      |             |             |            |
|get-output-bytevector          | Yes         |             |            |
|get-output-string              | Yes         | ?           |            |
|guard                          | Yes         |             |            |
|#i                             | Yes         |             |            |
|if                             | Yes         |             |            |
|imag-part                      | Low Prio    |             |            |
|import                         | Yes         |             |            |
|include                        |             |             |            |
|include-ci                     | Low Prio    |             |            |
|include-library-declarations   |             |             |            |
|inexact                        | Yes         |             |            |
|inexact?                       | Yes         |             |            |
|infinite?                      | Yes         |             |            |
|input-port-open?               | Yes         |             |            |
|input-port?                    | Yes         |             |            |
|integer-\>char                 | Yes         |             |            |
|integer?                       | Yes         |             |            |
|interaction-environment        | Low Prio    |             |            |
|jiffies-per-second             | Yes         |             |            |
|lambda                         | Yes         |             |            |
|lcm                            | Yes         |             |            |
|length                         | Yes         |             |            |
|let                            | Yes         |             |            |
|let*                           | Yes         |             |            |
|let\*-values                   | Yes         |             |            |
|let-syntax                     | Low Prio    |             |            |
|let-values                     | Yes         |             |            |
|letrec                         | Yes         |             |            |
|letrec\*                       | Yes         |             |            |
|letrec-syntax                  | Low Prio    |             |            |
|list                           | Yes         |             |            |
|list-\>string                  | Yes         |             |            |
|list-\>vector                  | Yes         |             |            |
|list-copy                      | Yes         |             |            |
|list-ref                       | Yes         |             |            |
|list-set!                      | Yes         |             |            |
|list-tail                      | Yes         |             |            |
|list?                          | Yes         |             |            |
|load                           | Yes*        |             |            |
|log                            | Yes         |             |            |
|magnitude                      | Low Prio    |             |            |
|make-bytevector                | Yes         |             |            |
|make-list                      | Yes         |             |            |
|make-parameter                 | Yes         |             |            |
|make-polar                     | Low Prio    |             |            |
|make-promise                   | Yes         |             |            |
|make-rectangular               | Low Prio    |             |            |
|make-string                    | Yes         | ?           |            |
|make-vector                    | Yes         |             |            |
|map                            | Yes         |             |            |
|max                            | Yes         |             |            |
|member                         | Yes         |             |            |
|memq                           | Yes         |             |            |
|memv                           | Yes         |             |            |
|min                            | Yes         |             |            |
|modulo                         | Yes         |             |            |
|nan?                           | Yes         |             |            |
|negative?                      | Yes         |             |            |
|newline                        | Yes         |             |            |
|not                            | Yes         |             |            |
|null-environment               | Low Prio    |             |            |
|null?                          | Yes         |             |            |
|number->string                 | Yes         |             |            |
|number?                        | Yes         |             |            |
|numerator                      | Low Prio    |             |            |
|#o                             | Yes         |             |            |
|odd?                           | Yes         |             |            |
|only                           | Yes         |             |            |
|open-binary-input-file         | Yes         |             |            |
|open-binary-output-file        | Yes         |             |            |
|open-input-bytevector          | Yes         |             |            |
|open-input-file                | Yes         |             |            |
|open-input-string              | Yes         |             |            |
|open-output-bytevector         | Yes         |             |            |
|open-output-file               | Yes         |             |            |
|open-output-string             | Yes         |             |            |
|or                             | Yes         |             |            |
|output-port-open?              | Yes         |             |            |
|output-port?                   | Yes         |             |            |
|pair?                          | Yes         |             |            |
|parameterize                   | Yes         |             |            |
|peek-char                      | Yes         |             |            |
|peek-u8                        | Yes         |             |            |
|port?                          | Yes         |             |            |
|positive?                      | Yes         |             |            |
|prefix                         | Yes         |             |            |
|procedure?                     | Yes         |             |            |
|promise?                       | Yes         |             |            |
|quasiquote                     | Yes         |             |            |
|quote                          | Yes         |             |            |
|quotient                       | Yes         |             |            |
|raise                          | Yes         |             |            |
|raise-continuable              | Yes         |             |            |
|rational?                      | Low Prio    |             |            |
|rationalize                    | Low Prio    |             |            |
|read                           | Yes         |             |            |
|read-bytevector                | Yes         |             |            |
|read-bytevector!               | Yes         |             |            |
|read-char                      | Yes         |             |            |
|read-error?                    | Yes         |             |            |
|read-line                      | Yes         |             |            |
|read-string                    | Yes         |             |            |
|read-u8                        | Yes         |             |            |
|real-part                      | Low Prio    |             |            |
|real?                          | Yes         |             |            |
|remainder                      | Yes         |             |            |
|rename                         | Yes         |             |            |
|reverse                        | Yes         |             |            |
|round                          | Yes         |             |            |
|scheme-report-environment      | Low Prio    |             |            |
|set!                           | Yes         |             |            |
|set-car!                       | Yes         |             |            |
|set-cdr!                       | Yes         |             |            |
|sin                            | Yes         |             |            |
|sqrt                           | Yes         |             |            |
|square                         | Yes         |             |            |
|string                         | Yes         |             |            |
|string->list                   | Yes         |             |            |
|string->number                 | Yes         |             |            |
|string->symbol                 | Yes         |             |            |
|string->utf8                   | Yes         |             |            |
|string->vector                 | Yes         |             |            |
|string-append                  | Yes         |             |            |
|string-ci<=?                   | Yes         |             |            |
|string-ci<?                    | Yes         |             |            |
|string-ci=?                    | Yes         |             |            |
|string-ci>=?                   | Yes         |             |            |
|string-ci>?                    | Yes         |             |            |
|string-copy                    | Yes         |             |            |
|string-copy!                   | Yes         |             |            |
|string-downcase                | Yes         |             |            |
|string-fill!                   | Yes         |             |            |
|string-foldcase                | Yes         |             |            |
|string-for-each                | Yes         |             |            |
|string-length                  | Yes         |             |            |
|string-map                     | Yes         |             |            |
|string-ref                     | Yes         |             |            |
|string-set!                    | Yes         |             |            |
|string-upcase                  | Yes         |             |            |
|string<=?                      | Yes         |             |            |
|string<?                       | Yes         |             |            |
|string=?                       | Yes         |             |            |
|string>=?                      | Yes         |             |            |
|string>?                       | Yes         |             |            |
|string?                        | Yes         |             |            |
|substring                      | Yes         | ?           |            |
|symbol->string                 | Yes         |             |            |
|symbol=?                       | Yes         |             |            |
|symbol?                        | Yes         |             |            |
|syntax-error                   | Low Prio    |             |            |
|syntax-rules                   | Low Prio    |             |            |
|#t                             | Yes         |             |            |
|tan                            | Yes         |             |            |
|textual-port?                  | Yes         |             |            |
|truncate                       | Yes         |             |            |
|truncate-quotient              | Yes         |             |            |
|truncate-remainder             | Yes         |             |            |
|truncate/                      | Yes         |             |            |
|u8-ready?                      | Yes*        |             |            |
|unless                         | Yes         |             |            |
|unquote                        | Yes         |             |            |
|unquote-splicing               | Yes         |             |            |
|utf8->string                   | Yes         |             |            |
|values                         | Yes         |             |            |
|vector                         | Yes         |             |            |
|vector->list                   | Yes         |             |            |
|vector->string                 | Yes         |             |            |
|vector-append                  | Yes         |             |            |
|vector-copy                    | Yes         |             |            |
|vector-copy!                   | Yes         |             |            |
|vector-fill!                   | Yes         |             |            |
|vector-for-each                | Yes         |             |            |
|vector-length                  | Yes         |             |            |
|vector-map                     | Yes         |             |            |
|vector-ref                     | Yes         |             |            |
|vector-set!                    | Yes         |             |            |
|vector?                        | Yes         |             |            |
|when                           | Yes         |             |            |
|with-exception-handler         | Yes         |             |            |
|with-input-from-file           | Yes         |             |            |
|with-output-to-file            | Yes         |             |            |
|write                          | Yes*        |             |            |
|write-bytevector               | Yes         |             |            |
|write-char                     | Yes         |             |            |
|write-shared                   | Low Prio    |             |            |
|write-simple                   | Yes         |             |            |
|write-string                   | Yes         |             |            |
|write-u8                       | Yes         |             |            |
|#x                             | Yes         |             |            |
|zero?                          | Yes         |             |            |

## Notes on R7RS

Vanity Scheme will never ever offer dynamic-wind, as it is contrary to Vanity's parallelism model. It is easily implemented in a library if you so care.

Vanity Scheme will not offer bignums nor rationals. Vanity Scheme also does not offer gradual overflow, instead exceptions are generated. Exacts are signed 32 bit ints. Inexacts are double-precision floats.

Complex numbers are a low priority feature and will not be implemented until a type inference optimizer is implemented and numberic procedures are monomorphized.

Macros are also a low priority feature.

Datum label notation and printing of recursive datastructures is unsupported.

Vanity Scheme is UTF-ignorant ASCII: string refrencing is constant time and strings are unaware of multibyte unicode-8 characters.

`load` only works in the interpreter, furthermore `eval` is low priority and will only work in the interpreter.

Maximum number of function arguments is 65535, including the hidden continuation argument. Maximum vector length is 65535 elements. Symbols have a maximum length of 65536. Strings and srfi-4 typed vectors have a max length of 2^31 bytes.

All ports are both binary and textual.

`char-ready?` and `u8-ready?` always return true because ports are buffered and because of portability nightmares. Regular files and input-strings always return #t anyway since they are either eof or have data ready, and eof is defined as char-ready?. Ascertaining whether a FILE* has a char ready is fraught. Use pure file descriptors with vanity's C FFI capabilities if you need this.

## SRFI-1

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|cons                           | Yes         |             |            |
|list                           | Yes         |             |            |
|xcons                          | Yes         |             |            |
|cons*                          | Yes         |             |            |
|make-list                      | Yes         |             |            |
|list-tabulate                  | Yes         |             |            |
|list-copy                      | Yes         |             |            |
|circular-list                  | Yes         |             |            |
|iota                           | Yes         |             |            |
|pair?                          | Yes         |             |            |
|null?                          | Yes         |             |            |
|proper-list?                   | Yes         |             |            |
|circular-list?                 | Yes         |             |            |
|dotted-list?                   | Yes         |             |            |
|not-pair?                      | Yes         |             |            |
|null-list?                     | Yes         |             |            |
|list=                          | Yes         |             |            |
|car                            | Yes         |             |            |
|cdr                            | Yes         |             |            |
|cxr                            | Yes         |             |            |
|list-ref                       | Yes         |             |            |
|first                          | Yes         |             |            |
|second                         | Yes         |             |            |
|third                          | Yes         |             |            |
|fourth                         | Yes         |             |            |
|fifth                          | Yes         |             |            |
|sixth                          | Yes         |             |            |
|seventh                        | Yes         |             |            |
|eighth                         | Yes         |             |            |
|ninth                          | Yes         |             |            |
|tenth                          | Yes         |             |            |
|car+cdr                        | Yes         |             |            |
|take                           | Yes         |             |            |
|drop                           | Yes         |             |            |
|take-right                     | Yes         |             |            |
|drop-right                     | Yes         |             |            |
|take!                          | Yes         |             |            |
|drop-right!                    | Yes         |             |            |
|split-at                       | Yes         |             |            |
|split-at!                      | Yes         |             |            |
|last                           | Yes         |             |            |
|last-pair                      | Yes         |             |            |
|length                         | Yes         |             |            |
|length+                        | Yes         |             |            |
|append                         | Yes         |             |            |
|concatenate                    | Yes         |             |            |
|reverse                        | Yes         |             |            |
|append!                        | Yes         |             |            |
|concatenate!                   | Yes         |             |            |
|reverse!                       | Yes         |             |            |
|append-reverse                 | Yes         |             |            |
|append-reverse!                | Yes         |             |            |
|zip                            | Yes         |             |            |
|unzip1                         | Yes         |             |            |
|unzip2                         | Yes         |             |            |
|unzip3                         | Yes         |             |            |
|unzip4                         | Yes         |             |            |
|unzip5                         | Yes         |             |            |
|count                          | Yes         |             |            |
|map                            | Yes         |             |            |
|for-each                       | Yes         |             |            |
|fold                           | Yes         |             |            |
|unfold                         | Yes         |             |            |
|pair-fold                      | Yes         |             |            |
|reduce                         | Yes         |             |            |
|fold-right                     | Yes         |             |            |
|unfold-right                   | Yes         |             |            |
|pair-fold-right                | Yes         |             |            |
|reduce-right                   | Yes         |             |            |
|append-map                     | Yes         |             |            |
|append-map!                    | Yes         |             |            |
|map!                           | Yes         |             |            |
|pair-for-each                  | Yes         |             |            |
|filter-map                     | Yes         |             |            |
|map-in-order                   | Yes         |             |            |
|filter                         | Yes         |             |            |
|partition                      | Yes         |             |            |
|remove                         | Yes         |             |            |
|filter!                        | Yes         |             |            |
|partition!                     | Yes         |             |            |
|remove!                        | Yes         |             |            |
|member                         | Yes         |             |            |
|memq                           | Yes         |             |            |
|memv                           | Yes         |             |            |
|find                           | Yes         |             |            |
|find-tail                      | Yes         |             |            |
|any                            | Yes         |             |            |
|every                          | Yes         |             |            |
|list-index                     | Yes         |             |            |
|take-while                     | Yes         |             |            |
|drop-while                     | Yes         |             |            |
|take-while!                    | Yes         |             |            |
|span                           | Yes         |             |            |
|break                          | Yes         |             |            |
|span!                          | Yes         |             |            |
|break!                         | Yes         |             |            |
|delete                         | Yes         |             |            |
|delete-duplicates              | Yes         |             |            |
|delete!                        | Yes         |             |            |
|delete-duplicates!             | Yes         |             |            |
|assoc                          | Yes         |             |            |
|assq                           | Yes         |             |            |
|assv                           | Yes         |             |            |
|alist-cons                     | Yes         |             |            |
|alist-copy                     | Yes         |             |            |
|alist-delete                   | Yes         |             |            |
|alist-delete!                  | Yes         |             |            |
|lset<=                         | Yes         |             |            |
|lset=                          | Yes         |             |            |
|lset-adjoin                    | Yes         |             |            |
|lset-union		                  | Yes         |             |            |
|lset-union!                    | Yes         |             |            |
|lset-intersection	            | Yes         |             |            |
|lset-intersection!             | Yes         |             |            |
|lset-difference		            | Yes         |             |            |
|lset-difference!               | Yes         |             |            |
|lset-xor		                    | Yes         |             |            |
|lset-xor!                      | Yes         |             |            |
|lset-diff+intersection	        | Yes         |             |            |
|lset-diff+intersection!        | Yes         |             |            |
|set-car!                       | Yes         |             |            |
|set-cdr!                       | Yes         |             |            |

## SRFI-4

### List of supported SRFI-4 vector types
* u8
* s8
* u16
* s16
* s32
* f32
* f64

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|TAGvector?                     | Yes         |             |            |
|make-TAGvector                 | Yes         | ?           |            |
|TAGvector                      | Yes         |             |            |
|TAGvector-length               | Yes         |             |            |
|TAGvector-ref                  | Yes         |             |            |
|TAGvector-set!                 | Yes         |             |            |
|TAGvector->list                | Yes         |             |            |
|list->TAGvector                | Yes         | ?           |            |
|TAGvector-copy (bonus)         | Yes         | ?           |            |
|TAGvector-copy! (bonus         | Yes         | ?           |            |

Also u8vector is an alias for bytevector and all procedures exist there too

## SRFI-8

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|receive                        | Yes         |             |            |

## SRFI-17

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|setter                         | Yes         |             |            |
|getter                         | Yes         |             |            |
|getter-with-setter             | Yes         |             |            |

## SRFI-26

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|cut                            | Yes         |             |            |
|cute                           | Yes         |             |            |

## SRFI-69

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|make-hash-table                | Yes         |             |            |
|hash-table?                    |             |             |            |
|alist->hash-table              |             |             |            |
|hash-table-equivalence-function|             |             |            |
|hash-table-hash-function       |             |             |            |
|hash-table-ref                 | Yes         |             |            |
|hash-table-ref/default         |             |             |            |
|hash-table-set!                | Yes         |             |            |
|hash-table-delete!             | Yes         |             |            |
|hash-table-exists?             |             |             |            |
|hash-table-update!             |             |             |            |
|hash-table-update!/default     |             |             |            |
|hash-table-size                |             |             |            |
|hash-table-keys                |             |             |            |
|hash-table-values              |             |             |            |
|hash-table-walk                |             |             |            |
|hash-table-fold                |             |             |            |
|hash-table->alist              |             |             |            |
|hash-table-copy                |             |             |            |
|hash-table-merge!              |             |             |            |
|hash                           |             |             |            |
|string-hash                    |             |             |            |
|string-ci-hash                 |             |             |            |
|hash-by-identity               |             |             |            |

## SRFI-125

## SRFI 151

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|bitwise-not                    | Yes         |             |            |
|bitwise-and                    | Yes         |             |            |
|bitwise-ior                    | Yes         |             |            |
|bitwise-xor                    | Yes         |             |            |
|bitwise-eqv                    | Yes         |             |            |
|bitwise-nand                   | Yes         |             |            |
|bitwise-nor                    | Yes         |             |            |
|bitwise-andc1                  | Yes         |             |            |
|bitwise-andc2                  | Yes         |             |            |
|bitwise-orc1                   | Yes         |             |            |
|bitwise-orc2                   | Yes         |             |            |
|arithmetic-shift               | Yes         |             |            |
|bit-count                      | Yes         |             |            |
|integer-length                 |             |             |            |
|bitwise-if                     |             |             |            |
|bit-set?                       |             |             |            |
|copy-bit                       |             |             |            |
|bit-swap                       |             |             |            |
|any-bit-set?                   |             |             |            |
|every-bit-set?                 |             |             |            |
|first-set-bit                  |             |             |            |
|bit-field                      |             |             |            |
|bit-field-any?                 |             |             |            |
|bit-field-every?               |             |             |            |
|bit-field-clear                |             |             |            |
|bit-field-set                  |             |             |            |
|bit-field-replace              |             |             |            |
|bit-field-replace-same         |             |             |            |
|bit-field-rotate               |             |             |            |
|bit-field-reverse              |             |             |            |
|bits->list                     |             |             |            |
|list->bits                     |             |             |            |
|bits->vector                   |             |             |            |
|vector->bits                   |             |             |            |
|bits                           |             |             |            |
|bitwise-fold                   |             |             |            |
|bitwise-for-each               |             |             |            |
|bitwise-unfold                 |             |             |            |
|make-bitwise-generator         |             |             |            |

## SRFI-260

| Name                          | Implemented | Well Tested | Documented |
|-------------------------------|-------------|-------------|------------|
|generate-symbol                | Yes         |             |            |
