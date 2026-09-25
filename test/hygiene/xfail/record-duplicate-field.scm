; a define-record-type whose constructor names a field twice is a compile error
(import (vanity core))
(define-record-type point (make-point x x) point? (x point-x))
