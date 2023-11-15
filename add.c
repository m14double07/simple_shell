#include <stdio.h>
#include <unistd.h>

/**
 * main - Adds two numbers
 * Return: The sum of two numbers
 */


int main(void)
{
	int a;
	int b;
	pid_t ppid;

	int sum = a + b;

	printf("sum is %d\n", sum);

	ppid = getppid();
	printf("ppid is %u\n", ppid);

	return (0);
}
