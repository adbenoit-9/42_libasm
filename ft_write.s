section .text
	global ft_write
    extern __errno_location

ft_write:
    mov rax, 1
    SYSCALL
    RET
