(import (vanity core) (vanity assert))

(exit
  (match '(letrec ((a 1) (b 2) (c 3)) fooo bar)
    (('letrec ((a b) ...) . body) (and (equal? body '(fooo bar)) (equal? a '(a b c)) (equal? b '(1 2 3))))))
