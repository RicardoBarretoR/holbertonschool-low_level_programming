#include "holberton.h"
/**
 *print_triangle - function that prints a triangle
 *@size: The size of the triangle
 */
void print_triangle(int size)
{
	int t;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (t = 0; t < size; t++)
	{
		for (h = size; h > 0; h--)
		{
			if (h > t + 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
