# Transport Ephemerons

# Abstract

This SRFI describes an alternative to traditional ephemerons and transport guardians, for use in implementing weak eq-hashtables.

It merges the two concepts into a combined datastructure, the transport-ephemeron, that uses less storage space than transport guardians, let alone the combined cost of transport guardians and ephemerons which are both needed in a weak eq-hashtable. Transport-ephemerons arealso faster to garbage collect. Variants are provided as well to fill out a matrix of hash-table key-value pairs based on required features.

In addition, the api to work with ephemerons and transport-ephemeron guardians is altered to prevent a class of time-of-check/time-of-use bugs and avoid the need for a reference-barrier compiler intrinsic.

# Background

Ephemerons, weak pairs and transport guardians are datatypes which have been implemented in many Scheme implementations as well as other programming languages. They provide seemingly orthogonal concepts of weak-references and object movement notification.

An ephemeron is an object with a key and a datum, which differs from a normal pair in that if there are no references to the key except via the datum, the garbage collector may break the ephemeron, dropping its key and its datum. This is similar to a weak pair, except that the datum does not keep the key alive, which prevents a class of memory leaks. A major use of ephemerons is in implementing robust weak hashtables, which drop entries that become unreachable by key.

A transport guardian is an object which registers objects alongside a piece of metadata, and if these objects are moved, the transport guardian is able to be polled to return the object-metadata pair. The primary purpose of a transport guardian is to implement hash tables and hash sets with hash functions sensitive to object location, such as 'pointer-hashing' or 'eq-hashing'.

# Rationale

Implementing these objects as first-class features instead of hidden runtime machinery is appealing because there are many variants of hash tables, hash sets, and other hash based datastructures that may not differ in terms of API surface, but do differ in terms of performance and memory characteristics. For example, with hash tables you have chaining vs opened addressing, and then in opened addressing you have various probe strategies, such as linear vs quadratic vs cuckoo hashing. There's then robin-hood collision resolution or "swiss table" hash digests that could be added to improve probing time. There are specialized optimizations you can do if the hash function is injective over the domain of keys.

The quirks and design decisions of garbage collected languages further introduce an additional layer of hash table customization. Such as selecting ephemerality based on whether the key datatype can even cease to exist. Or selecting transport guardianship based on whether the key can move, and whether it moving is relevant to the hash function.

The orthogonality of ephemerons vs transport guardians is appealing, but the efficiency from merging the concepts is too much to ignore. And while ephemerons have a broader use than just hash tables, transport guardians are almost exclusively used to implement hash tables or hash sets. 

Merging the two concepts increases garbage collector efficiency, not just because one object is simpler to trace than two and the transport-ephemeron is smaller than a transport guardian cell, but more notably that transport information is trivially observable during ephemeron processing. Also during garbage collection, compared to a traditional transport guardian, transport-ephemerons require less linked-list mutation by the collector, leading to less operations during garbage-collect and less remembered-set pressure.

This SRFI is also much more memory efficient. In Vanity Scheme, an ephemeron uses 4 slots of storage space, a SRFI-254 transport guardian cell would have used 7 slots, and this SRFI's transport-ephemeron uses 6 slots. Which is 5 less slots total per weak eq-hashtable entry. 
We avoid a time-of-check/time-of-use (TOCTOU) bug easily accidentally implementable via SRFI-254 and SRFI-124. The following SRFI-124/SRFI-254 bug has taken care to avoid a TOCTOU bug by checking ephemeron-broken? after getting the key and value, but it is still incorrect and an optimizing compiler could optimize a given application of this procedure to, shockingly, always return #f.

```
(define (ephemeron-bug ephemeron key)
  (let ((k (ephemeron-key ephemeron))
        (d (ephemeron-datum ephemeron)))
    (and (not (ephemeron-broken? ephemeron))
         (eq? key k)
         d)))
```

See SRFI-124 for an explanation of why this procedure is buggy. While its fix of introducing a reference-barrier intrinsic addresses the issue, the real issue is that the 3 ephemeron accessors are not atomic with respect to each other and an optimizing compiler can rearrange the eq? check such that the key's lifetime ceases to be before the broken and datum fields are queried, and is inclined to do so to reduce the number of local variables. An example real world procedure that might do this is a situation where you pop a key from a list, and return any metadata associated with that key stored in ephemerons.

We provide an ephemeron and transport-pair unpacking operator that is atomic to the garbage collector. This avoids the need for a reference-barrier intrinsic, not only simplifying implementation in optimizing Scheme compilers, but also simplifying user code and making the TOCTOU bug much harder to accidentally write. The above code is:

```
(define (ephemeron-ref ephemeron key)
  (define-values (broken k d) (key-datum-pair-unpack ephemeron))
  (and (not broken) (eq? key k) d))
```

Implementing SRFI-254 transport guardians is still possible with this SRFI, but this SRFI obsoletes both the API and most use cases.

# Specification

This SRFI presents 6 variants of key-datum pair selection for a hash table:

| Weakness \ Hash Stability | Stable         | Unstable            |
| ------------------------- | -------------- | ------------------- |
| Strong                    | Key-Datum-Pair | Transport-Pair      |
| Weak                      | Weak-Pair      | Weak-Transport-Pair |
| Ephemeral                 | Ephemeron      | Transport-Ephemeron |

Two helper procedures and several features are provided to allow users to query the implementation for details about how the Scheme works:

Procedure: (eternal-object? o). Returns #t if the object can never be reclaimed, and #f if the object is not clearly eternal. For example an object is eternal if the object does not exist in the heap, or exists in statically allocated memory. Any eternal object causes a weak pair or ephemeron to never break, and it is potentially desireable to use a pair instead. Some objects are effectively eternal, for example an heap object owned by a static object, but proving so is difficult, so `eternal-object?` is encouraged to return false negatives in such cases instead of exhaustively proving it.

Procedure: (movable-object? o). Returns #t if the object can potentially move, and #f otherwise. This can happen if the object is statically allocated or if it forever relegated to a zone of the heap which is not moving. If it is possible for the object to be demoted to a moving state, this function should return #t. This test is not required to be exhaustive, and is encouraged return false positives if it is expensive to prove an object is nonmoving.

This SRFI requres that booleans and null are eternal and nonmoving.

This SRFI also requires schemes to implement the following features to allow for optimized portable hash table implementations to make smart decisions about hashing function and key-value pair selection choices based on the key types.

Features:
* eternal-chars: set if all chars are eternal
* eternal-symbols: set if all symbols are eternal
* eternal-integers: set if all integers are eternal
* eternal-rationals: set if all rational numbers are eternal
* eternal-reals: set if all real numbers are eternal
* eternal-small-integers: set if all integers below an implementation-defined magnitude are eternal
* eternal-floats: set if all real floating point numbers are eternal
* eternal-inexacts: set if all inexact numbers are eternal
* eternal-complex-integers: set if all complex integers are eternal
* eternal-complex-rationals: set if all complex rational numbers are eternal
* eternal-complex-numbers: set if all complex numbers are eternal
* eternal-complex-small-integers: set if complex integers below an implementation-defined magnitude are eternal
* eternal-complex-floats: set if all complex floating point numbers are eternal
* eternal-complex-inexacts: set if all complex inexact numbers are eternal

* moving-chars: set if any chars can move
* moving-symbols: set if any symbols can move
* moving-integers: set if any integers can move
* moving-rationals: set if any rational numbers can move
* moving-reals: set if any real numbers can move
* moving-small-integers: set if any integers below an implementation-defined magnitude can move
* moving-floats: set if any real floating point numbers can move
* moving-inexacts: set if any inexact numbers can move
* moving-complex-integers: set if any complex integers can move
* moving-complex-rationals: set if any complex rational numbers can move
* moving-complex-numbers: set if any complex numbers can move
* moving-complex-small-integers: set if complex integers below an implementation-defined magnitude can move
* moving-complex-floats: set if any complex floating point numbers can move
* moving-complex-inexacts: set if any complex inexact numbers can move

An example of what might make symbols noneternal is if there is an interned symbol table can be garbage collected, even if it rarely happens. And if that interned symbol table compacts during its garbage collection, then the symbols are moving.

This SRFI provides feature bits for small integers and floating point numbers, which while not part of the R7RS numeric tower, are nonethless differentiatable in many Scheme implementations, and worth testing for as a concept. For example, a Scheme which has a concept of 'bigints' should not set the eternal-integers feature, but only the eternal-small-integers feature if it true.

A Scheme implementation should provide as many of these features as possible where it makes sense. If a datatype such as a floating point number or a complex number is not provided by the implementation, the Scheme should not set that feature bit, even if it is vacuously true.

A Scheme without a moving garbage collector should not set any moving features.

## Key-Datum Pairs

An immutable pair of a key and a datum, with a strongly-held key and no transport sensitivity. This _may_ be the same underlying datatype as a standard pair created by cons, but it is not required to be.

Rationale: Some schemes do data storage optimizations such as omitting data headers for pairs, and requring key-datum pairs to be identical to standard pairs may be too costly for the following polymorphic procedures.

Procedure: (make-key-datum-pair key datum). Returns a fresh key-datum pair.

Procedure: (make-key-datum-pair key). Returns a fresh key-datum pair, with datum #f. This is intended as a canonical reference for hash sets. This procedure in isolation looks silly, but a transport sensitive hash set can select which pair to use based on whether the key can move.

Procedure: (key-datum-pair? key datum). Returns #t for key-datum pairs, and #f for the other 5 types of pair in this SRFI.

## Weak Pairs

A weak pair is an immutable pair of a key and a datum.

The key field in weak pair is a weak reference. If there are no live references from outside the key-field to the key field, the weak pair is broken, dropping both its key and its datam, replacing both with #f. If the key field of a weak pair is eternal either by being an immediate value such as an int or an interned symbol, the weak pair will never break.

An implementation is permitted to substitute any references to a broken weak pair with a universal broken pair object. _Rationale_: hash tables with weak references used for caching metadata naturally accumulate broken pairs over time, and is can be trivial for the garbage collector to swap the pair out. Furthermore, allowing for a uiversal broken pair object may save some schemes a slot of storage to hold brokenness information.

Procedure: (make-weak-pair key datum). Returns a fresh weak pair. It is allowed, but not required that the compiler or runtime can downgrade a weak-pair to a key-datum-pair if the key is eternal. A downgrade is observable by checking weak-pair? against the returned object, but otherwise does not affect the execution of the program, as all procedures that work on weak pairs work on vanilla key-datum-pairs, and the weak pair would have never broken anyway.

Procedure: (make-weak-pair key). Returns a fresh weak pair, with datum #f. This is intended as a canonical weak reference for hash sets.

Procedure: (weak-pair? p). Returns #t is the object is a weak-pair, #f otherwise.

## Ephemerons

An ephemeron is similar to a weak pair, except it has the ephemeron property: the key is weakly referenced and also references to the key accessed solely through the datum do not keep the key alive. Ephemerons are more robust at preventing memory leaks than weak pairs, but require the garbage collector to scan ephemeron multiple times.

Procedure: (make-ephemeron key datum). Returns a fresh ephemeron. It is strongly suggested, but not required, that either the compiler or the runtime downgrade an ephemeron to a weak pair if it is trivially provable that the datum is eternal, as ephemerons are significantly more complex to process than weak pairs. For example, if the datum is an immediate object like #f, or if the datum is quoated data. Likewise it is allowed, but not required, that they can downgrade further to a key-datum pair if the key is eternal. A downgrade is observable by checking ephemeron? against the returned object, and likewise, does not affect program execution since likewise all procedures that work on ephemerons work on weak-pairs and key-datum-pairs.

Procedure: (ephemeron? p). Returns #t is the object is an ephemeron, #f otherwise.

For exmaple, for Vanity Scheme the downgrade rule to weak pair is if the datum is an integer, double, char, boolean, or null. Or if it is a string, symbol, or SRFI-4 vector and is not key.

## Transport Pairs

A transport pair is an immutable pair of a key and a datum. It contains an additional luggage field, which is intended to aid in handling the event where the key moves. For example, a hash table's key-datum-pair's luggage is its original hash.

The pair can be created with a transport guardian. If the key of a transport pair is moved by the garbage collector, the collector sets the pair to a signaled state which indicates that the key moved, and inserts it into its registered transport guardian. The transport guardian will return any singaled transport pairs that registered to the guardian. The garbage collector is required to insert signaled transport pairs at the end of a transport guardian, such that its queue is first-in-first-out, to guarantee forward progress when rummaging for a specific transport-pair in the event of frequent garbage collection.

Unlike SRFI-254 transport cells, a transport guardian is not required to have a reference to the transport pair. So the user of transport pairs must store them somewhere. This happens naturally with hash tables, since this is a key-pair sutable for use storing the entries. If a transport pair is collected before it is signaled, the guardian will not gain the resurrected transport-pair if the key later moves.

These transport-cells have a strong reference to the key.

Procedure: (make-transport-pair guardian key datum luggage). Returns a fresh transport pair, registered to the provided transfer guardian, or none if #f is passed. Unlike weak pairs, transport pairs ought not be downgraded to key-datum-pairs automatically, as that would lose their luggage.

Procedure: (make-transport-pair guardian key luggage). Returns a fresh transport pair, registered to the provided transfer guardian, or none if #f is passed, with datum #f. This is intended as a canonical transport cell for hash sets.

Procedure: (transport-pair? tp). Returns #t is the object is a transport pair, #f otherwise.

## Weak Transport Pairs

Weak transport pairs are like transport pairs, but with a weak key reference. If the weak reference is broken, the transport cell is no longer signalable. The breaking event does not place it in its registered transport guardian's queue. However, the event also does not remove the pair from the transport guardian's queue. So a guardian's moved transport pairs queue may have some broken entries.

Procedure: (make-weak-transport-pair guardian key datum luggage). Returns a fresh weak-transport pair, registered to the provided transfer guardian, or none if #f is passed. Like the weak pair is allowed be automatically downgraded to a key-datum-pair when possible, a weak-transport-pair is allowed to be be downgraded to a transport-pair if the conditions are met.

Procedure: (make-weak-transport-pair guardian key luggage). Returns a fresh weak-transport pair, registered to the provided transfer guardian, or none if #f is passed, with datum #f. This is intended as a canonical weak-transport cell for hash sets.

Procedure: (weak-transport-pair? tp). Returns #t is the object is a weak-transport pair, #f otherwise.

## Transport-Ephemerons

Like weak transport pairs, but with the ephemeron property between key and datum.

Procedure: (make-transport-ephemeron guardian key datum luggage). Returns a fresh weak-transport pair, registered to the provided transfer guardian, or none if #f is passed. Like the ephemeron is strongly suggested to be automatically downgraded to a weak pair, a transport-ephemeron is strongly suggested to be downgraded to a weak-transport-pair when the conditions are met. And allowed to downgrade to a transport-pair if those conditions are met.

Procedure: (transport-ephemeron? tp). Returns #t is the object is a transport-ephemeron, #f otherwise.

## Transport Guardians

Transport guardians work on all 3 transport-pair variants, and one transport guardian may have multiple kinds of transport-pairs under its protection. Unlike SRFI-254, transport guardians do not retain a reference to the transport pairs until they are signaled, and the user must prior to that hold a reference to the pair.

Procedure: (make-transport-guardian). Returns a fresh transport guardian, which can accept any key-datum pair with the transport capability.

Procedure: (transport-guardian? guardian). Returns #t if the object is a transport guardian, #f otherwise.

Procedure: (transport-guardian-poll! guardian). Removes and returns one signaled transport pair from the transport guardian. If it is empty, #f is returned. Note, the transport pair may possibly be broken.

## Universal Key-Datum Pair Procedures

These procedures work on all 6 of the datatypes in this SRFI.

Procedure: (key-datum-pair-unpack pair). Returns three values: (broken? key datum). This procedure is required to be atomic to the garbage collector. It may not interleave a garbage collect or any other lifetime altering operation anywhere between fetching the brokenness state, the key, and the datum. broken? is trivially #f for the two strong key-datum pair variants.

Note: key-datum-pair-key and key-datum-pair-datum are deliberately not provided to avoid the TOCTOU bug described in the rationale.

Procedure: (key-datum-pair-broken? tp). Returns #t if the object is broken. The two strong-referenced pairs trivially return #f.

Procedure: (any-key-datum-pair? key datum). Returns #t for any of the 6 pair datatypes in this SRFI. It may, but is not required, to return #t for pairs created with cons. For all other types, it must return #f.

Procedure: (any-weak-pair? pair). Returns #t if the pair has weak semantics, #f otherwise.

Procedure: (any-ephemeron? pair). Returns #t if the pair has ephemeron semantics, #f otherwises.

Procedure: (any-transport-pair? pair). Returns #t if the pair can signal on key transport, #f otherwise.

## Transport-Pair Procedures:

Procedure: (transport-pair-signaled? tp). Returns #t if the key has moved at all since the transport-pair was created.

Procedure: (transport-pair-luggage tp). Returns the transport-pair's luggage.

## Note on Interaction with Schemes with Resurrecting Finalizers

A Scheme supports 'resurrecting' finalizers if this is semantically valid:

```
(define y #f)
(let ((x (cons 1 1)))
  (set-finalizer! x (lambda (obj) (set-cdr! x 2) (set! y obj))))
; enough time later for the gc to run
(display y) ; prints (1 2)
```

There are two things to note. The reference to x in the closure doesn't save it from finalization, so the finalizer itself has ephemeron semantics where the object is the key and the closure is the datum. Secondly, it is perfectly valid to save the object from demise by saving it off.

In a Scheme supporting these finalizer semantics implementing this SRFI, finalizers should be treated akin to ephemerons during the ephemeron fixed point iteration. After that, unreachable finalizer objects are scheduled for finalization. Since that resurrects the to-be-finalized objects as well as their closures, it likewise needs to resurrect any ephemerons with keys that were just resurrected, necessitating a second ephemeron fixed point iteration. Only after the to-be-finalized objects have been resurrected and ephemeron fixed point iteration has been repeated should ephemerons be broken.

Or put simply, because such finalizers truly resurrect their objects, at least temporarily, ephemerons with keys in those objects should not be broken until the objects.

# Implementation Guide

This section is intended to aid compiler and runtime authors in implementing this SRFI, but does provide some low level information on how these constructs work.

## Collector Algorithm

We assume a moving tricolor garbage collector, with 3 conceptual sets:
* The white set: the set of objects that are currently condemned to being deallocated.
* The gray set: the set of objects which are not condemned, but may contain pointers to objects in the white set. This set needs to be scanned.
* The black set: the set of objects which are not condemned and that have been scanned, thus containing no pointers to objects in the white set.
Basic tricolor garbage collection starts with the gray set populated with 'root objects', such as the current continuation and any global bindings. And it continues scanning gray set objects until the gray set is empty.

The two operations of a tricolor collector are assigning, and scanning. Assigning identifies an object as not to be reclaimed and moves it to the gray set. Assigning may involve a physical move of the object. Scanning an object assigns all its pointed-to objects, updating pointers to the new address if necessary, and moves it to the black set.

This SRFI contains three notions of reference strength: strong, ephemeral, and weak. When the garbage collector scans references and adds the pointed-at objects the gray set, it instead needs to add them to one of two gray sets:
* The primary gray set: this holds vectors, closures, etc. And the key-datum-pair and transport-pair objects of this SRFI. Also weak pairs should initally go to this gray set.
* The ephemeral object gray set: this holds ephemerons and transport-ephemerons. But not weak pairs or weak transport pairs.

There are also two black sets:
* The primary black set: holds most scanned objects
* The weak object black set: this holds weak-pairs and weak-transport-pairs that have been scanned once and had their datums assigned. Their keys are not assigned and may still be in the white set.

When scanning the gray sets:
1. The primary gray set is scanned until it is empty.
- Any weak pairs assigned should be assigned to this set. When they are first scanned, all fields but the key are scanned and then the weak pair is assigned to the weak object black set instead of the primary black set.
2. The ephemeron object gray set is then scanned once.
- Any ephemerons with keys not in the white set have their datums assigned and are removed from the gray set.
- Any ephemerons with keys in the white set are not removed from the gray set. Neither the keys nor the datums of these ephemerons are assigned.
3. Step 1 is repeated, scanning the primary gray set until it empty.
4. Steps 2, and 3 are repeated until the ephemeron gray set stops shrinking.
5. All remaining ephemeron gray set objects are broken: both their keys and their datums are set to #f and they are marked broken. Thus, they are now all members of the black set.
6. All weak pairs still in the weak object black set with keys in the white set are broken, assigning them to the primary black set.

When a transport pair is scanned (in step 1 for strong and weak transport pairs or step 2 for ephemeral transport pairs), if its key has been observed to have physically moved when it was assigned, either because the transport pair induced it to be moved or because it found a forwarding address, then the transport pair is signaled and added to its guardian's queue by the collector. If the transport pair is weak or ephemeral, and it is broken because its key is in the white set, then the transport pair is *not* signaled.

The insertion of the tranport pair into the guardian's queue and the movement of the key must together be atomic relative to the mutator's perspective. There should be no window where the mutator can observe the key moved before it is enqueued.

This algorithm is simplified and there are plenty of possible optimizations to undertake, particularly with the criterion to stop scanning ephemerons in step 4.

The major reason why this SRFI allowes for more optimized weak tables than SRFI-254 is because SRFI-254's transport-cells are necessarily weak reference objects. So an ephemeral hash table implemented with SRFI-254 has to manage one weak reference and one ephemeron per entry. While with this SRFI, there is only the transport-ephemeron. Or for a weak table, just the weak-transport-pair.

The justification for allowing weak pairs is made clear by this garbage collection algorithm: ephemerons while robust require repeating steps 2 3 and 4 until a fixed point is achieved. It is often either trivially provable or the user asserts by contract that the datum field of key-datum pair never points to its own value field. And in that case, the complexity and machinery of scanning an ephemeron is unnecessary.

## Data Layout

The layout in memory of these 6 pairs in Vanity Scheme's implementation is as follows:

* Fields all 6 pairs have:
- Header header
- WORD key
- WORD datum
* Fields all but key-datum-pair have:
- WORD gc\_next
* Fields all transport-pairs have:
- WORD luggage
- WORD guardian\_or\_chain

The gc\_next field is needed by any weakly held key in order to string them together as a linked list in the ephemeron gray set or the weak black set. It is an intrusived linked list like this so that the garbage collector doesn't need to allocate during collection. Technically the strong transport-pair does not need this field, but it greatly simplifies things to eat this 1 extra field when the transport-pair would already be 5 fields long, as it allows all weak pairs to have gc\_next in the same place and all transport-pairs to have luggage and guardian\_or\_chain in the same place. Vanity stores the broken state as flag in the header.

The guardian\_or\_chain field points to the guardian when the transport-pair is unsignaled, and formes a linked list of signaled transport-pairs from the guardian when it is signaled. Or #f if there is no guardian, and null when there is no guardian but the transport-pair is signaled. Determining signaled status is thus just checking the type of the object in the guardian\_or\_chain field. #f or a record type indicate an unsignaled pair, and anything else indicates a signaled pair.

## Garbage Collector Atomicity of Key-Datum-Unpack

For a stop the world collector, this means that the garbage collection process must not be allowed to run at all during the dynamic extent of this procedure. For a concurrent collector, the mutator must atomically read all 3 fields in one step and the collector must atomically break all 3 fields in one step.
