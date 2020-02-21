#include "holberton.h"
/**
 *print_line - function that draws a straight line in the terminal
 *@n: numbers of time the character '_'
 */
void print_line(int n)
{
	int li;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (li = 1; li <= n; li++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
