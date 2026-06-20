(define-library (vanity ephemeron)
  (export
    any-weak-pair?
    any-ephemeron?
    any-transport-pair?

    key-datum-pair?
    ephemeron?
    transport-pair?
    transport-ephemeron?
    transport-guardian?

    make-transport-guardian
    make-key-datum-pair
    make-ephemeron
    make-transport-pair
    make-transport-ephemeron

    key-datum-pair-broken?
    key-datum-pair-unpack

    transport-pair-signaled?
    transport-pair-luggage

    transport-guardian-poll!
  )

  (define-constant any-weak-pair? (##basic-intrinsic "VAnyWeakPairP" 1))
  (define-constant any-ephemeron? (##basic-intrinsic "VAnyEphemeronP" 1))
  (define-constant any-transport-pair? (##basic-intrinsic "VAnyTransportPairP" 1))

  (define-constant key-datum-pair? ##vcore.pair?)
  (define-constant ephemeron? (##basic-intrinsic "VEphemeronP" 1))
  (define-constant transport-pair? (##basic-intrinsic "VTransportPairP" 1))
  (define-constant transport-ephemeron? (##basic-intrinsic "VTransportEphemeronP" 1))
  (define-constant transport-guardian? (##basic-intrinsic "VTransportGuardianP" 1))

  (define-constant make-transport-guardian (##intrinsic "VMakeTransportGuardian" 1 1))
  (define-constant make-key-datum-pair (##intrinsic "VMakeKeyDatumPair" 2 3))
  (define-constant make-ephemeron (##intrinsic "VMakeEphemeron" 3 3))
  (define-constant make-transport-pair (##intrinsic "VMakeTransportPair" 4 5))
  (define-constant make-transport-ephemeron (##intrinsic "VMakeTransportEphemeron" 5 5))

  (define-constant key-datum-pair-broken? (##basic-intrinsic "VKeyDatumPairBrokenP" 1))
  (define-constant key-datum-pair-unpack (##intrinsic "VKeyDatumPairUnpack" 2 2))

  (define-constant transport-pair-signaled? (##basic-intrinsic "VTransportPairSignaledP" 1))
  (define-constant transport-pair-luggage (##basic-intrinsic "VTransportPairLuggage" 1))

  (define-constant transport-guardian-poll! (##basic-intrinsic "VTransportGuardianPoll" 1))
)
