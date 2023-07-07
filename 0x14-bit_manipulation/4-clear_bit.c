#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value
 * @index: is the index, starting from 0 of the bit
 *
 * Return: 1 if worked, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	m = 1UL << index;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	if ((*n & m) != 0)
		*n ^= m;

	return (1);
}
