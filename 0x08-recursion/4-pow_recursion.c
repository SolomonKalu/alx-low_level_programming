#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns value of x raised to power y
 * @x: base number
 * @y: exponent
 *
 * Return: value of x to power of y
 */

int _pow_recursion(int x, int y)
{
	int number = x;

		if (y < 0)
			return (-1);
		else if (y == 0)
			return (1);
	--y;

	return (number = number * _pow_recursion(x, y));
}

