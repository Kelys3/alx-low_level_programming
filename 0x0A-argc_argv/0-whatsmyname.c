#include <stdio.h>
#include <string.h>
#include "main.h"
/* A program that prints its name */
/**
 * main - prints the program name
 * @argc: argument count
 * @argv: string
 * Return: program name
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
