#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: address of memory
 * @needle: substring
 * Return:  haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i,j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if ( haystack[i] == needle[0])
		{
			for (j = 0; needle[j] == haystack[i] && needle[j] != '\0'; j++)
			{
				return (haystack + i);
			}
		}
	}
	return (0);
 }
