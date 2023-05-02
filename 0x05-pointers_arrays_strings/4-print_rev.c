#include "main.h"
/* A function that prints a sting in reverse */
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: the string in reverse
 */
void print_rev(char *s)
{
	int bry = 0, p;

	while (s[bry] != '\0')
	{
		bry++;
	}

	for (p = bry - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
