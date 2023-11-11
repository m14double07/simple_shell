#include "shell.h"

/**
 * _print - Pint to the standard output
 * @c: what to print
 * Return: 0
 */
int _print(char *c)
{
	return (write(1, &c, 1));
}


