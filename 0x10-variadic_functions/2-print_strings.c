#include "variadic_functions.h"
/**
 *print_strings - prints strings, followed by a new line
 *@separator: pointer that point at character
 *@n: is the numbers of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;

		va_start(vlist, n);

		while (i < n)
		{
			printf("%s", va_arg(vlist, char *));

			if (separator != NULL)
			{
				if (n == '\0')
					printf("(nil)");

				if (i < (n - 1))
					printf("%s", separator);
			}
			else
			{
				if (n == '\0')
					printf("(nil)");

			}
			i++;
		}
		printf("\n");

		va_end(vlist);
}
