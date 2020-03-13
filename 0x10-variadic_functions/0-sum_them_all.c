#include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of arguments
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	while (i < n)
	{
		sum += va_arg(vlist, int);
		i++;
	}
	va_end(vlist);

	return (sum);
}
