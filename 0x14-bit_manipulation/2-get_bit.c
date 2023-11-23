#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value
 * @index: is the index, starting from 0.
 *
 * Return: value of bit at index, minus 1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
