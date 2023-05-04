#include "main.h"
/* A function that copies a string */
/**
 * *_strcpy - copies the string pointedto by src
 * @dest: buffer pointed to by dest
 * @src: string pointed to by src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest = '\0';
	return (s);
}
