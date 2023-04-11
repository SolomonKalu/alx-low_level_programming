#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: initial number
 * @m: another number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bn;

	for (bn = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bn++;
	}

	return (bn);
}
