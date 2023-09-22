#include "shell.h"
char *up(const char *pt)
{	
	char *gp;
       	int i, len = 0; 
	if (pt == NULL)
	       	return (NULL);
       	while (*pt != '\0')
	{	
	len++;
       	pt++;
	}	
	pt = pt - len;
       	gp = malloc(sizeof(char) * (len + 1));
	if (gp == NULL)
	       	return (NULL);
       	for (i = 0; i <= len; i++)
	       	gp[i] = pt[i];
       	return (gp); 
	int _strcmp(char *s1, char *s2) 
	{ 
		int cmp;

		cmp = (int)*s1 - (int)*s2;
	       	while (*s1) 
		{
			if (*s1 != *s2)
			       	break;
		       	s1++;
		       	s2++;
		       	cmp = (int)*s1 - (int)*s2;
		}	
			return (cmp);
	}	
			int len(char *s)
		       	{ 
					int len = 0; 
					while (s[len])
					       	len++;
				       	return (len); 
					} 
					char *cat(char *dot, char *cod)
				       	{ 
						char *j = dot; 
						while (*j)
						       	j++; 
						while (*cod)
						{	
							*j = *cod;
						       	j++;
						       	cod++; 
						}
						*j = *cod;
					       	return (dot); 
					} 
					char cpy(char *dot, char *cod) 
	{ 
		int i = 0; 
		while (cod[i]) 
		{ 
			dot[i] = cod[i];
		       	i++; 
			

			
