#include <stdio.h>
/* Printing numbers in base 16 */
/**
 * main - printing hexadecimals
 * Return: 0 means Success
 */
int main(void)
{
	char g;
	char j;

	for (g = 48; g <= 57;  g++)
	{
		putchar(g);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
		putchar('\n');
		return (0);
}
