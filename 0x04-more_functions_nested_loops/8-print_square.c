#include "holberton.h"
/**
 *print_square - function that prints a square
 *@size: size of the square
 */
void print_square(int size)
{
	int i;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (h = 0; h < size; h++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
