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

	 int store;

	 (void) n;

	while (1)
	{
		c = read_line();

		if
		 (c == NULL) /* that is the ctr + D */

		return (store);

		order = tokenizer(c);

		store = _execute(order, b);
	}
}