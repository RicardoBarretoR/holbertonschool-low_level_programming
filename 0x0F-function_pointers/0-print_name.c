#include "function_pointers.h"
/**
 *print_name - print a name
 *@name: address allocation of memory
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
