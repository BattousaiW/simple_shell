#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (0);
}

/**
 * _wordcount - count the words without the ':' separator, ascii 58
 * @string: pointer to the string to count words separeted with delim
 * @delim: delimiter for tokenize strings
 * Return: the number of words in string
 */

int _wordcount(char *string, char delim)
{
int i = 0, words = 0;

if (string)
{
for (; string[i] != '\0'; i++)
{
if (string[i] == delim)
words++;
}
words++;
}
return (words);
}
