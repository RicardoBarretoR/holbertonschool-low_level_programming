#include <stdio.h>
/**
 *main - function that print all possible diferent combinations of two digits.
 *the two digits must be different.
 *Return: 0
 */
int main(void)
{
	int bmo;
	int bmo3;

	for (bmo = 48; bmo <= 57; bmo++)
	{
		for (bmo3 = 48; bmo3 <= 57; bmo3++)
		{
			if (bmo < bmo3)
			{
				putchar(bmo);
				putchar(bmo3);
				if (bmo == 56 && bmo3 == 57)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
