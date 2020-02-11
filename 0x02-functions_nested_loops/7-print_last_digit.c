#include "holberton.h"
/**
 *print_last_digit - function that print the last digit
 *@d: number
 *Return: d
 */
int print_last_digit(int d)
{
	if (d < 0)
	{
		d = d * -1;
	}

	d = d % 10;
	_putchar(d + '0');
	return (d);
}
