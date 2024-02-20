#include "shell.h"

/**
 * main - A simple shell program
 * @ac: The number of arguments
 * @av: The array of arguments
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on error
 */
int main(int ac, char **av)
{
	/* Load config files, if any. */

	/* Run command loop. */
	lsh_loop();

	/* Perform any shutdown/cleanup. */

	return (EXIT_SUCCESS);
}
