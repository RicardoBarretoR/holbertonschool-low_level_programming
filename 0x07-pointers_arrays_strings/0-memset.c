#include "holberton.h"
/**
 *_memset - function that fill memory with a constant byte
 *@s: the address of memory to print
 *@b: character to print
 *@n: the size of the memory to print
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
