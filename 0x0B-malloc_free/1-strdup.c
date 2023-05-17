#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - copies a string and returns a pointer to a
 * new space in memory
 * @str: string to be used
 * Return: a pointer to the duplicated string
 * Otherwise NULL
 */
char *_strdup(char *str)
{
	int l;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;

	while (str[l])
	{
		l++;
	}
	dup = (char *)malloc(sizeof(char) * (l + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	else
		strcpy(dup, str);
	return (dup);
}




