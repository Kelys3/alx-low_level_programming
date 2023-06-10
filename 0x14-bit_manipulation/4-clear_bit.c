#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bit to set
 * @index: the index of the bit to set starting from 0
 * Return: on success 1. Else -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
