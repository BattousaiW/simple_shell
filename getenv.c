#include "shell.h"

/**
 * get_env - get the value of an environment variable
 * @c: name of the environment variable
 * @env:pointer to the environment variables
 * Return: char* with the matching path
 */
char *get_env(const char *c, char **envp)
{
int i = 0, j = 0, compare = 0;

for (; envp[i] != NULL; i++)
{
for (; envp[i][j] != '='; j++)
{

compare = _strcmp((char *)c, envp[i]);
if (compare == 0)
{
return (envp[i]);
}
break;
}
}
return (envp[i]);
}
