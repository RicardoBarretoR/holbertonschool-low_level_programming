#include "holberton.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: pointer integer one
 *@b: pointer integer two
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
