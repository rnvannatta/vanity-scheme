(define-library (bug) (export foo) (define foo 1))
(import (bug))
(displayln foo)
(define-library (bug) (export foo bar) (define foo 2) (define bar 3))
(displayln foo)
(unload-library (bug))
(import (bug))
(displayln foo)
(displayln bar)
