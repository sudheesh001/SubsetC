	.text
.globl _main
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	movl $5,%eax
	movl %eax,a
	movl $6,%eax
	movl %eax,b


	movl	result, %eax
	movl	%eax, 4(%esp)
	movl	$printtext1, %eax
	movl	%eax, (%esp)
	call	_printf

	movl	size, %eax
	movl	%eax, 4(%esp)
	movl	$printtext2, %eax
	movl	%eax, (%esp)
	call	_printf

	movl	$printtext3, %eax
	movl	%eax, (%esp)
	movl	$0, %ecx
print_a:
	cmpl	%ecx, size
	jz 	exit
	movl	a(,%ecx,4), %eax
	movl	%eax, 4(%esp)
	movl	%ecx, temp_count
	call	_printf
	movl	temp_count, %ecx
	addl	$1, %ecx
	jmp 	print_a
exit:


	movl %ebp, %esp
	popl %ebp
	ret
.data
	printtext1: .ascii "result = %d\n\0"
 	printtext2: .ascii "size = %d\n\0"
 	printtext3: .ascii "%d, \0"
 	temp_count: .long 0
	argc: .long 0
	argv: .long 0
	a: .long 0
	b: .long 0
