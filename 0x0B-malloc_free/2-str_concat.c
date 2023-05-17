#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to the new string s1 followed by s2
 * Otherwise, NULL means fail.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, l1, l2;
	char *New;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	l1 = 0, l2 = 0;

	while (s1 && s1[l1])
	{
		l1++;
	}
	while (s2 && s2[l2])
	{
		l2++;
	}
	New = malloc(sizeof(char) * (l1 + l2 + 1));

	if (New == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		New[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		New[i++] = s2[j];
	}
	New[i] = '\0';

	return (New);
}
