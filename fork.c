#include "shell.h"


int main(void)
{
	pid_t pid;
	char **argv;
	struct stat buf;

	if (!file_status(argv[0], buf))
	{
		perror("Error in file_status");
		exit(EXIT_FAILURE);
	}

	pid = fork();

	if (pid == -1)
        {
		perror("fork unsuccessful\n");
		return 1;
	}


	return 0;
}
