#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on
 * each element of an array
 * @size: the size of the array
 * @action: the function given
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /* represents array elements*/
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
