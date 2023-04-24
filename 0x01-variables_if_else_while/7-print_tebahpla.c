#include <stdio.h>
/* Printing alphabets in reverse order */
/**
 * main - lowercase alphabets in reverse
 * Return: 0 means Success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}
