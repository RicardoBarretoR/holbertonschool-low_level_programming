#include "holberton.h"
/**
 *_islower - function that check for lowercase character
 *@c: variable of character
 *Return: 1 - 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
