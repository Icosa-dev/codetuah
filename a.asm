section .bss
memory resb 30000
section .text
global _start
_start:
mov rsi, memory
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
.L0:
inc rsi
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc rsi
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc rsi
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc rsi
inc byte [rsi]
dec rsi
dec rsi
dec rsi
dec rsi
dec byte [rsi]
cmp byte [rsi], 0
jne .L0
inc rsi
inc byte [rsi]
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc rsi
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc rsi
inc byte [rsi]
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
dec rsi
dec rsi
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc rsi
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc byte [rsi]
inc byte [rsi]
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
dec byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc rsi
inc byte [rsi]
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
inc rsi
mov rax, 1
mov rdi, 1
mov rdx, 1
syscall
mov rax, 60
mov rdi, 0
syscall
