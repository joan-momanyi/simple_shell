#include "shell.h"

/**
 * _printstrg - a function that prints a strg.
 * @strg: the string to be printed.
 * Return: the number of characters printed.
 */
int _printstrg(char *strg)
{
int a;
if (strg == NULL)
exit(EXIT_FAILURE);
a = write(STDOUT_FILENO, strg, _strlen(strg));
if (a == -1)
{
perror("Could not print");
exit(EXIT_FAILURE);
}
else
return (a);
}
