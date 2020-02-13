#include "holberton.h"
/**
 *print_most_numbers - function that prints numbers, from 0 to 9
 */
void print_most_numbers(void)
{
	int n_not = '0';

	while (n_not <= '9')
	{
		if (n_not != '2' && n_not != '4')
		{
			_putchar(n_not);
		}
		n_not++;
	}
	_putchar('\n');
}
