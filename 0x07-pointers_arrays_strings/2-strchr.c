#include "holberton.h"
/**
 *_strchr - function that locates a character in a string
 *@s: the address of memory
 *@c: character to search
 *Return: s
 */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
