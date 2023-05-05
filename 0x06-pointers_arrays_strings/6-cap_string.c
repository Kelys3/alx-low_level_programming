#include "main.h"
/* A function that capitalizes words of a string */
/**
 * *cap_string - capitalizes words of a string
 * @n: string to be used
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0 || n[i - 1] == ' ' ||
n[i - 1] == '\t' || n[i - 1] == '\n' || n[i - 1]
== ',' || n[i - 1] == ';' || n[i - 1] == '.' ||
n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] ==
'\"' || n[i - 1] == '(' || n[i - 1] == ')' ||
n[i - 1] == '{' || n[i - 1] == '}')
		{
			if (n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
			}
		}
		else if (n[i] >= 65 && n[i] <= 90)
		{
			n[i] = n[i] + 32;
		}
	}
	return (n);
}
