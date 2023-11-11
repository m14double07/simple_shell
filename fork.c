#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	printf("Before fork I was tall\n");

	pid = fork();

	if (pid == -1)
        {
		perror("unsuccessful\n");
		return 1;
	}

	printf("After fork i became short\n");

	return 0;
}
