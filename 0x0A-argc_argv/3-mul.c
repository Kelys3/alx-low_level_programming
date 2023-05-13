#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*A program that multiplies two numbers */
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 means error.Otherwise 0.
 */
int main(int argc, char *argv[])
{
	int i, a, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		mult *= a;
	}
	printf("%d\n", mult);
	return (0);
}
