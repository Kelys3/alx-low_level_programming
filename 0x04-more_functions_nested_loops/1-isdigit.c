#include "main.h"
/* A funcrion that checks for a digit (0-9) */
/**
 * _isdigit - checks for a digit (0-9)
 * @c: character to be checked
 * Return: 1 if c is a digit
 * otherwise return is 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
