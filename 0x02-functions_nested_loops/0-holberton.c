#include <stdio.h>
#include "holberton.h"
/**
 *main - Fuction that print Holberton
 *Return: 0
 */
int main(void)
{
	char s[] = "Holberton";
	int i = 0;

	while (i != 9)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
