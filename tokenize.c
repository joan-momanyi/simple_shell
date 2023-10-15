#include "shell.h"

/**
 * tokenize - A function that parses a string.
 * @strg: the string.
 * Return: an array of the parsed string.
 */
char **tokenize(char *strg)
{
int x = 0, arg_count = 0;
char *tkn, *strg_cpy;
char **array;
strg_cpy = _strdup(strg);
tkn = strtok(strg_cpy, " \n");
if (tkn == NULL)
{
free(str_cpy);
exit(1);
}
while (tkn)
{
arg_count++;
tkn = strtok(NULL, " \n");
}
free(str_cpy);
array = (char **)malloc((arg_count + 1) * sizeof(char *));
if (array == NULL)
{
perror("Error allocating memory");
exit(1);
}
tkn = strtok(strg, " \n");
if (tkn == NULL)
{
exit(1);
}
while (tkn)
{
array[x] = _strdup(tkn);
if (array[x] == NULL)
{
exit(1);
}
x++;
tkn = strtok(NULL, " \n");
}
array[x] = NULL;
return (array);
}
