#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: value one
 * @m: value two
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d = 0;
	unsigned long int m2;

	m2 = 1UL << (sizeof(n) * 8 - 1);

	while (m2 != 0)
	{
		if ((n & m2) != (m & m2))
			++d;
		m2 >>= 1;
	}
	return (d);
}
