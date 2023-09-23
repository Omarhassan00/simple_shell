#include "shell.h"

int sh_exit(char **args);
char *builtin_str[] = {"exit"};
int (*builtin_func[])(char **) = {&sh_exit};

/*
*sh_num_builtins - amount of built
*Return: the amont
*/

int sh_num_builtins(void)
{
	return (sizeof(builtin_str) / sizeof(char *));
}

/**
*sh_exit - quit from the shell
*@args: List
*Return: Always 200
*/

int sh_exit(char **args)
{
	(void)args;
	free(args);
	return (200);
}

/**
*_fork_fun - executed the command
*@arg: order
*@av: type of prosses
*@env: variables
*@lineptr: type by user entry
*@np: Process name
*@c: done the first argument
*Return: 0 when sucssus and error when failed
*/
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c)
{
	pid_t child_pid;
	int status, i = 0;
	char *format = "%s: %d: %s: not found\n";

	if
		(arg[0] == NULL)
		return (1);
	for
		(i = 0; i < sh_num_builtins(); i++)
	{
		if
			(_strcmp(arg[0], builtin_str[i]) == 0)
			return (builtin_func[i](arg));
	}
	child_pid = fork();
	
	if
		(child_pid == 0)
	{
		if
			(execve(arg[0], arg, env) == -1)
		{
			fprintf(stderr, format, av[0], np, arg[0]);
			
			if (!c)
			free(arg[0]);
			free(arg);
			free(lineptr);
			exit(errno);
		}
	}
	else
	{
		wait(&status);
		return (status);
	}
	return (0);
}
