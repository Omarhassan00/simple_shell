#include "shell.h"
int _execute(char **order, char **b)
{
	pid_t small;
	int store;
	small = fork();
	if
		(small == 0)
		{
			if
			       	(execve(order[0], order, come) == -1 )
						{
						perror(b[0]);
						frarry(order);
						exit(127);
						}
		}
		else
		{
		waitpid(small , &store , 0);
		frarry(order);
		}
		return (WEXITSTATUS(status));
		}

