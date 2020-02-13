#include "holberton.h"
/**
 *print_numbers - function that prints the numbers, from 0 to 9
 *Return:
 */
void print_numbers(void)
{
	int numb = '0';

	while (numb <= '9')
	{
		_putchar(numb);
		numb++;
	}
	_putchar('\n');
}
