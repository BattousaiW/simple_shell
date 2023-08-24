#include "shell.h"

/**
 * shell_cd - builtin change directory
 * @args: arguments passed to cd
 * Return: always 1
 */
int shell_cd(char **args)
{
int check;

if (args[1] == NULL)

puts("Expected argument to cd");
check = chdir(args[1]);
free(args);
if (check != 0)
{
perror("Error:");
free(args);
}

return (1);
}

/**
 * shell_exit - built in to exit the shell
 * Return: always int 0 to exit the shell
 */

int shell_exit(void)
{

return (0);
}

/**
 * shell_help - display help in the shell
 * Return: always 1 to continue the loop
 */
int shell_help(void)
{
int i;
char *builtin_str[] = {
"cd",
"help",
"exit",
NULL
};

_puts("This Simple Shell \n");
_puts("Type program names and arguments, and hit enter.\n");
_puts("The following are built-ins:\n");
for (i = 0; builtin_str[i]; i++)
{
_puts(builtin_str[i]);
_putchar('\n');
}

return (1);
}
