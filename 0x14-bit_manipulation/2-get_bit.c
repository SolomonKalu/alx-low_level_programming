#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: index number
 * @index: is the index, starting from 0 of the bit
 *
 * Return: value of the bit at index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index == sizeof(n) * 8 || index > sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
