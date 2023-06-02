#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory in bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
