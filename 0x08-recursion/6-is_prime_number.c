#include "main.h"

/**
 * for_prime - to check if the number is prime
 * @num: number to use
 * @idiv: iterating divisor
 *
 * Return: if prime 1, if not 0
 */

int for_prime(int num, int idiv)
{
	if (idiv >= num / 2)
	{
		return (1);
	}
	if (num % idiv == 0)
	{
		return (0);
	}
	return (for_prime(num, idiv + 1));
}

/**
 * is_prime_number - a function that determines prime numbers
 * @n: number to use
 *
 * Return: if prime 1, if not 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	return (for_prime(n, 2));
}
