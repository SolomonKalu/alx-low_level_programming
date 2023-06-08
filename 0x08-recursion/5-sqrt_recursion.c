#include "main.h"
#include <stdio.h>

/**
 * for_sqrt - to find the root of the number
 * @number: number
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
 * @n: number to return
 *
 * return: if natural root return 1 if not return -1
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (for_sqrt(n, r));
}
