#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: value
 * @index: is the index
 *
 * Return: 1 if it worked, or -1 if error
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
