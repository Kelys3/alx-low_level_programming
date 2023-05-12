#include <stdio.h>
#include "main.h"
/* A program that prints the number of arguments passed to it.*/
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
