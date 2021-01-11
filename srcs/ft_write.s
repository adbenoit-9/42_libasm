section .text
	global ft_write
    extern __errno_location

ft_write:
    mov rax, 1
    syscall
    cmp rax, 0
    jl err
    ret

err:
    neg rax
    mov rcx, rax
    call __errno_location
    mov [rax], rcx
    mov rax, -1
    ret
