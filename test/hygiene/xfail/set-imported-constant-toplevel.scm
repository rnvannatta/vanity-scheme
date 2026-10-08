; set! of an imported define-constant is a compile error at program toplevel too
(import (vanity core))
(set! car cdr)
(display (car '(1 2)))
