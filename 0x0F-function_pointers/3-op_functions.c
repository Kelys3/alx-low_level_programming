#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}
/**
 * op_sub - finds the difference of two num
 * @a: first integer
 * @b: second integer
 * Return: the difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = (a - b);
	return (diff);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the product
 */
int op_mul(int a, int b)
{
	int prod;

	prod = (a * b);
	return (prod);
}
/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of the division of a
 * by b
 */
int op_div(int a, int b)
{
	int res;

	res = (a / b);
	return (res);
}
/**
 * op_mod - finds the modulo of two ints
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of
 * a by b
 */
int op_mod(int a, int b)
{
	int rem;

	rem = (a % b);
	return (rem);
}
