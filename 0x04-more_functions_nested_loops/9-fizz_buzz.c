#include <stdio.h>
/**
 *main - function that prints the numbers from 1 to 100
 *Return: 0
 */
int main(void)
{
	int i;
	int div1 = 0;
	int div2 = 0;

	for (i = 1; i <= 100; i++)
	{
		div1 = i % 3;
		div2 = i % 5;

		if (div1 == 0 && div2 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (div1 == 0)
		{
			printf("Fizz ");
		}
		else if (div2 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
