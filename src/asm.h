#ifndef ASM_H
#define ASM_H

#define ASM_HEADER "section .bss\nmemory resb 30000\nsection .text\nglobal _start\n_start:\nmov rsi, memory\n"
#define ASM_FOOTER "mov rax, 60\nmov rdi, 0\nsyscall\n"
#define ASM_INC_PTR "inc rsi\n"
#define ASM_DEC_PTR "dec rsi\n"
#define ASM_INC_VAL "inc byte [rsi]\n"
#define ASM_DEC_VAL "dec byte [rsi]\n"
#define ASM_PUTC "mov rax, 1\nmov rdi, 1\nmov rdx, 1\nsyscall\n"
#define ASM_GETC "mov rax, 0\nmov rdi, 0\nmov rdx, 1\nsyscall\n"

extern char *get_loop_label (int loop_count);
extern char *get_loop_check (int loop_count);

#endif
