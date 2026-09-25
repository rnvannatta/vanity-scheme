; an else clause that is not last in cond-expand is a compile error
(import (vanity core))
(cond-expand (else (display 1)) (vanity-scheme (display 2)))
