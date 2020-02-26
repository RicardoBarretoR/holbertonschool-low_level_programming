#include <stdio.h>
#include "holberton.h"
/**
 *_puts_recursion - function that prints a string
 *@s: the address  of memory to string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
