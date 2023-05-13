#include "main.h"
/* A function that checks for uppercase character */
/**
 * _isupper - checks if character is uppercase
 * @c: character to be checked
 * Return: 1 is c is uppercase
 * otherwise return is 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
