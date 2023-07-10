(import (vanity core))

(exit (and (equal? (sprintf "~A~S" '("one") '("two")) "(one)(\"two\")")
           (equal? "helloworld" (read-line (open-input-process "echo helloworld")))))
