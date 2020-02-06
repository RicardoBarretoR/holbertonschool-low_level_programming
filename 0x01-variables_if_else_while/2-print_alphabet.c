#include <stdio.h>
/**
 *main - function
 *Return: 0
 */
int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
