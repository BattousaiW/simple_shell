#include "shell.h"

/**
 * _strcat - concatenate two strings (dest + src)
 * @s1: the string to concatenate src
 * @s2: initial string
 * Return: the final and concatenated string
 */
char *_strcat(char *s1, char *s2)
{
unsigned int len1 = 0, len2 = 0, i = 0;
char *final_str = NULL;

if (s1)
len1 = _strlen(s1);
if (s2)
len2 = _strlen(s2);

final_str = malloc(sizeof(char) * (len1 + len2 + 1));

for (i = 0; i < len1; i++)
final_str[i] = s1[i];
for (; i < len1 + len2; i++)
final_str[i] = s2[i - len1];

final_str[i] = '\0';
return (final_str);
}

/**
 * _puts - puts function to print a string
 * @string: pointer to the string to be printed
 * Return: the string to print
 */

int _puts(char *string)
{
/* variable to save the length of the string */
int length = 0;

length = _strlen(string);
return (write(STDOUT_FILENO, string, length));
}

/**
 * _putchar - putchar  function
 * @c: the char variable to print
 * Return: print char
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _strlen - strlen function to get the length of a string
 * @string: pointer to the string
 * Return: the length of a string
 */

int _strlen(char *string)
{
int length = 0;

while (*(string + length))
{
length++;
}
return (length);
}

/**
 * _strcpy - copy the string
 * @dest: the buffer in where copy the string
 * @src: the string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int len = 0, i = 0;

while (src[len] != '\0')
{
len++;
}
for (i = 0; i <= len; i++)
{
dest[i] = src[i];
}
return (dest);
}
