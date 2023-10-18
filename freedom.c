#include "shell.h"

/**
 * free_dog - a function that causes freedom.
 * @doggy: a pointer to a character pointer.
 * Return: void.
 */
void free_dog(char **doggy)
{
int x;
for (x = 0; doggy[x] != NULL; x++)
{
free(doggy[x]);
}
free(doggy);
}
