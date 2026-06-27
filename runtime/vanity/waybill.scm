(define-library (vanity waybill)
  (export
    any-weak-waybill?
    any-ephemeral-waybill?
    any-transport-waybill?

    strong-waybill?
    ephemeral-waybill?
    strong-transport-waybill?
    ephemeral-transport-waybill?
    clearinghouse?

    make-clearinghouse
    make-waybill
    make-strong-waybill
    make-ephemeral-waybill
    make-strong-transport-waybill
    make-ephemeral-transport-waybill

    waybill-broken?
    waybill-unpack

    waybill-signaled?
    waybill-address

    clearinghouse-poll!
  )

  (define-constant any-weak-waybill? (##basic-intrinsic "VAnyWeakWaybillP" 1))
  (define-constant any-ephemeral-waybill? (##basic-intrinsic "VAnyEphemeralWaybillP" 1))
  (define-constant any-transport-waybill? (##basic-intrinsic "VAnyTransportWaybillP" 1))

  (define-constant strong-waybill? (##basic-intrinsic "VStrongWaybillP" 1))
  (define-constant ephemeral-waybill? (##basic-intrinsic "VEphemeralWaybillP" 1))
  (define-constant strong-transport-waybill? (##basic-intrinsic "VStrongTransportWaybillP" 1))
  (define-constant ephemeral-transport-waybill? (##basic-intrinsic "VEphemeralTransportWaybillP" 1))
  (define-constant clearinghouse? (##basic-intrinsic "VClearinghouseP" 1))

  (define-constant make-clearinghouse (##intrinsic "VMakeClearinghouse" 1 1))
  (define-constant make-waybill (##intrinsic "VMakeWaybill" 6 7))
  (define-constant make-strong-waybill (##intrinsic "VMakeStrongWaybill" 4 5))
  (define-constant make-ephemeral-waybill (##intrinsic "VMakeEphemeralWaybill" 5 5))
  (define-constant make-strong-transport-waybill (##intrinsic "VMakeStrongTransportWaybill" 4 5))
  (define-constant make-ephemeral-transport-waybill (##intrinsic "VMakeEphemeralTransportWaybill" 5 5))

  (define-constant waybill-broken? (##basic-intrinsic "VWaybillBrokenP" 1))
  (define-constant waybill-unpack (##intrinsic "VWaybillUnpack" 2 2))

  (define-constant waybill-signaled? (##basic-intrinsic "VWaybillSignaledP" 1))
  (define-constant waybill-address (##basic-intrinsic "VWaybillAddress" 1))

  (define-constant clearinghouse-poll! (##basic-intrinsic "VClearinghousePoll" 1))
)
