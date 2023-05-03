#include "main.h"
/* A function that prints every other character of a string from 1st char */
/**
 * puts2 - prints every other character of the string
 * @str: string to be uused
 * Return: the results
 */
void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}

