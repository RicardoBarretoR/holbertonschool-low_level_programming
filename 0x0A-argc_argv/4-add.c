#include <stdio.h>
#include <stdlib.h>
/**
 *main - function that adds positive numbers
 *@argc: Recount of the arguments provided
 *@argv: Matrix of pointers to the chains that are arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int resul, i;
	char *ptr;
	int num;

	resul = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &ptr, 10);
			if (!*ptr)
				resul += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", resul);
	return (0);
}
