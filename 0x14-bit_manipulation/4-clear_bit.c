#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number of index
 * @index: is the index, starting from 0 of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurrs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index == sizeof(n) * 8 || index > sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
