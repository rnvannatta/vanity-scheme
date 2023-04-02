# Vanity Scheme

A R7RS scheme compiler vanity project that I started writing July 2022.

It is an implementation of the 'Cheney on the MTA' concept for a compiler. So it compiles to continuation passing style, and is a compacting generational garbage collected language. But importantly, it compiles to C code, so it's very amenable to mixing C with it. However, I wouldn't recommend doing that now as I need to do a pass on the language's ABI. The main reason I started this is a burning desire for parallelism (which I haven't implemented yet).

The compiler is free software under GPL v3.0, and the runtime is free software under LGPL v3.0. So, just as with gcc, you may use the compiler to build and link nonfree software if you do not statically link the runtime library.

## Install Instructions

At the moment, x64 Linux is a requirement, as there are multiple nonportable bits of runtime, and a bit of assembly as well. I'm not sure if I can say this compiler works on machines other than my own. I did successfully run the full bootstrap procedure on a laptop.

You should just need an install of gnumake and gcc. I compiled with gcc 12.2, but older is likely fine?

Sorry, clang isn't supported, and in fact, for debugging purposes, I'll be adding libgccjit to the install requirements later too.

1. Run `./configure` and answer the prompts, or just mash enter.
	* The defaults installs to `~/.local/bin`, `~/.local/lib`, etc
2. Run the `./linkup` script
	* If `./linkup` reports that vsc is not valid, you'll need to expand your PATH, CPATH, LIBRARY\_PATH, and LD\_LIBRARY\_PATH
	* You can copy the exports it prints into `~/.profile` if you like, or do it your own way
3. Run `make hatch` to bootstrap the compiler from intermediates.
4. Run `make clean; make install -j` to finish the bootstrap process.

## Usage

The interface of the compiler is similar to gcc, try compiling and running this snippet with `vsc -O3 example.scm && ./a.out`. View all the options with `vsc --help`.

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

1. Change the calling convention so arguments are passed by register.
2. Implement a foreign function interface.
3. Add support for structures and records.
4. Emit header files for compiled libraries.
5. Improve the debugging with 'stack traces' via tracing the continuation
6. Add a repl with libgccjit.

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

### No Finalizers

I haven't added finalizers yet. So, if you don't run `close-port` on your files and ports, they will leak. And eventually you'll run out of file descriptors and your program will crash.

### Weird Limits

Things like `read-line` only grabbing 256 characters. Have fun!

### No Compile Time Checking

There's no header files so missing symbols and basic but detectable errors are all runtime.
