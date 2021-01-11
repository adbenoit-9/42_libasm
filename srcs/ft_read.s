section .text
	global ft_read
    extern __errno_location

ft_read:
    mov rax, 0
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
