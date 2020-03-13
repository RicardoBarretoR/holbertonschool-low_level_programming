#include "function_pointers.h"
/**
 *int_index - searches a number integer
 *@array: pointer that point at array
 *@size: size of a array
 *@cmp: pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;	
	
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
	
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
