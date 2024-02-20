#ifndef SHELL_H
#define SHELL_H

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <unistd.h>
	#include <sys/wait.h>

	#define LSH_RL_BUFSIZE 1024
	#define LSH_TOK_BUFSIZE 64
	#define LSH_TOK_DELIM " \t\r\n\a"

	
	int lsh_execute(char **args);
	int lsh_launch(char **args);
	char **lsh_split_line(char *line);
	char *lsh_read_line(void);
	void lsh_loop(void);


#endif
