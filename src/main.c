#include <stdio.h>
#include <stdlib.h>

#include "compiler.h"

size_t
get_file_size(FILE *fp)
{
    long current_pos = ftell(fp);

    fseek(fp, 0, SEEK_END);
    long file_size = ftell(fp);
    fseek(fp, current_pos, SEEK_SET);

    return (size_t)file_size;
}

/* Remember to free. */
char *
read_file_to_string(FILE *fp)
{
    size_t file_size = get_file_size(fp);

    char *buffer = (char *)malloc((file_size + 1) * sizeof(char));
    if (buffer == NULL) return NULL;

    size_t bytes_read = fread(buffer, sizeof(char), file_size, fp);
    buffer[bytes_read] = '\0';  /* Null terminate the buffer */

    return buffer;
}

int
main (int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "codetuah: Error: too few arguments passed\n");
        return 1;
    }

    FILE *bf_file = fopen(argv[1], "r");
    if (bf_file == NULL)
    {
        fprintf(stderr, "codetuah: Error opening file\n");
        return 1;
    }

    char   *bf_source = read_file_to_string(bf_file);
    size_t  bf_size   = get_file_size(bf_file);

    generate_executable(bf_source, bf_size);

    fclose(bf_file);
    free(bf_source);
    return 0;
}
