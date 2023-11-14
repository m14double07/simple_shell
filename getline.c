#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 10;
	char *buf = NULL;

	printf("Enter name ");
	getline(&buf, &n, stdin);

	printf("Name is %sBuffer size is $id\n", buf, n);

	free(buf);

	return 0;
}
