#include "shell.h"
void frarry(char **mrk)
{
	int i;
	if (!mrk)
		return (NULL) ;

	for (i = 0 ; mrk[i]; i++)
	{
		free(mrk[i]);
		mrk[i] = NULL ;
	}
	free(mrk), mrk = NULL;
}
