#include "holberton.h"
/**
 *print_rev - Fuction that prints a string, in reverse
 *@s: pointer character
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
