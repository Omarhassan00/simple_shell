#include "shell.h"

/**
 * interactive - make value return 
 * @info: ip show
 *
 * Return: always 1 when success and 0 when error
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - the character make it
 * @c: check the value
 * @delim: string object
 * Return: always 1 and 0 if failed
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if 
			(*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - character of the alphabet
 *@c: change character to put
 *Return: always 1 when alphabet and 0 if it other
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - make any string to be integer
 *@s: change the string
 *Return: always 0 when it's string and character if it other
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if
			(s[i] == '-')
			sign *= -1;

		if
			(s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if
			(flag == 1)
			flag = 2;
	}

	if
		(sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
