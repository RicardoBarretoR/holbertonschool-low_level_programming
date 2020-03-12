#include "function_pointers.h"
/**
 *array_iterator - executes a function gives as a parameter on
 *each element of an array
 *@array: pointer that point array
 *@size: size of the array
 *@action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
