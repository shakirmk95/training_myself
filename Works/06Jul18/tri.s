	.file	"tri.c"
	.text
	.globl	checkTriangle
	.type	checkTriangle, @function
checkTriangle:
.LFB0:
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
.LFE0:
	.size	checkTriangle, .-checkTriangle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
