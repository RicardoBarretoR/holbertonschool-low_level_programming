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
	char *ptr;

		va_start(vlist, n);

		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
			{
				ptr = va_arg(vlist, char *);

				if (ptr == NULL)
					printf("(nil)");
				else
					printf("%s", ptr);

				if (i < (n - 1))
					printf("%s", separator);
			}
			else
			{
				if (ptr == NULL)
					printf("(nil)");
				else
					printf("%s", ptr);
			}
		}
		printf("\n");

		va_end(vlist);
}
