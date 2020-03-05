#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmeb: numbers of elements
 *@size: size of each element
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(unsigned int) * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; p[i]; i++)
		p[i] = 0;

	return (p);
}
