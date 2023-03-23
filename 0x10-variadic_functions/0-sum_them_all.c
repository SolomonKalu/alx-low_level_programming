#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: number of arguments
 * @...: integers to sum
 *
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n;
	int s = 0;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
