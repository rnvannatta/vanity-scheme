(import (vanity core))

; If finalizers on ports don't work, this will crash when `ulimit -Sn` < 2000

; FIXME need a new test now that open-output-string isn't idiotic
(let loop ((i 0))
  (if (< i 2000)
      (begin
        (let ((port (open-output-string)))
        (display "hello" port)
        ; whoops no close-port uwu
        (loop (+ i 1))))))

(define lmao (open-output-string))
