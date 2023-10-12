#ifndef SHELL_H
#define SHELL_H



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void our_print(const char *statement);
void always_prompt(void);
void read_input(char *statement, ssize_t size);
void execute_input(cont char *statement);




#endif
