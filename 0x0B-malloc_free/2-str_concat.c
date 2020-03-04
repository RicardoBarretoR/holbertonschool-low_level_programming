#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, i, is = 0;
	char *s_concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s_concat = malloc(sizeof(char) * len);

	if (s_concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s_concat[is++] = s1[i];

	for (i = 0; s2[i]; i++)
		s_concat[is++] = s2[i];


	return (s_concat);
}
