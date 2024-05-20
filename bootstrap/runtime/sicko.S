.intel_syntax noprefix
#ifdef __linux__
.section .text
.globl VFfiCallImpl
.type VFfiCallImpl, @function

// signature: void VFfiCallImpl(funcall_regs * regs);
VFfiCallImpl:
	push rbp
	mov rbp, rsp

	push r12
	push r12
	mov r12, rdi

	mov rcx, QWORD PTR [r12+192]
	sub rsp, rcx

	lea rsi, [r12+200]
	mov rdi, rsp
	rep movsb

	mov rax, [r12+ 8]

	mov rdi, QWORD PTR [r12+16]
	mov rsi, QWORD PTR [r12+24]
	mov rdx, QWORD PTR [r12+32]
	mov rcx, QWORD PTR [r12+40]
	mov  r8, QWORD PTR [r12+48]
	mov  r9, QWORD PTR [r12+56]

	movups xmm0, XMMWORD PTR [r12+ 64]
	movups xmm1, XMMWORD PTR [r12+ 80]
	movups xmm2, XMMWORD PTR [r12+ 96]
	movups xmm3, XMMWORD PTR [r12+112]
	movups xmm4, XMMWORD PTR [r12+128]
	movups xmm5, XMMWORD PTR [r12+144]
	movups xmm6, XMMWORD PTR [r12+160]
	movups xmm7, XMMWORD PTR [r12+176]

	mov r10, QWORD PTR [r12+0]
	call r10

	mov QWORD PTR [r12+8], rax
	movups XMMWORD PTR [r12+ 64], xmm0
	movups XMMWORD PTR [r12+ 80], xmm1

	mov rdi, [r12+192]
	add rsp, rdi

	pop r12
	pop r12

	leave
	ret

.section .note.GNU-stack,"",@progbits
#endif
#ifdef _WIN64
.section .text
.globl VFfiCallImpl
VFfiCallImpl:
	push rbp
	mov rbp, rsp

	push r12
	push r12
	mov r12, rcx

	mov r8, rdi
	mov r9, rsi

	mov rcx, QWORD PTR [r12+112]
	sub rsp, rcx

	lea rsi, [r12+120]
	mov rdi, rsp
	rep movsb
	mov rdi, r8
	mov rsi, r9

	mov rax, [r12+ 8]

	mov rcx, QWORD PTR [r12+16]
	mov rdx, QWORD PTR [r12+24]
	mov  r8, QWORD PTR [r12+32]
	mov  r9, QWORD PTR [r12+40]

	movups xmm0, XMMWORD PTR [r12+48]
	movups xmm1, XMMWORD PTR [r12+64]
	movups xmm2, XMMWORD PTR [r12+80]
	movups xmm3, XMMWORD PTR [r12+96]

	sub rsp, 32

	mov r10, QWORD PTR [r12+0]
	call r10

	add rsp, 32

	mov QWORD PTR [r12+8], rax
	movups XMMWORD PTR [r12+ 48], xmm0

	mov rcx, [r12+112]
	add rsp, rcx

	pop r12
	pop r12

	leave
	ret
#endif
