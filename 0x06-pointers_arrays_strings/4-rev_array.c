#include "holberton.h"
/**
 *reverse_array - function that reverses the content of an array of integers
 *@a: pointer integer
 *@n: pointer integer
 *Return:
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int r = 0;
	int tmp = 0;

	while (i < n)
	{
		i++;
	}
	i--;
	while (r < i)
	{
		tmp = a[i];
		a[i] = a[r];
		a[r] = tmp;
		r++;
		i--;
	}
}
