#include "holberton.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: the address of memory
 *@accept: string
 *Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}
	return (n);
}	

