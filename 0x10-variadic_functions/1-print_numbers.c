#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: placeholder for the string
 * @n: number of integers to print
 * Return:0 Ways
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);

		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
