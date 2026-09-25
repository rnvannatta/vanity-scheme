; an else clause that is not last in case is a compile error
(import (vanity core))
(display (case 1 (else 1) ((1) 2)))
