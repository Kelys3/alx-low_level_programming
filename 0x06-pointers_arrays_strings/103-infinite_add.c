#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char t;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		t = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = t;
	}
}



/* A function that adds two numbers */
/**
 * infinite_add - adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer to results
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sn = 0, i = 0, j = 0, d = 0;
	int k2 = 0, k1 = 0, ton = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || sn == 1)
	{
		if (i < 0)
			k1 = 0;
		else
			k1 = *(n1 + i) - '0';
		if (j < 0)
			k2 = 0;
		else
			k2 = *(n2 + j) - '0';
		ton = k1 + k2 + sn;
		if (ton >= 10)
			sn = 1;
		else
			sn = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (ton % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}

