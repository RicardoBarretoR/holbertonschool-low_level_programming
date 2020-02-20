#include "holberton.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: pointer first string
 *@src: pointer second string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l1;
	int l2;

	l1 = _strlen(dest);
	l2 = _strlen(src);

	while (i < l2)
	{
		dest[l1] = src[i];
		i++;
		l1++;
	}
	return (dest);
}
