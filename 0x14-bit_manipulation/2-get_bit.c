#include "holberton.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: starting from 0 of bit to get
 *Return: value of the bit at index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int ret = 0;

	if (index > (sizeof(n) * 8))
		return (-1);

	ret = n >> index;
	ret = ret & 1;

	return (ret);
}
