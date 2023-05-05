#include "main.h"
/* A function that concatenates two string */
/**
 * *_strcat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, i;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
