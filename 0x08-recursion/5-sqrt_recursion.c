#include "main.h"


int actual_sqrt_recursion(int n, int i);


/**
 * _sqrt_recursion - returns the sqrt of a number
 * @n: the number
 * Return: the sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}


/**
 * actual_sqrt_recursion - recurses to find sqrt of
 * a number
 * @n: the number
 * @i: iterator
 * Return: the sqrt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
