#include "holberton.h"
/**
 *_memcpy - function that copies memory area
 *@dest: the address of memory to print
 *@src: the address of memory to copies
 *@n: size of memory
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
