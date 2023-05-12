#include <stdio.h>
#include <string.h>
#include "main.h"
/* A program that prints all its arguments */
/**
 * main - prints all program arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
