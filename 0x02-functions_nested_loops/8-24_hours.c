#include "holberton.h"
/**
 *jack_bauer - function that prints every minute of the day
 *Return:
 */
void jack_bauer(void)
{
	int m1;
	int m2;
	int h1;
	int h2;

	for (h2 = '0'; h2 <= '2'; h2++)
	{
		for (h1 = '0'; h1 <= '9'; h1++)
		{
			if (h2 == '2' && h1 == '4')
			{
				break;
			}

			for (m2 = '0'; m2 <= '5'; m2++)
			{
				for (m1 = '0'; m1 <= '9'; m1++)
				{
					_putchar(h2);
					_putchar(h1);
					_putchar(':');
					_putchar(m2);
					_putchar(m1);
					_putchar('\n');
				}
			}
		}
	}
}
