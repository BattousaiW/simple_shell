#include "shell.h"
/**
 * set_env - get the environment variables
 * @env: pointer to the environment variables
 * Return: pointer to array of paths
 */
char **set_env(char **env)
{
char *path = get_env("PATH", env);
char **pathparsed = fullpath(path, ENVDELIM);

return (pathparsed);
}
