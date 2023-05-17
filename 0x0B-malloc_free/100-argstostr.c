#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: if acc is 0 or av is NULL, returns NULL
 * returns pointer to a new string
 * NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, s, j, str;
	char *arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	str = 0;

	for (i = 0; i < ac; i++)
	{
		for (s = 0; s < av[i][s]; s++)
		{
			str++;
		}
		str++;
	}
	arg = (char *)malloc((sizeof(char) * str) + 1);

	if (arg == NULL)
	{
		return (NULL);
	}
	j = 0;

	for (i = 0; i < ac; i++)
	{
		for (s = 0; s < av[i][s]; s++)
		{
			arg[j] = av[i][s];
			j++;
		}
		arg[j] = '\n';
		j++;
	}
	arg[j] = '\0';
	return (arg);
}
