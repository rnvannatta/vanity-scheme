; export inside begin-for-syntax is only meaningful in a library.
(import (vanity core))
(begin-for-syntax
  (define (f) 1)
  (export f))
