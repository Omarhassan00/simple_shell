#include "shell.h"

/**
 * _erratoi - string to the integer
 * @s: covered the string
 * Return: always 0 when it's success and 1 if it fail
 */
int _erratoi(char *s)
{
	int i = 0;
	unsigned long int result = 0;

	if
		(*s == '+')
		s++;
	for(i = 0;  s[i] != '\0'; i++)
	{
		if
			(s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			if
				(result > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (result);
}

/**
 * print_error - for error message
 * @info: info of factions
 * @estr: string for error type
 * Return: 0 when its success and 1 if its other ar failed 
 */
void print_error(info_t *info, char *estr)
{
	_eputs(info->fname);
	_eputs(": ");
	print_d(info->line_count, STDERR_FILENO);
	_eputs(": ");
	_eputs(info->argv[0]);
	_eputs(": ");
	_eputs(estr);
}

/**
 * print_d - function prints 10
 * @input: the user add
 * @fd: failed script 
 * Return: character numbers
 */
int print_d(int input, int fd)
{
	int (*__putchar)(char) = _putchar;
	int i, count = 0;
	unsigned int _abs_, current;

	if
		(fd == STDERR_FILENO)
		__putchar = _eputchar;
	if
		(input < 0)
	{
		_abs_ = -input;
		__putchar('-');
		count++;
	}
	else
		_abs_ = input;
	current = _abs_;
	for (i = 1000000000; i > 1; i /= 10)
	{
		if
			(_abs_ / i)
		{
			__putchar('0' + current / i);
			count++;
		}
		current %= i;
	}
	__putchar('0' + current);
	count++;

	return (count);
}

/**
 * convert_number - converter numbers
 * @num: variable of number
 * @base: the base
 * @flags: argument
 *
 * Return: string
 */
char *convert_number(long int num, int base, int flags)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if
		(!(flags & CONVERT_UNSIGNED) && num < 0)
	{
		n = -num;
		sign = '-';

	}
	array = flags & CONVERT_LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do	{
		*--ptr = array[n % base];
		n /= base;
	}
	while (n != 0);

	if
		(sign)
		*--ptr = sign;
	return (ptr);
}

/**
 * remove_comments - replaces '#' with '\0'
 * @buf: string address
 *
 * Return: Always 0 when success
 */
void remove_comments(char *buf)
{
	int i;

	for (i = 0; buf[i] != '\0'; i++)
		if
			(buf[i] == '#' && (!i || buf[i - 1] == ' '))
		{
			buf[i] = '\0';
			break;
		}
}
