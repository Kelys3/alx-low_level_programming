#include "main.h"
/* A function that prints a string to stdout */
/**
 * _puts - prints a string to stdout
 * @str: the string to be used
 * Return: the string
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}

