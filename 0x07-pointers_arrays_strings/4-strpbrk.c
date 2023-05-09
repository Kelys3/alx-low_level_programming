#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: second string
 * Return: a pointer to s
 * otherwise null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
