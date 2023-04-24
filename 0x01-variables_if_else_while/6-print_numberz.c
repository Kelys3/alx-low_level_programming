#include <stdio.h>
/* Printing numbers using putchar */
/**
 * main - print decimals from 0-9
 * Return: 0 means Success
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar((y % 10) + '0');
	}
		putchar('\n');
		return (0);
}
