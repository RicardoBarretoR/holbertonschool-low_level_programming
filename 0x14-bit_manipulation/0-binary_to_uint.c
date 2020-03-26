#include "holberton.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer that point to a string of 0 and 1 chars
 *Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int pot = 2;
	unsigned int acum = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}
	i--;
	if (b[i] == 49)
		acum = 1;
	i--;
	while (i >= 0)
	{
		acum = acum + (pot * (b[i] - 48));
		i--;
		pot = pot + pot;
	}
	return (acum);
}
