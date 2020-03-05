#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: array in line
 *@height: array in column
 *Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;
	
	if (width == '\0')
		return ('\0');

	if (height == '\0')
		return ('\0');

	for (i = 0; i < height; i++)
	{
		p = malloc(sizeof(int *) * height);

		if (p == NULL)
		{
			return ('\0');
		}
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int *) * width);
		
		if (p == NULL)
		{
			return ('\0');
		}
		
	}

	
	return (p);
}
