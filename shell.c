#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

/**
 * main - A simple shell program
 * Return: 0 on success, EXIT_FAILURE on error
 */
int main(void)
{
	char command[MAX_COMMAND_LENGTH];
	pid_t pid; /* Declaration moved here */

	while (1)
	{
		printf("$ "); /* Display prompt */
		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			/* Handle end of file condition (Ctrl+D) */
			printf("\nExiting shell...\n");
			break;
		}

		/* Remove newline character at the end */
		command[strcspn(command, "\n")] = '\0';

		if (command[0] == '\0')
		{
			continue; /* If input is empty, continue to next iteration */
		}

		if (strcmp(command, "exit") == 0)
		{
			break; /* Exit the shell if "exit" command is entered */
		}

		/* Fork a child process */
		pid = fork();

		if (pid == -1)
		{
			perror("fork"); /* Error occurred */
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			/* Child process */
			/* Execute the command */
			execlp(command, command, NULL);
			/* If exec fails, print error message and exit child process */
			perror("execlp");
			exit(EXIT_FAILURE);
		}
		else
		{
			/* Parent process */
			/* Wait for the child process to finish */
			int status;

			waitpid(pid, &status, 0);
		}
	}

	return (0);
}
