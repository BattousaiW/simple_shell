BeeShell
A simple shell interpreter that uses system functions and commands stored in the operating system.

To compile program:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o BeeShell.

Header file:
shell.h

program execution:
main.c

 main - program entry point

 required libraries

stdio.h
stdlib.h
string.h
ctype.h
unistd.h
sys/types.h
sys/stat.h
fcntl.h
errno.h
signal.h
sys/wait.h

BUILTINS
shell_cd - builtin change directory
shell_exit - built in to exit the shell
shell_help - display help in the shell

Process ID / fork
start_child - fork process and start command execution

Execute
execute - execute builtins and commands

fullpath - get the full path of the environment

set_env - get the environment variables

get_env - get the value of an environment variable

token - break a string in separated tokens using a set of delimiters
