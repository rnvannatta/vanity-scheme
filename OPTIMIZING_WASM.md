# Optimizing WASM

Generally, with Vanity Scheme, performance is not my top priority. It only becomes such when performance becomes a bottleneck, and sadly it has become that for my wasm snake clone. Unfortunately for me, wasm is very very different from most real ISAs, and as such my compiler doesn't produce the best wasm.

There are two major problems:

1. Calling Convention - On x86, vanity assumes that variadic calls are similar to fixed arg calls, and casts functions to variadic. WASM doesn't support variadic calls at all and emscripten emulates them with a side stack.
2. Stack Limits - WASM's argument stack is unspecified and in practice ranges from tiny to puny. Firefox and Chrome can handle ~10k 4 srgument function calls while Safari's WASM interpreter can only handle ~1k. Once Safari's JIT is finished, it's better. But even 10k is so puny compared to the 8 megs of stack you get by default on x86 Linux.

Vanity being a naive Cheney on the MTA scheme needs both of these. A puny stack means lots of garbage collects and the wasm limitations means all arguments have to be passed in an array and thus not in registers (of course WASM is a 'stack machine' but I choose to hope the JITs can registerify function calls)

# Returning from the MTA

The Cheney on the MTA scheme implementation is a great way to produce a tail recursive scheme. Instead of using trampolines to optimize tail calls, you compile the program to continuation passing style and never return. When you're about to overflow, you garbage collect the stack using Cheney's algorithm. Small allocations like cons cells and closures are allocated as stack variables. And as such it implements generational garbage collection for free as part of the core runtime.

Cheney on the MTA is a very cute technique, and it is very good at doing very tricky recursions and makes call/cc and friends like call-with-values very easy and cheap. But it comes at a teensy price: like all continuation passing style, it makes normal code slower. A lot slower. Consider the following snippet

```
(define (square-length x y)
  (+ (* x x) (* y y)))
```

Translated to CPS it is:

```
(define (square-length x y return)
  (* x x (lambda (tmp0) (* y y (lambda (tmp2) (+ tmp1 tmp2 return))))))
```

A simple snippet has become 5 function calls and 2 closure allocations. While it would be nice to inline `+` and `*`, it's not practical without type inference, for `+` and `*` in Scheme, like most dynamic languages, are luxurious procedures that even with the most basic 'numeric tower' accept any combination of inexact and exact numbers. Inlining procedures also means inlining their typechecking gunk which would seriously bloat executable size.

# How much slower???

Let's compare vanity to a real, not vanity project, scheme compiler of a similar DNA, chicken (which is also Cheney on the MTA, but has like real optimization passes with type inference). Let's compare it to a fast scheme, chez, and let's make this pissing contest completely unfair to vanity by comparing it to a few hundred line "scheme" which spits out basic asm and doesn't actually implement anything painful to implement like garbage collection or tail call optimization (or call/cc, or inexact numbers). We'll be measuring how long it takes for Ur-Scheme to compile itself after being compiled by each of the compilers.

# Back to inlining

But jumping to inlining is putting the cart before the horse, we've got closer problems. Fundamentally, the reason we compile to continuation passing style is to allocate on the stack as a first generation, and to replace the call stack with continuation closures. But if a given procedure doesn't grow the continuation, and doesn't allocate, it _could_ return. The runtime just needs to be prepared to handle procedures returning and do something with the return. We'll call such procedures that neither allocate continuation closures nor allocate other memory basic procedures. The above `square-length` procedure is nonbasic (for now...) and the below is basic by our definition:

```
; a basic procedure
(define (inc x)
  (+ x 1))
; in cps
(define (inc k x)
  (+ k x 1))
; a procedure that is nonbasic because it allocates a closure
(define (make-inc c)
  (lambda (x) (+ x c)))
```

So the procedure call ABI on x86 and wasm are respectively:

```
typedef void VFunc(VRuntime * runtime, VEnv * upenv, int argc, VWORD continuation, ...); // x86
typedef void VFunc(VRuntime * runtime, VEnv * upenv, int argc, VWORD * argv); // wasm (the continuation is argv[0])
```

Since procedures currently never return, they might as well have type void. We could have our basic procedures return and every call site be prepared to handle that, though I'm leaning more to having basic procedures have a shim around callsites that don't expect returns, and only call basic procedures directly on callsites that do expect returns (ie know they're calling a basic procedure). That lets us cut out the continuation argument to basic procedures. And cutting variadic procedures from the basic function ABI lets us but cut argc, and switch to actual function arguments for wasm, which should be better. So our basic ABI looks like this:

```
typedef VWORD VTrivialFunc(VRuntime * runtime, VEnv * upenv, VWORD...);
```

Now, we can represent basic procedure calls in IR like so:

```
(lambda (tmp1) (basic-block (tmp2 (+ tmp0 tmp1)) (return tmp2)))
```

Where the last element of a basic block is a nonbasic call. Now rewriting our cps square-length using our basic-blocks, we get:

```
(define (square-length return x y)
  (basic-block
    (tmp0 (* x x))
    ((lambda (tmp0)
       (basic-block
         (tmp1 (* y y))
         ((lambda (tmp1)
            (basic-block
              (tmp2 (+ tmp0 tmp1))
              (return tmp2)))
          tmp1)))
     tmp0)))
```

Generally let expressions are ripe for optimization, and that is true in this case. For we can fuse the continuations together, to form a chain of basic function calls in a larger basic block:

```
(define (square-length k x y)
  (basic-block
    (tmp0 (* x x))
    (tmp1 (* y y))
    (tmp2 (+ tmp0 tmp1))
    (return tmp2)))
```

# A Few Minor Prerequisites

If we have a list of basic intrinsic procedures (e.g. car, cdr, pair?, null? vector-ref, binary+, binary-), we need to know _for sure_ that a procedure at a given callsite is actually a basic procedure. At the REPL, this is basically never true, since we can redefine procedures whenever. But vanity implements r7rs, and r7rs scheme does have a module implementation called `define-library`, and libraries are sealed and isolated. So inside a library, if we import the actual cdr procedure, it's definitely the cdr procedure. The way vanity exposes intrinsics is via a special namespace starting with `##`, and the core library just exports the intrinsics with their R7RS names. e.g.

```
(define-library (vanity core)
  (export cons car cdr pair? null?)
  (define cons ##vcore.cons)
  (define car ##vcore.car)
  (define cdr ##vcore.cdr)
  (define pair? ##vcore.pair?)
  (define null? ##vcore.null?))
```

It's not permitted to change double-sharpsign symbols in vanity, so the matter is then 'just' constant propogation so that usages of `car` are replaced with usages of `##vcore.car` and so on. The way I've decided to approach this for now is to introduce a `define-constant` syntax, which is like `define`, except it _requires_ the value actually be a constant, and specifically a constant as far as the compiler is concerned, not theoretically a constant. Learning from the mistakes of constexpr in C++ ;P. And define-constant _is guaranteed_ to inline when optimization is on, since it is so picky.

The set of values accepted by `define-constant` are initially just intrinsics, string literals, integer literals, and quoted symbols. But not quoted lists or vector literals because I've been very lazy and haven't actually implemented them as real constants. Furthermore, `define-constant` doesn't consider constant propogation or constant folding.

```
(define-constant one 1)
(define-constant uno one) ; Rejected for now!
(define-constant two (##vcore.+ 1 1)) ; Rejected for now!
```

This is fine for now since `define-constant` is mostly a way to get my wasm backend faster as quickly as possible. Anyway, the other thing that needs to happen is exported constants from libraries need to be included in the header generated for the library.

This initial implementation of `define-constant` is sufficient to allow for many intrinsics to be basic, though we still have the problem of variadic intrinsics. + and friends are varaidic. Specifically, + is associative, so we can decompose it:

```
(##vcore.+ 1 2 3 4) =>
(##vcore.binary+ (##vcore.binary+ (##vcore.binary+ 1 2) 3) 4)
```

And we could do that for most of the really important procedures, though there are a few like atan and log which consist of a trivial dispatch to basic intrinsics. And other functions like cadr are quite trivial, only calling intrinsics

```
(define (cadr x) (##vcore.car (##vcore.cdr x)))
(define atan
  (case-lambda
    ((x) (##vcore.atan x))
    ((y x) (##vcore.atan2 y x))))
(define (inc x) (##vcore.+ x 1))
(define (list . x) x)
```

The similarity in all 4 examples is that we have a lambda or case lambda with zero free variables, and can have a NULL upenv. Intrinsics don't count as a free variable since they can't be rebound: they aren't _variable_. As such it's valuable to allow them to be `define-constant`'d, and so allowed to be exported and inlined.

Anyway, with `define-constant` allowing intrinsics to be exported from libraries and imported into vanity libraries inline, we know when a callsite is actually an intrinsic for a basic procedure, and can do the basic block optimizion, which will reduce the number of nonreturning calls in the program, and thus slow stack frame accumulation and reduce the frequency of garbage collection especially on WASM. Hopefully using actual function arguments for basic procedures instead of arrays everywhere will make wasm's JIT happier as well.

# An aside on CPS

It is claimed that CPS is equivalent to SSA, but in my opinion this isn't true. Let's start why it might be true. Writing the continuation as the last argument instead of the first, which is convenient for reading but bad for execution, the square-length procedure could be massaged as follows:
```
(define (square-length x y return)
  (* x x (lambda (tmp0)
  (* y y (lambda (tmp2)
  (+ tmp1 tmp2
  return)))))
)
```

Imagine `(lambda (` to be `=>` and viola, a basic block?

But even doing this transformation, which is slightly easier to read but breaks for variadic functions, CPS is still much gnarlier to read than SSA, and that shouldn't be discounted. But beyond that, while SSA _is_ a program transformed into a functional style, with no nested calls, it is more than that. Shaping a program into a control-flow-graph of basic blocks is a much better way to organize programs than a continuation soup. And phi functions are useful bookkeeping in that control graph. CPS doesn't have the 'static' part of SSA without phi functions either.
