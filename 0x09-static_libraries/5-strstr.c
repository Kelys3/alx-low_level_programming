#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: a pointer to the beginning of located substring
 * Otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
		{
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}






