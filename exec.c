#include "shell.h"

int main(void)
{
	pid_t pid;
	int val;

	char *argv[] = {"/bin/ls", "-1", NULL};

	pid = fork();

	if (pid == -1)
	return (-1);

	if (pid == 0)
	{
	val = execve(argv[0], argv, NULL);

	if (val == -1)
	perror("error");

	else
	wait(NULL);
	printf("Done with execve\n");
	}

	return (0);
}

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
