#include "shell.h"

int execute(int argc, char **argv, char **env)
{
	char *arguments;
	int ex;

	argv = split_string(arguments, " ", &argc);

	ex = execve(argv[0], argv, env);

	
	if (ex == -1)
	perror("Error in execve");
	exit(EXIT_FAILURE);
}
