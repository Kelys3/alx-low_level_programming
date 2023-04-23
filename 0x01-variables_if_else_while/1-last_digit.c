#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Last Digit*/
/**
 * main - Assign a random number
 * Return: 0 means Success
 */
int main(void)
{
	int n; /* where n = any random number*/
	int f; /* f = Last digit of n*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;
	/*The output of the program is as follows*/
	if (f > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, f);
}

		else if (f == 5)
{
			/* print this message*/
			printf("Last digit of %d is %d and is 0\n", n, f);
}
			else
{
			/*if the above conditions are false*/
			printf("Last digit of %d is %d and less than 6 and not 0\n", n, f);
			}
return (0);
}
