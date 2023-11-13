#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
        pid_t pid;

        /* child process is created */
        pid = fork();

        /* if fork fails */
        if (pid == -1)
        {
                perror("Unsuccessful\n");
                return i;
        }

        /* in child process */
        if (pid == 0)
        {
                printf('child process\n');
        }

        /* in parent proces */
        else
        {
                wait(NULL);
                sleep (30);
                printf('Parent Process\n');
        }
