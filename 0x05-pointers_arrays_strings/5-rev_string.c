#include "holberton.h"
/**
 *rev_string - function that reverses a string
 *@s: pointer character
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char copy;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		copy = s[i];
		s[i] = s[j];
		s[j] = copy;
		j++;
		i--;
	}
}
