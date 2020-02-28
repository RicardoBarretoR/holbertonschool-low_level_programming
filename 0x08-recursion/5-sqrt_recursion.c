#include "holberton.h"

int _sqtr(int a, int i);

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: pointer
 *Return: n
 */
int _sqrt_recursion(int n)
{
	int u;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		u = _sqtr(n, 1);
		return (u);
	}
}
/**
 *_sqtr - Second function declarate
 *@a: variable representing 'n'
 *@i: counter variable
 *Return: o
 */

int _sqtr(int a, int i)
{
	int o;

	if (i * i == a)
	{
		return (i);
	}
	else if (i * i > a)
	{
		return (-1);
	}
	else
	{
		o = _sqtr(a, i + 1);
		return (o);
	}
}
