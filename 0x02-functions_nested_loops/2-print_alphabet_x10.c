#include "main.h"
/* A function that prints lowercase alphabets 10 times */
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times.
 * Return: 0 means Success.
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
