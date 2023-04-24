#include <stdio.h>
/* Print both lowercase and uppercase letters*/
/**
 * main - Print out the alphabets
 * Return: 0 meams Success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}

