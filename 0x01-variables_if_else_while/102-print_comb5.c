#include <stdio.h>
/* Possible combinations of two digit numbers */
/**
 * main - combinations of two digit numbers
 * Return: 0 means Success
 */
int main(void)
{
	int c, d;

	for (c = 0; c <= 98; c++)
	{
		for (d = 0; d <= 99; d++)
		{
			if (c < d)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				{
					if ((c != 98) || (d != 99))
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
