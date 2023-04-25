#include "main.h"
/* A function that prints lowercase alphabets */
/**
 * print_alphabet - prints lowercase alphabets
 *Return: 0 means Success
 */
void print_alphabet(void)
{
	int f;

	for (f = 97; f <= 122; f++)
	{
		_putchar(f);
	}
		_putchar('\n');
}
