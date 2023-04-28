#include "main.h"
/* A function that prints numbers from 0 - 9 */
/**
 * print_numbers - prints numbers from 0 -9
 * Return: 0 means Success
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
