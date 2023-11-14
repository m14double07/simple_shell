#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    char *cmd = NULL, *cmd_cpy = NULL, *token = NULL;
    char *delim = " \n";
    size_t n = 0;  // Use '=' instead of '+'
    int argc = 0, i = 0;  // Initialize argc to 0
    char **argv = NULL;

    printf("$ ");
    if (getline(&cmd, &n, stdin) == -1)
        return -1;

    cmd_cpy = strdup(cmd);

    token = strtok(cmd_cpy, delim);  // Use cmd_cpy instead of NULL

    while (token)
    {
        argc++;
        token = strtok(NULL, delim);
    }

    printf("%d\n", argc);

    argv = malloc(sizeof(char *) * (argc + 1));  // Allocate space for NULL pointer

    token = strtok(cmd, delim);

    i = 0;  // Reset i to 0

    while (token)
    {
        argv[i] = token;
        token = strtok(NULL, delim);
        i++;
    }
    argv[i] = NULL;

    i = 0;

    while (argv[i])
    {
        printf("%s\n", argv[i]);
        i++;
    }

    free(cmd);  // Add a semicolon at the end

    return 0;
}
