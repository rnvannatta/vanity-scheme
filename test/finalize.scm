(import (vanity core))

; If finalizers on ports don't work, this will crash when `ulimit -Sn` < 2000
(let loop ((i 0))
  (if (< i 2000)
      (begin
        (let ((port (open-output-string)))
        (display "hello" port)
        ; whoops no close-port uwu
        (loop (+ i 1))))))
