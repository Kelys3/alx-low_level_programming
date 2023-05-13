#include "main.h"
/* A function that returns the length of a string */
/**
 * _strlen - returns the length of a string
 * @s: the string to be used
 * Return: 0
 */
int _strlen(char *s)
{
	int l = 0, a;

	for (a = 0; s[a] != '\0'; a++)
	{
		l++;
	}
	return (l);
}
