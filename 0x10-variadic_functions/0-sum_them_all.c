#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - func that returns sum of parameters
 * @...: sum of int
 * @n: arg number
 *
 * Return: sum of integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list sp;
	unsigned int i;
	int value;

	if (n == 0)
	{
		return (0);
	}
	va_start(sp, n);
	for (i = 0; i < n; ++i)
	{
		value = va_arg(sp, int);
		sum += value;
	}
	va_end(sp);

	return (sum);
}
