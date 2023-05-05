#include "main.h"
/* A function that concatenates two strings */
/**
 * *_strncat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 * Return: a pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
