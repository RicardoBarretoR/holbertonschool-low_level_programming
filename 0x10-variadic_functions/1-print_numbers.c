#include "variadic_functions.h"
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: pointer that point at character
 *@n: is the numbers of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

		va_start(vlist, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(vlist, int));

			if (separator != NULL)
			{
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
		printf("\n");

		va_end(vlist);
}
