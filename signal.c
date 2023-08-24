#include "shell.h"
/**
 * signal_function - ignore ctrl input and prints prompt again
 * @c: takes in int from signal
 */
void signal_function(int c)
{
(void)c;
write(STDOUT_FILENO, "\n$ ", 3);
}
