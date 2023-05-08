#include "main.h"

/**
 * _strspn - The length of a substring
 * @s: The string
 * @accept: bytes from
 * Return: the num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int y, z;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[y] == accept[z])
			{
				break;
			}
		}
		if (accept[z] == '\0')
		{
			return (y);
		}
	}
	return (y);
}
