(define-library (vanity hash)
  (export
    make-random
    random-copy
    random-sample!
    random-sample-float!
    random-advance!)
  ; I thought about an object interface for this, but decided against it:
  ; the object interface would have been (let ((rng (make-random))) (+ 1 (rng 6)))
  (define make-random ##vcore.make-random)
  (define random-copy ##vcore.random-copy)
  (define random-sample!
    (case-lambda
      ((rng) (##vcore.random-sample! rng))
      ((rng end) (##vcore.random-sample-bounded! rng end))))
  (define random-sample-float! ##vcore.random-sample-float!)
  (define random-advance! ##vcore.random-advance!))
