#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: value
 * @index: index
 *
 * Return: 1 if successful, -1 if failed.
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
