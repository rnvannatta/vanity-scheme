(import (vanity core))

(match '(1 2 3)
  ((1 . foo) (let loop ((foo foo)) 'bar)))
