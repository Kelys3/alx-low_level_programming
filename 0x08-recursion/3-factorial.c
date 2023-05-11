#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: the number to be used
 * Return: the factorial of the number.
 * otherwise -1 means error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
