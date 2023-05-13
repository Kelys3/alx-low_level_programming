#include "main.h"

/**
 * *_memcpy - A funtction that copies memory area
 * @dest:to memory area
 * @src: to memory area
 * @n: bytes from memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		*(dest + mem) = *(src + mem);
	}

	return (dest);
}
