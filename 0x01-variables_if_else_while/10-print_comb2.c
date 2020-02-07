#include <stdio.h>
/**
 *main - function
 *Return: 0;
 */
int main(void)
{
	int comb1, comb2;

	for (comb1 = '0'; comb1 <= '9'; comb1++)
	{
		for (comb2 = '0'; comb2 <= '9'; comb2++)
		{
			putchar(comb1);
			putchar(comb2);

			if (comb1 != '9' || comb2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
