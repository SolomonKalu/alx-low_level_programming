#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @n: unsigned int
 * @separator: char pointer string to be printed
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int y = n;
	va_list valist;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);
	if (y--)
		printf("%d", va_arg(valist, int));
	while (y-- > 0)
		printf("%s%d", separator, va_arg(valist, int));
	printf("\n");
	va_end(valist);
}
