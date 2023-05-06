#include "main.h"
/* A function that prints an integer */
/**
 * print_number - prints an integer
 * @n: the integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}
	else
	{
		d = n;
	}
	if (d / 10 != 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
