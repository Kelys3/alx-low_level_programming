#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: pointer
 * @size: the size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0, n;

	n = size - 1;

	for (i = 0; i < size * size; i += (size + 1))
	{
		s1 += *(a + i);
	}
	for (i = n; i < size * size - 1; i += (size - 1))
	{
		s2 += *(a + i);
	}
	printf("%d, %d\n", s1, s2);
}

