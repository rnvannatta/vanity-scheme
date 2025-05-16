# Optimizing WASM

Unfortunately for me, wasm is very very different from most real ISAs, and as such my compiler doesn't produce the best wasm.

There are two major problems:

1. Calling Convention - On x86, vanity assumes that variadic calls are similar to fixed arg calls, and casts functions to variadic. WASM doesn't support variadic calls at all and emscripten emulates them with a side stack.
2. Stack Limits - WASM's argument stack is unspecified and in practice ranges from tiny to puny. Firefox and Chrome can handle ~10k 4 srgument function calls while Safari's WASM interpreter can only handle ~1k. Once Safari's JIT is finished, it's better. But even 10k is so puny compared to the 8 megs of stack you get by default on x86 Linux.

Vanity being a naive Cheney on the MTA scheme needs both of these. A puny stack means lots of garbage collects and the wasm limitations means all arguments have to be passed in an array and thus not in registers (of course WASM is a 'stack machine' but I choose to hope the JITs can registerify function calls)

# Returning from the MTA

The Cheney on the MTA scheme implementation is a great way to produce a tail recursive scheme. Instead of using trampolines to optimize tail calls, you compile the program to continuation passing style and never return. When you're about to overflow, you garbage collect the stack using Cheney's algorithm. Small allocations like cons cells and closures are allocated as stack variables. And as such it implements generational garbage collection for free as part of the core runtime.

Cheney on the MTA is a very cute technique, and it is very good at doing very tricky recursions and makes call/cc and friends like call-with-values very easy and cheap. But it comes at a teensy price: like all continuation passing stule, it makes normal code slower. A lot slower. Consider the following snippet

(+ (* 3 3) (* 5 5))

Translated to CPS it is:

(* 3 3 (lambda (tmp0) (* 5 5 (lambda (tmp2) (+ tmp1 tmp2 return)))))

A simple snippet has become 6 function calls and 2 closure allocations. Could we inline + and *? Not without a bunch more work.
