#include "shell.h"
/**
* main - program entry point
 * @argc: number of arguments
 * @argv: aguments vector
 * @envp: environment variables
 * Return: always 0 when finish
 */

int main(int argc, char **argv, char **envp)
{
char *c = NULL, **args = NULL;
int status = 1, interactive = 0;
char **dir = NULL;

dir = set_env(envp);
(void)argc;
(void)argv;
interactive = (isatty(STDIN_FILENO));

while (status)
{
if (interactive == 1)
{
_puts("BeeShell<< $ ");
}
else
{
status = 0;
}
signal(SIGINT, signal_function);
c = read_line();
args = token(c);
status = execute(args, dir);
if (c)
free(c);
if (interactive == 0)
free(dir);
}
free(dir);
return (0);
}
