#include "main.h"
/* A function that encodes a string into 1337 */
/**
 * *leet - encodes a string
 * @n: the string
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
