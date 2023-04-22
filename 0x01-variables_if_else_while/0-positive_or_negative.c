#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Assign a random number*/
/**
 * main -  Entry point
 * Return: 0 means Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check the boolean condition*/
	if (n > 0)
	{
		/*if condition is true then print the following*/
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		/*if else if condition is true then print the following*/
		printf("%d is zero\n", n);
	}
		else
		{
			printf("%d is negative\n", n);
		}
		return (0);
}
