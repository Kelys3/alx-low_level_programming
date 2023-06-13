#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc, write_content;
	size_t l = 0;

	if (filename == NULL)
		return (-1);
	fdesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (fdesc == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
		{
			l++;
		}
			write_content = write(fdesc, text_content, l);
			if (write_content == -1)
			{
				close(fdesc);
				return (-1);
			}
	}
	else
	{
		text_content = "";
	}

	close(fdesc);
	return (1);
}
