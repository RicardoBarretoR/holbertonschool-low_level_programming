#include "holberton.h"
/**
 *puts_half - function that prints half of a string
 *@str: pointer character
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		while (n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = ((i - 1) / 2) + 1;
		while (n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
