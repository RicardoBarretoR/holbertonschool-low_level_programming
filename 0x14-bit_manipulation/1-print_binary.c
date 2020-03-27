#include "holberton.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: number
 */
void print_binary(unsigned long int n)
{
	int rep;

	if (n < 2)
	{
		rep = n & 1;
		_putchar('0' + rep);
	}
	else
	{
		rep = n & 1;
		print_binary(n >> 1);
		_putchar('0' + rep);
	}
}
