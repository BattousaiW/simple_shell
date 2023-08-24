#include "shell.h"
/**
 * run_cmd - execute the comands or try to execute args[0]
 * @args: argumentes from input
 * @dir: string of paths
 * Return: always exit_success when done complete
 */

int run_cmd(char **args, char **dir)
{
int i = 0;
char *e_cmd = NULL;

for (i = 1; dir[i] != NULL; i++)
{
e_cmd = malloc(sizeof(char) * (strlen(dir[i]) +
_strlen(args[0] + 2)));
_strcpy(e_cmd, dir[i]);
e_cmd = _strcat(e_cmd, "/");
e_cmd = _strcat(e_cmd, args[0]);

if (access(e_cmd, X_OK) == 0)
{
if (execve(e_cmd, args, NULL) == -1)
{
perror("execve error");
}
exit(EXIT_FAILURE);
}
free(e_cmd);
}
if (dir[i] == NULL)
free(dir);

if (access(args[0], X_OK) == 0)
{
if (execve(args[0], args, NULL) == -1)
{
perror("execve error");
}
exit(EXIT_FAILURE);
}
exit(EXIT_SUCCESS);
}
