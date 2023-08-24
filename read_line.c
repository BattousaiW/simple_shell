#include "shell.h"
/**
 * read_line - read line from  input
 * Return: pointer to the line entered
 */
char *read_line(void)
{
char *input = NULL;

size_t buffer_size = 0;

if (getline(&input, &buffer_size, stdin) == -1)
{
free(input);

if (feof(stdin))
{
exit(EXIT_SUCCESS);
}
else
{
perror("getline failure\n");
exit(EXIT_FAILURE);
}
}
return (input);

}
