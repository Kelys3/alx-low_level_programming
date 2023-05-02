#include "main.h"
/* A function that swaps the values of two integers */
/**
 * swap_int - swaps the values of two integers a and b
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int freda = *b;

	*b = *a;
	*a = freda;
}


