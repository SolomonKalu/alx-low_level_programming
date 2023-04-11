#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the index number
 * @index: index, starting from 0 of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurrs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index == sizeof(n) * 8 || index > sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
