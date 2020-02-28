#include <stdio.h>
/**
 *main - function that prints the number of arguments passed into it
 *@argc: Recount of the arguments provided
 *@argv: Matrix of pointers to the chains that are arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
