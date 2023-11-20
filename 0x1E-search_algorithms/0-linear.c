#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: first index of value, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int d;

	if (array == NULL)
		return (-1);
	for (d = 0; d < (int)size; d++)
	{
		printf("Value checked array[%u] = [%d]\n", d, array[d]);
		if (value == array[d])
			return (d);
	}
	return (-1);
}
