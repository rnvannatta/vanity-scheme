(import (vanity core) (vanity assert))

(displayln 
  (let ((y 4) (x 3))
      (+ (* x x) (* y y))))
(displayln 
  (begin
    (+ 1 2 3)
    (let ((y 4) (x 3))
      (+ (* x x) (* y y)))))
