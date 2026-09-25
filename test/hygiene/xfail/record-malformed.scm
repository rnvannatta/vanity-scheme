; a define-record-type without a constructor spec is a compile error
(import (vanity core))
(define-record-type point make-point point? (x point-x))
