#include "search_algos.h"

/**
 * linear_search - search a value in an array of integers
 * @array: pointer to the first element of the array
 * @size:  number of elements in array
 * @value: value to search
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}
	return (-1);
}
