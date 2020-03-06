#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - create an array of integers
 *@max: number maximum
 *@min: number minimun
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
