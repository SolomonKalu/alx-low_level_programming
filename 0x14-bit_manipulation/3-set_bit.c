#include "main.h"

/**
 * set_bit - set the value of bit to 1.
 * @n: value
 * @index: the index
 *
 * Return: 1 of worked, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (*n >> index & 1);
}
