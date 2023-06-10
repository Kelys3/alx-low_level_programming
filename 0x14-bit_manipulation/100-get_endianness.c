#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *m = (char *)&n;

	if (*m != 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
