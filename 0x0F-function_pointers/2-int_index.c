#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array to be used
 * @size: number of elements in the array
 * @cmp: the function to be used
 * Return: the index of the first element fo
 * r which cmp does not return 0.
 * -1 if no element matches or size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;/* array elements*/

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}




