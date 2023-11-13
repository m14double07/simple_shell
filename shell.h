#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/stat.h>

void display_prompt(void);
void read_command(char *userInput, size_t bufferSize);
int _print(char *c);
int execute(int argc, char **argv, char **env);
bool file_status(char *path, struct stat *bufstat);

#endif
