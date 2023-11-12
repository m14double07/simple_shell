#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t ppid;

	/* Code written before fork was called */

	/* Call fork */
	pid = fork();

	if (pid == -1)
	{
		perror("Fork unsuccessful\n");
		return (1);
	}

	if (pid == 0)
	{
		sleep(40);
		printf("I am the child\n");
	}
	else
	{
		ppid = getpid();
		printf("Parent PID is: %u\n", ppid);
	}

	return (0);
}
