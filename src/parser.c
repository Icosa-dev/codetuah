#include "parser.h"

#include <string.h>
#include <stdlib.h>

/* NOTE: count is an output for the function and will be mutated
 * The output also is heap allocated which means it should be freed */
static char **
split_by_whitespace (const char *str, int *count)
{
    char *str_copy = strdup(str);
    char *token;
    char **result = NULL;
    *count = 0;

    token = strtok(str_copy, " \t\n\r"); /* Split by whitespace characters */
    while (token != NULL)
     {
        result = realloc(result, (*count + 1) * sizeof(char *));
        result[*count] = strdup(token);
        (*count)++;
        token = strtok(NULL, " \t\n\r");
     }

    free(str_copy);
    return result;
}

/* NOTE: the return is heap allocated meaning it should be freed */
char *
parse_codetuah(const char *str, size_t *s)
{
    int token_count = 0;
    char **tokens = split_by_whitespace(str, &token_count);
    char *result = (char *)malloc(token_count * sizeof(char));

    for (int i = 0; i < token_count; i++)
     {
        char *current_token = tokens[i];

        if      (strcmp(current_token, "hawk")  == 0) result[i] = '+';
        else if (strcmp(current_token, "tuah")  == 0) result[i] = '-';
        else if (strcmp(current_token, "spit")  == 0) result[i] = '>';
        else if (strcmp(current_token, "on")    == 0) result[i] = '<';
        else if (strcmp(current_token, "that")  == 0) result[i] = ',';
        else if (strcmp(current_token, "thang") == 0) result[i] = '.';
        else if (strcmp(current_token, "[")     == 0) result[i] = '[';
        else if (strcmp(current_token, "]")     == 0) result[i] = ']';
     }

    for (int i = 0; i < token_count; i++)
        free(tokens[i]);
    free(tokens);

    *s = token_count;
    return result;
}
