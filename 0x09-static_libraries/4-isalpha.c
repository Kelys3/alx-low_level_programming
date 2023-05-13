#include "main.h"
/* A function that checks for alphabetic character */
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to print
 * Return: 1 if c is lowercase or upppercase
 * otherwise return is 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
