#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - Function that created an array of chars
 * and initializes it with a specific char
 *@size: size of buffer
 *@c: character
 *Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;


	if (size == 0)
	{
		return ('\0');
	}

	ch = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	if (!*ch)
	{
		return ('\0');
	}

	return (ch);
}
