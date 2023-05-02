#include <stdio.h>
/* A program that finds and prints the first 98 Fibonacci numbers. */
/**
 * main - find and print the first 98 Fibonacci numbers
 * Return: 0 means Success
 */
int main(void)
{
	unsigned long int c = 1, f = 2, y, x;

	printf("%lu, %lu, ", c, f);
	for (y = 3; y <= 98; y++)
	{
		x = c + f;

		printf("%lu, ", x);
		if (x > 98)
		{
			printf(", ");
		}
		c = f;
		f = x;
	}
	printf("\n");
	return (0);
}

