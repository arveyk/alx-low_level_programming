; program to print hello, Holberton



section .text
	default	rel
	extern printf
	global main

main:
	push rbp

	mov rdi, fmt
	mov rsi, words
	mov rax, 0

	call printf wrt ..plt

	pop rbp
	mov rax, 0
	ret

section	.data
	words: db	"Hello, Holberton", 10, 0
	fmt: db		"%s"

