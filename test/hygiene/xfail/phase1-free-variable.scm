; Phase 1 has no free variables: a typo in a transformer fails at expansion
; even in a branch that never runs.
(import (vanity core))
(define-syntax (m x) (if #t x (undefined-helper x)))
(display (m 1))
