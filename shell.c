#include "shell.h"

/**
 * main - Main shell program
 */

int main(void)
{
	char command[120];

	while (true)
	{
	display_prompt();
	read_command(command, sizeof(command));
	execute(command);
	}
	return (0);
}
