# Vanity Scheme

An R7RS scheme compiler vanity project, with Cilk-inspired structured parallelism, that I started writing July 2022.

It would be a mistake to use this compiler in its current state, but you can have fun looking at the code!

It is an implementation of the 'Cheney on the MTA' concept for a compiler. So it compiles to continuation passing style, and is a compacting generational garbage collected language. But importantly, it compiles to C code, so it's very amenable to mixing C with it. The compiler is very similar to Chicken Scheme.

The parallelism model uses cooperative M:N fibers with a continuation-stealing scheduler. There are two principle parallelism operators: `fiber-fork` and `async`/`await`. `fiber-fork` pauses the current fiber, launching N child fibers and waiting on them. `async` launches a child fiber and returns a future, while `await` waits on the future. `await` can be safely called multiple times from multiple fibers.

It is capable of producing executables which run on Linux and Windows, using GCC and MinGW. The compiler itself only runs on Linux.

The compiler is free software under GPL v2.0, and the runtime is free software under LGPL v2.1. So, just as with gcc, you may use the compiler to build and link nonfree software if you do not statically link the runtime library.

## Install Instructions

At the moment, x64 Linux is a requirement to run the compiler.

Dependencies:
* gcc
* mingw-w64
* gnumake
* rsync
* flex
* bison

For the pong demo:
* SDL2

Sorry, clang isn't supported.

1. Run `./configure` and answer the prompts, or just mash enter.
	* The defaults install prefix is `/usr/local/`
3. Run `sudo make hatch` to bootstrap the compiler from intermediates.
4. Run `make all -j && sudo make install -j` to finish the bootstrap process.
5. Verify the install with `make clean; make tests -j`

## Usage

The interface of the compiler is similar to gcc, try compiling and running this snippet with `vsc -O3 example.scm && ./a.out`. View all the options with `vsc --help`.

```
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
```

Here's a toy demonstration of async/await usage:

```
(import (vanity core) (vanity list))
(let* ((x (async (lambda () (iota 100))))
       (y (async (lambda () (iota 100 100)))))
  (displayln "doing important work...")
  (await y)
  (displayln (append (await x) (await y))))
```

Note that because of implementation quirks, it's more memory efficient to `await` in reverse order of `async` launches. It causes the fibers to retire more efficiently. `fiber-fork` is much more resource efficient than `async`, so that should be used whenever the workload is conducive. `async` should be primarily used for long-running tasks, for example loading level data across several frames in a video game.

```
(define-library (powerset)
  (import (vanity core))
  (export powerset)

  (define (powerset set)
    (if (null? set) '(())
        (let ((x (car set))
              (pset (powerset (cdr set))))
          (append (map (lambda (e) (cons x e)) pset) pset)))))

(import (powerset) (vanity core))
(define set '(0 1 2 3 4 5 6 7 8 9 A B C D E F G H I J))
(printf "The powerset of ~A is...~N" set)
(displayln (powerset set))
```

The `(vanity core)` library contains a good chunk of R7RS, though not all of it, plus a few additional critical procedures for the compiler, like `system`, `make-temporary-file`, and the almighty `printf`. The `(scheme r7rs)` library has my bonus procedures removed.

The compiler is able to import C functions and C header files with one line. Try this with `vsc -Wc,-lm example.scm && ./a.out`.

```
(import (vanity core))
(define atan2 (##foreign.function "C" "double atan2(double y, double x);"))
(displayln (* (/ 180 3.1416) (atan2 -1 1)))
```

Check `demos/pong` for a complete example. Use `make a.out` for the Linux version, and `make a.exe` for the windows version. To run the windows version you will need to copy SDL2.dll and vscheme.dll into the pong folder. vscheme.dll can be found in `/usr/local/x86_64-w64-mingw32/lib`.

There's also a bit of cool syntax in the compiler: pattern matching! Here's an example that expands let expressions:

```
(import (vanity core))
(define (expand expr)
  (match expr
    (('lambda args body) expr)
    (('quote x) expr)
    (('let ((args vals) ...) body) 
     `((lambda ,args ,body) . ,vals))
    ((xs ...) (map expand xs))
    (else expr)))
(displayln (expand '(let ((x 1) (y 2)) (cons x y))))
```

A classic program: call/cc is quite trivial to implement in a continuation passing style compiler.

```
(import (vanity core))
(let* ((yin ((lambda (foo) (newline) foo)
             (call/cc (lambda (bar) bar))))
       (yang ((lambda (foo) (display #\*) foo)
              (call/cc (lambda (bar) bar)))))
  (yin yang))
```

Another program: My favorite infinite loop. Neither recursion nor closures nor self reference required.

```
((lambda (x) (x x)) (lambda (x) (x x)))
```

## Roadmap

A rough ordering of the next few improvements I'll be making:

1. DONE: Change the calling convention so arguments are passed by register.
2. DONE: Implement a foreign function interface.
3. DONE: Implement finalizers.
4. DONE: Emit header files for compiled libraries.
5. DONE: Windows cross compilation.
6. Implement Fibers.
7. Add a repl via bytecode

Progress is very slow as I am moonlighting this project while daylighting as a graphics programmer.

## Footguns

### Awful Debuggability

The compiler is incredibly frail to user error. Don't make typos! No line numbers either. Though, it should 'gracefully' crash and not just segfault. Please report any segfaults in either the compiler or executables to me.

The runtime has various stages of helpful error reporting as well.

It's possible, though masochistic, to use gdb on executables produced by this compiler. A real debugger is on the plate, though there are some prereqs before that can/should be done, like implementing a repl first.

Though if you compile with `-g`, you will get a call history on crash. Recall that the compiler is in continuation passing style, so for:

```
(import (vanity core))
(define (foo) #f)
(define (bar x) #f)
(define (baz x y) #f)
(list (foo) (bar (baz 3 4)) (cons 1) 2)
```

The program would crash at the cons, and the printout would be something along the lines of

```
Incorrect number of arguments to cons, got 2, need 3
Call History (most recent to least recent)
0. global_k5
1. V0bar_lambda2
2. global_k4
3. _V0baz_lambda3
4. global_k3
5. _V0foo_lambda1
6. global_k2
7. global_k1
8. ...
```

As continuation passing style folds the program inside out and all procedures gain an extra continuation parameter.  You can check it out by expanding the code to continuation passing style with `vsc -E2`.

### Weird Limits

Things like `read-line` only grabbing 256 characters. Have fun!

### Little Compile Time Checking

There is no type checking at compile time, and header files currently only have lists of symbols not function shape.
