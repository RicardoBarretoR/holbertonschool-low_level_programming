#include "holberton.h"
/**
 *_isupper - function that checks for uppercase character
 *@c: variable of a character
 *Return: 1 - 0
 */
int _isupper(int c)
{
	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
