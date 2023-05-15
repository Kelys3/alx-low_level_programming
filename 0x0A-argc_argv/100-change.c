#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins to make
 * change for an amout of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means success. 1 is an error
 */
int main(int argc, char *argv[])
{
	int i, cents, money;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	money = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i <= 4; i++)
	{
		money += cents / coins[i];
		cents = cents % coins[i];
	}
	printf("%d\n", money);
	return (0);
}



		
