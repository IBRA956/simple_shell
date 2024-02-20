#include "shell.h"

/**
 * lsh_execute - Execute a command
 * @args: The array of arguments
 * Return: 1 if the shell should continue running, 0 if it should terminate
 */
int lsh_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		/* An empty command was entered. */
		return (1);
	}

	/* TODO: Add more built-in commands here */
	if (strcmp(args[0], "exit") == 0)
	{
		return (0);
	}

	return (lsh_launch(args));
}
