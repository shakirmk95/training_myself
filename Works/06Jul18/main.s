	.file	"main.c"
	.text
	.globl	checkTriangle
	.type	checkTriangle, @function
checkTriangle:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L2
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L2
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jle	.L3
	movl	-24(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L3:
	movl	-28(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L2:
	movl	-24(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L6
	movl	-24(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L6
	movl	-24(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jle	.L7
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L7:
	movl	-28(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L6:
	movl	-28(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L5
	movl	-28(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L5
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L9
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L9:
	movl	-24(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
.L5:
	movl	-12(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	cmpl	-4(%rbp), %eax
	jle	.L10
	movl	$1, %eax
	jmp	.L11
.L10:
	movl	$0, %eax
.L11:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	checkTriangle, .-checkTriangle
	.section	.rodata
.LC0:
	.string	"ERROR"
	.text
	.globl	toNumb
	.type	toNumb, @function
toNumb:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L13
.L16:
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	cmpl	$9, %eax
	jbe	.L14
	movl	$1, -20(%rbp)
	jmp	.L15
.L14:
	addl	$1, -24(%rbp)
.L13:
	movl	-24(%rbp), %eax
	movslq	%eax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	strlen
	cmpq	%rax, %rbx
	jb	.L16
.L15:
	cmpl	$0, -20(%rbp)
	jne	.L17
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	atoi
	jmp	.L19
.L17:
	movl	$.LC0, %edi
	call	puts
	movl	$0, %edi
	call	exit
.L19:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	toNumb, .-toNumb
	.section	.rodata
.LC1:
	.string	"YES"
.LC2:
	.string	"NO"
	.text
	.globl	main
	.type	main, @function
main:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	cmpl	$4, -20(%rbp)
	je	.L21
	movl	$.LC0, %edi
	call	puts
	jmp	.L20
.L21:
	movq	-32(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	toNumb
	movw	%ax, -10(%rbp)
	movq	-32(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	toNumb
	movw	%ax, -8(%rbp)
	movq	-32(%rbp), %rax
	addq	$24, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	toNumb
	movw	%ax, -6(%rbp)
	cmpw	$0, -10(%rbp)
	jle	.L23
	cmpw	$0, -8(%rbp)
	jle	.L23
	cmpw	$0, -6(%rbp)
	jle	.L23
	movswl	-6(%rbp), %edx
	movswl	-8(%rbp), %ecx
	movswl	-10(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	checkTriangle
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L24
	movl	$.LC1, %edi
	call	puts
	jmp	.L20
.L24:
	movl	$.LC2, %edi
	call	puts
	jmp	.L20
.L23:
	movl	$.LC0, %edi
	call	puts
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
