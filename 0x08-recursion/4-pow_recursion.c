#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to the power y
 * @x: the number
 * @y: the power of x
 * Return: the value of x raised to the power y
 * otherwise return is -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}


