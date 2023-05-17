#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array and initializes with a
 * specific char
 * @size: size in bytes
 * @c: char to be used
 * Return: a pointer to the array
 * Otherwuse fail is NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
