#include <stdio.h>
/* Printing all possible different combinatuons of two digits */
/**
 * main - different combinations of two digits
 *  Return: 0 means Success
 */
int main(void)
{
	int g, j;

	for (g = 48; g <= 57; g++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > g)
			{
				putchar(g);
				putchar(j);
				{
					if ((g != 56) || (j != 57))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
