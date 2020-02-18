#include "holberton.h"
/**
 *rev_string - function that reverses a string
 *@s: pointer character
 */
void rev_string(char *s)
{
	int i = 0, j = 0, lent;
	char copy;

	while (s[i])
	{
		i++;
	}
	i--;
	lent = i;
	while (j < (lent / 2))
	{
		copy = s[i];
		s[i] = s[j];
		s[j] = copy;
		j++;
		i--;
	}
}
