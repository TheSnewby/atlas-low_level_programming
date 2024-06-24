; semi-colon comments code
section .data ; section for constants
	howdy db 'Hello, World\n', 0 ; declares bytes of string to str with null term

section .text
	global _start ; start of code
_start: ; starts the ... start?
	mov rax, 1 ; copies 1 to rax. 1 is system call to write(output, buffer, buff_length). rax is io registry
	mov rdi, 1 ; 1st param. copies 1 to rdi. File descriptor of the standard file streams - stdin, stdout and stderr are 0, 1 and 2, respectively
	mov rsi, howdy ; 2nd param. copies the desired string to 2nd parameter
	mov rdx, 13 ; 3rd param. buffer buff_length
	syscall ; executes rax
	mov rax, 60 ; ends syscall with exit function
	mov rdi, 0 ; sets value of rdi to 0 to declare exit status a success
	; rsi & rdx do not need to be changed as exit(rdi) only requires one parameter
	; i'm curious if rsi & rdx's values can carry over in a file's next rax that requires 3 parameters.
	syscall ; executes exit

	; doesn't compile unless you add -nostartfiles flag to gcc