#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns value of x raised to power of y
 * @x: base number
 * @y: exponent
 *
 * Return: value of x to power of y, -1 if false
 */

int _pow_recursion(int x, int y)
{
	int number = x;

		if (y < 0)
		{
			return (-1);
		}
		if (y == 0)
		{
			return (1);
		}
		--y;
		return (number = number * _pow_recursion(x, y));
}

