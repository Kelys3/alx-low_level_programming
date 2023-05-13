#include "main.h"

/**
 * *_strchr - A function that locates chars in strings
 * @s: string to be use
 * @c: the character
 * Return: a pointer of the char c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
