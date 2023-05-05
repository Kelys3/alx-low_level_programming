#include "main.h"
/* A function that encodes a string using rot13 */
/**
 * *rot13 - encodes a string
 * @n: the string
 * Return: encoded string
 */
char *rot13(char *n)
{
	int i, j;
	char t1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; t1[j] != '\0'; j++)
		{
			if (n[i] == t1[j])
			{
				n[i] = t2[j];
				break;
			}
		}
	}
	return (n);
}

