(import (vanity core))
(let* ((yin ((lambda (foo) (newline) foo)
             (call/cc (lambda (bar) bar))))
       (yang ((lambda (foo) (display #\*) foo)
              (call/cc (lambda (bar) bar)))))
  (yin yang))
