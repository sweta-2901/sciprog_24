	.file	"printing.c"
	.text
	.section	.rodata
	.align 8
.LC2:
	.string	"Account: %d Subtotal: %.2f Total: %.2f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, -4(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -8(%rbp)
	movss	.LC1(%rip), %xmm0
	movss	%xmm0, -12(%rbp)
	pxor	%xmm0, %xmm0
	cvtss2sd	-12(%rbp), %xmm0
	pxor	%xmm2, %xmm2
	cvtss2sd	-8(%rbp), %xmm2
	movq	%xmm2, %rdx
	movl	-4(%rbp), %eax
	movapd	%xmm0, %xmm1
	movq	%rdx, %xmm0
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$2, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1150964204
	.align 4
.LC1:
	.long	1173786870
	.ident	"GCC: (GNU) 11.4.1 20231218 (Red Hat 11.4.1-3)"
	.section	.note.GNU-stack,"",@progbits
