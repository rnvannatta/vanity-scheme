; EXPECTED COMPILE ERROR: a set! target is never routed through
; expand-identifier, so only the resolver's free-variable check can reject
; it. That check runs only while the declare body is being resolved inside
; its own universe; this pins that the body is resolved there.
(##vcore.declare "leaky-set"
  (lambda () (set! y 1)))
