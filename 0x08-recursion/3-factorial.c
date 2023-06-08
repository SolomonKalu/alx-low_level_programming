#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a number
 * @n: number
 *
 * Return: factorial of n, -1 if false
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
