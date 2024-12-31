(import (vanity core) (vanity assert))

(if (not 
      (match '(letrec ((a 1) (b 2) (c 3)) fooo bar)
        (('letrec ((a b) ...) . body) (and (equal? body '(fooo bar)) (equal? a '(a b c)) (equal? b '(1 2 3))))))
    (exit 1))
(exit
  (match '(1 2 3 4) ((x ... y z) (and (equal? x '(1 2)) (eq? y 3) (eq? z 4)))))
