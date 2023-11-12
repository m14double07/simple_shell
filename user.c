#include "shell.h"

#include "shell.h"

#define MAX_INPUT_SIZE 1024

/**
 * read_command - Reads user input
 * @userInput: Command input by user
 * @bufferSize: Size of user input
 * Return: 0
 */

void read_command(char *userInput, size_t bufferSize)
{
	ssize_t bytes;
	bool for_pipe = false;

	userInput = NULL;
	bufferSize = 0;
	
	while (1 && !for_pipe)
	{
	if (isatty(STDIN_FILENO) == 0)
		for_pipe = true;

	bytes = getline(&userInput, &bufferSize, stdin);

	if (bytes == -1)
	{
	perror("Getline Error");
	free(userInput);
	exit(EXIT_FAILURE);
	}

	if (userInput[bytes - 1] == '\n')
	userInput[bytes - 1] = '\0';

	if (bytes == 1 && userInput[0] == EOF)
	{
	printf("Exiting the shell. Goodbye!\n");
	break;
	}

	if (strcmp(*userInput, "exit") == 0)
	{
		printf("Exiting the shell. Goodbye!\n");
		break;
	}

	free(userInput);

	}
}
