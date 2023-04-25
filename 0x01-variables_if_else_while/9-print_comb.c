#include <stdio.h>
/* Possible combinations of single digit numbers */
/**
 * main - Combinations of single digit numbers
 * Return: 0 means Success
 */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		if (b != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

		putchar('\n');
		return (0);
}
