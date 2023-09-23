#include "shell.h"

/**
 * bfree - pointer and address
 * @ptr: the address
 *
 * Return: always 1 when success and 0 if else
 */
int bfree(void **ptr)
{
	if 
		(ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
