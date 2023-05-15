#include "main.h"

int find_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - finds a pallindrome
 * @s: the string
 * Return: 1 means success. Otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (find_pal(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - returns the string length
 * @s: the string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * find_pal - checks for a pallindrome
 * @s: string
 * @i: iterator
 * @len: string length
 * Return: 1 means success. Otherwise 0
 */
int find_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (find_pal(s, i + 1, len - 1));
}

