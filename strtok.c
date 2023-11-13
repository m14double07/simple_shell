#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    const char *src = "Jesus loves us"; // Use const to declare string literals
    char *str = malloc(sizeof(char) * (strlen(src) + 1)); // +1 for the null terminator
    char *delim = " ";
    char *token;

    if (str == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Return an error code
    }

    strcpy(str, src);

    token = strtok(str, delim);

    while (token)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }

    free(str); // Don't forget to free the allocated memory
    return 0;
}
