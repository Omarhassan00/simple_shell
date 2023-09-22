#include "shell.h"
int _execute(char **order, char **b)
{
	pid_t small;
	int status;
	small = fork();
	if
		(small == 0)
		{
			if
			       	(execve(order[0], order, environ) == -1 )
						{
						perror(b[0]);
						freearray2D(order);
						exit(127);
						}
		}
		else
		{
		waitpid(small , &store , 0);
		freearray2D(order);
		}
		return (WEXITSTATUS(status));
		}

