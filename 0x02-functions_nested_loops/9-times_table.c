#include "main.h"
/* A function that prints the 9 times table */
/**
 * times_table - prints 9 times table.
 *
 * Return: O means Success.
 */
void times_table(void)
{
	int n, a, b;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (a = 1; a <= 9; a++)
		{
			_putchar(',');
			_putchar(' ');
			b = n * a;
			if (b <= 9)
			{
				_putchar(' ');
				_putchar(b + '0');
			}
				else
				{
					_putchar((b / 10) + '0');
					_putchar((b % 10) + '0');
				}
		}
		_putchar('\n');
	}
}
