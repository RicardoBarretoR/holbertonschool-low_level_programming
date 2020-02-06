#include <stdio.h>
/**
 *main - function
 *Return: 0
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
