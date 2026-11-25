; A later import may not rebind a name between a macro and a variable: uses
; already expanded with the macro would disagree with later ones.
(define-library (hy relink m) (import (vanity core)) (export x) (define-syntax (x) 1))
(define-library (hy relink v) (import (vanity core)) (export x) (define x 2))
(import (vanity core) (hy relink m) (hy relink v))
(display x)
