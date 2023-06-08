#include "main.h"
#include <stdio.h>

/**
 * for_sqrt - to find the root of the number
 * @n: number to locate root
 * @r: root
 *
 * Return: the root, if false -1
 */

int for_sqrt(int n, int r)
{
	if ((r * r) == n)
	{
		return (r);
	}
	if (r * r > n)
	{
		return (-1);
	}
	return (for_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to return root
 *
 * Return: if natural root return 1, if not return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (for_sqrt(n, 0));
}
