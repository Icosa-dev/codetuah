#ifndef ASM_H
#define ASM_H

#include "asm.c"

/* the start and end of the compiler's assembly output */
const char *ASM_HEADER = "section .bss\nmemory resb 30000\nsection .text\nglobal _start\n_start:\nmov rsi, memory\n";
const char *ASM_FOOTER = "mov rax, 60\nmov rdi, 0\nsyscall\n";

/* pointer manipulator instructions */
const char *ASM_INC_PTR = "inc rsi\n";
const char *ASM_DEC_PTR = "dec rsi\n";

/* value manipulator instructions */
const char *ASM_INC_VAL = "inc [rsi]\n";
const char *ASM_DEC_VAL = "dec [rsi]\n";

/* IO instructions */
const char *ASM_PUTC = "mov rax, 1\nmov rdi, 1\nmov rdx, 1\nsyscall\n";
const char *ASM_GETC = "mov rax, 0\nmov rdi, 0\nmov rdx, 1\nsyscall\n";

/* loop instructions */
extern char *get_loop_label (int loop_count);
extern char *get_loop_check (int loop_count);

#endif
