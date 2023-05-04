#include "main.h"
#include <stdio.h>
/* A function that prints n elements of an array of integers */
/**
 * print_array - prints n elements  of an array of integers
 * @a: a pointer to an integer
 * @n : number of elements to be printed
 * Return: the result
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
