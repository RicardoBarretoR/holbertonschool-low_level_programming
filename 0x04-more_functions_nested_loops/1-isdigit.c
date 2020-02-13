#include "holberton.h"
/**
 *_isdigit - function that checks for a digit 0 through 9
 *@c: variable of a digit
 *Return: 1 - 0
 */
int _isdigit(int c)
{

	if (c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
