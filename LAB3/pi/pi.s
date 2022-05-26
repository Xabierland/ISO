	.file	"pi.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"\302\277Quieres conocer al n\303\272mero PI? (S/N)"
.LC2:
	.string	"%f\n"
.LC3:
	.string	"Agur"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	call	getchar@PLT
	movb	%al, -1(%rbp)
	cmpb	$83, -1(%rbp)
	je	.L2
	cmpb	$115, -1(%rbp)
	jne	.L3
.L2:
	movq	.LC1(%rip), %rax
	movq	%rax, %xmm0
	leaq	.LC2(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L4
.L3:
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
.L4:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC1:
	.long	3229815407
	.long	1074340298
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
