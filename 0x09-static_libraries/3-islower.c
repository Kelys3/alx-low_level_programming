#include "main.h"
/* A function that checks for lowercase character */
/**
 * _islower - checks for lower case characters
 * @c: the character to print
 * Return: 1 if c is lowercase
 * otherwise return is 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
