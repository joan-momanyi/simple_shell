#include "shell.h"

/**
 * exec_cmd - function that executes the commands
 * @cmd: the command to be exexcuted
 */
void exec_cmd(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1){
		perror("fork");
		exit(EXIT_FAILURE);
	}

	else if (child_pid == 0){
		execve(command, **command, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else{
		wait(NULL);
	}
}
