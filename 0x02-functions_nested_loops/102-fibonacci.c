#include <stdio.h>
/* A program that prints the first 50 Fibonacci numbers */
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 means Success
 */

int main(void)
{
	long int n = 1, l = 2, y, q, z = 50;

	printf("%ld, %ld, ", n, l);

	for (q = 3; q <= z; ++q)
	{
		y = n + l;
		printf("%ld", y);
		n = l;
		l = y;
		if (q != z)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
