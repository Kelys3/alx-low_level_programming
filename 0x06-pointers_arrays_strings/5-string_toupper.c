#include "main.h"
/* A function that changes lowercase letters to uppercase i a string */
/**
 * *string_toupper - changes lowercase letters in a string to uppercase
 * @n: the string
 * Return: the string in uppercase letters
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
