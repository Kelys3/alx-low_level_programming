#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end
 * of the file
 * Return: 1 0n success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc;
	size_t l = 0;
	ssize_t write_text;

	if (filename == NULL)
		return (-1);
	fdesc = open(filename, O_WRONLY | O_APPEND);

	if (fdesc == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
		{
			l++;
		}
		write_text = write(fdesc, text_content, l);
		if (write_text == -1)
		{
			close(fdesc);
			return (-1);
		}
	}
	close(fdesc);
	return (1);
}
