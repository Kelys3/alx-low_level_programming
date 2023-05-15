# include "main.h"

int calculate_prime(int n, int i);

/**
 * is_prime_number - finds a prime number
 * @n: an integer
 * Return: 1 means success. Otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calculate_prime(n, n - 1));
}


/**
 * calculate_prime - checks for a prime number
 * @n: an integer
 * @i: iterator
 * Return: 1 means success. Otherwise 0
 */
int calculate_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (calculate_prime(n, i - 1));
}
