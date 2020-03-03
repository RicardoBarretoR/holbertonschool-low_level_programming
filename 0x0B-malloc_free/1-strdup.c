#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string give as a parameter
 *@str: string
 *Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return ('\0');
	}

	while (str[size] != '\0')
	{
		size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
	{
		return ('\0');
	}

	for (i = 0; i <= size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
