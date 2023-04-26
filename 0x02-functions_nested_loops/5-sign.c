#include "main.h"
/* A function that prints the sign of a number */
/**
 * print_sign - prints the sign of a number
 * @n: the character to print
 * Return: 1 if n is greater than 0
 * 0 if n is zero
 * otherwise return is -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


