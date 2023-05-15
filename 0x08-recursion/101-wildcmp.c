#include "main.h"

/**
 * wildcmp - checks if two strings are identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 means success. Otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0'
			&& *s1 == '\0')
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		s2++;
		if (*s2 == '\0')
		{
			return (1);
		}
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2))
			{
				return (1);
			}
			s1++;
		}
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

