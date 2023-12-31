#include "shell.h"

/**
 * main - Reads the user input
 * Return: 0
 */

int main(void)
{
	char *cmd = NULL, *cmd_cpy = NULL, *token = NULL;
	char *delim = " ";
	size_t n = 0;
	int argc = 0, i = 0;
	char **argv = NULL;


	if (getline(&cmd, &n, stdin) == -1)
	{
		perror("getline failed");
		return (-1);
	}


	if (cmd[0] == '\n')
	{
		_print("No command entered.\n");
		free(cmd);
		return (0);
	}

	cmd_cpy = strdup(cmd);

	if (cmd_cpy == NULL)
	{
		perror("strdup failed");
		free(cmd);
		return (-1);
	}

	token = strtok(cmd_cpy, delim);

	while (token)
	{
		argc++;
		token = strtok(NULL, delim);
	}

	_print("%d\n", argc);

	argv = malloc(sizeof(char *) * (argc + 1));

	if (argv == NULL)
	{
		perror("malloc failed");
		free(cmd_cpy);
		free(cmd);
		return (-1);
	}

	token = strtok(cmd, delim);
	i = 0;

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
		_print("%s\n", argv[i]);
		i++;
	}


	free(cmd_cpy);
	free(cmd);
	free(argv);

	return (0);
}
