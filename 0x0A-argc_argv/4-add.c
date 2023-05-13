#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 means error. Otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, a, n, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
