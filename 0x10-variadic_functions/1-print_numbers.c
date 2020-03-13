#include "variadic_functions.h"
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: pointer that point at character
 *@n: is the numbers of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;

	if (separator != NULL)
	{
		va_start(vlist, n);

		while (i < n)
		{
			printf("%d", va_arg(vlist, int));

			if (i < (n - 1))
			{
				printf("%c ", *separator);
			}
			i++;
		}
		printf("\n");

		va_end(vlist);
	}
}
