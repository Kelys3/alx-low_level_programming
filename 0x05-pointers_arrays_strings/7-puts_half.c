#include "main.h"
/* A function that prints half of a string */
/**
 * puts_half - prints half of a string
 * @str: the string to be used
 * Return: half of the string
 */
void puts_half(char *str)
{
	int a = 0, b = 0, c;

	while (str[b] != '\0')
	{
		b++;
	}
	if (b % 2 == 1)
	{
		a = ((b - 1) / 2);
	}
	else
	{
		a = b / 2;
	}
	for (c = a; c < b; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
