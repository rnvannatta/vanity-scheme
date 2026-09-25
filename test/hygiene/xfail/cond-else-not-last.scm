; an else clause that is not last in cond is a compile error
(import (vanity core))
(display (cond (else 1) (#t 2)))
