#include "shell.h"

/**
 * read_cmd - function that reads user input
 * @cmd: input to be read
 * Return: input or exit if user input is NULL
 */
char *read_cmd(void)
{
	char *cmd = NULL;
	size_t size = 0;
	ssize_t character_read;

	_printstrg("ENTER INPUT: ");

	character_read = getline(&cmd, &size, stdin);

	if (character_read == -1){
		_printstrg("Error while reading input.\n");
		free (cmd);
		return NULL;
	}
	if (cmd[character_read - 1] == '\n'){
		cmd[character_read -1] = '\0';
	}
	return cmd;
}
