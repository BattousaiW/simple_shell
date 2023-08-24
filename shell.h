#ifndef SHELL_H
#define SHELL_H

/*libs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/wait.h>

#define PROMPT "$ "

/*delimeter*/
#define ENVDELIM ":="

/* child process */
int start_child(char **args, char **dir);
int run_cmd(char **args, char **dir);


/*loop cycle*/
int execute(char **args, char **dir);
char *get_env(const char *c, char **env);
char **set_env(char **env);
char **token(char *c);
char **fullpath(char *path, char *envdelim);

/* string functions */
char *_strcat(char *str1, char *str2);
int _puts(char *string);
int _putchar(char c);
int word_count(char *str);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _wordcount(char *string, char delim);
char *read_line(void);
void signal_function(int c);


/*BuiltIns*/
int shell_cd(char **args);
int shell_help(void);
int shell_exit(void);


#endif
