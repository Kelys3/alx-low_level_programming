#include "main.h"

/*
 * _sqrt - calculates the midpoint of a range and returns the squareroot
 * @n: the number to be used
 * @low: a lower bound
 * @high: an upper bound
 * Return: the midpoint if it is equal to n
 */
int _sqrt(int n, int low, int high)
{
	int m = (low + high) / 2;
	int s = (m * m);

	if (low > high)
		return (-1);
	if (s == n)
		return (m);
	else if (s < n)
		return (_sqrt(n, m + 1, high));
	else
		return (_sqrt(n, low, m - 1));
}



/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the square root of n
 * otherwise return is -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_sqrt(n, 0, n));
}
