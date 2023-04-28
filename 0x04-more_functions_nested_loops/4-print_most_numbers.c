#include "main.h"
/* A function that prints numbers from 0-9 */
/**
 * print_most_numbers - prints numbers
 * Return: 0 means Success
 */
void print_most_numbers(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		if (b != 50 && b != 52)
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
