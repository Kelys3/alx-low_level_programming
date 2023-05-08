#include "main.h"

/**
 * *_memset - A funtion that fills memory with a constant byte
 * @s: the pointer
 * @b: character  to use
 * @n: the bytes
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int me;

	for (me = 0; me < n; me++)
	{
		*(s + me) = b;
	}
	return (s);
}
