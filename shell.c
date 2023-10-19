#include "shell.h"

/**
 * main - entry point to the program.
 * Return: Always 0.
 */
int main(void)
{
char *s_input = NULL;
char **s_array;
while (1)
{
s_input = our_prompt();
if (s_input == NULL)
exit(1);
s_array = tokenize(s_input);
if (s_array != NULL)
{
exec_cmd(s_array);
}
free(s_input);
}
return (0);
}
