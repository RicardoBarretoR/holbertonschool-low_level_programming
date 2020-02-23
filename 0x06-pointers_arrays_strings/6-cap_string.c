#include "holberton.h"
/**
 *cap_string - function that capitalizes all words of a string
 *@s: pointer character
 *Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i]  >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		if (s[i] == '.' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		if (s[i] == ' ' || (s[i] == '\n' && s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			if ((s[i + 1] >= 'A' && s[i + 1] <= 'Z')
				|| (s[i + 1] >= '0' && s[i + 1] <= '9'))
				i++;

			else
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
