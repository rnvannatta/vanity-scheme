; A lexically bound else is not the keyword, so (else 2) is a case clause
; whose datum list isn't a list.
(import (vanity core))
(let ((else 'e)) (case 'e ((a) 1) (else 2)))
