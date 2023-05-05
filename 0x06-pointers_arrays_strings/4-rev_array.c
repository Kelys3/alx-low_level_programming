#include "main.h"
/* A functuon that reverses the content of an array */
/**
 * reverse_array - reverses the array contents
 * @a: the array to be used
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < (n / 2); i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
