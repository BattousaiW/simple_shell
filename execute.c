#include "shell.h"
/**
 * execute - execute builtins and commands
 * @args: pointer to string with arguments to execute
 * args[0] may be a builtin or command (i.e. "cd", "ls")
 * @dir: string of paths
 * Return: int (check) value for loop, if 1 the loop will continue
 */
int execute(char **args, char **dir)
{
int i = 0, check = 1;
char *builtin_str[] = {"cd", "help", "exit", NULL};

if (args[0] == NULL)
{
return (1);
}
for (i = 0; builtin_str[i]; i++)
{
if (_strcmp(builtin_str[i], args[0]) == 0)
break;
}
switch (i)
{
case 0:
check = shell_cd(args);
break;
case 1:
check = shell_help();
break;
case 2:
check = shell_exit();
break;
default:
check = start_child(args, dir);
break;
}
return (check);
}
