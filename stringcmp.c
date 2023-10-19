#include "shell.h"

/**
 * _strcmp - compares two strings
 * @str1:string to compare to str2
 * @str2:string to compare to str1
 * @n: size of something sha.
 * Return: 0.
 */
int _strcmp(const char *str1, const char *str2, size_t n)
{
while (n > 0)
{
if (*str1 == '\0' || *str1 != *str2)
{
return (*str1 - *str2);
}
str1++;
str2++;
n--;
}
return (0);
}
