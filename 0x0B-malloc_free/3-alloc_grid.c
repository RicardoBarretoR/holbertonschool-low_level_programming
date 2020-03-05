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
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int *) * width);

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);

			free(p);
			return ('\0');
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
