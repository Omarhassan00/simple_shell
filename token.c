#include "shell.h"
char **call(char *c)
{ 
	char *call = NULL, *rush = NULL; 
	char **order = NULL;
       	int car  = 0, i = 0; 
	if 
		(!c) 
			return (NULL);
       	rush = up(c); 
	call = strtok(rush, DELIM);

	while (call)
	{	
	car++; call = strtok(NULL, DELIM); 
	} free(rush), rush = NULL; 
	order = malloc(sizeof(char *) * (car + 1 ));
		       	if (!order) 
			{
			free(c), c = NULL;
		       	return (NULL); 
			} 
			call = strtok(c , DELIM); 
			while
		       	(call) { 
			order[i] = up(call);
		       	call = strtok(NULL, DELIM);
		       	i++;
			}	
			free(c), c = NULL;
		       	order[i] = NULL; 
			return (order); 
} 
