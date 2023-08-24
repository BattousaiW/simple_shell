#include "shell.h"
#define TOK_DEL " \t\r\n\a"

/**
 * token - break a string in separated tokens using a set of delimiters
 * @c: string from standar input returned from readline function
 * Return: array of tokens (strings)
 */
char **token(char *c)
{
int bufsize = _wordcount(c, ' '), i = 0;
char **tokens = NULL;
char *token = NULL;

tokens = malloc(sizeof(char *) * (bufsize + 1));
if (!tokens)

{
free(tokens);
perror("allocation error");
exit(EXIT_FAILURE);
}

token = strtok(c, TOK_DEL);

while (token != NULL)
{

tokens[i] = token;
i++;

token = strtok(NULL, TOK_DEL);
}
tokens[i] = NULL;

return (tokens);
}
