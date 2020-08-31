section .text
	global ft_strcmp

ft_strcmp:
    XOR rcx, rcx
    XOR rax, rax
    XOR al, al
    JMP cmp
    RET

incr:
    INC rcx

cmp:
    MOV al, byte[rdi + rcx]
    CMP al, byte[rsi + rcx]
    JE check1
    SUB al, byte[rsi + rcx]
    MOVSX rax, al
    RET

check1:
    CMP byte[rdi + rcx], 0
    JNE check2
    RET

check2:
    CMP byte[rsi + rcx], 0
    JNE incr
    RET