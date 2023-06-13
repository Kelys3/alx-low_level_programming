#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: the text file
 * @letters: the number of letters to read and printed
 *
 * Return: the actual number of letters read and printed.
 * Otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fdesc;
	ssize_t bytesread, byteswritten;

	if (filename == NULL)
		return (0);
	fdesc = open(filename, O_RDONLY);

	if (fdesc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fdesc);
		return (0);
	}
	bytesread = read(fdesc, buffer, letters);

	if (bytesread == -1)
	{
		close(fdesc);
		free(buffer);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);

	if (byteswritten != bytesread)
	{
		close(fdesc);
		free(buffer);
		return (0);
	}
	close(fdesc);
	free(buffer);

	return (byteswritten);
}


