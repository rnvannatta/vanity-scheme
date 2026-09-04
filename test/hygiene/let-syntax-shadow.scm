; let-syntax can rebind a special form's name locally; the macro binding
; wins inside its body.
(import (vanity core))

(let-syntax ((if (lambda (form) (quasisyntax 42))))
  (exit (eq? (if #f #f) 42)))
