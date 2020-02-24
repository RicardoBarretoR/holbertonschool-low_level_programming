#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer character
 * Return: s
 */
char *cap_string(char *s)
{
	char dlm[] = {'\n', '\t', ' ', ',', ';', '.', '!', '?', '"',
			'(', ')', '{', '}'};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; dlm[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (s[i]  >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}
			}
			if (s[i] == dlm[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (s);
}
