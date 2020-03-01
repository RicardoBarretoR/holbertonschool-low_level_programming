#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - function that multiplies two numbers
 *@argc: Recount of the arguments provided
 *@argv: Matrix of pointers to the chains that are arguments
 *Return: resul
 */
int main(int argc, char *argv[])
{
	int resul = 0;
	int num1 = 0;
	int num2 = 0;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}

	resul = num1 * num2;
	printf("%d\n", resul);

	return (0);
}
