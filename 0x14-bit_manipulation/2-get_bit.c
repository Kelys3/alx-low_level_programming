#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be used
 * @index: the index from 0 of the bit to get
 * Return: the value of the bitat index. Otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
