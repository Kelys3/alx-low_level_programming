#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given
 * index
 * @index: index of the bit starting from 0
 * @n: the bit to set
 * Return: On success 1, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = (*n | 1 << index);
	return (1);
}
