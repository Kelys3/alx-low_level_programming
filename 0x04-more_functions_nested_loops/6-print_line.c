#include "main.h"
/* A function that draws a straight line in the terminal */
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the characer _ should be printed
 * Return: 0 means Success
 */
void print_line(int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

