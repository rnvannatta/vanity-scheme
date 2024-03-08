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
// rcx: fiber we're going to
// rdx: fiber we're coming from
.globl VSwitchFiberAsm
VSwitchFiberAsm:
	mov rax, [rsp]
	mov QWORD PTR [rdx+ 0], rax
	mov QWORD PTR [rdx+ 8], rsp
	mov QWORD PTR [rdx+16], rbx
	mov QWORD PTR [rdx+24], rbp

  mov QWORD PTR [rdx+32], rdi
  mov QWORD PTR [rdx+40], rsi

	mov QWORD PTR [rdx+48], r12
	mov QWORD PTR [rdx+56], r13
	mov QWORD PTR [rdx+64], r14
	mov QWORD PTR [rdx+72], r15

  movups XMMWORD PTR [rdx+ 80], xmm6
  movups XMMWORD PTR [rdx+ 96], xmm7
  movups XMMWORD PTR [rdx+112], xmm8
  movups XMMWORD PTR [rdx+128], xmm9
  movups XMMWORD PTR [rdx+144], xmm10
  movups XMMWORD PTR [rdx+160], xmm11
  movups XMMWORD PTR [rdx+176], xmm12
  movups XMMWORD PTR [rdx+192], xmm13
  movups XMMWORD PTR [rdx+208], xmm14
  movups XMMWORD PTR [rdx+224], xmm15

  // a temporary stack in case we get a signal during the
  // brief interchange period. Once we release the lock on
  // this fiber, it would be an error for a signal to write
  // to this fiber's stack we saved as it's already in use
  mov rsp, QWORD PTR [rdx+248]
  xor eax, eax
  mov QWORD PTR [rdx+248], rax

  // it's ok for another thread to
  // run this fiber
  lock xchg DWORD PTR [rdx+240], eax
  // it's a logic error if the thread wasn't marked as running
  test eax, eax
  je fiber_error

  // need to wait for the fiber to be ready
  // it will be soon if it's on the queue
wait_loop:
  mov eax, DWORD PTR [rcx+240]
  test eax, eax
  jne wait_loop

  // claim the thread now
  mov eax, 1
  lock xchg DWORD PTR [rcx+240], eax
  // it's a logic error if someone else claimed it
  test eax, eax
  jne fiber_error

  // save the temporary stack in our new fiber so we
  // can swap to it when we switch
  mov QWORD PTR [rcx+248], rsp

	mov rsp, QWORD PTR [rcx+ 8]
	mov rbx, QWORD PTR [rcx+16]
	mov rbp, QWORD PTR [rcx+24]

  mov rdi, QWORD PTR [rcx+32]
  mov rsi, QWORD PTR [rcx+40]

	mov r12, QWORD PTR [rcx+48]
	mov r13, QWORD PTR [rcx+56]
	mov r14, QWORD PTR [rcx+64]
	mov r15, QWORD PTR [rcx+72]

  movups  xmm6, XMMWORD PTR [rcx+ 80]
  movups  xmm7, XMMWORD PTR [rcx+ 96]
  movups  xmm8, XMMWORD PTR [rcx+112]
  movups  xmm9, XMMWORD PTR [rcx+128]
  movups xmm10, XMMWORD PTR [rcx+144]
  movups xmm11, XMMWORD PTR [rcx+160]
  movups xmm12, XMMWORD PTR [rcx+176]
  movups xmm13, XMMWORD PTR [rcx+192]
  movups xmm14, XMMWORD PTR [rcx+208]
  movups xmm15, XMMWORD PTR [rcx+224]

	mov rax, QWORD PTR [rcx+ 0]
	mov [rsp], rax

	xor eax, eax
	ret

// not a standard funcall, not callable from C
// r12: func
// r13: user data
.globl VFiberStart
VFiberStart:
	mov eax, 1337
	push rax
	mov rcx, r13
	call r12
fiber_error:
	// the func better not return OR ELSE
	jmp abort
