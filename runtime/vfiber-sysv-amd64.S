// Copyright 2023-2024 Richard N Van Natta
//
// This file is part of the Vanity Scheme Runtime.
//
// The Vanity Scheme Runtime is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 2.1 of the License, or (at your option) any later version.
// 
// The Vanity Scheme Runtime is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with the Vanity Scheme Runtime.
//
// If not, see <https://www.gnu.org/licenses/>.
//
// This work is published with additional permission, the Vanity Scheme
// Runtime Library Exceptions, which should have been included with the
// Vanity Scheme Compiler.
//
// If not, visit <https://github.com/rnvannatta>

.intel_syntax noprefix
.section .text
// rdi: fiber we're going to
// rsi: fiber we're coming from
.globl VSwitchFiber
.type VSwitchFiber, @function
VSwitchFiber:
	mov rax, [rsp]
	mov QWORD PTR [rsi+ 0], rax
	mov QWORD PTR [rsi+ 8], rsp
	mov QWORD PTR [rsi+16], rbx
	mov QWORD PTR [rsi+24], rbp

	mov QWORD PTR [rsi+32], r12
	mov QWORD PTR [rsi+40], r13
	mov QWORD PTR [rsi+48], r14
	mov QWORD PTR [rsi+56], r15

  // a temporary stack in case we get a signal during the
  // brief interchange period. Once we release the lock on
  // this fiber, it would be an error for a signal to write
  // to this fiber's stack we saved as it's already in use
  mov rsp, QWORD PTR [rsi+72]
  xor eax, eax
  mov QWORD PTR [rsi+72], rax

  // it's ok for another thread to
  // run this fiber
  xchg DWORD PTR [rsi+64], eax

  // need to wait for the fiber to be ready
  // it will be soon if it's on the queue
wait_loop:
  mov eax, DWORD PTR [rdi+64]
  test eax, eax
  jne wait_loop

  // claim the thread now
  mov eax, 1
  xchg DWORD PTR [rdi+64], eax
  // it's a logic error if someone else claimed it
  test eax, eax
  jne fiber_error

  // save the temporary stack in our new fiber so we
  // can swap to it when we switch
  mov QWORD PTR [rdi+72], rsp

	mov rsp, QWORD PTR [rdi+ 8]
	mov rbx, QWORD PTR [rdi+16]
	mov rbp, QWORD PTR [rdi+24]

	mov r12, QWORD PTR [rdi+32]
	mov r13, QWORD PTR [rdi+40]
	mov r14, QWORD PTR [rdi+48]
	mov r15, QWORD PTR [rdi+56]

	mov rax, QWORD PTR [rdi+ 0]
	mov [rsp], rax


	xor eax, eax
	ret

// not a standard funcall, not callable from C
// r12: func
// r13: user data
.globl VFiberStart
.type VFiberStart, @function
VFiberStart:
	mov eax, 1337
	push rax
	mov rdi, r13
	call r12
fiber_error:
	// the func better not return OR ELSE
	call abort@plt
.section .note.GNU-stack,"",@progbits
