#include "main.h"
#include <stdio.h>

/**
 * output_error - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: string pointer.
 */
void output_error(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main entry
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, fail;
	ssize_t num, written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	output_error(file_from, file_to, argv);

	num = 1024;
	while (num == 1024)
	{
		num = read(file_from, buffer, 1024);
		if (num == -1)
			output_error(-1, 0, argv);
		written = write(file_to, buffer, num);
		if (written == -1)
			output_error(0, -1, argv);
	}

	fail = close(file_from);
	if (fail == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	fail = close(file_to);
	if (fail == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
