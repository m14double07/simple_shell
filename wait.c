#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;
	pid = fork();

	if (pid == -1)
	{
	perror("Unsuccessful\n");
	return (1);
	}

	else
	wait(NULL);
	sleep (30);
}
