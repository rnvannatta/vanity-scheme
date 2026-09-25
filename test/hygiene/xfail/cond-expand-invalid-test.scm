; a cond-expand test that is a list but not library/and/or/not is a compile error
(import (vanity core))
(cond-expand ((no-such-form vanity-scheme) (display 1)) (else (display 2)))
