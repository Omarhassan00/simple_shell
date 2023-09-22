#include "shell.h"
/**
 * theline- read line every commend order
 *
 * Return: succesfull for c
 */
char *read_line(void)
{
	char *c = NULL;
	size_t len = 0;
	ssize_t n;

	if
		(isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	n = getline(&c, &len, stdin);
	if (n == -1)
	{
		free(c);
		return ();
	}

	return (c);
}
