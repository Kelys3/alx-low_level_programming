#include "main.h"
/* A function that prints the last digit of a number */
/**
 * print_last_digit - prints the last digit of a number
 * @h: any number
 * Return: the value of the last digit.
 */
int print_last_digit(int h)
{
	int last_digit;

	last_digit = (h % 10);

	if (last_digit < 0)
	{
		last_digit = (last_digit * (-1));
		_putchar(last_digit + '0');
	}
	else
	{
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
