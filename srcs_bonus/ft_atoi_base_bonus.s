section .text
	global ft_atoi_base
    extern ft_strlen

ft_atoi_base:
    xor rax, rax
    xor rcx, rcx
    xor r10, r10
    xor r15, r15
    mov r8, 1
    mov rcx, rdi
    mov rdi, rsi
    call ft_strlen
    cmp rax, 0
    je ft_err
    cmp rax, 1
    je ft_err
    mov r9, rax
    call check_base
    cmp r8, 0
    jl neg_rax
    ret

ft_err:
    mov rax, 0
    ret

neg_rax:
    neg rax
    ret

incr1:
    inc r10 

check_base:
    xor r11, r11
    cmp byte[rdi + r10], 43
    je ft_err
    cmp byte[rdi + r10], 45
    je ft_err
    cmp r10, 0
    jne check_base_bis
    call incr1
    ret

incr:
    inc r11 

check_base_bis:
    mov rax, 0
    cmp byte[rdi + r10], 0
    je convert
    cmp r11, r10
    je incr1
    mov al, byte[rdi + r10]
    cmp al, byte[rdi + r11]
    je ft_err
    cmp r11, r10
    jne incr

incr3:
    inc r15

convert:
    mov r11, 0
    cmp byte[rcx + r15], 45
    je neg_nb
    cmp byte[rcx + r15], 43
    je incr3
    cmp byte[rcx + r15], 10
    je incr3
    cmp byte[rcx + r15], 9
    je incr3
    cmp byte[rcx + r15], 13
    je incr3
    cmp byte[rcx + r15], 12
    je incr3
    cmp byte[rcx + r15], 11
    je incr3
    cmp byte[rcx + r15], 32
    je incr3
    cmp byte[rcx + r15], 0
    jne comp
    ret

neg_nb:
    neg r8 
    call incr3

incr2:
    inc r11

comp:
    xor r13, r13
    mov al, byte[rcx + r15]
    cmp al, byte[rdi + r11]
    jne incr2
    cmp al, 0
    jne nb
    call incr3
    ret

nb:
    mul r9
    add rax, r11
    inc r11
    call comp
    ret
