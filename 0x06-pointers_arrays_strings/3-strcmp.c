#include "holberton.h"
/**
 *_strcmp - function that compares two string
 *@s1: pointer character
 *@s2: pointer character
 *Return: resul
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int resul = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			resul = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (resul);
}
