#include "shell.h"

/**
 * main - entry point to the program.
 * @env: the environment variable.
 * Return: Always 0.
 */

int main(char **env)
{
char *s_input = NULL;
char **s_array;
pid_t s_childpid;
int x, status;
while (1)
{
s_input = our_prompt();
if (s_input == NULL)
exit(1);
s_array = tokenize(s_input);
if (s_array != NULL)
{
s_childpid = fork();
if (s_childpid == -1)
{
perror("Error, could not fork");
for (x = 0; s_array[x] != NULL; x++)
{
free(s_array[x]);
}
free(s_array);
exit(1);
}
if (s_childpid == 0)
{
if (execve(s_array[0], s_array, env) == -1)
{
perror("Error executing command");
exit(1);
}
}
else
{
wait(&status);
}
for (x = 0; s_array[x] != NULL; x++)
{
free(s_array[x]);
}
free(s_array);
}
free(s_input);
}
return (0);
}
