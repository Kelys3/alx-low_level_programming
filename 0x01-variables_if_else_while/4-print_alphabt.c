#include <stdio.h>
/* Exclude q and e */
/**
 * main - all lowercase except q and e
 * Return: 0 means Success
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
			putchar('\n');
			return (0);
}
