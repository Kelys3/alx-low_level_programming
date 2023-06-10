#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits to be flipped to get from one
 * number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	for (; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);
}
