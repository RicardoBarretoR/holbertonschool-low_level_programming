#include "holberton.h"
/**
 *print_alphabet - function that prints the alphabet, in lowercase
 *
 */
void print_alphabet(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
