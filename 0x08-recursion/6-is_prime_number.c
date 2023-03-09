#include "main.h"
#include <stddef.h>

/**
 * do_is_prime_number - recursively determine if n > 2 is prime
 * @n: number to determine primality
 * @m: recursive iterator searching for success value
 *
 * Return: 1 if prime, 0 if composite
 */
int do_is_prime_number(int n, int m)
{
	if (m >= n / 2)
		return (1);
	if (n % m)
		return (do_is_prime_number(n, m + 2));
	return (0);
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number to check
 *
 * Return: 1 is prime, 0 if composite
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || !(n % 2))
		return (0);
	return (do_is_prime_number(n, 3));
}
