#include "holberton.h"
/**
 *print_diagonal - function that draws a diagonal line
 *@n: numbers of times the character
 */
void print_diagonal(int n)
{
	int c;
	int f;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (c = 1; c <= n; c++)
	{
		for (f = 1; f <= c; f++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
