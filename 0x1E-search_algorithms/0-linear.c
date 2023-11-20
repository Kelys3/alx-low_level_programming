#include "search_algos.h"

/**
* linear_search - using linear search, searches for a value in
* an array of integers
* @array: pointer to the first element
* @size: number of elements in array
* @value: the value to search for
* Return: -1 on failure, the index on success
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
