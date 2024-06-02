; Approximate pi inefficiently but in parallel!
(define-library (picompute)
  (import (vanity core) (vanity hash))
  (export estimate-pi)
  (define (estimate-pi n seed)
    (define rng (make-random seed 1))
    (define (test-pi)
      (let ((x (random-sample-float! rng))
            (y (random-sample-float! rng)))
        (if (<= (+ (* x x) (* y y)) 1) 1 0)))
    (let loop ((i 0) (acc 0))
      (if (= i n)
          (* 4 (/ acc n))
          (loop (+ i 1) (+ acc (test-pi)))))))
(import (picompute) (vanity core) (vanity list))
(define numtrials 10000000)
(define numfibers 64)
(printf "Pi is approximately ~A\n"
  (/ (fold + 0
       ; The magical step! fiber-map will launch and collect 64 fibers
       ; Note that 64 fibers won't be in flight at once unless you have
       ; a threadripper, Vanity uses continuation-stealing, so the resource
       ; usage is bounded by how many cpu cores you have.
       (fiber-map (lambda (seed) (estimate-pi (/ numtrials numfibers) seed))
                  (iota numfibers)))
     numfibers))
