#include "holberton.h"
/**
 *_strncat - function that concatenates two string
 *it will use at most n bytes from src
 *@dest: pointer first character
 *@src: pointer second character
 *@n: size len space memory
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l1;
	int l2;

	for (l1 = 0; dest[l1] != '\0'; l1++)
	{
	}
	for (l2 = 0; src[l2] != '\0'; l2++)
	{
	}
	while (i < n && i < l2)
	{
		dest[l1] = src[i];
		l1++;
		i++;
	}
	return (dest);
}
