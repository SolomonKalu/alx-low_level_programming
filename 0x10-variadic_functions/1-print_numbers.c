#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number and new line
 * @separator: string printed btw numbers
 * @n: number of integers
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int nm;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		nm = va_arg(valist, int);
		printf("%i", nm);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
