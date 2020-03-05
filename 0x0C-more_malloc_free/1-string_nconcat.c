#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: size allocation second string
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int l1;
	unsigned int l2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
	}
	if (n >= l2)
		n = l2;

	p = malloc(l1 + n + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (n + l1); i++)
	{
		if (i < l1)
		{
			p[i] = s1[i];
		}
		else
			p[i] = s2[i - l1];
	}
	p[i] = '\0';
	return (p);
}
