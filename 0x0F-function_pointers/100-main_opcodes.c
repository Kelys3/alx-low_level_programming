#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 means Success
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (char *)main;

	for (i = 0; i < number_of_bytes - 1; i++)
	{
		printf("%02hhx ", main_ptr[i]);
	}
	printf("%02hhx\n", main_ptr[i]);
	return (0);
}
