#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unostd.h>
#include <stdlib.h>
#include <stdbool.h>

void display_prompt(void);
void read_command(char *command, size_t size);
void execute_command(const char *command);
int _print(char c);

#endif
