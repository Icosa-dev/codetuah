#include "asm.h"

#include <stdio.h>

char *
get_loop_label (int loop_count)
{
    static char buffer[256];
    snprintf(buffer, 256, ".L%d", loop_count);
    return buffer;
}

char *
get_loop_check (int loop_count)
{
    static char buffer[256];
    snprintf(buffer, 256, "cmp byte [rsi], 0\njne .L%d\n", loop_count);
    return buffer;
}
