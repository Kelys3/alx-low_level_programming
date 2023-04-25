#include <stdio.h>
/* Possible combinations of three digits */
/**
 * main - print all combinations of three digits
 * Return: 0 means Success
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					{
				if ((a != 55) || (b != 56) || (c != 57))
						{
					putchar(',');
					putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
