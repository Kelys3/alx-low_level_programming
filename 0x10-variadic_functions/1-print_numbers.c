#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int j;

	va_start(num, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(num, int));

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(num);

	printf("\n");
}
