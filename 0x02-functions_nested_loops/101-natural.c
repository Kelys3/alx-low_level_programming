#include <stdio.h>
/* Computes and prints the sum of all the multiples of 3 and 5 below 1024 */
/**
 * main -  computes and prints the sum of all multiples of 3 and 5
 * Return: 0 means Success
 */

int main(void)
{
	int a, b, c;

	int sum = 0;

	for (a = 0; a < 1024; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 || c == 0)
		{
			sum = (sum + a);
		}
	}
	printf("%d\n", sum);
	return (0);
}
