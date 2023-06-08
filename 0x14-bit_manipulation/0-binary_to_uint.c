#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number. otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		convert = (convert * 2) + (b[i] - '0');
	}
	return (convert);
}


