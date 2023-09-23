#include "shell.h"

/**
*_strcat - strings
*@dest: Destinations
*@src: Origin
*Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
int i, j = 0;

for (i = 0; dest[i] != '\0'; i++)
{}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
*_strcmp - strings
*@s1: string
*@s2: one more string
*Return: deffrints returns
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
int val;

while
  (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
i++;
val = s1[i] - s2[i];
return (val);
}

/**
*_strlen - size of the string
*@s: measure
*Return: length
*/

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != 0; i++);

return (i);
}

/**
*_strncmp - two strings.
*@s1: string
*@s2: string two
*@n: characters
* Return: multyplay
*/

size_t _strncmp(char *s1, char *s2, size_t n)
{
size_t i, j;

for (j = 0; s1[j] != '\0' && j < n; j++)
{
i = s1[j] - s2[j];

if
  (i != 0)
{
return (i);
}
}
return (0);
}

/**
*_strcpy - copies the string
*@dest: the destination
*@src: the source
*Return: pointer
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i + 1] = 0;
return (dest);
}
