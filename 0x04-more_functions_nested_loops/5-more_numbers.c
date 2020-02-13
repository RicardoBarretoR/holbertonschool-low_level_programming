#include "holberton.h"
/**
 *more_numbers - function that prints 10 times the numbers, form 0 to 14
 */
void more_numbers(void)
{
	int time;
	int nums;

	for (time = 0; time <= 9; time++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums > 9)
			{
				_putchar(1 + '0');
			}
				_putchar((nums % 10) + '0');
		}
		_putchar('\n');
	}
}
