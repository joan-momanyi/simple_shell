#include "shell.h"

/**
 * exec_cmd - function that executes the commands
 * @command: the command to be exexcuted
 */
void exec_cmd(char **command)
{
    pid_t child_pid = fork();
	char **env = environ;
	int status;

	if (child_pid == -1){
		perror("Error forking");
		free_dog(command);
		exit(EXIT_FAILURE);
	}

	else if (child_pid == 0){
	  if (execve(command[0], command, env) == -1){
		perror("Error executing command");
		exit(EXIT_FAILURE);
	  }
	}
	else{
		wait(&status);
	}
	free_dog(command);
}
