#include "compiler.h"

#include <stdio.h>
#include <unistd.h>
#include "asm.h"

/* generates a.asm from input brainfuck string */
static void
generate_assembly (const char *code, size_t cs)
{
    /* TODO: use fprintf over fputs */
    FILE *outputf = fopen("/tmp/a.asm", "a");
    fputs(ASM_HEADER, outputf);

    int loop_count = 0;

    for (int i = 0; i < (int)cs; i++)
    {
        char current_char = code[i];

        switch (current_char)
        {
        case '>':
            fputs(ASM_INC_PTR, outputf);
            break;
        case '<':
            fputs(ASM_DEC_PTR, outputf);
            break;
        case '+':
            fputs(ASM_INC_VAL, outputf);
            break;
        case '-':
            fputs(ASM_DEC_VAL, outputf);
            break;
        case '.':
            fputs(ASM_PUTC, outputf);
            break;
        case ',':
            fputs(ASM_GETC, outputf);
            break;
        case '[':
            fputs(get_loop_label(loop_count), outputf);
            loop_count++;
            break;
        case ']':
            loop_count--;
            fputs(get_loop_check(loop_count), outputf);
            break;
        }
    }

    fputs(ASM_FOOTER, outputf);
    fclose(outputf);
}

/* generate a.out binary */
void
generate_executable (const char *code, size_t cs)
{
    generate_assembly(code, cs);
    system("nasm -felf64 -o /tmp/a.o /tmp/a.asm");
    system("ld -o a.out /tmp/a.o");

    /* clean build files */
    system("rm -f /tmp/a.o /tmp/a.asm");
}
