(define-library (test)
  (import (prefix (rename (only (vanity core) car cdr) (car kar)) test.) (only (vanity core) not eq? exit))
  (export (rename test.cdr haha.cdr) test.kar)
  (if (not (eq? (test.kar '(1 . 2)) 1)) (exit 1)))

(import (vanity core))
(import (rename (except (test) test.kar) (haha.cdr test-cdr)))

(if (not (eq? (test-cdr '(1 . 2)) 2)) (exit 1))
(exit (guard (e (e 0)) (test.kar '(1 2)) 1))
