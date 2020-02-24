#include "holberton.h"
/**
 *_strchr - function that locates a character in a string
 *@s: the address of memory
 *@c: character to search
 *Return: s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		i++;
	}
	return ('\0');
}
