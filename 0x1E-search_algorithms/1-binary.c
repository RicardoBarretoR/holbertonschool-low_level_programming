#include "search_algos.h"

/**
 * binary_search - search a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size:  number of elements in array
 * @value: value to search
 * Return: The index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int first = 0;
	int last = size - 1;
	int middle, index;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array:");
		for (index = first; index < last; index++)
			printf(" %d,", array[index]);

		printf(" %d\n", array[index]);

		middle = (first + last) / 2;
		if (array[middle] == value)
			return (middle);
		else if (value > array[middle])
			first = middle + 1;
		else
			last = middle - 1;
	}
	return (-1);
}
