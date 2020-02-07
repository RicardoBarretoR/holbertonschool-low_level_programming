#include <stdio.h>
/**
 *main - function
 *Return: 0;
 */
int main(void)
{
	int comb1 = 48;
	int comb2 = 48;

	while (comb1 <= 57)
	{
		while (comb2 <= 57)
		{
			putchar(comb1);
			putchar(comb2);

			if (comb1 != 57 && comb2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			comb2++;
		}
		comb1++;
	}
	return (0);
}
