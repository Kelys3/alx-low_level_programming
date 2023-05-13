#include "main.h"
/* A function that calculates the absolute value of an integer */
/**
 * _abs - computes the absolute value of an integer
 * @g: the absolute value to be printed
 * Return: 0 means Success
 */
int _abs(int g)
{

	if (g >= 1)
	{
		return (g);
	}
	else if (g == 0)
	{
		return (0);
	}
	else
	{
		g *= -1;
		return (g);
	}
	return (0);
}
