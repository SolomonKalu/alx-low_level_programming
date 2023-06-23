#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - addition of two integers
 * @a: int first
 * @b: int second
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two integers
 * @a: int first
 * @b: int second
 *
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mulplies two integers
 * @a: int first
 * @b: int second
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: int first
 * @b: int second
 *
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo two integers
 * @a: int first
 * @b: int second
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
