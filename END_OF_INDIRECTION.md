# The End of Indirection

I believe the major problem with my wasm implementation is that it uses way too many indirect function calls. In machine code, an indirect call is only a bit worse than a direct call. Instead of jumping to an offset of the pc, it's just loading a pointer from somewhere. Assuming the pointer is consistent, it's well branch target predicated, so it's not a huge loss to use indirect calls unnecessarily. Though it does add up.

But wasm is a different story: wasm has pretty tight restrictions on function calls for security reasons (I assume to stop return oriented programming and such). Indirect calls are handled by passing an index into an function table to a handler which does expensive validation and type checking of the arguments.

# The Silly Way Libraries are Compiled

The library:

```
(define-library (sqlen)
  (import (vanity core))
  (export sqlen)
  (define (sqlen x y)
    (+ (* x x) (* y y))))
```

Is compiled to an thunk which constructs an association list and returns an importer that queries the association list. It looks approximately like:

```
(declare "V2_sqlen"
  (lambda ()
    (let ((importer (##vcore.load-library '(vanity core))))
      (let ((* (importer '*))
            (+ (importer '+)))
        (letrec ((sqlen (lambda (x y) (+ (* x x) (* y y)))))
          (let ((exports (cons (cons 'sqlen sqlen) '())))
            (lambda (x) (cond ((assv x exports) => cdr) (else (error "symbol not in library" x))))))))))
```

The intrinsic `##vcore.load-library` fetches said importer if the library has been loaded, otherwise it loads the library and calls the thunk to make the importer.

This has worked alright: it was easy enough to implement and got things working. Though it isn't the best: vanity uses environment chained closures, and having to walk up a chain to get at core procedures like `+` and `display` is silly. I had a few thoughts on how to handle this: switching to flat closures is one, though flat closures are slightly nasty to deal with when using `set!`, since you have to heap allocate shared set!'d variables and insert unbox operations. The other approach I thought was to have a 'toplevel' node in the environment which would take you straight to the top: and I had considered making the toplevel of library a statically allocated object to remove it from experiencing gc.

# Wasm Reveals the Ideal Solution

I had long mulled the issue of walking up long chains for core procedures, but my laziness and lack of great care for Vanity's current native performance stopped me from implementing it. And I'm glad I didn't bother, for now that wasm's performance is a serious issue, the distinct nature of wasm's issue reveals the ideal solution: 'Just' compile to a direct function call with an an explicitly provided environment. Less `V_CALL(VGetArg(statics, 4, 23), runtime, k)` more `V_CALL_FUNC(VDisplay, VDisplay_Closure, runtime, k)`. This is for sure the main gain of my earlier effort to forward intrinsics through headers.

The first issue is naming, and that's solved well enough: prepend the library name to the function name, ie `(define (sq x) (* x x))` inside the library (vanity math) would get mangled to something like `_V7vanity_math_sq` where the `_V7` prefix might mean function. And we'd ideally need 2 prefixes in total: one bound to the function's code, and one to hold the closure.

Now because of garbage collection rules, we can only do this for variables containing no references to the heap. If we were to set a freefloating symbol to a heap allocated value, it would get dropped unless that freefloater was part of the root set, and increasing the root set seems unpleasant. And a side goal is to reduce the garbage collector collecting data that'll never ever become garbage. The majority of library variables are just functions though, so not an issue.

# How this looks in practice

First, assuming say `map` is such a special library variable, usages of it will need to compile to a 'qualified lookup' in the IR, such as `((##qualified vanity core map) display 4)`.

We need a new exotic intrinsic, let's call it (##set-library-procedure k "mangled-name" value) It won't just be a procedure though: It will demand that value be a literal lambda or case-lambda, and inform the codegen to ensure said lambda is named accordingly. Then procedurally set the variables appropriately. Said lambda will also need to be free of standard free variables, ie all its otherwise free variables should be intrinsics or qualified variables, and hence be rocking a null environment. This would result in the definition of map looking like:

```
(define map (##set-library-procedure "vanity_core_map" (lambda (f xs) blah blah)))
```

# The Steps

1. Support optimizing opened closures in the backend.
2. Then, support explicitly marking these procedures with `define-library-procedure`.
3. Have define-library-procedure emit named symbols
4. Upgrade to define-library-procedure when optimization is on
5. Change references to use named symbols in library
6. Export named symbols seperately and use in other libraries
7. Have named procedures use closures
