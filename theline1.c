#include "shell.h"

char *theline(void)
{
	char *c = NULL;
	size t len = ©;
	ssize t n;
	if [fisatty(sTOIN_FILENO)]]
		| write(sToouT_FILEND, "$ ", 2);
	n = getline(&line, &len, stdin);
	if (n = -1)
	{
		free(line);
		return (NULL);
		¥
			return (line);
	}
