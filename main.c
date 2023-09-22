#include "shell.h"
/**
* main - shell fanction order work
* @n: number of alements
* @b: elememnt
* Return: © Always (success).
*/

int main(int n, char **b)

{
	 char *c = NULL;

	 char **order = NULL;

	 int store = 0;

	 (void) n;

	while (1)
	{
		c = read_line();

		if
		 (c == NULL) /* that is the ctr + D */
		 {
			 if ( isatty ( STDIN_FILENO))
				 write(STDOUT_FILENO, "\n" , 1);
		return (store);
		 }
	
		order = token(c);
		if
			(!order)
			continue;
		else
		store = _execute(order, b);
	}
}
