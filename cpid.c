#include "shell.h"
/**
 * start_child - fork process and start command execution
 * @args: pointer to strings of args
 * @dir: string of path
 * Return: always 1 to continue the loop
 */

int start_child(char **args, char **dir)
{
pid_t pid;
int status;
pid = fork();

if (pid == 0)
{
run_cmd(args, dir);
}
if (args)
free(args);

if (pid < 0)
{
perror("Error:");
}
else
{
wait(&status);
}

return (1);
}
