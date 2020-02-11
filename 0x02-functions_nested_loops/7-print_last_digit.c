#include "holberton.h"
/**
 *print_last_digit - function that print the last digit
 *@d: number
 *Return: d
 */
int print_last_digit(int d)
{
	d = d % 10;
	if (d < 0)
	{
		d = d * -1;
	}

	_putchar('0' + d);
	return (d);
}
